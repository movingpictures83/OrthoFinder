#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "OrthoFinderPlugin.h"

void OrthoFinderPlugin::input(std::string file) {
 inputfile = file;
}

void OrthoFinderPlugin::run() {}

void OrthoFinderPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "orthofinder";
myCommand += " -f ";
myCommand += inputfile + " -o ";
myCommand += outputfile;
 system(myCommand.c_str());
}

PluginProxy<OrthoFinderPlugin> OrthoFinderPluginProxy = PluginProxy<OrthoFinderPlugin>("OrthoFinder", PluginManager::getInstance());
