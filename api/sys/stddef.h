// This file is a part of the IncludeOS unikernel - www.includeos.org
//
// Copyright 2016 Oslo and Akershus University College of Applied Sciences
// and Alfred Bratterud
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SYS_STDDEF_H
#define SYS_STDDEF_H

//#if defined(__need_ptrdiff_t) || defined(__need_size_t) || defined(__need_wchar_t) || defined(__need_NULL) || defined(__need_wint_t)

typedef __PTRDIFF_TYPE__ ptrdiff_t;
typedef __SIZE_TYPE__ size_t;

//typedef __WCHAR_TYPE__ wchar_t; // someone else is doing this..
typedef __WINT_TYPE__ wint_t;

#define NULL  0

#define offsetof(type, member)    ((size_t) &((type*)0)->member)

#endif
