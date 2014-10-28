/* Copyright 2014 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "globals.h"
#include "jerry-libc.h"

/**
 * Handle failed assertion
 */
void __noreturn
jerry_assert_fail (const char *assertion __unused, /**< assertion condition string */
                   const char *file __unused, /**< file name */
                   const char *function __unused, /**< function name */
                   const uint32_t line __unused) /** line */
{
  __exit (-ERR_FAILED_INTERNAL_ASSERTION);
} /* jerry_assert_fail */

/**
 * Handle execution of control path that should be unreachable
 */
void __noreturn
jerry_unreachable (const char *comment __unused, /**< comment to unreachable mark if exists,
                                                      NULL - otherwise */
                   const char *file __unused, /**< file name */
                   const char *function __unused, /**< function name */
                   const uint32_t line __unused) /**< line */
{
  __exit (-ERR_FAILED_INTERNAL_ASSERTION);
} /* jerry_unreachable */

/**
 * Handle unimplemented case execution
 */
void __noreturn
jerry_unimplemented (const char *comment __unused, /**< comment to unimplemented mark if exists,
                                                        NULL - otherwise */
                     const char *file __unused, /**< file name */
                     const char *function __unused, /**< function name */
                     const uint32_t line __unused) /**< line */
{
  __exit (-ERR_UNIMPLEMENTED_CASE);
} /* jerry_unimplemented */