#include "GWBasic64.h"
#include "ProgramInterface/CommandLineEditor.h"
#include "Storage/ProgramMemory.h"
#include "Lexer/Lexer.h"
#include "Parser/Parser.h"
#include "Runtime/StatementExecutor.h"

void GWBasic64::loadAndRunFile(const std::string& path) {
    // stub: file loading
    std::cout << "Loading file: " << path << "\n";
}

void GWBasic64::runREPL() {
    std::cout << "GW-BASIC 64 REPL (stub)\n> ";
}
