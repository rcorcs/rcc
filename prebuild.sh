flex -osrc/scanner/lex.cpp src/scanner/lexc11.l
bison -d -o src/parser/yy_parser.cpp --defines=src/parser/yy_parser.h src/parser/yaccc11.y
