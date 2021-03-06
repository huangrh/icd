// Copyright (C) 2014 - 2017  Jack O. Wasey
//
// This file is part of icd.
//
// icd is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// icd is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with icd. If not, see <http://www.gnu.org/licenses/>.

#ifndef RANGES_H_
#define RANGES_H_
#include "icd_types.h"
#include <Rcpp.h>

// define end() to get end index of a C array
template<typename T, size_t N>
T * end(T (&ra)[N]) {
  return ra + N;
}

VecStr icd9ExpandMinorStd(const Str& mnr, bool isE);
CV icd9ChildrenShort(CV icd9Short, bool onlyReal = true);
CV icd9ChildrenDecimalCpp(CV icd9Decimal, bool onlyReal = true);
CV icd9ExpandMinor(const Str& mnr, bool isE = false);
#endif /* RANGES_H_ */
