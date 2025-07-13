cmake_minimum_required(VERSION 3.10)
project(GWBasic64)

set(CMAKE_CXX_STANDARD 17)

add_executable(gw_trial
    main.cpp
    gw_basic/GWBasic64.cpp
    gw_basic/Lexer/Lexer.cpp
    gw_basic/Parser/Parser.cpp
    gw_basic/Runtime/StatementExecutor.cpp
    gw_basic/Storage/ProgramMemory.cpp
    gw_basic/ProgramInterface/CommandLineEditor.cpp
    gw_basic/Errors/ErrorHandler.cpp
)
