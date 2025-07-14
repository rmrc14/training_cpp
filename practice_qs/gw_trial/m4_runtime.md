
### 📌 File Descriptions

- **StatementExecutor** – Central dispatcher for all statements after parsing.
- **ExpressionEvaluator** – Evaluates mathematical and logical expressions.
- **SymbolTable** – Manages scalar variables and their types.
- **FlowControl** – Executes control flow statements like `GOTO`, `IF`, `FOR`, etc.
- **FunctionLibrary** – Implements intrinsic functions (`SIN`, `ABS`, `RND`, etc.).
- **SubroutineManager** – Manages `GOSUB`, `RETURN`, and the subroutine call stack.
- **IOHandler** – Handles user and program input/output including `INPUT`, `READ`, and `DATA`.
- **ArrayManager** – Manages array operations like `DIM` and `REDIM`.
- **TypeSystem** – Defines types (`INT`, `FLOAT`, `STRING`) and handles type coercion and conversions.

Runtime/
├── StatementExecutor.h/.cpp <-- Main dispatcher
├── ExpressionEvaluator.h/.cpp <-- Handles math/boolean logic
├── SymbolTable.h/.cpp <-- Variables
├── FlowControl.h/.cpp <-- GOTO, IF, FOR/NEXT, WHILE
├── FunctionLibrary.h/.cpp <-- Built-in functions like SIN, ABS, etc.
├── SubroutineManager.h/.cpp <-- GOSUB, RETURN
├── IOHandler.h/.cpp <-- INPUT, READ, DATA, RESTORE
├── ArrayManager.h/.cpp <-- DIM, REDIM, arrays
└── TypeSystem.h/.cpp <-- Value (INT, FLOAT, STRING, coercion)
