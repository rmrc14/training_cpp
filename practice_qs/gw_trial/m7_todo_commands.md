## ✅ 1. Program Structure Commands (Essential)
Command	Purpose	Status
<pre>
RUN	Executes the program	✅ Essential
LIST	Lists current program lines	✅ Essential
NEW	Clears program memory	✅ Essential
LOAD	Loads program from file	✅ Essential
SAVE	Saves program to file	✅ Essential
CHAIN	Runs another program (external)	⭕ Optional
END	Ends execution	✅ Essential
REM	Comment line	✅ Essential
CLS	Clears screen	✅ Essential</pre>

## ✅ 2. Control Flow Statements
Command	Purpose	Status
<pre>
GOTO	Jump to a line number	✅ Essential
GOSUB	Call subroutine	✅ Essential
RETURN	Return from subroutine	✅ Essential
IF...THEN	Conditional logic	✅ Essential
FOR...TO...STEP...NEXT	Looping construct	✅ Essential
WHILE...WEND	Loop (optional in GW-BASIC)	⭕ Optional
ON...GOTO	Computed GOTO	⭕ Optional
ON...GOSUB	Computed GOSUB	⭕ Optional
STOP	Stop execution	⭕ Optional</pre>

## ✅ 3. I/O Commands
Command	Purpose	Status,
<pre>
PRINT	Display output	✅ Essential
INPUT	Get input from user	✅ Essential
LINE INPUT	Read a full line	⭕ Optional
LPRINT	Print to printer (skip for now)	❌ Skip
INKEY$	Read single key (non-blocking)	⭕ Optional
READ, DATA, RESTORE	Inline data	⭕ Optional</pre>

## ✅ 4. Variable & Expression Support
Feature	Description	Status
<pre>
Integer, Float, String	Variable types	✅ Essential
LET	Optional variable assign keyword	✅ Supported
=	Assignment	✅ Essential
+ - * / ^	Math operators	✅ Essential
MOD	Modulo	✅ Essential
AND OR NOT	Boolean logic	✅ Essential
< <= > >= = <>	Comparisons	✅ Essential</pre>

## ✅ 5. Built-in Functions (Start with a small subset)
Function	Purpose	Status
<pre>
ABS(x)	Absolute value	✅ Essential
SIN(x), COS(x), TAN(x)	Trig functions	⭕ Optional
INT(x)	Integer part	✅ Essential
RND, RANDOMIZE	Random numbers	⭕ Optional
LEN(s)	String length	✅ Essential
LEFT$, RIGHT$, MID$	String manipulation	⭕ Optional
ASC, CHR$	Char conversion	✅ Essential</pre>

## ✅ 6. Storage & File I/O (Optional for later)
Command	Purpose	Status
<pre>
OPEN, CLOSE, INPUT#, PRINT#	File I/O	⭕ Later
GET, PUT	Binary file access	❌ Rarely used
FILES	List files	⭕ If supported by FS</pre>

## ✅ 7. Error Handling & Debugging
Command	Purpose	Status
<pre>
ERROR	Trigger error	⭕ Optional
RESUME	Resume after error	❌ Rarely used
ON ERROR GOTO	Error trap	⭕ Optional
TRACE, UNTRACE	Debug trace	❌ Optional for later</pre>

## 🧠 Special Considerations
Feature	Description
<pre>
Line numbers	Mandatory for stored programs
Immediate mode	User types commands without line numbers
Indirect mode	Program listing stored with line numbers
REPL	> prompt for command-line editing
Expression Parser	Required for assignment, print, etc.</pre>

## 🎯 Suggested Roadmap
Phase	Focus Areas
<pre>
Phase 1	PRINT, INPUT, LET, IF, GOTO, RUN, END, REM
Phase 2	FOR/NEXT, GOSUB/RETURN, math ops
Phase 3	Functions like ABS, INT, RND, etc.
Phase 4	String operations, file I/O, DATA/READ
Phase 5	ON...GOTO, error handling, trace/debug</pre>
