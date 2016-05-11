#ifndef RCC_IDENTIFIER_INFORMATION_H
#define RCC_IDENTIFIER_INFORMATION_H


#include <string>
using std::string;

/**

  Classe base que representa informações sobre identificadores encontrados em um programa
  durante a fase de parsing. Atributos comuns a qualquer tipo específico de informação
  sobre identificadores incluem o identificador (string) em si, sua respectiva categoria
  e nível de escopo em o mesmo é declarado/utilizado.

*/
class IdentifierInformation {
public:
   IdentifierInformation(string id);

   // Getters/setters.
   string identifier();

   unsigned int scopeLevel() const;
   void scopeLevel(const unsigned int level);
private:
   string _id;
   unsigned int _scopeLevel;
};

#endif
