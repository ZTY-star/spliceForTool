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
/** \file database/serialization/include/sd_serializerXMLMetadata.h
 *  \brief Declaration of the \b serializerXMLMetadata class.
 */

#ifndef SD_SERIALIZERXMLMETADATA_H
#define SD_SERIALIZERXMLMETADATA_H

#include "sd_serializer.h"
#include "c_base.h"
#include "os_if.h"

#ifdef OSPL_BUILD_CORE
#define OS_API OS_API_EXPORT
#else
#define OS_API OS_API_IMPORT
#endif
/* !!!!!!!!NOTE From here no more includes are allowed!!!!!!! */

OS_API sd_serializer sd_serializerXMLMetadataNew(c_base base) __nonnull_all__ __attribute_warn_unused_result__;

#undef OS_API

#endif /* SD_SERIALIZERXMLMETADATA_H */
