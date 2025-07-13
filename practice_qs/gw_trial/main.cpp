#include "gw_basic/GWBasic64.h"

int main(int argc, char* argv[]) {
    GWBasic64 interpreter;
    if (argc == 2)
        interpreter.loadAndRunFile(argv[1]);
    else
        interpreter.runREPL();  // interactive mode
    return 0;
}
