/*
**
** Copyright (c) 2017, Intel Corporation
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#pragma once

/**
 * Mapping item types (the order needs to be the same as the provision of the keys in the subsystem constructor)
 */
enum AudioRouteItemType
{
    MappingKeyName,
    MappingKeyCard,
    MappingKeyXmlPath,
    MappingKeyDebugEnable,
    MappingKeyAmend1,
    MappingKeyAmend2,
    MappingKeyAmend3
};

static const uint8_t MappingKeyAmendEnd = MappingKeyAmend3;
