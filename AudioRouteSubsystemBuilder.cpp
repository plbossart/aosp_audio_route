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

#include <Plugin.h>
#include "LoggingElementBuilderTemplate.h"
#include "AudioRouteSubsystem.hpp"

static const char *const AUDIO_ROUTE_SUBSYSTEM_NAME = "AUDIOROUTE";
extern "C"
{
void PARAMETER_FRAMEWORK_PLUGIN_ENTRYPOINT_V1(CSubsystemLibrary *subsystemLibrary,
                                              core::log::Logger &logger)
{
    subsystemLibrary->addElementBuilder(AUDIO_ROUTE_SUBSYSTEM_NAME,
                                        new TLoggingElementBuilderTemplate<AudioRouteSubsystem>(logger));
}
}
