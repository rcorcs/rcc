g++ -std=c++11 -o bin/rcc src/*.cpp src/scanner/*.cpp src/parser/*.cpp src/scanner/preprocessor/*.cpp src/datatypes/*.cpp src/idinfos/*.cpp src/ast/*.cpp src/ast/expression/*.cpp src/ast/statement/*.cpp src/ast/declaration/*.cpp src/ast/type/*.cpp src/symtab/*.cpp src/cgen/*.cpp -lfl
chmod 700 bin/rcc
