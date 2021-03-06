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
 */
#ifndef DDS_TOPIC_DETAIL_QUERY_HPP_
#define DDS_TOPIC_DETAIL_QUERY_HPP_

#include <dds/topic/detail/TFilterImpl.hpp>
#include <org/opensplice/topic/FilterDelegate.hpp>

/**
 * @cond
 * Ignore this file in the API
 */

namespace dds {
namespace topic {
namespace detail {
typedef ::dds::topic::TFilter< ::org::opensplice::topic::FilterDelegate > Filter;
}
}
}

/** @endcond */

#endif /* DDS_TOPIC_DETAIL_QUERY_HPP_ */
