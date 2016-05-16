/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 6 "src/parser/yacc_c11.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>

#include "../ast/ast.h"
#include "../symtab/symbol_table.h"

// Analisador léxico que será chamado pelo Parser.
int yylex();

// Contagem e saída de erros.
void yyerror(const char *);
 
extern SymbolTable symbolTable;
Node *astRoot = NULL;

#line 83 "src/parser/yy_parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yy_parser.h".  */
#ifndef YY_YY_SRC_PARSER_YY_PARSER_H_INCLUDED
# define YY_YY_SRC_PARSER_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 2 "src/parser/yacc_c11.y" /* yacc.c:355  */

#include "../ast/ast.h"

#line 117 "src/parser/yy_parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    I_CONSTANT = 259,
    F_CONSTANT = 260,
    STRING_LITERAL = 261,
    FUNC_NAME = 262,
    SIZEOF = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPEDEF_NAME = 285,
    ENUMERATION_CONSTANT = 286,
    TYPEDEF = 287,
    EXTERN = 288,
    STATIC = 289,
    AUTO = 290,
    REGISTER = 291,
    INLINE = 292,
    CONST = 293,
    RESTRICT = 294,
    VOLATILE = 295,
    BOOL = 296,
    CHAR = 297,
    SHORT = 298,
    INT = 299,
    LONG = 300,
    SIGNED = 301,
    UNSIGNED = 302,
    FLOAT = 303,
    DOUBLE = 304,
    VOID = 305,
    COMPLEX = 306,
    IMAGINARY = 307,
    STRUCT = 308,
    UNION = 309,
    ENUM = 310,
    ELLIPSIS = 311,
    CASE = 312,
    DEFAULT = 313,
    IF = 314,
    ELSE = 315,
    SWITCH = 316,
    WHILE = 317,
    DO = 318,
    FOR = 319,
    GOTO = 320,
    CONTINUE = 321,
    BREAK = 322,
    RETURN = 323,
    ALIGNAS = 324,
    ALIGNOF = 325,
    ATOMIC = 326,
    GENERIC = 327,
    NORETURN = 328,
    STATIC_ASSERT = 329,
    THREAD_LOCAL = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 23 "src/parser/yacc_c11.y" /* yacc.c:355  */

    //bool    bool_value;
    //int     int_value;
    //long    long_value;
    //float   float_value;
    //double  double_value;
    //char *  str_value;
    //char *  identifier;
    char *  lexeme;

    TypeNode *type;
    ExpressionNode *expression;
    StatementNode *statement;
    DeclarationNode *declaration;

#line 221 "src/parser/yy_parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 236 "src/parser/yy_parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  279
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  484

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    92,    85,     2,
      76,    77,    86,    87,    78,    88,    82,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    99,
      93,    98,    94,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    96,    84,    89,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,    97,    98,    99,   100,   104,   107,   110,
     115,   120,   123,   129,   133,   134,   138,   139,   143,   144,
     147,   150,   153,   154,   155,   158,   161,   162,   166,   169,
     182,   183,   186,   189,   192,   193,   194,   198,   199,   200,
     201,   202,   203,   207,   208,   214,   215,   218,   221,   227,
     228,   231,   237,   238,   241,   247,   248,   251,   254,   257,
     263,   264,   267,   273,   274,   280,   281,   287,   288,   294,
     295,   301,   302,   308,   309,   315,   316,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   336,   339,
     346,   350,   353,   355,   360,   363,   366,   369,   372,   375,
     378,   381,   384,   385,   389,   392,   398,   401,   405,   406,
     409,   412,   415,   418,   424,   427,   430,   433,   436,   439,
     442,   445,   448,   451,   454,   457,   460,   461,   462,   463,
     467,   475,   483,   494,   495,   499,   502,   508,   511,   516,
     520,   523,   526,   529,   535,   538,   544,   547,   550,   556,
     557,   558,   559,   560,   564,   565,   569,   570,   574,   578,
     581,   584,   587,   593,   596,   602,   603,   607,   619,   625,
     638,   639,   640,   641,   642,   643,   644,   645,   646,   647,
     648,   651,   654,   658,   661,   664,   667,   673,   676,   683,
     692,   696,   699,   712,   715,   718,   724,   725,   729,   731,
     737,   749,   752,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   782,   783,   784,   788,   789,   790,
     791,   795,   799,   800,   804,   805,   809,   813,   814,   815,
     816,   817,   818,   822,   825,   828,   834,   835,   835,   835,
     839,   842,   856,   859,   863,   864,   870,   873,   876,   882,
     885,   888,   891,   894,   898,   905,   908,   911,   914,   917,
     923,   927,   943,   944,   948,   948,   951,   951,   957,   958
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE",
  "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT",
  "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM",
  "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF",
  "ATOMIC", "GENERIC", "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('",
  "')'", "','", "':'", "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "'='", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "$@1", "$@2", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "$@3", "$@4", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    40,    41,    44,    58,
      91,    93,    46,   123,   125,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    61,    59
};
# endif

#define YYPACT_NINF -326

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-326)))

#define YYTABLE_NINF -277

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2073,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,    51,   -29,   -19,  -326,    17,
    -326,  -326,    30,  2163,  2163,  -326,    53,  -326,  -326,  2163,
    2163,  2163,  -326,  1712,  -326,  -326,   -47,    22,   797,  2235,
    1545,  -326,    98,   159,  -326,   -51,  -326,  1811,    67,    14,
    -326,  -326,     5,   491,  -326,  -326,  -326,  -326,  -326,    22,
    -326,    74,   -50,  -326,  -326,  -326,  -326,  -326,  -326,  1567,
    1589,  1589,  -326,   136,   146,   797,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,   248,  -326,  1545,  -326,
     114,    82,    27,    65,   198,    18,   130,    91,   221,    48,
    -326,   165,  2235,    99,  2235,   173,   179,   182,   185,  -326,
    -326,  -326,   159,    98,  -326,  1303,  -326,    30,   181,  2073,
    1765,   885,    67,   491,  1927,  -326,    92,  -326,   -43,  1545,
      28,  -326,   797,  -326,   797,  -326,  -326,  2235,  1545,   332,
    -326,  -326,   142,   192,   269,  -326,  -326,  1325,  1545,   273,
    -326,  1545,  1545,  1545,  1545,  1545,  1545,  1545,  1545,  1545,
    1545,  1545,  1545,  1545,  1545,  1545,  1545,  1545,  1545,  1545,
    -326,  -326,  1878,   907,    76,  -326,   137,  -326,  -326,  -326,
     272,  -326,  -326,  -326,  -326,   187,  1281,  -326,  -326,   204,
    -326,  -326,   181,  -326,  -326,   110,   213,   216,  -326,   151,
    1149,  -326,   215,   217,   929,  1974,  -326,  -326,  1545,  -326,
     -40,  -326,   238,    47,  -326,  -326,  -326,  -326,   250,   254,
     259,   237,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  1545,  -326,  1545,  1413,  -326,  -326,   169,
    -326,    52,  -326,  -326,  -326,  -326,   114,   114,    82,    82,
      27,    27,    27,    27,    65,    65,   198,    18,   130,    91,
     221,   158,  -326,   263,   264,  1149,  -326,   265,   266,  1017,
     137,  2027,  1039,   268,  1545,   345,  -326,   124,  1303,   113,
    -326,  -326,   429,  -326,  1655,  -326,    75,  -326,  -326,  2119,
    -326,   346,   281,  1149,  -326,  -326,  1545,  -326,   283,   284,
    -326,  -326,    62,  -326,  1545,  -326,   267,   267,  -326,  2201,
    -326,  -326,  1281,  -326,  -326,  1545,  -326,  1545,  -326,  -326,
     285,  1149,  -326,  -326,  1545,  -326,   286,  -326,   291,  1149,
    -326,   288,   289,  1061,   274,   290,  -326,  1171,  -326,  -326,
    -326,  -326,   293,  1545,   295,   299,   300,   301,   617,   303,
     377,   282,   287,   661,  -326,   -36,  -326,  -326,  -326,  -326,
     429,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
     302,   304,  -326,  -326,  -326,  -326,   305,   189,  -326,   308,
     132,  -326,  -326,  -326,   309,   310,  -326,  -326,   314,  1149,
    -326,  -326,  1545,  -326,   315,  -326,  -326,  -326,  -326,  1303,
     617,   318,   617,  1545,  1545,  1545,   327,   564,   319,  -326,
    -326,  -326,    54,  -326,   335,  -326,  -326,  -326,  1545,  -326,
    2201,  1545,  1193,  -326,  -326,  -326,  -326,   317,   339,  -326,
    -326,  -326,   617,  -326,   197,   224,   227,   323,   707,   707,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
     617,   617,   617,  1545,  1435,  1457,   361,  -326,  -326,   230,
     617,   236,   617,   244,   617,   324,  -326,   617,  -326,   617,
    -326,  -326,  -326,  -326
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   129,   108,   109,   110,   112,   113,   163,   159,   160,
     161,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   133,   134,     0,     0,   162,   164,     0,
     111,   273,     0,    95,    97,   127,     0,   128,   126,    99,
     101,   103,    93,     0,   270,   272,   153,     0,     0,     0,
       0,   169,     0,   186,    91,     0,   104,   107,   168,     0,
      94,    96,   132,     0,    98,   100,   102,     1,   271,     0,
      10,   157,     0,   154,     2,     7,     8,    11,    12,     0,
       0,     0,     9,     0,     0,     0,    37,    38,    39,    40,
      41,    42,    18,     3,     4,     6,    30,    43,     0,    45,
      49,    52,    55,    60,    63,    65,    67,    69,    71,    73,
      90,     0,   141,   199,   143,     0,     0,     0,     0,   162,
     187,   185,   184,     0,    92,     0,   278,     0,     0,   274,
       0,     0,   167,     0,     0,   135,     0,   139,     0,     0,
       0,   149,     0,    34,     0,    31,    32,     0,     0,    43,
      75,    88,     0,     0,     0,    24,    25,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   140,     0,     0,   201,   198,   202,   142,   165,   158,
       0,   170,   188,   183,   105,   107,     0,   226,   106,   247,
     277,   279,     0,   196,   181,   195,     0,   190,   191,     0,
       0,   171,    38,     0,     0,     0,   130,   136,     0,   137,
       0,   144,   148,     0,   151,   156,   150,   155,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    77,     0,     5,     0,     0,    23,    20,     0,
      28,     0,    22,    46,    47,    48,    50,    51,    53,    54,
      58,    59,    56,    57,    61,    62,    64,    66,    68,    70,
      72,     0,   220,     0,     0,     0,   204,    38,     0,     0,
     200,     0,     0,     0,     0,     0,   228,     0,     0,     0,
     232,   246,     0,   275,     0,   193,   201,   194,   180,     0,
     182,     0,     0,     0,   172,   179,     0,   178,    38,     0,
     131,   146,     0,   138,     0,   152,    35,     0,    36,     0,
      76,    89,     0,    44,    21,     0,    19,     0,   221,   203,
       0,     0,   205,   211,     0,   210,     0,   222,     0,     0,
     212,    38,     0,     0,     0,     0,   235,     0,   224,   227,
     231,   233,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   254,     0,   252,   253,   237,   238,
     248,   250,   239,   240,   241,   242,   189,   192,   197,   174,
       0,     0,   175,   177,   145,   147,     0,     0,    14,     0,
       0,    29,    74,   207,     0,     0,   209,   223,     0,     0,
     213,   219,     0,   218,     0,   236,   234,   225,   230,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   266,
     267,   268,     0,   255,     0,   251,   173,   176,     0,    13,
       0,     0,     0,    26,   206,   208,   215,     0,     0,   216,
     229,   243,     0,   245,     0,     0,     0,     0,     0,     0,
     265,   269,   249,    17,    15,    16,    27,   214,   217,   244,
       0,     0,     0,     0,     0,     0,   257,   258,   259,     0,
       0,     0,     0,     0,     0,     0,   263,     0,   261,     0,
     256,   260,   264,   262
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -326,  -326,  -326,  -326,  -326,  -326,  -326,    -8,  -326,  -326,
     239,  -326,   -37,   161,   168,   111,   166,   251,   249,   252,
     261,   253,  -326,   -30,   -99,  -326,   -71,   -41,   -54,    12,
    -326,   306,  -326,   -42,  -326,  -326,   294,   -58,     6,  -326,
     129,  -326,   357,   -96,  -326,   -48,  -326,  -326,   -13,   -55,
     -45,  -121,  -117,  -326,   143,  -326,   -25,   -84,  -168,  -123,
     121,  -325,  -326,   155,   -52,  -209,  -326,   -98,  -326,  -326,
    -326,    77,  -267,  -326,  -326,  -326,  -326,   402,  -326,  -326,
    -326,  -326
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    71,    94,    95,   387,   388,    96,   249,
     149,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   150,   151,   243,   365,   111,    31,   127,
      55,    56,    33,    34,    35,    36,   134,   135,   113,   220,
     221,    37,    72,    73,    38,    39,    40,    41,   118,    58,
      59,   122,   273,   207,   208,   209,   389,   274,   186,   286,
     287,   288,   289,   290,    42,   367,   368,   369,   292,   424,
     370,   371,   372,   373,   374,   375,    43,    44,    45,   202,
     128,   129
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     114,   114,   198,   126,   132,   120,   112,   112,   121,   117,
     214,   137,    32,   206,   152,   114,   280,    51,   110,    57,
     110,   112,   409,   115,   116,    70,   197,   123,   140,   185,
     200,    70,   213,    51,   141,   223,    69,   114,   312,   166,
     167,   224,   245,   112,   227,    60,    61,    48,   124,   231,
      70,    64,    65,    66,    46,    32,    62,    49,   250,   313,
     153,   160,   279,   423,   114,    51,   114,   178,   184,   136,
     112,   152,   112,   152,   192,   201,   217,   193,    51,   168,
     169,   137,   137,   120,   278,   114,   114,   251,   133,   303,
      52,   112,   112,    50,   114,    51,   114,   197,   225,   114,
     112,    51,   112,   174,   293,   112,    52,   409,   271,   110,
     195,   302,   226,    51,   195,   309,    53,   228,   181,   229,
     187,   297,   230,   222,   253,   254,   255,   227,   280,    54,
     245,   315,   245,   326,    47,   120,    63,   184,    52,   136,
     136,   218,   205,   130,   320,   179,   321,   131,    53,   416,
     449,   294,   182,   451,   331,   183,   183,   217,   170,   171,
     296,   343,   120,   137,   338,   349,   192,   114,    52,   164,
     165,   218,   139,   112,    52,   182,   330,   311,    53,   183,
     336,   464,   465,   342,    53,    53,   294,   176,   110,   197,
     183,   219,   295,   284,   205,   285,    53,     8,     9,    10,
     161,   441,   347,   443,   380,   162,   163,   381,   348,   323,
     432,   350,   147,   281,   172,   173,   433,   282,   399,   244,
     245,   136,   148,   197,   408,   175,   391,   120,   300,   301,
     119,   192,   394,   459,   120,   395,   245,   327,   366,   177,
     398,   132,   180,   345,   404,    53,   324,   325,   197,   296,
     188,   466,   467,   468,   110,   192,   189,   154,   155,   156,
     190,   476,   191,   478,   199,   480,   429,   430,   482,   246,
     483,   114,   247,   385,   460,   245,   252,   112,   283,   260,
     261,   262,   263,   192,   110,   125,   440,    97,   291,    97,
     298,   120,   422,   205,   299,   192,   304,   392,   305,   222,
     437,   461,   245,   438,   462,   245,   205,   475,   245,   408,
     197,   205,   411,   477,   245,   319,   366,   314,   143,   145,
     146,   479,   245,   110,   157,   256,   257,   316,   158,   453,
     159,   317,   455,   197,   258,   259,   318,    97,   264,   265,
     328,   329,   444,   445,   446,   344,   332,   333,   346,   378,
     322,   192,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   379,   448,   382,   383,   393,   396,   397,   400,
     401,   406,   410,   405,   412,   413,   414,   415,    97,   417,
     418,   419,   114,   426,   428,   427,   420,   431,   112,   447,
     434,   435,   469,   471,   473,   436,   439,   442,   457,   463,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,   450,   452,
     458,   474,   454,   481,   267,   266,   138,   215,   268,   194,
     242,   270,   352,    75,    76,    77,    78,    79,   269,    80,
      81,   384,   377,   390,   351,    68,     0,   425,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     1,
      82,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    97,   353,   354,   355,     0,
     356,   357,   358,   359,   360,   361,   362,   363,    26,    83,
      27,    84,    28,    29,    30,    85,     0,     0,     0,     0,
       0,     0,   199,     0,    86,    87,    88,    89,    90,    91,
       0,     1,     0,    97,     0,     0,     0,     0,   364,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,    29,    97,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     1,    82,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     352,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,    26,    83,    27,    84,    28,    29,    30,
      85,     0,     0,     0,     0,     0,     0,     0,    82,    86,
      87,    88,    89,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,   364,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,   353,   354,   355,     0,   356,   357,
     358,   359,   360,   361,   362,   363,     0,    83,     0,    84,
       0,     0,    82,    85,     0,     0,     0,     0,     0,     0,
     199,     0,    86,    87,    88,    89,    90,    91,     0,     0,
      74,    75,    76,    77,    78,    79,   364,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,    84,     0,     0,     0,    85,    82,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
     421,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,    84,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,     0,     0,
      74,    75,    76,    77,    78,    79,   364,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    82,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    27,    84,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,   210,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    82,    80,
      81,   275,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,    83,   119,    84,     0,     0,
      82,    85,     0,   306,     0,     0,   211,     8,     9,    10,
      86,   212,    88,    89,    90,    91,     0,    83,   119,    84,
       0,     0,     0,    85,     0,     0,     0,     0,   276,     0,
       0,     0,    86,   277,    88,    89,    90,    91,     0,    83,
     119,    84,     0,     0,     0,    85,     0,     0,     0,     0,
     307,     0,     0,     0,    86,   308,    88,    89,    90,    91,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    82,    80,
      81,   334,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,   339,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,    83,   119,    84,
       0,     0,    82,    85,     0,   402,     0,     0,   335,     8,
       9,    10,    86,    87,    88,    89,    90,    91,     0,    83,
     119,    84,     0,     0,     0,    85,     0,     0,     0,     0,
     340,     0,     0,     0,    86,   341,    88,    89,    90,    91,
       0,    83,   119,    84,     0,     0,     0,    85,     0,     0,
       0,     0,   403,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
     119,    84,     0,     0,    82,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,    83,     0,    84,     0,     0,     0,    85,     0,     0,
       0,   284,     0,   285,   196,   407,    86,    87,    88,    89,
      90,    91,     0,    83,     0,    84,     0,     0,     0,    85,
       0,     0,     0,   284,     0,   285,   196,   456,    86,    87,
      88,    89,    90,    91,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,    84,     0,     0,    82,    85,     0,     0,
       0,   284,     0,   285,   196,     0,    86,    87,    88,    89,
      90,    91,     0,    83,     0,    84,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,   196,     0,    86,    87,
      88,    89,    90,    91,     0,    83,     0,    84,     0,     0,
       0,    85,   248,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,    84,     0,     0,    82,    85,
       0,     0,     0,     0,     0,     0,   322,     0,    86,    87,
      88,    89,    90,    91,     0,    83,     0,    84,     0,     0,
       0,    85,   470,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,     0,    83,     0,    84,
       0,     0,     0,    85,   472,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    82,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,     0,     0,
      82,    85,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,     0,    83,     0,    84,
       0,     0,     0,   142,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,    51,    83,
       0,    84,     0,     0,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,   294,   272,     0,     0,   183,     0,     0,     0,     0,
       0,    53,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   203,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,     1,   204,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,  -276,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,   125,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,     0,    30,   182,   272,     0,     1,   183,     0,
       0,     0,     0,     0,    53,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,    29,     0,     0,     1,     0,     0,     0,     0,     0,
       0,   216,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     1,   310,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,     1,   337,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,    29,    30,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   376,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     1,    30,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    26,     0,    27,     0,    28,     0,    30,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,   386,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,    27,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      48,    49,   125,    57,    59,    53,    48,    49,    53,    50,
     131,    63,     0,   130,    85,    63,   184,     3,    48,    32,
      50,    63,   347,    48,    49,     3,   125,    78,    78,   113,
     128,     3,   131,     3,    84,    78,    83,    85,    78,    12,
      13,    84,    78,    85,   140,    33,    34,    76,    99,   148,
       3,    39,    40,    41,     3,    43,     3,    76,   157,    99,
      85,    98,   183,    99,   112,     3,   114,    19,   113,    63,
     112,   142,   114,   144,   122,   129,   134,   122,     3,    14,
      15,   133,   134,   131,   183,   133,   134,   158,    83,   210,
      76,   133,   134,    76,   142,     3,   144,   196,   139,   147,
     142,     3,   144,    85,   202,   147,    76,   432,   179,   139,
     123,   210,    84,     3,   127,   214,    86,   142,   112,   144,
     114,   205,   147,   136,   161,   162,   163,   223,   296,    99,
      78,    84,    78,    81,    83,   183,    83,   182,    76,   133,
     134,    79,   130,    76,   243,    97,   245,    80,    86,   358,
     417,    76,    76,    99,   275,    80,    80,   215,    93,    94,
     205,   282,   210,   215,   281,   288,   214,   215,    76,    87,
      88,    79,    98,   215,    76,    76,   275,   218,    86,    80,
     279,   448,   449,   282,    86,    86,    76,    96,   218,   288,
      80,    99,   205,    80,   182,    82,    86,    38,    39,    40,
      86,   410,    78,   412,   303,    91,    92,   306,    84,   246,
      78,    98,    76,    76,    16,    17,    84,    80,   339,    77,
      78,   215,    76,   322,   347,    95,   325,   275,    77,    78,
      71,   279,   331,   442,   282,   334,    78,    79,   292,    18,
     339,   296,    77,   284,   343,    86,    77,    78,   347,   294,
      77,   460,   461,   462,   284,   303,    77,     9,    10,    11,
      78,   470,    77,   472,    83,   474,    77,    78,   477,    77,
     479,   319,     3,   314,    77,    78,     3,   319,     6,   168,
     169,   170,   171,   331,   314,    98,   409,    48,    84,    50,
      77,   339,   363,   281,    78,   343,    81,   327,    81,   312,
     399,    77,    78,   402,    77,    78,   294,    77,    78,   432,
     409,   299,   353,    77,    78,    78,   370,    79,    79,    80,
      81,    77,    78,   353,    76,   164,   165,    77,    80,   428,
      82,    77,   431,   432,   166,   167,    77,    98,   172,   173,
      77,    77,   413,   414,   415,    77,    81,    81,     3,     3,
      83,   399,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    81,   417,    81,    81,    81,    81,    77,    81,
      81,    81,    79,    99,    79,    76,    76,    76,   139,    76,
       3,    99,   430,    81,    79,    81,    99,    79,   430,    62,
      81,    81,   463,   464,   465,    81,    81,    79,    81,    76,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,    99,    84,
      81,    60,   430,    99,   175,   174,    69,   133,   176,   123,
      98,   178,     3,     4,     5,     6,     7,     8,   177,    10,
      11,   312,   299,   322,   289,    43,    -1,   370,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   246,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
      -1,    30,    -1,   284,    -1,    -1,    -1,    -1,    99,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,   327,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   353,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      31,    76,    -1,    34,    -1,    -1,    81,    38,    39,    40,
      85,    86,    87,    88,    89,    90,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    31,    76,    -1,    34,    -1,    -1,    81,    38,
      39,    40,    85,    86,    87,    88,    89,    90,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     3,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    86,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    30,    77,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    98,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    -1,    30,    80,    -1,
      -1,    -1,    -1,    -1,    86,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    84,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    30,    77,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    30,    75,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    69,    -1,    71,    -1,    73,    -1,    75,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   128,   129,   132,   133,   134,   135,   141,   144,   145,
     146,   147,   164,   176,   177,   178,     3,    83,    76,    76,
      76,     3,    76,    86,    99,   130,   131,   148,   149,   150,
     129,   129,     3,    83,   129,   129,   129,     0,   177,    83,
       3,   103,   142,   143,     3,     4,     5,     6,     7,     8,
      10,    11,    31,    70,    72,    76,    85,    86,    87,    88,
      89,    90,   101,   102,   104,   105,   108,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   127,   133,   138,   145,   156,   156,   127,   148,    71,
     145,   150,   151,    78,    99,    98,   128,   129,   180,   181,
      76,    80,   149,    83,   136,   137,   138,   164,   142,    98,
      78,    84,    76,   110,    76,   110,   110,    76,    76,   110,
     123,   124,   126,   156,     9,    10,    11,    76,    80,    82,
     112,    86,    91,    92,    87,    88,    12,    13,    14,    15,
      93,    94,    16,    17,    85,    95,    96,    18,    19,    97,
      77,   138,    76,    80,   150,   157,   158,   138,    77,    77,
      78,    77,   145,   150,   131,   148,    83,   124,   159,    83,
     167,   128,   179,     3,    77,   129,   152,   153,   154,   155,
      34,    81,    86,   124,   151,   136,    84,   137,    79,    99,
     139,   140,   148,    78,    84,   127,    84,   143,   156,   156,
     156,   124,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    98,   125,    77,    78,    77,     3,    77,   109,
     124,   126,     3,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   115,   115,   116,   116,   117,   118,   119,   120,
     121,   126,    77,   152,   157,    34,    81,    86,   124,   151,
     158,    76,    80,     6,    80,    82,   159,   160,   161,   162,
     163,    84,   168,   167,    76,   148,   150,   157,    77,    78,
      77,    78,   124,   151,    81,    81,    34,    81,    86,   124,
      84,   127,    78,    99,    79,    84,    77,    77,    77,    78,
     124,   124,    83,   112,    77,    78,    81,    79,    77,    77,
     124,   151,    81,    81,    34,    81,   124,    77,   152,    34,
      81,    86,   124,   151,    77,   127,     3,    78,    84,   159,
      98,   163,     3,    57,    58,    59,    61,    62,    63,    64,
      65,    66,    67,    68,    99,   126,   128,   165,   166,   167,
     170,   171,   172,   173,   174,   175,    56,   154,     3,    81,
     124,   124,    81,    81,   140,   127,    58,   106,   107,   156,
     160,   124,   123,    81,   124,   124,    81,    77,   124,   151,
      81,    81,    34,    81,   124,    99,    81,    84,   159,   161,
      79,   127,    79,    76,    76,    76,   165,    76,     3,    99,
      99,    99,   126,    99,   169,   171,    81,    81,    79,    77,
      78,    79,    78,    84,    81,    81,    81,   124,   124,    81,
     159,   165,    79,   165,   126,   126,   126,    62,   128,   172,
      99,    99,    84,   124,   107,   124,    84,    81,    81,   165,
      77,    77,    77,    76,   172,   172,   165,   165,   165,   126,
      77,   126,    77,   126,    60,    77,   165,    77,   165,    77,
     165,    99,   165,   165
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     117,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     138,   138,   138,   138,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   141,   142,   142,   143,   143,   144,   145,
     145,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   150,   150,   150,   150,   151,   151,   152,
     152,   153,   153,   154,   154,   154,   155,   155,   156,   156,
     157,   157,   157,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   160,   160,   160,
     160,   161,   162,   162,   163,   163,   164,   165,   165,   165,
     165,   165,   165,   166,   166,   166,   167,   168,   169,   167,
     170,   170,   171,   171,   172,   172,   173,   173,   173,   174,
     174,   174,   174,   174,   174,   175,   175,   175,   175,   175,
     176,   176,   177,   177,   179,   178,   180,   178,   181,   181
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     2,     1,     1,     3,     2,     3,     1,     4,
       5,     5,     6,     2,     1,     3,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     4,     4,     2,     1,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     7,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     0,     0,     5,
       1,     2,     1,     1,     1,     2,     7,     5,     5,     5,
       7,     6,     7,     6,     7,     3,     2,     2,     2,     3,
       1,     2,     1,     1,     0,     5,     0,     4,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 94 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   IdentifierNode *idNode = new IdentifierNode((yyvsp[0].lexeme));
	   (yyval.expression) = idNode;
}
#line 2060 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 97 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2066 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 98 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2072 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 99 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2078 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 100 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2084 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 104 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {		/* includes character_constant */
	   IntegerLiteralNode *intLiteral = new IntegerLiteralNode((yyvsp[0].lexeme));
	   (yyval.expression) = intLiteral;
}
#line 2093 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 107 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      FloatLiteralNode *floatLiteral = new FloatLiteralNode((yyvsp[0].lexeme));
	   (yyval.expression) = floatLiteral;
}
#line 2102 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 110 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {	/* after it has been defined as such */
	   (yyval.expression) = NULL;
}
#line 2110 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 115 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   (yyval.expression) = NULL;
}
#line 2118 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 120 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StringLiteralNode *stringLiteral = new StringLiteralNode((yyvsp[0].lexeme));
	   (yyval.expression) = stringLiteral;
}
#line 2127 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 123 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      StringLiteralNode *stringLiteral = new StringLiteralNode("__func__");
	   (yyval.expression) = stringLiteral;
}
#line 2136 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 129 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2142 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 143 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2148 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 144 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ArrayReferenceNode *node = new ArrayReferenceNode((yyvsp[-3].expression), (yyvsp[-1].expression));
	   (yyval.expression) = node;
}
#line 2157 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 147 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	FunctionCallNode *node = new FunctionCallNode((yyvsp[-2].expression), NULL);
   	(yyval.expression) = node;
}
#line 2166 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 150 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	FunctionCallNode *node = new FunctionCallNode((yyvsp[-3].expression), (ArgumentListNode*)(yyvsp[-1].expression));
   	(yyval.expression) = node;
}
#line 2175 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 155 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PostUnaryExpressionNode *node = new PostUnaryExpressionNode((yyvsp[-1].expression), "++");
   	(yyval.expression) = node;
}
#line 2184 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 158 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PostUnaryExpressionNode *node = new PostUnaryExpressionNode((yyvsp[-1].expression), "--");
   	(yyval.expression) = node;
}
#line 2193 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 161 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2199 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 162 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2205 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 166 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ArgumentListNode *node = new ArgumentListNode((yyvsp[0].expression), NULL);
   	(yyval.expression) = node;
}
#line 2214 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 169 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      //TODO solve list inversion
      ArgumentListNode *node = (ArgumentListNode*)(yyvsp[-2].expression); 
     	ArgumentListNode *arg = new ArgumentListNode((yyvsp[0].expression), NULL);
   	(yyval.expression) = node;
   	ArgumentListNode *argList = node;
   	while(argList->nextExpression()!=NULL){
   	   argList = argList->nextExpression();
      }
      argList->nextExpression(arg);
}
#line 2230 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 182 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2236 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 183 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PreUnaryExpressionNode *node = new PreUnaryExpressionNode("++", (yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2245 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 186 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PreUnaryExpressionNode *node = new PreUnaryExpressionNode("--", (yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2254 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 189 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PreUnaryExpressionNode *node = new PreUnaryExpressionNode((yyvsp[-1].lexeme), (yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2263 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 192 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2269 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 193 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2275 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 194 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2281 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 198 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"&"; }
#line 2287 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 199 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"*"; }
#line 2293 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 200 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"+"; }
#line 2299 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 201 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"-"; }
#line 2305 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 202 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"~"; }
#line 2311 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 203 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"!"; }
#line 2317 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 207 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2323 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 208 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	CastNode *node = new CastNode((yyvsp[-2].type),(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2332 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 215 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"*",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2341 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 218 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"/",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2350 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 221 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"%",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2359 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 227 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2365 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 228 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"+",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2374 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 231 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"-",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2383 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 237 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2389 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 238 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"<<",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2398 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 241 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),">>",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2407 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 247 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2413 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 248 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"<",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2422 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 251 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),">",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2431 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 254 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"<=",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2440 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 257 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),">=",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2449 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 263 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2455 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 264 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"==",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2464 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 267 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"!=",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2473 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 273 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2479 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 274 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"&",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2488 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 280 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2494 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 281 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"^",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2503 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 287 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2509 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 288 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"|",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2518 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 294 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2524 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 295 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"&&",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2533 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 301 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2539 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 302 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"||",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2548 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 308 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2554 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 309 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ConditionalExpressionNode *node = new ConditionalExpressionNode((yyvsp[-4].expression),(yyvsp[-2].expression),(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2563 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 315 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2569 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 316 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),(yyvsp[-1].lexeme),(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2578 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 322 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"="; }
#line 2584 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 323 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"*="; }
#line 2590 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 324 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"/="; }
#line 2596 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 325 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"%="; }
#line 2602 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 326 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"+="; }
#line 2608 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 327 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"-="; }
#line 2614 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 328 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"<<="; }
#line 2620 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 329 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)">>="; }
#line 2626 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 330 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"&="; }
#line 2632 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 331 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"^="; }
#line 2638 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 332 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"|="; }
#line 2644 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 336 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ExpressionListNode *node = new ExpressionListNode((yyvsp[0].expression), NULL);
   	(yyval.expression) = node;
}
#line 2653 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 339 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      //TODO solve list inversion
   	ExpressionListNode *node = new ExpressionListNode((yyvsp[0].expression), (ExpressionListNode*)(yyvsp[-2].expression)); 
   	(yyval.expression) = node;
}
#line 2663 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 346 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2669 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 350 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationSpecifierNode *node = new DeclarationSpecifierNode((yyvsp[-1].type));
      (yyval.declaration) = node;
}
#line 2678 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 353 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      
}
#line 2686 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 355 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      
}
#line 2694 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 360 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
      (yyval.type) = node;
}
#line 2703 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 363 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 2712 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 366 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 2721 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 369 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 2730 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 372 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 2739 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 375 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 2748 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 378 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 2757 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 381 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 2766 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 389 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationListNode *node = new DeclarationListNode((yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 2775 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 392 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationListNode *node = new DeclarationListNode((yyvsp[0].declaration), (DeclarationListNode*)(yyvsp[-2].declaration));
	   (yyval.declaration) = node;
}
#line 2784 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 398 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   AssignmentNode *node = new AssignmentNode((yyvsp[-2].declaration), (yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 2793 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 401 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[0].declaration); }
#line 2799 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 406 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_EXTERN);
	   (yyval.type) = node;
}
#line 2808 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 409 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
	   (yyval.type) = node;
}
#line 2817 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 412 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_THREAD_LOCAL);
	   (yyval.type) = node;
}
#line 2826 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 415 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_AUTO);
	   (yyval.type) = node;
}
#line 2835 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 418 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_REGISTER);
	   (yyval.type) = node;
}
#line 2844 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 424 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_VOID);
	   (yyval.type) = node;
}
#line 2853 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 427 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_CHAR);
	   (yyval.type) = node;
}
#line 2862 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 430 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_SHORT);
	   (yyval.type) = node;
}
#line 2871 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 433 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_INT);
	   (yyval.type) = node;
}
#line 2880 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 436 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_LONG);
	   (yyval.type) = node;
}
#line 2889 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 439 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_FLOAT);
	   (yyval.type) = node;
}
#line 2898 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 442 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_DOUBLE);
	   (yyval.type) = node;
}
#line 2907 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 445 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_SIGNED);
	   (yyval.type) = node;
}
#line 2916 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 448 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_UNSIGNED);
	   (yyval.type) = node;
}
#line 2925 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 451 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_BOOL);
	   (yyval.type) = node;
}
#line 2934 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 454 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_COMPLEX);
	   (yyval.type) = node;
}
#line 2943 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 457 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {	  	/* non-mandated extension */
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_IMAGINARY);
	   (yyval.type) = node;
}
#line 2952 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 461 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2958 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 467 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeNode *node = NULL;
      if(strcmp((yyvsp[-3].lexeme),"struct")==0){
         node = new StructTypeNode("", (yyvsp[-1].declaration));
      }else if(strcmp((yyvsp[-3].lexeme),"union")==0){
         node = new UnionTypeNode("", (yyvsp[-1].declaration));
      }
      (yyval.type) = node;    
}
#line 2972 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 475 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeNode *node = NULL;
      if(strcmp((yyvsp[-4].lexeme),"struct")==0){
         node = new StructTypeNode((yyvsp[-3].lexeme), (yyvsp[-1].declaration));
      }else if(strcmp((yyvsp[-4].lexeme),"union")==0){
         node = new UnionTypeNode((yyvsp[-3].lexeme), (yyvsp[-1].declaration));
      }
      (yyval.type) = node;      
}
#line 2986 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 483 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeNode *node = NULL;
      if(strcmp((yyvsp[-1].lexeme),"struct")==0){
         node = new StructTypeNode((yyvsp[0].lexeme), NULL);
      }else if(strcmp((yyvsp[-1].lexeme),"union")==0){
         node = new UnionTypeNode((yyvsp[0].lexeme), NULL);
      }
      (yyval.type) = node;
}
#line 3000 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 494 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"struct"; }
#line 3006 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 495 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"union"; }
#line 3012 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 499 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationSequenceNode *node = new DeclarationSequenceNode((yyvsp[0].declaration), NULL);
      (yyval.declaration) = node;
}
#line 3021 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 502 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationSequenceNode *node = new DeclarationSequenceNode((yyvsp[0].declaration), (DeclarationSequenceNode *)(yyvsp[-1].declaration));
      (yyval.declaration) = node;
}
#line 3030 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 508 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {	/* for anonymous struct/union */
	   AttributeDeclarationNode *node = new AttributeDeclarationNode((yyvsp[-1].type), NULL, NULL);
	   (yyval.declaration) = node;
}
#line 3039 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 511 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeNode *type = (yyvsp[-2].type);
	   DeclarationListNode *node = (DeclarationListNode*)(yyvsp[-1].declaration);
	   //TODO set type into node
	   (yyval.declaration) = node;
}
#line 3050 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 516 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = NULL; }
#line 3056 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 520 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 3065 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 523 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 3074 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 526 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 3083 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 529 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 3092 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 535 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationListNode *node = new DeclarationListNode((yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3101 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 538 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationListNode *node = new DeclarationListNode((yyvsp[0].declaration), (DeclarationListNode*)(yyvsp[-2].declaration));
	   (yyval.declaration) = node;
}
#line 3110 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 544 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   AttributeDeclarationNode *node = new AttributeDeclarationNode(NULL, NULL, (yyvsp[0].expression));
	   (yyval.declaration) = node;
}
#line 3119 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 547 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   AttributeDeclarationNode *node = new AttributeDeclarationNode(NULL, (DeclaratorNode *)(yyvsp[-2].declaration), (yyvsp[0].expression));
	   (yyval.declaration) = node;
}
#line 3128 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 550 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   AttributeDeclarationNode *node = new AttributeDeclarationNode(NULL, (DeclaratorNode *)(yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3137 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 578 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_CONST);
	   (yyval.type) = node;
}
#line 3146 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 581 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_RESTRICT);
	   (yyval.type) = node;
}
#line 3155 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 584 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_VOLATILE);
	   (yyval.type) = node;
}
#line 3164 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 587 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_ATOMIC);
	   (yyval.type) = node;
}
#line 3173 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 593 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   FunctionSpecifierNode *node = new FunctionSpecifierNode(TYPE_INLINE);
	   (yyval.type) = node;
}
#line 3182 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 596 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      FunctionSpecifierNode *node = new FunctionSpecifierNode(TYPE_NORETURN);
	   (yyval.type) = node;
}
#line 3191 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 607 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PointerDeclaratorNode *pointer = (PointerDeclaratorNode *)(yyvsp[-1].declaration);
	   DeclaratorNode *node = new DeclaratorNode((yyvsp[0].declaration));
	   
	   (yyval.declaration) = pointer;
	   
	   PointerDeclaratorNode *ptr = pointer;
	   while(ptr->declaration()!=NULL){
	      ptr = (PointerDeclaratorNode *)(ptr->declaration());
      }
      ptr->declaration(node);
      
}
#line 3209 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 619 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclaratorNode *node = new DeclaratorNode((yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3218 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 625 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      IdentifierDeclarationNode *node = new IdentifierDeclarationNode((yyvsp[0].lexeme));
      (yyval.declaration) = node;
      
      if(symbolTable.isAtCurrentScope((yyvsp[0].lexeme))){
         printf("Identifier %s is already defined\n", (yyvsp[0].lexeme));
         yyerror("Duplicate definition.\n");
      }
      printf("adding ID %s to symtab in scope %d.\n", (yyvsp[0].lexeme), symbolTable.scopeCount());
      IdentifierInformation *idInfo = new IdentifierInformation((yyvsp[0].lexeme));
      
      symbolTable.insertAtCurrentScope(idInfo);
      
}
#line 3237 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 638 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[-1].declaration); }
#line 3243 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 648 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   FunctionDeclaratorNode *node = new FunctionDeclaratorNode((yyvsp[-3].declaration), (ParameterListNode *)(yyvsp[-1].declaration));
	   (yyval.declaration) = node;
}
#line 3252 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 651 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   FunctionDeclaratorNode *node = new FunctionDeclaratorNode((yyvsp[-2].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3261 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 658 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PointerDeclaratorNode *node = new PointerDeclaratorNode((TypeCompositionNode *)(yyvsp[-1].type), (yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3270 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 661 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PointerDeclaratorNode *node = new PointerDeclaratorNode((TypeCompositionNode *)(yyvsp[0].type), NULL);
	   (yyval.declaration) = node;
}
#line 3279 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 664 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PointerDeclaratorNode *node = new PointerDeclaratorNode(NULL, (yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3288 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 667 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PointerDeclaratorNode *node = new PointerDeclaratorNode(NULL, NULL);
	   (yyval.declaration) = node;
}
#line 3297 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 673 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 3306 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 676 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), (TypeCompositionNode *)(yyvsp[-1].type));
	   (yyval.type) = node;
}
#line 3315 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 683 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   EllipsisParameterNode *ellipsis = new EllipsisParameterNode();
	   ParameterListNode *node = (ParameterListNode *)(yyvsp[-2].declaration);
	   (yyval.declaration) = node;
	   ParameterListNode *parameter = node;
	   while(parameter->nextParameter()!=NULL){
	      parameter = parameter->nextParameter();
      }
      parameter->nextParameter(new ParameterListNode(ellipsis, NULL));
}
#line 3330 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 692 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[0].declaration); }
#line 3336 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 696 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ParameterListNode *node = new ParameterListNode((yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3345 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 699 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   //ParameterListNode *node = new ParameterListNode($3, (ParameterListNode *)$1);
	   //$$ = node;
	   ParameterListNode *node = (ParameterListNode *)(yyvsp[-2].declaration);
	   (yyval.declaration) = node;
	   ParameterListNode *parameter = node;
	   while(parameter->nextParameter()!=NULL){
	      parameter = parameter->nextParameter();
      }
      parameter->nextParameter(new ParameterListNode((yyvsp[0].declaration), NULL));
}
#line 3361 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 712 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ParameterDeclarationNode *node = new ParameterDeclarationNode((yyvsp[-1].type), (yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3370 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 715 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ParameterDeclarationNode *node = new ParameterDeclarationNode((yyvsp[-1].type), (yyvsp[0].declaration));
	   (yyval.declaration) = node;      
}
#line 3379 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 718 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ParameterDeclarationNode *node = new ParameterDeclarationNode((yyvsp[0].type), NULL);
	   (yyval.declaration) = node;      
}
#line 3388 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 729 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      
}
#line 3396 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 731 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      
}
#line 3404 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 737 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PointerDeclaratorNode *pointer = (PointerDeclaratorNode *)(yyvsp[-1].declaration);
	   DeclaratorNode *node = new DeclaratorNode((yyvsp[0].declaration));
	   
	   (yyval.declaration) = pointer;
	   
	   PointerDeclaratorNode *ptr = pointer;
	   while(ptr->declaration()!=NULL){
	      ptr = (PointerDeclaratorNode *)(ptr->declaration());
      }
      ptr->declaration(node);
      
}
#line 3422 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 749 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclaratorNode *node = new DeclaratorNode((yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3431 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 752 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclaratorNode *node = new DeclaratorNode((yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3440 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 758 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[-1].declaration); }
#line 3446 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 813 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3452 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 814 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3458 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 815 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3464 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 816 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3470 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 817 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3476 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 818 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3482 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 822 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   LabeledStatementNode *node = new LabeledStatementNode((yyvsp[-2].lexeme), (yyvsp[0].statement));
	   (yyval.statement) = node;
}
#line 3491 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 825 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   CaseStatementNode *node = new CaseStatementNode((yyvsp[-2].expression), (yyvsp[0].statement));
	   (yyval.statement) = node;
}
#line 3500 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 828 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   CaseStatementNode *node = new CaseStatementNode(NULL, (yyvsp[0].statement));
	   (yyval.statement) = node;
}
#line 3509 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 834 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = NULL; }
#line 3515 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 835 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {printf("begin scope\n"); ::symbolTable.pushScope();}
#line 3521 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 835 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {delete ::symbolTable.popScope();printf("end scope\n");}
#line 3527 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 835 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[-2].statement); }
#line 3533 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 839 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   CompoundStatementNode *node = new CompoundStatementNode((yyvsp[0].statement), NULL);
	   (yyval.statement) = node;
}
#line 3542 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 842 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   //CompoundStatementNode *node = new CompoundStatementNode($2, (CompoundStatementNode *)$1);
	   //$$ = node;
	   CompoundStatementNode *node = (CompoundStatementNode*)(yyvsp[-1].statement); 
     	CompoundStatementNode *stmt = new CompoundStatementNode((yyvsp[0].statement), NULL);
   	(yyval.statement) = node;
   	CompoundStatementNode *stmtList = node;
   	while(stmtList->nextStatement()!=NULL){
   	   stmtList = stmtList->nextStatement();
      }
      stmtList->nextStatement(stmt);
}
#line 3559 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 856 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationStatementNode *node = new DeclarationStatementNode((yyvsp[0].declaration));
	   (yyval.statement) = node;
}
#line 3568 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 859 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3574 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 863 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = NULL; }
#line 3580 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 864 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { 
	   ExpressionStatementNode *node = new ExpressionStatementNode((yyvsp[-1].expression));
	   (yyval.statement) = node;
}
#line 3589 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 870 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      IfNode *node = new IfNode((yyvsp[-4].expression), (yyvsp[-2].statement), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3598 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 873 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      IfNode *node = new IfNode((yyvsp[-2].expression), (yyvsp[0].statement), new SkipNode());
      (yyval.statement) = node;
}
#line 3607 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 876 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      SwitchNode *node = new SwitchNode((yyvsp[-2].expression), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3616 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 882 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      WhileNode *node = new WhileNode((yyvsp[-2].expression), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3625 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 885 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DoWhileNode *node = new DoWhileNode((yyvsp[-5].statement), (yyvsp[-2].expression));
      (yyval.statement) = node;
}
#line 3634 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 888 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ForNode *node = new ForNode((yyvsp[-3].statement), (ExpressionStatementNode*)(yyvsp[-2].statement), NULL, (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3643 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 891 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ForNode *node = new ForNode((yyvsp[-4].statement), (ExpressionStatementNode*)(yyvsp[-3].statement), (yyvsp[-2].expression), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3652 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 894 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationStatementNode *init = new DeclarationStatementNode((yyvsp[-3].declaration));
      ForNode *node = new ForNode(init,(ExpressionStatementNode*) (yyvsp[-2].statement), NULL, (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3662 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 898 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationStatementNode *init = new DeclarationStatementNode((yyvsp[-4].declaration));
      ForNode *node = new ForNode(init, (ExpressionStatementNode*)(yyvsp[-3].statement), (yyvsp[-2].expression), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3672 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 905 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      GotoNode *node = new GotoNode((yyvsp[-1].lexeme));
      (yyval.statement) = node;
}
#line 3681 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 908 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ContinueNode *node = new ContinueNode();
      (yyval.statement) = node;
}
#line 3690 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 911 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      BreakNode *node = new BreakNode();
      (yyval.statement) = node;
}
#line 3699 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 914 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ReturnNode *node = new ReturnNode(NULL);
      (yyval.statement) = node;
}
#line 3708 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 917 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ReturnNode *node = new ReturnNode((yyvsp[-1].expression));
      (yyval.statement) = node;
}
#line 3717 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 923 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationSequenceNode *node = new DeclarationSequenceNode((yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
	   astRoot = node;
}
#line 3727 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 927 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   //DeclarationSequenceNode *node = new DeclarationSequenceNode($2, (DeclarationSequenceNode *)$1);
	   //$$ = node;
	   //astRoot = node;
	   DeclarationSequenceNode *node = (DeclarationSequenceNode*)(yyvsp[-1].declaration); 
     	DeclarationSequenceNode *decl = new DeclarationSequenceNode((yyvsp[0].declaration), NULL);
   	(yyval.declaration) = node;
   	astRoot = node;
   	DeclarationSequenceNode *declList = node;
   	while(declList->nextDeclaration()!=NULL){
   	   declList = declList->nextDeclaration();
      }
      declList->nextDeclaration(decl);
}
#line 3746 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 943 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[0].declaration); }
#line 3752 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 944 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[0].declaration); }
#line 3758 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 948 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {printf("defining function.\n");}
#line 3764 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 948 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      FunctionDeclarationNode *node = new FunctionDeclarationNode((yyvsp[-4].type), (yyvsp[-3].declaration), (yyvsp[0].statement));
      (yyval.declaration) = node;	   
}
#line 3773 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 951 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {printf("defining function.\n");}
#line 3779 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 951 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      FunctionDeclarationNode *node = new FunctionDeclarationNode((yyvsp[-3].type), (yyvsp[-2].declaration), (yyvsp[0].statement));
      (yyval.declaration) = node;
}
#line 3788 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;


#line 3792 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 961 "src/parser/yacc_c11.y" /* yacc.c:1906  */

#include <stdio.h>

#include <string>
using std::string;

extern char yytext[];
extern int yylineno;
extern int column;
extern string line;
extern char * curfilename;

void yyerror(const char *s)
{
	//fflush(stdout);
	//fprintf(stderr, "*** %s\n", s);
	fflush(stdout);
	printf("%s:%d:%d\n",curfilename,yylineno,column);
	printf("%s\n",line.c_str());
	printf("%*s\n%*s\n", column, "^", column, s);
	
}

