#include <iostream>
#include "commandlinemanager.h"

// Welcome to your new C++ project!
// At project creation, the BasicToolsLib submodule is not added automatically
// by the wizard. You need to run :
// ./postGenerate.sh
// in the root of the project in order to create it.

using namespace std;

int main(int argc, char* argv[])
{
   CommandLineManager cliManager(argc, argv);
   cliManager.AddParameter("mandatory", "This parameter is mandatory");
   cliManager.AddOptionalParameter("optional", "This parameter is optional");
   cliManager.EnableHelpCommand();

   cout << "Hello World with Dependency!" << endl;
   cliManager.HandleHelpCommand();
   cliManager.HandleUnknownParameters();
   if (!cliManager.HasParameter("mandatory"))
      cout << "You didn't use the mandatory parameter!" << endl;
   if (cliManager.HasParameter("optional"))
      cout << "You used the optional parameter." << endl;

   return 0;
}

