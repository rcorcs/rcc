#include "test/includetest.h"
#include "test/fileincl.h"

#define BLA 5

#define _BLA_2_  x = 2; \
   x += BLA; \
   x += 3
  
//#define _RUIMDOWS

#define FUNC( X, Y, Z ) X = Y + Z

#define _A_ 5
#define FUNCB( _A_ ) ( (_A_) + 7 )
#define FUNCA( _A_ ) (_A_) + FUNCB( (_A_) + 1 )

#ifdef _RUIMDOWS
#error "Warning: Your Operating System is a wasting!"
#endif

/* it's the main function */
void main()
{
   char c = 'a';
   char *str = "blabla";
   int x = 0;
   int a, b;
   a = b = 2;
   x = a + b;
   _BLA_2_;
#ifdef _RUIMDOWS
   x = 9;
   a = b;
   b = a+5;
   c = 'w';
   str = "RUIMDOWS";
#else
   c = 'l';
   str = "LINUX";
#endif
   FUNC( a, (x = 5, ((b + 5) + x) ) , x*x );

   printf("%d\n", _A_);
   printf("%d\n", FUNCB(2));
   printf("%d\n", FUNCA(2));

}



int func()
<%
   int a = 5;
   float a = 3.1415;
   return 5;
%>

