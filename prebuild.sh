flex -osrc/scanner/lex.cpp src/scanner/lex.l
bison -o src/parser/yy_parser.cpp --defines=src/parser/yy_parser.h src/parser/yacc.y
