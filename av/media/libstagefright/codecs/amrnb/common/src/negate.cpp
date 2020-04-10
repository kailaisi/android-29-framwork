/* ------------------------------------------------------------------
 * Copyright (C) 1998-2009 PacketVideo
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 * -------------------------------------------------------------------
 */
/****************************************************************************************
Portions of this file are derived from the following 3GPP standard:

    3GPP TS 26.073
    ANSI-C code for the Adaptive Multi-Rate (AMR) speech codec
    Available from http://www.3gpp.org

(C) 2004, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TTA, TTC)
Permission to distribute, modify and use this file under the standard license
terms listed above has been obtained from the copyright holder.
****************************************************************************************/
/*

 Pathname: ./gsm-amr/c/src/negate.c

------------------------------------------------------------------------------
 REVISION HISTORY

 Description: Created separate file for the negate function. Sync'ed up with
          the current template and fixed tabs.

 Description: Removed conditional code that updates WMOPS counter

 Who:                       Date:
 Description:

------------------------------------------------------------------------------
 INPUT AND OUTPUT DEFINITIONS

 Inputs:
    var1 = 16 bit short signed integer (Word16) whose value falls in
           the range : 0xffff 8000 <= var1 <= 0x0000 7fff.

 Local Stores/Buffers/Pointers Needed:
    None

 Global Stores/Buffers/Pointers Needed:
    None

 Outputs:
    var1 = negated value of input (Word16)

 Pointers and Buffers Modified:
    None

 Local Stores Modified:
    None

 Global Stores Modified:
    None

------------------------------------------------------------------------------
 FUNCTION DESCRIPTION

 This function negates var1 with saturation; saturate in the case where input
 is -32768: negate(var1) = sub(0,var1).

------------------------------------------------------------------------------
 REQUIREMENTS

 None

------------------------------------------------------------------------------
 REFERENCES

 [1] basicop2.c, ETS Version 2.0.0, February 8, 1999

------------------------------------------------------------------------------
 PSEUDO-CODE

Word16 negate (Word16 var1)
{
    Word16 var_out;

    var_out = (var1 == MIN_16) ? MAX_16 : -var1;
#if (WMOPS)
    multiCounter[currCounter].negate++;
#endif
    return (var_out);
}

------------------------------------------------------------------------------
 RESOURCES USED
   When the code is written for a specific target processor the
     the resources used should be documented below.

 STACK USAGE: [stack count for this module] + [variable to represent
          stack usage for each subroutine called]

     where: [stack usage variable] = stack usage for [subroutine
         name] (see [filename].ext)

 DATA MEMORY USED: x words

 PROGRAM MEMORY USED: x words

 CLOCK CYCLES: [cycle count equation for this module] + [variable
           used to represent cycle count for each subroutine
           called]

     where: [cycle count variable] = cycle count for [subroutine
        name] (see [filename].ext)

------------------------------------------------------------------------------
*/


/*----------------------------------------------------------------------------
; INCLUDES
----------------------------------------------------------------------------*/
#include    "negate.h"

/*----------------------------------------------------------------------------
; MACROS
; Define module specific macros here
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; DEFINES
; Include all pre-processor statements here. Include conditional
; compile variables also.
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; LOCAL FUNCTION DEFINITIONS
; Function Prototype declaration
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; LOCAL STORE/BUFFER/POINTER DEFINITIONS
; Variable declaration - defined here and used outside this module
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; EXTERNAL FUNCTION REFERENCES
; Declare functions defined elsewhere and referenced in this module
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; EXTERNAL GLOBAL STORE/BUFFER/POINTER REFERENCES
; Declare variables used in this module but defined elsewhere
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; FUNCTION CODE
----------------------------------------------------------------------------*/
Word16 negate(Word16 var1)
{
    /*----------------------------------------------------------------------------
    ; Define all local variables
    ----------------------------------------------------------------------------*/

    /*----------------------------------------------------------------------------
    ; Function body here
    ----------------------------------------------------------------------------*/
    var1 = (var1 == MIN_16) ? MAX_16 : -var1;

    /*----------------------------------------------------------------------------
    ; Return nothing or data or data pointer
    ----------------------------------------------------------------------------*/
    return (var1);
}
