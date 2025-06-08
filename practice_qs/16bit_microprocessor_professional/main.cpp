#include "Emulator.h"
#include <iostream>

int main() {
    Emulator emu;
    try {
        emu.loadProgram("instructions.txt");
        emu.run();
    }
    catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << "\n";
        return 1;
    }
    return 0;
}
