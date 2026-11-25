# Compiler Design Lab Assignments

C implementations for core **Compiler Design** lab exercises covering lexical analysis, syntax parsing, semantic checks, intermediate code generation, and expression conversion.

## Assignments Overview

| # | Topic | Description |
| :--- | :--- | :--- |
| **1** | Comment Identification | Identify whether a given input line is a single-line (`//`) or multi-line (`/* ... */`) comment |
| **2** | Regular Expression Matching | Recognize strings matching `'a'`, `'a*b+'`, or `'abb'` |
| **3** | Identifier Validation | Check whether a given string is a valid C identifier |
| **4** | Operator Lexical Analyzer | Validate C operators from a standard operator set |
| **5a** | LL(1) Parsing | Implement a table-driven LL(1) parser using a stack for a CFG |
| **5b** | Recursive Descent Parsing | Implement top-down recursive descent parsing for a CFG |
| **6** | LALR Parsing | Implement a shift-reduce LALR parser using action and length tables |
| **7** | Type Checking | Check whether assigned values match declared variable data types |
| **8** | Undeclared Variable Detection | Track declared variables and flag undeclared ones in statements |
| **9** | `break` Outside Loop Detection | Detect `break` statements used outside loop constructs |
| **10** | Parse Tree Construction | Build and print a parse tree for arithmetic expressions |
| **11** | Three-Address Code (TAC) | Generate three-address code (`t1`, `t2`, ...) with operator precedence |
| **12** | Postfix Conversion | Convert infix expressions with parentheses and operators into postfix notation |

## Compilation & Execution

Compile any C file using `gcc` and run the resulting binary:

```bash
gcc ass1.c -o ass1
./ass1
