flex -oscanner/lex.cpp scanner/lex.l
bison -o parser/yy_parser.cpp --defines=parser/yy_parser.h parser/yacc.y
