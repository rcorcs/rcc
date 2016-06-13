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
 
//extern SymbolTable symbolTable;
//extern IdentifierInformationBuilder idInfoBuilder;
Node *astRoot = NULL;


#line 85 "src/parser/yy_parser.cpp" /* yacc.c:339  */

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

#line 119 "src/parser/yy_parser.cpp" /* yacc.c:355  */

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
#line 25 "src/parser/yacc_c11.y" /* yacc.c:355  */

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

#line 223 "src/parser/yy_parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 238 "src/parser/yy_parser.cpp" /* yacc.c:358  */

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
#define YYLAST   2363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  277
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  482

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
       0,    96,    96,    99,   100,   101,   102,   106,   109,   112,
     117,   122,   125,   131,   135,   136,   140,   141,   145,   146,
     149,   152,   155,   158,   161,   164,   167,   168,   172,   175,
     187,   188,   191,   194,   197,   201,   204,   208,   209,   210,
     211,   212,   213,   217,   218,   224,   225,   228,   231,   237,
     238,   241,   247,   248,   251,   257,   258,   261,   264,   267,
     273,   274,   277,   283,   284,   290,   291,   297,   298,   304,
     305,   311,   312,   318,   319,   325,   326,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   346,   349,
     356,   360,   363,   374,   379,   382,   385,   388,   391,   394,
     397,   400,   403,   404,   408,   411,   422,   425,   429,   430,
     433,   436,   439,   442,   448,   451,   454,   457,   460,   463,
     466,   469,   472,   475,   478,   481,   484,   485,   486,   487,
     491,   499,   507,   518,   519,   523,   526,   538,   542,   546,
     550,   553,   556,   559,   565,   568,   580,   584,   588,   594,
     595,   596,   597,   598,   602,   603,   607,   608,   612,   616,
     619,   622,   625,   631,   634,   640,   641,   645,   657,   663,
     681,   682,   685,   688,   694,   700,   704,   710,   715,   719,
     723,   726,   729,   733,   736,   739,   742,   748,   751,   758,
     767,   771,   774,   785,   788,   791,   797,   798,   802,   806,
     814,   826,   829,   835,   836,   839,   842,   848,   854,   860,
     865,   869,   873,   876,   879,   885,   891,   896,   902,   906,
     910,   913,   916,   919,   925,   926,   927,   933,   934,   935,
     936,   940,   944,   945,   949,   950,   954,   958,   959,   960,
     961,   962,   963,   967,   970,   973,   979,   980,   984,   987,
     999,  1002,  1006,  1007,  1013,  1016,  1019,  1025,  1028,  1031,
    1034,  1037,  1041,  1048,  1051,  1054,  1057,  1060,  1066,  1070,
    1083,  1084,  1088,  1088,  1091,  1091,  1097,  1098
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
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "$@1", "$@2", "declaration_list", YY_NULLPTR
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

#define YYPACT_NINF -345

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-345)))

#define YYTABLE_NINF -275

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2093,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,    60,   -45,   -40,  -345,   -27,
    -345,  -345,    25,  2183,  2183,  -345,    64,  -345,  -345,  2183,
    2183,  2183,  -345,  1779,  -345,  -345,   -29,    54,   864,  2292,
    1612,  -345,   149,   162,  -345,   -59,  -345,  1878,    -3,    19,
    -345,  -345,    -2,  2221,  -345,  -345,  -345,  -345,  -345,    54,
    -345,    42,   -55,  -345,  -345,  -345,  -345,  -345,  -345,  1634,
    1656,  1656,  -345,    87,    98,   864,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,   171,  -345,  1612,  -345,
      65,   130,    26,    75,   212,   103,    58,    95,   179,    -9,
    -345,   127,  2292,    84,  2292,   129,   131,   132,   137,  -345,
    -345,  -345,   162,   149,  -345,  1370,  -345,    25,   138,  2093,
    1832,   952,    -3,  2221,   440,  -345,    55,  -345,   -36,  1612,
      29,  -345,   864,  -345,   864,  -345,  -345,  2292,  1612,   408,
    -345,  -345,   165,   142,   220,  -345,  -345,  1392,  1612,   227,
    -345,  1612,  1612,  1612,  1612,  1612,  1612,  1612,  1612,  1612,
    1612,  1612,  1612,  1612,  1612,  1612,  1612,  1612,  1612,  1612,
    -345,  -345,  1945,   974,    68,  -345,    99,  -345,  -345,  -345,
     230,  -345,  -345,  -345,  -345,   134,  1348,  -345,  -345,   497,
    -345,  -345,   138,  -345,  -345,   123,   172,   189,  -345,   168,
    1216,  -345,   173,   182,   996,  1994,  -345,  -345,  1612,  -345,
     -58,  -345,   193,    32,  -345,  -345,  -345,  -345,   200,   202,
     204,   205,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  1612,  -345,  1612,  1480,  -345,  -345,   198,
    -345,   -65,  -345,  -345,  -345,  -345,    65,    65,   130,   130,
      26,    26,    26,    26,    75,    75,   212,   103,    58,    95,
     179,   161,  -345,   213,   215,  1216,  -345,   218,   236,  1084,
      99,  2047,  1106,   246,  1612,   324,  -345,    81,  1370,   113,
    -345,   251,  1612,   280,   284,   286,   287,   730,   288,   362,
     268,   269,   377,  -345,  -345,   -31,  -345,  -345,  -345,  -345,
     587,  -345,  -345,  -345,  -345,  -345,  -345,  1722,  -345,    56,
    -345,  -345,  2139,  -345,   367,   290,  1216,  -345,  -345,  1612,
    -345,   291,   296,  -345,  -345,   136,  -345,  1612,  -345,   295,
     295,  -345,  2258,  -345,  -345,  1348,  -345,  -345,  1612,  -345,
    1612,  -345,  -345,   308,  1216,  -345,  -345,  1612,  -345,   309,
    -345,   314,  1216,  -345,   312,   315,  1128,   298,   318,  -345,
    1238,  -345,  -345,  -345,  -345,   730,   316,   730,  1612,  1612,
    1612,   339,   677,   303,  -345,  -345,  -345,   -28,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,   325,   326,  -345,  -345,  -345,
    -345,   330,   208,  -345,   331,   114,  -345,  -345,  -345,   332,
     334,  -345,  -345,   335,  1216,  -345,  -345,  1612,  -345,   336,
    -345,  -345,  -345,  -345,  1370,  -345,   730,  -345,   224,   226,
     231,   329,   774,   774,  -345,  -345,  -345,  -345,  1612,  -345,
    2258,  1612,  1260,  -345,  -345,  -345,  -345,   337,   338,  -345,
    -345,  -345,   730,   730,   730,  1612,  1502,  1524,  -345,  -345,
    -345,  -345,  -345,  -345,   351,  -345,  -345,   234,   730,   244,
     730,   248,   730,   313,  -345,   730,  -345,   730,  -345,  -345,
    -345,  -345
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   129,   108,   109,   110,   112,   113,   163,   159,   160,
     161,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   133,   134,     0,     0,   162,   164,     0,
     111,   271,     0,    95,    97,   127,     0,   128,   126,    99,
     101,   103,    93,     0,   268,   270,   153,     0,     0,     0,
       0,   169,     0,   186,    91,     0,   104,   107,   168,     0,
      94,    96,   132,     0,    98,   100,   102,     1,   269,     0,
      10,   157,     0,   154,     2,     7,     8,    11,    12,     0,
       0,     0,     9,     0,     0,     0,    37,    38,    39,    40,
      41,    42,    18,     3,     4,     6,    30,    43,     0,    45,
      49,    52,    55,    60,    63,    65,    67,    69,    71,    73,
      90,     0,   141,   199,   143,     0,     0,     0,     0,   162,
     187,   185,   184,     0,    92,     0,   276,     0,     0,   272,
       0,     0,   167,     0,     0,   135,     0,   139,     0,     0,
       0,   149,     0,    34,     0,    31,    32,     0,     0,    43,
      75,    88,     0,     0,     0,    24,    25,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   140,     0,     0,   201,   198,   202,   142,   165,   158,
       0,   170,   188,   183,   105,   107,     0,   226,   106,     0,
     275,   277,     0,   196,   181,   195,     0,   190,   191,     0,
       0,   171,    38,     0,     0,     0,   130,   136,     0,   137,
       0,   144,   148,     0,   151,   156,   150,   155,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    77,     0,     5,     0,     0,    23,    20,     0,
      28,     0,    22,    46,    47,    48,    50,    51,    53,    54,
      58,    59,    56,    57,    61,    62,    64,    66,    68,    70,
      72,     0,   220,     0,     0,     0,   204,    38,     0,     0,
     200,     0,     0,     0,     0,     0,   228,     0,     0,     0,
     232,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   246,   252,     0,   250,   251,   237,   238,
       0,   248,   239,   240,   241,   242,   273,     0,   193,   201,
     194,   180,     0,   182,     0,     0,     0,   172,   179,     0,
     178,    38,     0,   131,   146,     0,   138,     0,   152,    35,
       0,    36,     0,    76,    89,     0,    44,    21,     0,    19,
       0,   221,   203,     0,     0,   205,   211,     0,   210,     0,
     222,     0,     0,   212,    38,     0,     0,     0,     0,   235,
       0,   224,   227,   231,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   264,   265,   266,     0,   253,   247,
     249,   189,   192,   197,   174,     0,     0,   175,   177,   145,
     147,     0,     0,    14,     0,     0,    29,    74,   207,     0,
       0,   209,   223,     0,     0,   213,   219,     0,   218,     0,
     236,   234,   225,   230,     0,   243,     0,   245,     0,     0,
       0,     0,     0,     0,   263,   267,   173,   176,     0,    13,
       0,     0,     0,    26,   206,   208,   215,     0,     0,   216,
     229,   244,     0,     0,     0,     0,     0,     0,    17,    15,
      16,    27,   214,   217,   255,   256,   257,     0,     0,     0,
       0,     0,     0,     0,   261,     0,   259,     0,   254,   258,
     262,   260
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -345,  -345,  -345,  -345,  -345,  -345,  -345,   -20,  -345,  -345,
     176,  -345,   -33,   191,   169,   100,   185,   247,   249,   250,
     261,   245,  -345,    77,   -38,  -345,   -82,   -32,   -49,    12,
    -345,   302,  -345,   -42,  -345,  -345,   306,   -78,   -30,  -345,
     105,  -345,   372,  -106,  -345,   -48,  -345,  -345,   -15,   -57,
     -44,  -104,  -126,  -345,   120,  -345,   -24,   -83,  -173,  -111,
     101,  -344,  -345,   154,   -19,  -188,  -345,   -53,  -345,   135,
    -249,  -345,  -345,  -345,  -345,   401,  -345,  -345,  -345,  -345
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    71,    94,    95,   402,   403,    96,   249,
     149,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   150,   151,   243,   305,   111,    31,   127,
      55,    56,    33,    34,    35,    36,   134,   135,   113,   220,
     221,    37,    72,    73,    38,    39,    40,    41,   118,    58,
      59,   122,   273,   207,   208,   209,   404,   274,   186,   286,
     287,   288,   289,   290,    42,   307,   308,   309,   310,   311,
     312,   313,   314,   315,    43,    44,    45,   202,   128,   129
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     114,   114,   132,   152,   206,   120,   112,   112,   126,   121,
     178,   280,    32,   245,   198,   114,   349,    57,   117,   123,
     335,   112,    51,   140,   115,   116,   424,   214,    51,   141,
     185,    48,    70,   136,   227,    70,    49,   114,   166,   167,
     124,   336,   223,   112,   137,    60,    61,   245,   224,    50,
     245,    64,    65,    66,    69,    32,   217,    70,    51,    51,
     152,   153,   152,    46,   114,   160,   114,    62,   388,   184,
     112,   435,   112,   130,   192,   200,   251,   131,   193,   279,
     201,   133,   181,   120,   187,   114,   114,   197,   179,   168,
     169,   112,   112,   213,   114,    52,   114,   271,   424,   114,
     112,    52,   112,   136,   136,   112,   326,   225,   195,   381,
     231,    53,   195,   226,   137,   137,   338,   227,   228,   250,
     229,   222,   320,   230,    54,   110,    51,   110,   253,   254,
     255,    52,   317,   433,   218,   120,   183,   217,   184,    51,
     139,    53,   205,    47,   182,   278,   280,    63,   183,   316,
     306,   161,    51,   175,   219,   361,   162,   163,   197,   370,
     182,   319,   120,   147,   183,   371,   192,   114,   170,   171,
      53,   354,   325,   112,   148,   281,   332,   372,   366,   282,
     154,   155,   156,   456,   457,   136,   334,   425,   174,   427,
     318,   176,   442,   284,   205,   285,   137,   177,   443,   317,
       8,     9,    10,   183,   180,   343,   188,   344,   189,    53,
     190,   373,    52,   346,   191,   218,   110,   164,   165,   246,
     387,   199,    53,   247,    97,    52,    97,   120,   172,   173,
     252,   192,   125,   119,   120,    53,   283,   353,   451,   245,
     350,   359,   244,   245,   365,   323,   324,   157,    53,   321,
     197,   158,   368,   159,   327,   143,   145,   146,   414,   423,
     376,   306,   132,   328,   464,   465,   466,   322,   260,   261,
     262,   263,   337,   319,    97,   347,   348,   339,   192,   340,
     474,   341,   476,   342,   478,   439,   440,   480,   395,   481,
     351,   396,   352,   205,   114,   110,   428,   429,   430,   355,
     112,   452,   245,   453,   245,   400,   192,   197,   454,   245,
     406,   473,   245,   450,   120,    97,   409,   356,   192,   410,
     222,   475,   245,   367,   413,   477,   245,   369,   419,   205,
     375,   423,   197,   432,   205,   258,   259,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,   256,   257,   264,   265,   377,
     378,   110,   379,   380,   382,   383,   192,   384,   385,   110,
     393,   394,   397,   467,   469,   471,   447,   398,   345,   448,
      74,    75,    76,    77,    78,    79,   197,    80,    81,   408,
     411,   412,   114,   415,    97,   426,   416,   420,   112,   421,
     458,   431,   434,   460,   197,   455,   436,   437,    82,   438,
     441,   472,   479,   444,   110,   445,   446,   449,   462,   463,
     459,   266,    97,   270,   267,   194,   268,   407,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   269,   215,
     399,   138,   392,   374,    68,   390,   405,    83,     0,    84,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
      97,     0,    86,    87,    88,    89,    90,    91,    97,     0,
       1,     0,     0,     0,     0,     0,   386,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
     291,    75,    76,    77,    78,    79,   242,    80,    81,     0,
       0,    27,     0,    97,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216,     0,    97,     1,    82,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,    26,    83,    27,    84,
      28,    29,    30,    85,     0,     0,     0,     0,     0,     0,
     199,   303,    86,    87,    88,    89,    90,    91,     0,     0,
     291,    75,    76,    77,    78,    79,   304,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    82,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,    26,    83,    27,    84,
      28,    29,    30,    85,     0,     0,     0,     0,     0,     0,
     199,   389,    86,    87,    88,    89,    90,    91,     0,     0,
      74,    75,    76,    77,    78,    79,   304,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    82,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   291,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,    26,    83,    27,    84,
      28,    29,    30,    85,     0,     0,     0,     0,     0,     0,
       0,    82,    86,    87,    88,    89,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,   304,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,   292,   293,   294,
       0,   295,   296,   297,   298,   299,   300,   301,   302,     0,
      83,     0,    84,     0,     0,    82,    85,     0,     0,     0,
       0,     0,     0,   199,     0,    86,    87,    88,    89,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,   304,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,    84,     0,     0,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,     0,     0,    74,    75,    76,
      77,    78,    79,   304,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,    82,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,    27,    84,     0,     0,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    82,    80,    81,   210,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    82,    80,    81,   275,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,    83,   119,    84,     0,     0,    82,    85,     0,
     329,     0,     0,   211,     8,     9,    10,    86,   212,    88,
      89,    90,    91,     0,    83,   119,    84,     0,     0,     0,
      85,     0,     0,     0,     0,   276,     0,     0,     0,    86,
     277,    88,    89,    90,    91,     0,    83,   119,    84,     0,
       0,     0,    85,     0,     0,     0,     0,   330,     0,     0,
       0,    86,   331,    88,    89,    90,    91,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    82,    80,    81,   357,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    82,    80,    81,
     362,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,    83,   119,    84,     0,     0,    82,
      85,     0,   417,     0,     0,   358,     8,     9,    10,    86,
      87,    88,    89,    90,    91,     0,    83,   119,    84,     0,
       0,     0,    85,     0,     0,     0,     0,   363,     0,     0,
       0,    86,   364,    88,    89,    90,    91,     0,    83,   119,
      84,     0,     0,     0,    85,     0,     0,     0,     0,   418,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    82,    80,    81,
       0,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    82,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,   119,    84,     0,
       0,    82,    85,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,     0,    83,     0,
      84,     0,     0,     0,    85,     0,     0,     0,   284,     0,
     285,   196,   422,    86,    87,    88,    89,    90,    91,     0,
      83,     0,    84,     0,     0,     0,    85,     0,     0,     0,
     284,     0,   285,   196,   461,    86,    87,    88,    89,    90,
      91,    74,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    82,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    82,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
      84,     0,     0,    82,    85,     0,     0,     0,   284,     0,
     285,   196,     0,    86,    87,    88,    89,    90,    91,     0,
      83,     0,    84,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,   196,     0,    86,    87,    88,    89,    90,
      91,     0,    83,     0,    84,     0,     0,     0,    85,   248,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    82,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    82,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,    84,     0,     0,    82,    85,     0,     0,     0,
       0,     0,     0,   345,     0,    86,    87,    88,    89,    90,
      91,     0,    83,     0,    84,     0,     0,     0,    85,   468,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,     0,    83,     0,    84,     0,     0,     0,
      85,   470,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    82,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    82,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,    84,     0,     0,    82,    85,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,     0,    83,     0,    84,     0,     0,     0,
     142,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,    51,    83,     0,    84,     0,
       0,     0,   144,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,     0,     0,     0,
       0,     0,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,   317,   272,
       0,     0,   183,     0,     0,     0,     0,     0,    53,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,     1,   204,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,  -274,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   125,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,   182,   272,     0,     1,   183,     0,     0,     0,     0,
       0,    53,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     1,   333,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,     1,   360,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,    29,    30,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   391,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     1,    30,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    26,     0,    27,     0,    28,     0,    30,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,    27,     0,     0,    29,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,   401,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,    27,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      48,    49,    59,    85,   130,    53,    48,    49,    57,    53,
      19,   184,     0,    78,   125,    63,    81,    32,    50,    78,
      78,    63,     3,    78,    48,    49,   370,   131,     3,    84,
     113,    76,     3,    63,   140,     3,    76,    85,    12,    13,
      99,    99,    78,    85,    63,    33,    34,    78,    84,    76,
      78,    39,    40,    41,    83,    43,   134,     3,     3,     3,
     142,    85,   144,     3,   112,    98,   114,     3,    99,   113,
     112,    99,   114,    76,   122,   128,   158,    80,   122,   183,
     129,    83,   112,   131,   114,   133,   134,   125,    97,    14,
      15,   133,   134,   131,   142,    76,   144,   179,   442,   147,
     142,    76,   144,   133,   134,   147,   210,   139,   123,   297,
     148,    86,   127,    84,   133,   134,    84,   223,   142,   157,
     144,   136,   205,   147,    99,    48,     3,    50,   161,   162,
     163,    76,    76,   382,    79,   183,    80,   215,   182,     3,
      98,    86,   130,    83,    76,   183,   319,    83,    80,   202,
     199,    86,     3,    95,    99,   281,    91,    92,   196,    78,
      76,   205,   210,    76,    80,    84,   214,   215,    93,    94,
      86,   275,   210,   215,    76,    76,   214,   288,   282,    80,
       9,    10,    11,   432,   433,   215,   218,   375,    85,   377,
     205,    96,    78,    80,   182,    82,   215,    18,    84,    76,
      38,    39,    40,    80,    77,   243,    77,   245,    77,    86,
      78,    98,    76,   246,    77,    79,   139,    87,    88,    77,
     302,    83,    86,     3,    48,    76,    50,   275,    16,    17,
       3,   279,    98,    71,   282,    86,     6,   275,   426,    78,
      79,   279,    77,    78,   282,    77,    78,    76,    86,    77,
     288,    80,   284,    82,    81,    79,    80,    81,   362,   370,
     292,   310,   319,    81,   452,   453,   454,    78,   168,   169,
     170,   171,    79,   317,    98,    77,    78,    77,   326,    77,
     468,    77,   470,    78,   472,    77,    78,   475,   326,   477,
      77,   329,    77,   281,   342,   218,   378,   379,   380,    81,
     342,    77,    78,    77,    78,   337,   354,   345,    77,    78,
     348,    77,    78,   424,   362,   139,   354,    81,   366,   357,
     335,    77,    78,    77,   362,    77,    78,     3,   366,   317,
      79,   442,   370,   382,   322,   166,   167,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   164,   165,   172,   173,    79,
      76,   284,    76,    76,    76,     3,   414,    99,    99,   292,
       3,    81,    81,   455,   456,   457,   414,    81,    83,   417,
       3,     4,     5,     6,     7,     8,   424,    10,    11,    81,
      81,    77,   440,    81,   218,    79,    81,    99,   440,    81,
     438,    62,    99,   441,   442,    76,    81,    81,    31,    79,
      79,    60,    99,    81,   337,    81,    81,    81,    81,    81,
     440,   174,   246,   178,   175,   123,   176,   350,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   177,   133,
     335,    69,   322,   289,    43,   310,   345,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
     284,    -1,    85,    86,    87,    88,    89,    90,   292,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    99,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    98,    10,    11,    -1,
      -1,    71,    -1,   337,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,   350,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    -1,     3,     4,     5,
       6,     7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,    -1,
      34,    -1,    -1,    81,    38,    39,    40,    85,    86,    87,
      88,    89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,
      76,    -1,    34,    -1,    -1,    81,    38,    39,    40,    85,
      86,    87,    88,    89,    90,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    31,    76,    -1,    -1,    -1,    80,    -1,
      82,    83,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     3,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,     0,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    30,    77,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    98,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    -1,    30,    80,    -1,    -1,    -1,    -1,
      -1,    86,    38,    39,    40,    41,    42,    43,    44,    45,
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
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    71,    -1,    -1,    74,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   128,   129,   132,   133,   134,   135,   141,   144,   145,
     146,   147,   164,   174,   175,   176,     3,    83,    76,    76,
      76,     3,    76,    86,    99,   130,   131,   148,   149,   150,
     129,   129,     3,    83,   129,   129,   129,     0,   175,    83,
       3,   103,   142,   143,     3,     4,     5,     6,     7,     8,
      10,    11,    31,    70,    72,    76,    85,    86,    87,    88,
      89,    90,   101,   102,   104,   105,   108,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   127,   133,   138,   145,   156,   156,   127,   148,    71,
     145,   150,   151,    78,    99,    98,   128,   129,   178,   179,
      76,    80,   149,    83,   136,   137,   138,   164,   142,    98,
      78,    84,    76,   110,    76,   110,   110,    76,    76,   110,
     123,   124,   126,   156,     9,    10,    11,    76,    80,    82,
     112,    86,    91,    92,    87,    88,    12,    13,    14,    15,
      93,    94,    16,    17,    85,    95,    96,    18,    19,    97,
      77,   138,    76,    80,   150,   157,   158,   138,    77,    77,
      78,    77,   145,   150,   131,   148,    83,   124,   159,    83,
     167,   128,   177,     3,    77,   129,   152,   153,   154,   155,
      34,    81,    86,   124,   151,   136,    84,   137,    79,    99,
     139,   140,   148,    78,    84,   127,    84,   143,   156,   156,
     156,   124,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    98,   125,    77,    78,    77,     3,    77,   109,
     124,   126,     3,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   115,   115,   116,   116,   117,   118,   119,   120,
     121,   126,    77,   152,   157,    34,    81,    86,   124,   151,
     158,    76,    80,     6,    80,    82,   159,   160,   161,   162,
     163,     3,    57,    58,    59,    61,    62,    63,    64,    65,
      66,    67,    68,    84,    99,   126,   128,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   167,    76,   148,   150,
     157,    77,    78,    77,    78,   124,   151,    81,    81,    34,
      81,    86,   124,    84,   127,    78,    99,    79,    84,    77,
      77,    77,    78,   124,   124,    83,   112,    77,    78,    81,
      79,    77,    77,   124,   151,    81,    81,    34,    81,   124,
      77,   152,    34,    81,    86,   124,   151,    77,   127,     3,
      78,    84,   159,    98,   163,    79,   127,    79,    76,    76,
      76,   165,    76,     3,    99,    99,    99,   126,    99,    84,
     169,    56,   154,     3,    81,   124,   124,    81,    81,   140,
     127,    58,   106,   107,   156,   160,   124,   123,    81,   124,
     124,    81,    77,   124,   151,    81,    81,    34,    81,   124,
      99,    81,    84,   159,   161,   165,    79,   165,   126,   126,
     126,    62,   128,   170,    99,    99,    81,    81,    79,    77,
      78,    79,    78,    84,    81,    81,    81,   124,   124,    81,
     159,   165,    77,    77,    77,    76,   170,   170,   124,   107,
     124,    84,    81,    81,   165,   165,   165,   126,    77,   126,
      77,   126,    60,    77,   165,    77,   165,    77,   165,    99,
     165,   165
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
     165,   165,   165,   166,   166,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   171,   172,   172,   172,
     172,   172,   172,   173,   173,   173,   173,   173,   174,   174,
     175,   175,   177,   176,   178,   176,   179,   179
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
       1,     1,     1,     3,     4,     3,     2,     3,     1,     2,
       1,     1,     1,     2,     7,     5,     5,     5,     7,     6,
       7,     6,     7,     3,     2,     2,     2,     3,     1,     2,
       1,     1,     0,     5,     0,     4,     1,     2
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
#line 96 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   IdentifierNode *idNode = new IdentifierNode((yyvsp[0].lexeme));
	   (yyval.expression) = idNode;
}
#line 2072 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 99 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2078 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 100 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2084 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 101 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2090 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 102 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2096 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 106 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {		/* includes character_constant */
	   IntegerLiteralNode *intLiteral = new IntegerLiteralNode((yyvsp[0].lexeme));
	   (yyval.expression) = intLiteral;
}
#line 2105 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 109 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      FloatLiteralNode *floatLiteral = new FloatLiteralNode((yyvsp[0].lexeme));
	   (yyval.expression) = floatLiteral;
}
#line 2114 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 112 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {	/* after it has been defined as such */
	   (yyval.expression) = NULL;
}
#line 2122 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 117 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   (yyval.expression) = NULL;
}
#line 2130 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 122 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StringLiteralNode *stringLiteral = new StringLiteralNode((yyvsp[0].lexeme));
	   (yyval.expression) = stringLiteral;
}
#line 2139 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 125 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      StringLiteralNode *stringLiteral = new StringLiteralNode("__func__");
	   (yyval.expression) = stringLiteral;
}
#line 2148 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 131 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2154 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 145 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2160 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 146 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ArrayReferenceNode *node = new ArrayReferenceNode((yyvsp[-3].expression), (yyvsp[-1].expression));
	   (yyval.expression) = node;
}
#line 2169 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 149 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	FunctionCallNode *node = new FunctionCallNode((yyvsp[-2].expression), NULL);
   	(yyval.expression) = node;
}
#line 2178 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 152 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	FunctionCallNode *node = new FunctionCallNode((yyvsp[-3].expression), (ArgumentListNode*)(yyvsp[-1].expression));
   	(yyval.expression) = node;
}
#line 2187 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 155 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      AttributeReferenceNode *node = new AttributeReferenceNode((yyvsp[-2].expression), ".", (yyvsp[0].lexeme));
      (yyval.expression) = node;
}
#line 2196 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 158 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      AttributeReferenceNode *node = new AttributeReferenceNode((yyvsp[-2].expression), "->", (yyvsp[0].lexeme));
      (yyval.expression) = node;
}
#line 2205 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 161 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PostUnaryExpressionNode *node = new PostUnaryExpressionNode((yyvsp[-1].expression), "++");
   	(yyval.expression) = node;
}
#line 2214 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 164 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PostUnaryExpressionNode *node = new PostUnaryExpressionNode((yyvsp[-1].expression), "--");
   	(yyval.expression) = node;
}
#line 2223 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 167 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2229 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 168 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2235 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 172 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ArgumentListNode *node = new ArgumentListNode((yyvsp[0].expression), NULL);
   	(yyval.expression) = node;
}
#line 2244 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 175 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ArgumentListNode *node = (ArgumentListNode*)(yyvsp[-2].expression); 
     	ArgumentListNode *arg = new ArgumentListNode((yyvsp[0].expression), NULL);
   	(yyval.expression) = node;
   	ArgumentListNode *argList = node;
   	while(argList->nextExpression()!=NULL){
   	   argList = argList->nextExpression();
      }
      argList->nextExpression(arg);
}
#line 2259 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 187 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2265 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 188 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PreUnaryExpressionNode *node = new PreUnaryExpressionNode("++", (yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2274 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 191 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PreUnaryExpressionNode *node = new PreUnaryExpressionNode("--", (yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2283 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 194 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PreUnaryExpressionNode *node = new PreUnaryExpressionNode((yyvsp[-1].lexeme), (yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2292 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 197 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[0].expression));
      SizeOfNode *node = new SizeOfNode(expr);
      (yyval.expression) = node;
}
#line 2302 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 201 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      SizeOfNode *node = new SizeOfNode((yyvsp[-1].declaration));
      (yyval.expression) = node;
}
#line 2311 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 204 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2317 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 208 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"&"; }
#line 2323 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 209 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"*"; }
#line 2329 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 210 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"+"; }
#line 2335 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 211 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"-"; }
#line 2341 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 212 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"~"; }
#line 2347 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 213 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"!"; }
#line 2353 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 217 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2359 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 218 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	CastNode *node = new CastNode((yyvsp[-2].declaration),(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2368 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 224 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2374 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 225 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"*",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2383 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 228 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"/",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2392 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 231 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"%",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2401 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 237 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2407 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 238 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"+",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2416 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 241 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"-",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2425 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 247 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2431 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 248 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"<<",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2440 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 251 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),">>",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2449 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 257 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2455 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 258 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"<",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2464 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 261 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),">",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2473 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 264 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"<=",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2482 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 267 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),">=",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2491 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 273 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2497 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 274 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"==",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2506 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 277 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"!=",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2515 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 283 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2521 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 284 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"&",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2530 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 290 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2536 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 291 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"^",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2545 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 297 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2551 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 298 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"|",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2560 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 304 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2566 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 305 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"&&",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2575 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 311 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2581 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 312 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"||",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2590 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 318 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2596 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 319 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ConditionalExpressionNode *node = new ConditionalExpressionNode((yyvsp[-4].expression),(yyvsp[-2].expression),(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2605 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 325 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2611 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 326 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),(yyvsp[-1].lexeme),(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2620 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 332 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"="; }
#line 2626 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 333 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"*="; }
#line 2632 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 334 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"/="; }
#line 2638 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 335 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"%="; }
#line 2644 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 336 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"+="; }
#line 2650 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 337 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"-="; }
#line 2656 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 338 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"<<="; }
#line 2662 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 339 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)">>="; }
#line 2668 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 340 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"&="; }
#line 2674 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 341 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"^="; }
#line 2680 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 342 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"|="; }
#line 2686 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 346 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ExpressionListNode *node = new ExpressionListNode((yyvsp[0].expression), NULL);
   	(yyval.expression) = node;
}
#line 2695 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 349 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      //TODO solve list inversion
   	ExpressionListNode *node = new ExpressionListNode((yyvsp[0].expression), (ExpressionListNode*)(yyvsp[-2].expression)); 
   	(yyval.expression) = node;
}
#line 2705 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 356 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2711 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 360 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationSpecifierNode *node = new DeclarationSpecifierNode((yyvsp[-1].type));
      (yyval.declaration) = node;
}
#line 2720 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 363 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationSpecifierNode *specifier = new DeclarationSpecifierNode((yyvsp[-2].type));
      VariableDeclarationNode *node = new VariableDeclarationNode(specifier, (yyvsp[-1].declaration));
      (yyval.declaration) = node;
      /*
      IdentifierInformation *idInfo;
      while( (idInfo = idInfoBuilder.build())!=NULL ){
         printf("NEW VARIABLE ID: %s\n", idInfo->identifier().c_str());
         delete idInfo;
      }
      */
}
#line 2737 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 374 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      
}
#line 2745 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 379 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
      (yyval.type) = node;
}
#line 2754 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 382 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 2763 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 385 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 2772 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 388 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 2781 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 391 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 2790 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 394 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 2799 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 397 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 2808 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 400 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 2817 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 408 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationListNode *node = new DeclarationListNode((yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 2826 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 411 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationListNode *node = (DeclarationListNode *)(yyvsp[-2].declaration);
	   (yyval.declaration) = node;
	   DeclarationListNode *decl = node;
	   while(decl->nextDeclaration()!=NULL){
	      decl = decl->nextDeclaration();
      }
      decl->nextDeclaration(new DeclarationListNode((yyvsp[0].declaration), NULL));
}
#line 2840 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 422 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   AssignmentNode *node = new AssignmentNode((yyvsp[-2].declaration), (yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 2849 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 425 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[0].declaration); }
#line 2855 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 430 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_EXTERN);
	   (yyval.type) = node;
}
#line 2864 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 433 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
	   (yyval.type) = node;
}
#line 2873 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 436 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_THREAD_LOCAL);
	   (yyval.type) = node;
}
#line 2882 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 439 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_AUTO);
	   (yyval.type) = node;
}
#line 2891 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 442 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_REGISTER);
	   (yyval.type) = node;
}
#line 2900 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 448 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_VOID);
	   (yyval.type) = node;
}
#line 2909 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 451 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_CHAR);
	   (yyval.type) = node;
}
#line 2918 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 454 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_SHORT);
	   (yyval.type) = node;
}
#line 2927 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 457 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_INT);
	   (yyval.type) = node;
}
#line 2936 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 460 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_LONG);
	   (yyval.type) = node;
}
#line 2945 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 463 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_FLOAT);
	   (yyval.type) = node;
}
#line 2954 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 466 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_DOUBLE);
	   (yyval.type) = node;
}
#line 2963 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 469 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_SIGNED);
	   (yyval.type) = node;
}
#line 2972 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 472 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_UNSIGNED);
	   (yyval.type) = node;
}
#line 2981 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 475 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_BOOL);
	   (yyval.type) = node;
}
#line 2990 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 478 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_COMPLEX);
	   (yyval.type) = node;
}
#line 2999 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 481 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {	  	/* non-mandated extension */
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_IMAGINARY);
	   (yyval.type) = node;
}
#line 3008 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 485 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 3014 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 491 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeNode *node = NULL;
      if(strcmp((yyvsp[-3].lexeme),"struct")==0){
         node = new StructTypeNode("", (yyvsp[-1].declaration));
      }else if(strcmp((yyvsp[-3].lexeme),"union")==0){
         node = new UnionTypeNode("", (yyvsp[-1].declaration));
      }
      (yyval.type) = node;    
}
#line 3028 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 499 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeNode *node = NULL;
      if(strcmp((yyvsp[-4].lexeme),"struct")==0){
         node = new StructTypeNode((yyvsp[-3].lexeme), (yyvsp[-1].declaration));
      }else if(strcmp((yyvsp[-4].lexeme),"union")==0){
         node = new UnionTypeNode((yyvsp[-3].lexeme), (yyvsp[-1].declaration));
      }
      (yyval.type) = node;      
}
#line 3042 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 507 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeNode *node = NULL;
      if(strcmp((yyvsp[-1].lexeme),"struct")==0){
         node = new StructTypeNode((yyvsp[0].lexeme), NULL);
      }else if(strcmp((yyvsp[-1].lexeme),"union")==0){
         node = new UnionTypeNode((yyvsp[0].lexeme), NULL);
      }
      (yyval.type) = node;
}
#line 3056 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 518 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"struct"; }
#line 3062 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 519 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"union"; }
#line 3068 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 523 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationSequenceNode *node = new DeclarationSequenceNode((yyvsp[0].declaration), NULL);
      (yyval.declaration) = node;
}
#line 3077 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 526 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationSequenceNode *node = (DeclarationSequenceNode*)(yyvsp[-1].declaration); 
     	DeclarationSequenceNode *decl = new DeclarationSequenceNode((yyvsp[0].declaration), NULL);
   	(yyval.declaration) = node;
   	DeclarationSequenceNode *declList = node;
   	while(declList->nextDeclaration()!=NULL){
   	   declList = declList->nextDeclaration();
      }
      declList->nextDeclaration(decl);
}
#line 3092 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 538 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {	/* for anonymous struct/union */
      DeclarationSpecifierNode *specifier = new DeclarationSpecifierNode((yyvsp[-1].type));
	   AttributeDeclarationNode *node = new AttributeDeclarationNode(specifier, NULL);
	   (yyval.declaration) = node;
}
#line 3102 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 542 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationSpecifierNode *specifier = new DeclarationSpecifierNode((yyvsp[-2].type));
	   AttributeDeclarationNode *node = new AttributeDeclarationNode(specifier, (yyvsp[-1].declaration));
	   (yyval.declaration) = node;
}
#line 3112 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 546 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = NULL; }
#line 3118 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 550 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 3127 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 553 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 3136 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 556 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 3145 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 559 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 3154 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 565 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationListNode *node = new DeclarationListNode((yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3163 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 568 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationListNode *node = (DeclarationListNode*)(yyvsp[-2].declaration); 
     	DeclarationListNode *decl = new DeclarationListNode((yyvsp[0].declaration), NULL);
   	(yyval.declaration) = node;
   	DeclarationListNode *declList = node;
   	while(declList->nextDeclaration()!=NULL){
   	   declList = declList->nextDeclaration();
      }
      declList->nextDeclaration(decl);
}
#line 3178 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 580 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ExpressionDeclarationNode *init = new ExpressionDeclarationNode((yyvsp[0].expression));
	   AttributeInitializerNode *node = new AttributeInitializerNode(NULL, init);
	   (yyval.declaration) = node;
}
#line 3188 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 584 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ExpressionDeclarationNode *init = new ExpressionDeclarationNode((yyvsp[0].expression));
	   AttributeInitializerNode *node = new AttributeInitializerNode((yyvsp[-2].declaration), init);
	   (yyval.declaration) = node;
}
#line 3198 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 588 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   AttributeInitializerNode *node = new AttributeInitializerNode((yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3207 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 616 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_CONST);
	   (yyval.type) = node;
}
#line 3216 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 619 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_RESTRICT);
	   (yyval.type) = node;
}
#line 3225 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 622 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_VOLATILE);
	   (yyval.type) = node;
}
#line 3234 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 625 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_ATOMIC);
	   (yyval.type) = node;
}
#line 3243 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 631 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   FunctionSpecifierNode *node = new FunctionSpecifierNode(TYPE_INLINE);
	   (yyval.type) = node;
}
#line 3252 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 634 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      FunctionSpecifierNode *node = new FunctionSpecifierNode(TYPE_NORETURN);
	   (yyval.type) = node;
}
#line 3261 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 645 "src/parser/yacc_c11.y" /* yacc.c:1646  */
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
#line 3279 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 657 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclaratorNode *node = new DeclaratorNode((yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3288 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 663 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      IdentifierDeclarationNode *node = new IdentifierDeclarationNode((yyvsp[0].lexeme));
      (yyval.declaration) = node;
      /*
      if(symbolTable.isAtCurrentScope($1)){
         printf("Identifier %s is already defined\n", $1);
         yyerror("Duplicate definition.\n");
      }
      printf("adding ID %s to symtab in scope %d.\n", $1, symbolTable.scopeCount());

      //idInfoBuilder.identifier($1);
      idInfoBuilder.addIdentifier($1);
      //printf("NEW ID: %s %s\n",idInfoBuilder.idType().c_str(), idInfoBuilder.identifier().c_str());
      IdentifierInformation *idInfo = new IdentifierInformation($1);
      //idInfo->identifier($1);
      symbolTable.insertAtCurrentScope(idInfo);
      */
      
}
#line 3312 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 681 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[-1].declaration); }
#line 3318 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 682 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ArrayDeclarationNode *node = new ArrayDeclarationNode(NULL, (yyvsp[-2].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3327 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 685 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ArrayDeclarationNode *node = new ArrayDeclarationNode(NULL, (yyvsp[-3].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3336 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 688 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      StorageSpecifierNode *storageSpecifier = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
      TypeCompositionNode *qualifiers = new TypeCompositionNode(storageSpecifier, (TypeCompositionNode *)(yyvsp[-2].type));
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, (yyvsp[-5].declaration), expr);
      (yyval.declaration) = node;
}
#line 3348 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 694 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      StorageSpecifierNode *storageSpecifier = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
      TypeCompositionNode *qualifiers = new TypeCompositionNode(storageSpecifier, NULL);
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
	   ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, (yyvsp[-4].declaration), expr);
	   (yyval.declaration) = node;
}
#line 3360 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 700 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeCompositionNode *qualifiers = (TypeCompositionNode *)(yyvsp[-2].type);
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, (yyvsp[-4].declaration), NULL);
      (yyval.declaration) = node;
}
#line 3370 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 704 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      StorageSpecifierNode *storageSpecifier = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
      TypeCompositionNode *qualifiers = new TypeCompositionNode(storageSpecifier, (TypeCompositionNode *)(yyvsp[-3].type));
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, (yyvsp[-5].declaration), expr);
      (yyval.declaration) = node;
}
#line 3382 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 710 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeCompositionNode *qualifiers = (TypeCompositionNode *)(yyvsp[-2].type);
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, (yyvsp[-4].declaration), expr);
      (yyval.declaration) = node;
}
#line 3393 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 715 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeCompositionNode *qualifiers = (TypeCompositionNode *)(yyvsp[-1].type);
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, (yyvsp[-3].declaration), NULL);
      (yyval.declaration) = node;
}
#line 3403 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 719 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
	   ArrayDeclarationNode *node = new ArrayDeclarationNode(NULL, (yyvsp[-3].declaration), expr);
	   (yyval.declaration) = node;
}
#line 3413 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 723 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   FunctionDeclaratorNode *node = new FunctionDeclaratorNode((yyvsp[-3].declaration), (ParameterListNode *)(yyvsp[-1].declaration));
	   (yyval.declaration) = node;
}
#line 3422 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 726 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   FunctionDeclaratorNode *node = new FunctionDeclaratorNode((yyvsp[-2].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3431 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 733 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PointerDeclaratorNode *node = new PointerDeclaratorNode((TypeCompositionNode *)(yyvsp[-1].type), (yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3440 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 736 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PointerDeclaratorNode *node = new PointerDeclaratorNode((TypeCompositionNode *)(yyvsp[0].type), NULL);
	   (yyval.declaration) = node;
}
#line 3449 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 739 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PointerDeclaratorNode *node = new PointerDeclaratorNode(NULL, (yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3458 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 742 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PointerDeclaratorNode *node = new PointerDeclaratorNode(NULL, NULL);
	   (yyval.declaration) = node;
}
#line 3467 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 748 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 3476 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 751 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), (TypeCompositionNode *)(yyvsp[-1].type));
	   (yyval.type) = node;
}
#line 3485 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 758 "src/parser/yacc_c11.y" /* yacc.c:1646  */
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
#line 3500 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 767 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[0].declaration); }
#line 3506 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 771 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ParameterListNode *node = new ParameterListNode((yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3515 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 774 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ParameterListNode *node = (ParameterListNode *)(yyvsp[-2].declaration);
	   (yyval.declaration) = node;
	   ParameterListNode *parameter = node;
	   while(parameter->nextParameter()!=NULL){
	      parameter = parameter->nextParameter();
      }
      parameter->nextParameter(new ParameterListNode((yyvsp[0].declaration), NULL));
}
#line 3529 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 785 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ParameterDeclarationNode *node = new ParameterDeclarationNode((yyvsp[-1].type), (yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3538 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 788 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ParameterDeclarationNode *node = new ParameterDeclarationNode((yyvsp[-1].type), (yyvsp[0].declaration));
	   (yyval.declaration) = node;      
}
#line 3547 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 791 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ParameterDeclarationNode *node = new ParameterDeclarationNode((yyvsp[0].type), NULL);
	   (yyval.declaration) = node;      
}
#line 3556 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 802 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationSpecifierNode *specifier = new DeclarationSpecifierNode((yyvsp[-1].type));
      TypeDeclarationNode *node = new TypeDeclarationNode(specifier, (yyvsp[0].declaration));
      (yyval.declaration) = node;
}
#line 3566 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 806 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationSpecifierNode *specifier = new DeclarationSpecifierNode((yyvsp[0].type));
      TypeDeclarationNode *node = new TypeDeclarationNode(specifier, NULL);
      (yyval.declaration) = node;
}
#line 3576 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 814 "src/parser/yacc_c11.y" /* yacc.c:1646  */
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
#line 3594 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 826 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclaratorNode *node = new DeclaratorNode((yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3603 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 829 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclaratorNode *node = new DeclaratorNode((yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3612 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 835 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[-1].declaration); }
#line 3618 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 836 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ArrayDeclarationNode *node = new ArrayDeclarationNode(NULL, NULL, NULL);
	   (yyval.declaration) = node;
}
#line 3627 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 839 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ArrayDeclarationNode *node = new ArrayDeclarationNode(NULL, NULL, NULL);
	   (yyval.declaration) = node;
}
#line 3636 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 842 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      StorageSpecifierNode *storageSpecifier = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
      TypeCompositionNode *qualifiers = new TypeCompositionNode(storageSpecifier, (TypeCompositionNode *)(yyvsp[-2].type));
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, NULL, expr);
      (yyval.declaration) = node;
}
#line 3648 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 848 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      StorageSpecifierNode *storageSpecifier = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
      TypeCompositionNode *qualifiers = new TypeCompositionNode(storageSpecifier, NULL);
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
	   ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, NULL, expr);
	   (yyval.declaration) = node;
}
#line 3660 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 854 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      StorageSpecifierNode *storageSpecifier = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
      TypeCompositionNode *qualifiers = new TypeCompositionNode(storageSpecifier, (TypeCompositionNode *)(yyvsp[-3].type));
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, NULL, expr);
      (yyval.declaration) = node;
}
#line 3672 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 860 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeCompositionNode *qualifiers = (TypeCompositionNode *)(yyvsp[-2].type);
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, NULL, expr);
      (yyval.declaration) = node;
}
#line 3683 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 865 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeCompositionNode *qualifiers = (TypeCompositionNode *)(yyvsp[-1].type);
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, NULL, NULL);
      (yyval.declaration) = node;
}
#line 3693 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 869 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
	   ArrayDeclarationNode *node = new ArrayDeclarationNode(NULL, NULL, expr);
	   (yyval.declaration) = node;
}
#line 3703 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 873 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ArrayDeclarationNode *node = new ArrayDeclarationNode(NULL, (yyvsp[-2].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3712 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 876 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ArrayDeclarationNode *node = new ArrayDeclarationNode(NULL, (yyvsp[-3].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3721 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 879 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      StorageSpecifierNode *storageSpecifier = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
      TypeCompositionNode *qualifiers = new TypeCompositionNode(storageSpecifier, (TypeCompositionNode *)(yyvsp[-2].type));
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, (yyvsp[-5].declaration), expr);
      (yyval.declaration) = node;
}
#line 3733 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 885 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      StorageSpecifierNode *storageSpecifier = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
      TypeCompositionNode *qualifiers = new TypeCompositionNode(storageSpecifier, NULL);
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
	   ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, (yyvsp[-4].declaration), expr);
	   (yyval.declaration) = node;
}
#line 3745 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 891 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeCompositionNode *qualifiers = (TypeCompositionNode *)(yyvsp[-2].type);
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, (yyvsp[-4].declaration), expr);
      (yyval.declaration) = node;
}
#line 3756 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 896 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      StorageSpecifierNode *storageSpecifier = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
      TypeCompositionNode *qualifiers = new TypeCompositionNode(storageSpecifier, (TypeCompositionNode *)(yyvsp[-3].type));
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, (yyvsp[-5].declaration), expr);
      (yyval.declaration) = node;
}
#line 3768 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 902 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeCompositionNode *qualifiers = (TypeCompositionNode *)(yyvsp[-1].type);
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, (yyvsp[-3].declaration), NULL);
      (yyval.declaration) = node;
}
#line 3778 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 906 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode((yyvsp[-1].expression));
	   ArrayDeclarationNode *node = new ArrayDeclarationNode(NULL, (yyvsp[-3].declaration), expr);
	   (yyval.declaration) = node;
}
#line 3788 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 910 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   FunctionDeclaratorNode *node = new FunctionDeclaratorNode(NULL, NULL);
	   (yyval.declaration) = node;
}
#line 3797 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 913 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   FunctionDeclaratorNode *node = new FunctionDeclaratorNode(NULL, (ParameterListNode *)(yyvsp[-1].declaration));
	   (yyval.declaration) = node;
}
#line 3806 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 916 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   FunctionDeclaratorNode *node = new FunctionDeclaratorNode((yyvsp[-2].declaration), NULL);
	   (yyval.declaration) = node;      
}
#line 3815 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 919 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   FunctionDeclaratorNode *node = new FunctionDeclaratorNode((yyvsp[-3].declaration), (ParameterListNode *)(yyvsp[-1].declaration));
	   (yyval.declaration) = node;
}
#line 3824 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 927 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ExpressionDeclarationNode *node = new ExpressionDeclarationNode((yyvsp[0].expression));
	   (yyval.declaration) = node;
}
#line 3833 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 958 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3839 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 959 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3845 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 960 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3851 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 961 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3857 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 962 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3863 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 963 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3869 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 967 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   LabeledStatementNode *node = new LabeledStatementNode((yyvsp[-2].lexeme), (yyvsp[0].statement));
	   (yyval.statement) = node;
}
#line 3878 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 970 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   CaseStatementNode *node = new CaseStatementNode((yyvsp[-2].expression), (yyvsp[0].statement));
	   (yyval.statement) = node;
}
#line 3887 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 973 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   CaseStatementNode *node = new CaseStatementNode(NULL, (yyvsp[0].statement));
	   (yyval.statement) = node;
}
#line 3896 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 979 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = NULL; }
#line 3902 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 980 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[-1].statement); }
#line 3908 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 984 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   CompoundStatementNode *node = new CompoundStatementNode((yyvsp[0].statement), NULL);
	   (yyval.statement) = node;
}
#line 3917 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 987 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   CompoundStatementNode *node = (CompoundStatementNode*)(yyvsp[-1].statement); 
     	CompoundStatementNode *stmt = new CompoundStatementNode((yyvsp[0].statement), NULL);
   	(yyval.statement) = node;
   	CompoundStatementNode *stmtList = node;
   	while(stmtList->nextStatement()!=NULL){
   	   stmtList = stmtList->nextStatement();
      }
      stmtList->nextStatement(stmt);
}
#line 3932 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 999 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationStatementNode *node = new DeclarationStatementNode((yyvsp[0].declaration));
	   (yyval.statement) = node;
}
#line 3941 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1002 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3947 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1006 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = NULL; }
#line 3953 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1007 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { 
	   ExpressionStatementNode *node = new ExpressionStatementNode((yyvsp[-1].expression));
	   (yyval.statement) = node;
}
#line 3962 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1013 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      IfNode *node = new IfNode((yyvsp[-4].expression), (yyvsp[-2].statement), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3971 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1016 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      IfNode *node = new IfNode((yyvsp[-2].expression), (yyvsp[0].statement), new SkipNode());
      (yyval.statement) = node;
}
#line 3980 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1019 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      SwitchNode *node = new SwitchNode((yyvsp[-2].expression), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3989 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1025 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      WhileNode *node = new WhileNode((yyvsp[-2].expression), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3998 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1028 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DoWhileNode *node = new DoWhileNode((yyvsp[-5].statement), (yyvsp[-2].expression));
      (yyval.statement) = node;
}
#line 4007 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1031 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ForNode *node = new ForNode((yyvsp[-3].statement), (ExpressionStatementNode*)(yyvsp[-2].statement), NULL, (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 4016 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1034 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ForNode *node = new ForNode((yyvsp[-4].statement), (ExpressionStatementNode*)(yyvsp[-3].statement), (yyvsp[-2].expression), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 4025 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1037 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationStatementNode *init = new DeclarationStatementNode((yyvsp[-3].declaration));
      ForNode *node = new ForNode(init,(ExpressionStatementNode*) (yyvsp[-2].statement), NULL, (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 4035 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1041 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationStatementNode *init = new DeclarationStatementNode((yyvsp[-4].declaration));
      ForNode *node = new ForNode(init, (ExpressionStatementNode*)(yyvsp[-3].statement), (yyvsp[-2].expression), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 4045 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1048 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      GotoNode *node = new GotoNode((yyvsp[-1].lexeme));
      (yyval.statement) = node;
}
#line 4054 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1051 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ContinueNode *node = new ContinueNode();
      (yyval.statement) = node;
}
#line 4063 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1054 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      BreakNode *node = new BreakNode();
      (yyval.statement) = node;
}
#line 4072 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1057 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ReturnNode *node = new ReturnNode(NULL);
      (yyval.statement) = node;
}
#line 4081 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1060 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ReturnNode *node = new ReturnNode((yyvsp[-1].expression));
      (yyval.statement) = node;
}
#line 4090 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1066 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationSequenceNode *node = new DeclarationSequenceNode((yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
	   astRoot = node;
}
#line 4100 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1070 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationSequenceNode *node = (DeclarationSequenceNode*)(yyvsp[-1].declaration); 
     	DeclarationSequenceNode *decl = new DeclarationSequenceNode((yyvsp[0].declaration), NULL);
   	(yyval.declaration) = node;
   	astRoot = node; //update AST root
   	DeclarationSequenceNode *declList = node;
   	while(declList->nextDeclaration()!=NULL){
   	   declList = declList->nextDeclaration();
      }
      declList->nextDeclaration(decl);
}
#line 4116 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1083 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[0].declaration); }
#line 4122 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1084 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[0].declaration); }
#line 4128 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1088 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {printf("defining function.\n");}
#line 4134 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1088 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      FunctionDeclarationNode *node = new FunctionDeclarationNode((yyvsp[-4].type), (yyvsp[-3].declaration), (yyvsp[0].statement));
      (yyval.declaration) = node;	   
}
#line 4143 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1091 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {printf("defining function.\n");}
#line 4149 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1091 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      FunctionDeclarationNode *node = new FunctionDeclarationNode((yyvsp[-3].type), (yyvsp[-2].declaration), (yyvsp[0].statement));
      (yyval.declaration) = node;
}
#line 4158 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;


#line 4162 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
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
#line 1101 "src/parser/yacc_c11.y" /* yacc.c:1906  */

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

