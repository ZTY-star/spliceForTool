/*
 *                         Vortex OpenSplice
 *
 *   This software and documentation are Copyright 2006 to  ADLINK
 *   Technology Limited, its affiliated companies and licensors. All rights
 *   reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */

#ifndef OS_POSIX_COND_H
#define OS_POSIX_COND_H

#if defined (__cplusplus)
extern "C" {
#endif

#include <unistd.h>
#include <pthread.h>

#ifdef OSPL_STRICT_MEM
   typedef struct os_os_cond {
      uint64_t signature; /* Used to identify initialized cond when memory is
                             freed - keep this first in the structure so its
                             so its address is the same as the os_cond */
      pthread_cond_t cond;
#if defined(_POSIX_CLOCK_SELECTION)
      clockid_t clockId;
#endif
   } os_os_cond;
#else
   typedef pthread_cond_t os_os_cond;
#endif


#if defined (__cplusplus)
}
#endif

#endif /* OS_POSIX_COND_H */
