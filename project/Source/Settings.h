/*
    Settings.h - This file is part of Element
    Copyright (C) 2014  Kushview, LLC.  All rights reserved.
*/

#pragma once

#include "ElementApp.h"

namespace Element {

class Settings :  public ApplicationProperties
{
public:
    Settings();
    ~Settings();
    
    static const char* checkForUpdatesKey;
    static const char* pluginListKey;
    static const char* pluginListKey64;
    static const char* pluginFormatsKey;
    static const char* lastPluginScanPathPrefix;
    static const char* scanForPluginsOnStartKey;
    
    XmlElement* getLastGraph() const;
    void setLastGraph (const ValueTree& data);
    
    /** Returns true if updates shoul be checked for on launch */
    bool checkForUpdates() const;
    
    /** Set if should check updates on start */
    void setCheckFormUpdates (const bool shouldCheck);
    
    /** Returns true if plugins should be scanned on startup */
    bool scanForPluginsOnStartup() const;
    
    /** Set if plugins should be scanned during startup */
    void setScanForPluginsOnStartup (const bool shouldScan);
    
private:
    PropertiesFile* getProps() const;
};

}
