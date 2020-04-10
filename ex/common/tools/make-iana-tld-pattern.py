#!/usr/bin/env python

from urllib2 import urlopen

TLD_PREFIX = r"""
    /**
     *  Regular expression to match all IANA top-level domains.
     *  List accurate as of 2011/07/18.  List taken from:
     *  http://data.iana.org/TLD/tlds-alpha-by-domain.txt
     *  This pattern is auto-generated by frameworks/ex/common/tools/make-iana-tld-pattern.py
     */
    public static final String TOP_LEVEL_DOMAIN_STR =
"""
TLD_SUFFIX = '";'

URL_PREFIX = r"""
    /**
     *  Regular expression to match all IANA top-level domains for WEB_URL.
     *  List accurate as of 2011/07/18.  List taken from:
     *  http://data.iana.org/TLD/tlds-alpha-by-domain.txt
     *  This pattern is auto-generated by frameworks/ex/common/tools/make-iana-tld-pattern.py
     */
    public static final String TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL =
        "(?:"
"""

URL_SUFFIX = ';'
TAB = '        '

class BucketOutput:
    def __init__(self):
        self.buffer = TAB
        self.lineLength = len(TAB)

    def __iadd__(self, other):
        self.buffer += other
        self.lineLength += len(other)
        return self

    def addPipe(self):
        if self.lineLength > 90:
            self.buffer += '"\n'
            self.buffer += TAB
            self.buffer += '+ "'
            self.lineLength = len(TAB)

        self += '|'

    def value(self):
        return self.buffer

class Bucket:
    def __init__(self, baseLetter):
        self.base=baseLetter
        self.words=[]
        self.letters=[]

    def dump(self, isWebUrl=False, isFirst=False, isLast=False):
        if (len(self.words) == 0) and (len(self.letters) == 0):
            return ''

        self.words.sort()
        self.letters.sort()

        output = BucketOutput()

        if isFirst:
            if isWebUrl:
                output += '+ "'
            else:
                output += '"('
        else:
            output += '+ "|'

        if len(self.words) != 0:
            output += '('

            if isWebUrl:
                output += '?:'

        firstWord = 1
        for word in self.words:
            if firstWord == 0:
                output.addPipe()
            firstWord = 0
            for letter in word:
                if letter == '-':
                    output += '\\\\'  # escape the '-' character.
                output += letter

        if len(self.words) > 0 and len(self.letters) > 0:
            output.addPipe()

        if len(self.letters) == 1:
            output += '%c%c' % (self.base, self.letters[0])
        elif len(self.letters) > 0:
            output += '%c[' % self.base

            for letter in self.letters:
                output += letter

            output += ']'

        if len(self.words) != 0:
            output += ')'

        if not isLast:
            output += '"'
            output += '\n'

        return output.value();

    def add(self, line):
        length = len(line)

        if line.startswith('#') or (length == 0):
            return;

        if length == 2:
            self.letters.append(line[1:2])
        else:
            self.words.append(line)

def getBucket(buckets, line):
    letter = line[0]
    bucket = buckets.get(letter)

    if bucket is None:
        bucket = Bucket(letter)
        buckets[letter] = bucket

    return bucket

def makePattern(prefix, suffix, buckets, isWebUrl=False):
    output = prefix

    output += getBucket(buckets, 'a').dump(isFirst=True, isWebUrl=isWebUrl)

    for letter in range(ord('b'), ord('z')):
        output += getBucket(buckets, chr(letter)).dump(isWebUrl=isWebUrl)

    output += getBucket(buckets, 'z').dump(isLast=True, isWebUrl=isWebUrl)

    if isWebUrl:
        output += '))"'
    else:
        output += ')'

    output += suffix

    print output

if __name__ == "__main__":
    f = urlopen('http://data.iana.org/TLD/tlds-alpha-by-domain.txt')
    domains = f.readlines()
    f.close()

    buckets = {}

    for domain in domains:
        domain = domain.lower()

        if len(domain) > 0:
            getBucket(buckets, domain[0]).add(domain.strip())

        if domain.startswith('xn--'):
	   puny = domain.strip()[4:]
	   result = puny.decode('punycode')
	   result = repr(result)
           getBucket(buckets, 'xn--').add(result[2:-1])

    makePattern(TLD_PREFIX, TLD_SUFFIX, buckets, isWebUrl=False)
    makePattern(URL_PREFIX, URL_SUFFIX, buckets, isWebUrl=True)
