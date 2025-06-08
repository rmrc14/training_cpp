#include "emulation16bit.h"

int main() {
    Emulator16Bit emulator;
    emulator.execute("instructions.txt");
    return 0;
}
