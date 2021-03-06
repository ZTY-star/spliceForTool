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
#ifndef OSPL_DDS_SUB_STATUS_DATASTATE_IMPL_HPP_
#define OSPL_DDS_SUB_STATUS_DATASTATE_IMPL_HPP_

/**
 * @file
 */

#include <dds/sub/status/DataState.hpp>

/*
 * OMG PSM class declaration
 */

// Implementation

namespace dds
{
namespace sub
{
namespace status
{


inline const SampleState SampleState::read()
{
    return SampleState(0x0001 << 0u);
}

inline const SampleState SampleState::not_read()
{
    return SampleState(0x0001 << 1u);
}

inline const SampleState SampleState::any()
{
    return SampleState(0xffff);
}

inline const ViewState ViewState::new_view()
{
    return ViewState(0x0001 << 0u);
}

inline const ViewState ViewState::not_new_view()
{
    return ViewState(0x0001 << 1u);
}

inline const ViewState ViewState::any()
{
    return ViewState(0xffff);
}

inline const InstanceState InstanceState::alive()
{
    return InstanceState(0x0001 << 0u);
}

inline const InstanceState InstanceState::not_alive_disposed()
{
    return InstanceState(0x0001 << 1u);
}

inline const InstanceState InstanceState::not_alive_no_writers()
{
    return InstanceState(0x0001 << 2u);
}

inline const InstanceState InstanceState::not_alive_mask()
{
    return not_alive_disposed() | not_alive_no_writers();
}

inline const InstanceState InstanceState::any()
{
    return InstanceState(0xffff);
}


} /* namespace status */
} /* namespace sub */
} /* namespace dds */

// End of implementation

#endif /* OSPL_DDS_SUB_STATUS_DATASTATE_IMPL_HPP_ */
