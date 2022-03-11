/*
 * Copyright (C) 2021 The LineageOS Project
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

#ifndef TOUCH_ONEPLUS_TOUCHSCREENGESTURECONFIG_H
#define TOUCH_ONEPLUS_TOUCHSCREENGESTURECONFIG_H

#include <map>

#include "TouchscreenGesture.h"

namespace vendor {
namespace lineage {
namespace touch {
namespace V1_0 {
namespace implementation {

const std::map<int32_t, TouchscreenGesture::GestureInfo> kGestureInfoMap = {
    {0, {251, "Swipe down with two fingers", "/proc/touchpanel/double_swipe_enable"}},
    {1, {252, "Up arrow", "/proc/touchpanel/up_arrow_enable"}},
    {2, {253, "Left arrow", "/proc/touchpanel/left_arrow_enable"}},
    {3, {254, "Right arrow", "/proc/touchpanel/right_arrow_enable"}},
    {4, {255, "Down arrow", "/proc/touchpanel/down_arrow_enable"}},
    {5, {247, "Letter M", "/proc/touchpanel/letter_m_enable"}},
    {6, {250, "Letter O", "/proc/touchpanel/letter_o_enable"}},
    {7, {248, "Letter S", "/proc/touchpanel/letter_s_enable"}},
    {8, {246, "Letter W", "/proc/touchpanel/letter_w_enable"}},
    {9, {67, "Single Tap", "/proc/touchpanel/single_tap_enable"}},
    {10, {66, "Swipe up with one finger", "/proc/touchpanel/up_swipe_enable"}},
    {11, {63, "Swipe left with one finger", "/proc/touchpanel/left_swipe_enable"}},
    {12, {65, "Swipe right with one finger", "/proc/touchpanel/right_swipe_enable"}},
    {13, {64, "Swipe down with one finger", "/proc/touchpanel/down_swipe_enable"}},
};

}  // namespace implementation
}  // namespace V1_0
}  // namespace touch
}  // namespace lineage
}  // namespace vendor

#endif  // TOUCH_ONEPLUS_TOUCHSCREENGESTURECONFIG_H
