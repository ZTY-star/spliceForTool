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


/**
 * @file
 */

#ifndef ORG_OPENSPLICE_CORE_MUTEX_HPP_
#define ORG_OPENSPLICE_CORE_MUTEX_HPP_

#include <os_mutex.h>
#include <dds/core/macros.hpp>

namespace org
{
namespace opensplice
{
namespace core
{

class OMG_DDS_API Mutex
{
public:
    Mutex();
    virtual ~Mutex();

    void lock() const;
    bool try_lock() const;
    void unlock() const;
private:
    os_mutex mtx;
};

}
}
}



#endif /* ORG_OPENSPLICE_CORE_MUTEX_HPP_ */
