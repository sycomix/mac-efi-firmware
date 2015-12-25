/** @file
  Common integer multiplication worker functions.

  Copyright (c) 2006 - 2010, Intel Corporation. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php.

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
**/

#include <AppleEfi.h>

#include "AppleMathLibInternal.h"

// InternalMathMultU64x64
/** Multiplies a 64-bit unsigned integer by a 64-bit unsigned integer
    and generates a 64-bit unsigned result.

  This function multiplies the 64-bit unsigned value Multiplicand by the 64-bit
  unsigned value Multiplier and generates a 64-bit unsigned result. This 64-
  bit unsigned result is returned.

  @param  Multiplicand  A 64-bit unsigned value.
  @param  Multiplier    A 64-bit unsigned value.

  @return  Multiplicand * Multiplier.
**/
UINT64
EFIAPI
InternalMathMultU64x64 (
  IN UINT64  Multiplicand,
  IN UINT64  Multiplier
  )
{
  return Multiplicand * Multiplier;
}