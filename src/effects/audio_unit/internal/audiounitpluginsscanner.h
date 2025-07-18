/*
* Audacity: A Digital Audio Editor
*/
#pragma once

#include "audioplugins/iaudiopluginsscanner.h"

namespace au::effects {
class AudioUnitPluginsScanner : public muse::audioplugins::IAudioPluginsScanner
{
public:
    muse::io::paths_t scanPlugins() const override;
};
}
