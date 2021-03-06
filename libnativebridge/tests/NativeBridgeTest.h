/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef NATIVE_BRIDGE_TEST_H_
#define NATIVE_BRIDGE_TEST_H_

#define LOG_TAG "NativeBridge_test"

#include <nativebridge/native_bridge.h>
#include <gtest/gtest.h>

constexpr const char* kNativeBridgeLibrary = "libnativebridge-dummy.lib.so";
constexpr const char* kCodeCache = "./code_cache";
constexpr const char* kCodeCacheStatFail = "./code_cache/temp";
constexpr const char* kNativeBridgeLibrary2 = "libnativebridge2-dummy.lib.so";
constexpr const char* kNativeBridgeLibrary3 = "libnativebridge3-dummy.lib.so";

namespace android {

class NativeBridgeTest : public testing::Test {
};

};  // namespace android

#endif  // NATIVE_BRIDGE_H_

