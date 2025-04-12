#ifndef OrthoFinderPLUGIN_H
#define OrthoFinderPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class OrthoFinderPlugin : public Plugin
{
public: 
 std::string toString() {return "OrthoFinder";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
