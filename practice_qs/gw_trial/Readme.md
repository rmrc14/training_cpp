gw_basic_64/
├── CMakeLists.txt
├── README.md
├── main.cpp                          ← Entry point (REPL or File mode)
│
├── gw_basic/                         ← Core interpreter modules
│   ├── GWBasic64.h                   ← Main interpreter class
│   ├── GWBasic64.cpp
│
│   ├── ProgramInterface/            ← REPL, screen rendering, input
│   │   ├── CommandLineEditor.h
│   │   ├── CommandLineEditor.cpp
│   │   └── SpecialKeyHandler.h      ← (optional advanced REPL keys)
│
│   ├── Storage/                     ← Stores program lines, line editing
│   │   ├── ProgramMemory.h
│   │   ├── ProgramMemory.cpp
│
│   ├── Lexer/                       ← Tokenizer
│   │   ├── Lexer.h
│   │   ├── Lexer.cpp
│
│   ├── Parser/                      ← AST builder
│   │   ├── Parser.h
│   │   ├── Parser.cpp
│
│   ├── Runtime/                     ← Executor & evaluator
│   │   ├── StatementExecutor.h
│   │   ├── StatementExecutor.cpp
│   │   └── ExpressionEvaluator.h   ← (optional, for parsing math)
│
│   ├── IO/                          ← I/O (optional: file IO, console)
│   │   ├── ConsoleIO.h              ← Abstracts `PRINT`, `INPUT`
│   │   ├── ConsoleIO.cpp
│
│   ├── System/                      ← System functions & utilities
│   │   ├── SystemInterface.h
│   │   ├── SystemInterface.cpp
│   │   ├── MemoryInterface.h        ← Simulate memory (optional)
│   │   └── MemoryInterface.cpp
│
│   ├── Errors/                      ← Error handling
│   │   ├── ErrorHandler.h
│   │   └── ErrorHandler.cpp
│
│   └── Utils/                       ← Common structs & types
│       ├── Token.h                  ← Token structure
│       ├── ASTNode.h                ← AST tree structure
│       └── Types.h                  ← Type system (int, string, etc.)
│
├── tests/                           ← Unit tests
│   ├── CMakeLists.txt
│   ├── test_main.cpp
│   ├── test_lexer.cpp
│   ├── test_parser.cpp
│   └── test_executor.cpp
│
└── examples/                        ← Sample .BAS files to run
    ├── hello.bas
    ├── loop.bas
    └── calculator.bas



    GWBasic64 – 10-Day Development Plan (Team of 6) 📅 Sprint Duration: 10 Days Each member owns one module. Tasks are split by day for efficient progress.

#👤 Member 1: Lexer & Tokenizer 🗓️ Day-wise Tasks markdown Copy Edit

Day 1
Design Token struct (type, value, line info)
Create keyword/operator maps
Define TokenType enum
Day 2
Implement stub of Lexer::tokenize(std::string)
Add logging inside stub to verify flow
Day 3–4
Implement tokenization of keywords, identifiers, numbers, strings
Handle special tokens: REM, string literals, operators like <=, <>
Day 5
Test lexer on sample lines
Handle edge cases like unterminated strings
Day 6–7
Add support for symbol suffixes: $, %, !
Finalize full-line tokenization
Day 8–9
Write unit tests (test_lexer.cpp)
Optimize for speed/memory
Day 10
Bug fixes, peer code review, merge to main
#👤 Member 2: Parser & AST Builder 🗓️ Day-wise Tasks markdown Copy Edit

Day 1
Design ASTNode base struct and node types
Plan parsing rules for LET, PRINT, IF, GOTO
Day 2
Create stub Parser::parse(std::vector<Token>)
Add debug print inside stub
Day 3–4
Implement parser for simple statements: LET, PRINT, INPUT
Day 5
Extend parser for IF...THEN, GOTO, GOSUB, RETURN
Day 6–7
Build expression tree parser (handle precedence)
Day 8–9
Unit tests: test_parser.cpp
AST pretty-printer (for debugging)
Day 10
Bug fixes, integrate with Lexer
#👤 Member 3: Statement Executor & Evaluator 🗓️ Day-wise Tasks markdown

Day 1
Design StatementExecutor, ExpressionEvaluator
Define interface for executing AST nodes
Day 2
Stub execute(ASTNode*) and evaluate(ASTNode*)
Day 3–4
Implement LET, PRINT, INPUT, IF
Day 5
Implement GOTO, GOSUB, RETURN, END
Day 6–7
Add FOR, NEXT, loop variable handling
Day 8–9
Variable types & suffixes support
Connect with SymbolTable
Day 10
Add test cases (test_executor.cpp)
#👤 Member 4: Program Memory & File I/O 🗓️ Day-wise Tasks markdown Copy Edit

Day 1
Design ProgramMemory interface
Define storage map: std::map<int, std::string>
Day 2
Stub insert/delete/load/save APIs
Day 3–4
Implement insertLine(), deleteLine(), getLine()
Day 5
Implement LOAD, SAVE, NEW, LIST
Day 6–7
Add ASCII .BAS file read/write support
Day 8–9
Integration with REPL and RUN logic
Day 10
Write tests and review FileIO
#👤 Member 5: Program Interface & Console I/O (REPL) 🗓️ Day-wise Tasks markdown Copy Edit

Day 1
Design CommandLineEditor, ScreenRenderer, ConsoleIO
Day 2
Stub REPL logic: loop with dummy getline() and print()
Day 3–4
Handle line numbers: store to memory or run immediately
Day 5
Implement key handling (SpecialKeyHandler) for basic CLI editing
Day 6–7
Integrate Lexer and Parser into REPL
Day 8–9
Polish prompt, add error messages from ErrorHandler
Day 10
Test with manual input, .BAS file loading
#👤 Member 6: System Interface, Error Handling & Integration 🗓️ Day-wise Tasks markdown Copy Edit

Day 1
Create SystemInterface, MemoryInterface, ErrorHandler
Day 2
Stub system calls (exit(), sleep(), memory alloc/free)
Day 3–4
Implement ErrorHandler with line info and trace stack
Day 5
Write main.cpp to bootstrap REPL or run .bas file
Day 6–7
Integration: connect Lexer → Parser → Runtime chain
Day 8
Write tests for system and error handling
Day 9
Setup CMake, GTest/CTest test suite
Day 10
Final integration test, run full .BAS programs