CC=g++

all: build

prebuild: build-lex build-yacc

build-lex: src/scanner/lexc11.l
	flex -osrc/scanner/lex.cpp src/scanner/lexc11.l

build-yacc: src/parser/yacc_c11.y
	bison -o src/parser/yy_parser.cpp --defines=src/parser/yy_parser.h src/parser/yacc_c11.y

build: src/parser/yy_parser.cpp src/parser/yy_parser.h src/scanner/lex.cpp
	g++ -o bin/rcc src/*.cpp src/scanner/*.cpp src/parser/*.cpp src/scanner/preprocessor/*.cpp src/types/*.cpp src/ast/*.cpp src/ast/expression/*.cpp src/ast/statement/*.cpp src/ast/declaration/*.cpp src/ast/type/*.cpp src/symtab/*.cpp src/cgen/*.cpp src/typecheck/*.cpp src/llgen/*.cpp `llvm-config --cppflags --ldflags --libs` -lfl -ldl -lpthread -lcurses -std=c++11

clean:
	rm -f src/*~ src/scanner/*~ src/parser/*~ src/scanner/preprocessor/*~ src/types/*~ src/ast/*~ src/ast/expression/*~ src/ast/statement/*~ src/ast/declaration/*~ src/ast/type/*~ src/symtab/*~ src/cgen/*~ src/typecheck/*~
	rm -f bin/rcc
