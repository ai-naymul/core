/*
 *	Loader Library by Parra Studios
 *	A plugin for loading extension code at run-time into a process.
 *
 *	Copyright (C) 2016 - 2022 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
 *
 *	Licensed under the Apache License, Version 2.0 (the "License");
 *	you may not use this file except in compliance with the License.
 *	You may obtain a copy of the License at
 *
 *		http://www.apache.org/licenses/LICENSE-2.0
 *
 *	Unless required by applicable law or agreed to in writing, software
 *	distributed under the License is distributed on an "AS IS" BASIS,
 *	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *	See the License for the specific language governing permissions and
 *	limitations under the License.
 *
 */

#ifndef EXT_LOADER_IMPL_H
#define EXT_LOADER_IMPL_H 1

#include <ext_loader/ext_loader_api.h>

#include <loader/loader_impl_interface.h>

#include <configuration/configuration.h>

#ifdef __cplusplus
extern "C" {
#endif

EXT_LOADER_API loader_impl_data ext_loader_impl_initialize(loader_impl impl, configuration config);

EXT_LOADER_API int ext_loader_impl_execution_path(loader_impl impl, const loader_path path);

EXT_LOADER_API loader_handle ext_loader_impl_load_from_file(loader_impl impl, const loader_path paths[], size_t size);

EXT_LOADER_API loader_handle ext_loader_impl_load_from_memory(loader_impl impl, const loader_name name, const char *buffer, size_t size);

EXT_LOADER_API loader_handle ext_loader_impl_load_from_package(loader_impl impl, const loader_path path);

EXT_LOADER_API int ext_loader_impl_clear(loader_impl impl, loader_handle handle);

EXT_LOADER_API int ext_loader_impl_discover(loader_impl impl, loader_handle handle, context ctx);

EXT_LOADER_API int ext_loader_impl_destroy(loader_impl impl);

#ifdef __cplusplus
}
#endif

#endif /* EXT_LOADER_IMPL_H */