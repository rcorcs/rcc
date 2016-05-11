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

// Analisador léxico que será chamado pelo Parser.
int yylex();

// Contagem e saída de erros.
void yyerror(const char *);
 

#line 78 "src/parser/yy_parser.cpp" /* yacc.c:339  */

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

#line 112 "src/parser/yy_parser.cpp" /* yacc.c:355  */

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
#line 18 "src/parser/yacc_c11.y" /* yacc.c:355  */

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

#line 216 "src/parser/yy_parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 231 "src/parser/yy_parser.cpp" /* yacc.c:358  */

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
#define YYLAST   2499

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  480

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
       0,    84,    84,    87,    88,    89,    90,    94,    97,   100,
     105,   110,   113,   119,   123,   124,   128,   129,   133,   134,
     137,   140,   143,   144,   145,   148,   151,   152,   156,   159,
     166,   167,   170,   173,   176,   177,   178,   182,   183,   184,
     185,   186,   187,   191,   192,   198,   199,   202,   205,   211,
     212,   215,   221,   222,   225,   231,   232,   235,   238,   241,
     247,   248,   251,   257,   258,   264,   265,   271,   272,   278,
     279,   285,   286,   292,   293,   299,   300,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   320,   323,
     330,   334,   335,   336,   340,   341,   342,   345,   348,   351,
     354,   357,   360,   361,   365,   368,   374,   377,   381,   382,
     383,   384,   385,   386,   390,   393,   396,   399,   402,   405,
     408,   411,   414,   417,   420,   423,   426,   427,   428,   429,
     433,   441,   449,   460,   461,   465,   468,   474,   477,   482,
     486,   489,   492,   495,   501,   504,   510,   513,   516,   522,
     523,   524,   525,   526,   530,   531,   535,   536,   540,   544,
     547,   550,   553,   559,   562,   568,   569,   573,   577,   583,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   602,   603,   604,   605,   609,   610,   615,
     616,   620,   621,   625,   626,   627,   631,   632,   636,   637,
     641,   642,   643,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   671,   672,   673,   677,   678,   679,
     680,   684,   688,   689,   693,   694,   698,   702,   703,   704,
     705,   706,   707,   711,   714,   717,   723,   724,   728,   731,
     737,   740,   744,   745,   751,   754,   757,   763,   766,   769,
     772,   775,   779,   786,   789,   792,   795,   798,   804,   805,
     809,   810,   814,   815,   819,   820
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
  "function_definition", "declaration_list", YY_NULLPTR
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

#define YYPACT_NINF -370

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-370)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2229,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,    26,   -43,   -35,  -370,    -8,
    -370,  -370,    28,  2319,  2319,  -370,    39,  -370,  -370,  2319,
    2319,  2319,  -370,  1816,  -370,  -370,   -56,    46,   901,  2428,
    1649,  -370,    45,   162,  -370,   -40,  -370,  1915,   -46,    79,
    -370,  -370,     2,  2357,  -370,  -370,  -370,  -370,  -370,    46,
    -370,   -45,    10,  -370,  -370,  -370,  -370,  -370,  -370,  1671,
    1693,  1693,  -370,    61,    71,   901,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,   163,  -370,  1649,  -370,
     -67,   -30,   156,   125,   209,    92,    64,    65,   166,    20,
    -370,   121,  2428,   109,  2428,   128,   155,   160,   165,  -370,
    -370,  -370,   162,    45,  -370,   457,  1407,  -370,    28,  -370,
    2131,  1869,   989,   -46,  2357,  2031,  -370,    72,  -370,   104,
    1649,    29,  -370,   901,  -370,   901,  -370,  -370,  2428,  1649,
     450,  -370,  -370,   150,   169,   251,  -370,  -370,  1429,  1649,
     253,  -370,  1649,  1649,  1649,  1649,  1649,  1649,  1649,  1649,
    1649,  1649,  1649,  1649,  1649,  1649,  1649,  1649,  1649,  1649,
    1649,  -370,  -370,  1982,  1011,   -20,  -370,    74,  -370,  -370,
    -370,   259,  -370,  -370,  -370,  -370,   174,   195,  1649,   197,
     206,   220,   221,   721,   222,   282,   200,   202,   765,  -370,
    -370,    50,  -370,  -370,  -370,  -370,   578,  -370,  -370,  -370,
    -370,  -370,  1385,  -370,  -370,  -370,  -370,  -370,  -370,    76,
     227,   228,  -370,   157,  1253,  -370,   224,   226,  1033,  2078,
    -370,  -370,  1649,  -370,    66,  -370,   231,    32,  -370,  -370,
    -370,  -370,   234,   238,   242,   249,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  1649,  -370,  1649,
    1517,  -370,  -370,   159,  -370,   136,  -370,  -370,  -370,  -370,
     -67,   -67,   -30,   -30,   156,   156,   156,   156,   125,   125,
     209,    92,    64,    65,   166,   171,  -370,   256,   257,  1253,
    -370,   254,   258,  1121,    74,  2183,  1143,   260,   721,   261,
     721,  1649,  1649,  1649,   268,   668,   239,  -370,  -370,  -370,
      67,  -370,  -370,  -370,  1649,   340,  -370,   129,  1407,   101,
    -370,  1759,  -370,    77,  -370,  -370,  2275,  -370,   341,   264,
    1253,  -370,  -370,  1649,  -370,   265,   267,  -370,  -370,   117,
    -370,  1649,  -370,   266,   266,  -370,  2394,  -370,  -370,  1385,
    -370,  -370,  1649,  -370,  1649,  -370,  -370,   270,  1253,  -370,
    -370,  1649,  -370,   274,  -370,   279,  1253,  -370,   276,   277,
    1165,   262,  -370,   721,  -370,   175,   182,   184,   283,   811,
     811,  -370,  -370,   281,  -370,  1275,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,   284,   285,  -370,  -370,  -370,  -370,
     289,   186,  -370,   290,   131,  -370,  -370,  -370,   291,   292,
    -370,  -370,   293,  1253,  -370,  -370,  1649,  -370,   295,  -370,
    -370,   721,   721,   721,  1649,  1539,  1561,  -370,  -370,  -370,
    1407,  -370,  -370,  1649,  -370,  2394,  1649,  1297,  -370,  -370,
    -370,  -370,   296,   297,  -370,   300,  -370,  -370,   190,   721,
     193,   721,   201,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
     721,   271,  -370,   721,  -370,   721,  -370,  -370,  -370,  -370
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
     187,   185,   184,     0,    92,     0,     0,   274,     0,   273,
       0,     0,     0,   167,     0,     0,   135,     0,   139,     0,
       0,     0,   149,     0,    34,     0,    31,    32,     0,     0,
      43,    75,    88,     0,     0,     0,    24,    25,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,   140,     0,     0,   201,   198,   202,   142,   165,
     158,     0,   170,   188,   183,   105,   107,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   246,
     252,     0,   250,   251,   237,   238,     0,   248,   239,   240,
     241,   242,     0,   226,   106,   275,   272,   196,   181,   195,
       0,   190,   191,     0,     0,   171,    38,     0,     0,     0,
     130,   136,     0,   137,     0,   144,   148,     0,   151,   156,
     150,   155,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    77,     0,     5,     0,
       0,    23,    20,     0,    28,     0,    22,    46,    47,    48,
      50,    51,    53,    54,    58,    59,    56,    57,    61,    62,
      64,    66,    68,    70,    72,     0,   220,     0,     0,     0,
     204,    38,     0,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   264,   265,   266,
       0,   253,   247,   249,     0,     0,   228,     0,     0,     0,
     232,     0,   193,   201,   194,   180,     0,   182,     0,     0,
       0,   172,   179,     0,   178,    38,     0,   131,   146,     0,
     138,     0,   152,    35,     0,    36,     0,    76,    89,     0,
      44,    21,     0,    19,     0,   221,   203,     0,     0,   205,
     211,     0,   210,     0,   222,     0,     0,   212,    38,     0,
       0,     0,   243,     0,   245,     0,     0,     0,     0,     0,
       0,   263,   267,     0,   235,     0,   224,   227,   231,   233,
     189,   192,   197,   174,     0,     0,   175,   177,   145,   147,
       0,     0,    14,     0,     0,    29,    74,   207,     0,     0,
     209,   223,     0,     0,   213,   219,     0,   218,     0,   236,
     244,     0,     0,     0,     0,     0,     0,   234,   225,   230,
       0,   173,   176,     0,    13,     0,     0,     0,    26,   206,
     208,   215,     0,     0,   216,   255,   256,   257,     0,     0,
       0,     0,     0,   229,    17,    15,    16,    27,   214,   217,
       0,     0,   261,     0,   259,     0,   254,   258,   262,   260
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -370,  -370,  -370,  -370,  -370,  -370,  -370,   -74,  -370,  -370,
     243,  -370,   -29,   122,   127,    52,   116,   188,   203,   205,
     207,   210,  -370,   -38,   -59,  -370,   -82,   -22,   -49,    11,
    -370,   263,  -370,   -42,  -370,  -370,   246,  -115,   -23,  -370,
      41,  -370,   322,  -124,  -370,   -48,  -370,  -370,   -18,   -50,
     -51,  -119,  -113,  -370,    56,  -370,    -2,   -91,  -169,  -122,
      34,  -369,  -370,    73,   -27,   -33,  -370,   -34,  -370,   178,
    -260,  -370,  -370,  -370,  -370,   352,  -370,  -370
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    71,    94,    95,   411,   412,    96,   273,
     150,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   151,   152,   267,   211,   111,    31,   128,
      55,    56,    33,    34,    35,    36,   135,   136,   113,   244,
     245,    37,    72,    73,    38,    39,    40,    41,   118,    58,
      59,   122,   297,   231,   232,   233,   413,   298,   187,   326,
     327,   328,   329,   330,    42,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    43,    44,    45,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     114,   114,   121,   153,   224,   120,   112,   112,   127,   133,
     110,    32,   110,   238,    57,   114,   304,   251,   230,   162,
     241,   112,   186,   129,   163,   164,   440,    69,   117,    46,
     131,    51,    70,    48,   132,    70,   138,   114,   123,   179,
     137,    49,    62,   112,    60,    61,   115,   116,    51,    70,
      64,    65,    66,   140,    32,   390,   183,   165,   166,   124,
     184,   153,   185,   153,   114,   303,   114,   223,    50,   161,
     112,   194,   112,   237,   193,    51,   212,   275,   440,    51,
      51,   225,    51,   154,   120,   134,   114,   114,   141,   182,
     255,   188,   112,   112,   142,   114,   226,   114,   295,   274,
     114,   112,   110,   112,    52,   196,   112,   138,   138,    47,
     196,   137,   137,   250,    53,   340,   352,   180,   249,   246,
      51,    52,    63,   251,   241,   302,   320,    54,   269,   435,
     436,    53,   185,   277,   278,   279,   120,   148,   334,   169,
     170,   252,   229,   253,   349,   269,   254,   149,    52,   321,
     305,   242,   331,   331,   306,    52,   184,   184,    53,   176,
     110,   177,    53,   223,   304,   350,   392,   212,   167,   168,
     314,   243,   155,   156,   157,   339,   309,   175,   333,   346,
     368,   324,   247,   325,   178,   183,   120,   380,   248,   184,
     193,   114,   375,    52,   229,    53,   242,   112,   181,   398,
       8,     9,    10,    53,   110,   189,   397,   395,   357,   447,
     358,   332,   138,   396,   269,   448,   137,   363,   171,   172,
     348,   284,   285,   286,   287,   173,   174,   268,   269,   385,
     386,   387,   190,   119,   337,   338,   361,   362,   191,   158,
     367,   360,   192,   159,   373,   160,   270,   379,    53,   269,
     364,   120,   431,   269,   271,   193,   276,   423,   120,   432,
     269,   433,   269,   444,   445,   307,   389,   471,   269,   223,
     473,   269,   126,   439,   308,   382,   310,   384,   475,   269,
     333,   404,   311,   133,   405,   316,   110,   280,   281,   288,
     289,    97,   193,    97,   282,   283,   312,   313,   315,   317,
     223,   318,   393,   415,   335,   341,   336,   342,   114,   418,
     351,   353,   419,   110,   112,   354,   229,   422,   463,   355,
     193,   428,   144,   146,   147,   439,   416,   356,   120,   409,
     388,   246,   193,   365,   366,   369,   223,   381,   391,   370,
     383,    97,   229,   394,   402,   403,   406,   229,   407,   359,
     430,   417,   458,   460,   462,   420,   421,   424,   425,   434,
     470,   429,   437,   290,   452,   441,   442,   453,   443,   446,
     477,   465,   449,   450,   451,   193,   454,   468,   469,   291,
     239,   223,   292,    97,   464,   293,   195,   466,   223,   294,
     408,   139,   401,   414,   323,    68,     0,   114,   455,   456,
     457,     0,   399,   112,     0,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,     0,     0,     0,   472,     0,   474,     0,
       0,     0,     0,     0,     0,     0,     0,   476,     0,     0,
     478,    97,   479,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     197,    75,    76,    77,    78,    79,     0,    80,    81,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,     0,     0,     0,     0,    97,     0,     1,    82,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    97,   198,   199,   200,     0,   201,   202,
     203,   204,   205,   206,   207,   208,    26,    83,    27,    84,
      28,    29,    30,    85,     0,     0,     0,     0,     0,     0,
     125,   209,    86,    87,    88,    89,    90,    91,   266,     0,
       0,     0,     0,     0,     0,     0,   210,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   197,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     1,    82,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,   198,   199,   200,     0,   201,
     202,   203,   204,   205,   206,   207,   208,    26,    83,    27,
      84,    28,    29,    30,    85,     0,     0,     0,     0,     0,
       0,   125,   322,    86,    87,    88,    89,    90,    91,     0,
       0,    74,    75,    76,    77,    78,    79,   210,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    82,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   197,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,    26,    83,    27,
      84,    28,    29,    30,    85,     0,     0,     0,     0,     0,
       0,     0,    82,    86,    87,    88,    89,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,   210,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,   198,   199,
     200,     0,   201,   202,   203,   204,   205,   206,   207,   208,
       0,    83,     0,    84,     0,     0,    82,    85,     0,     0,
       0,     0,     0,     0,   125,     0,    86,    87,    88,    89,
      90,    91,     0,     0,    74,    75,    76,    77,    78,    79,
     210,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,     0,     0,
       0,    85,    82,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,   319,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,    84,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,     0,     0,    74,    75,    76,    77,    78,    79,
     210,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    82,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,    27,    84,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,   234,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,   299,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,    83,
     119,    84,     0,     0,    82,    85,     0,   343,     0,     0,
     235,     8,     9,    10,    86,   236,    88,    89,    90,    91,
       0,    83,   119,    84,     0,     0,     0,    85,     0,     0,
       0,     0,   300,     0,     0,     0,    86,   301,    88,    89,
      90,    91,     0,    83,   119,    84,     0,     0,     0,    85,
       0,     0,     0,     0,   344,     0,     0,     0,    86,   345,
      88,    89,    90,    91,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,   371,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,   376,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,    83,   119,    84,     0,     0,    82,    85,     0,   426,
       0,     0,   372,     8,     9,    10,    86,    87,    88,    89,
      90,    91,     0,    83,   119,    84,     0,     0,     0,    85,
       0,     0,     0,     0,   377,     0,     0,     0,    86,   378,
      88,    89,    90,    91,     0,    83,   119,    84,     0,     0,
       0,    85,     0,     0,     0,     0,   427,     0,     0,     0,
      86,    87,    88,    89,    90,    91,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,     0,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,   119,    84,     0,     0,    82,    85,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,     0,    83,     0,    84,     0,     0,
       0,    85,     0,     0,     0,   324,     0,   325,   222,   438,
      86,    87,    88,    89,    90,    91,     0,    83,     0,    84,
       0,     0,     0,    85,     0,     0,     0,   324,     0,   325,
     222,   467,    86,    87,    88,    89,    90,    91,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    82,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,     0,     0,
      82,    85,     0,     0,     0,   324,     0,   325,   222,     0,
      86,    87,    88,    89,    90,    91,     0,    83,     0,    84,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
     222,     0,    86,    87,    88,    89,    90,    91,     0,    83,
       0,    84,     0,     0,     0,    85,   272,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    82,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,    84,
       0,     0,    82,    85,     0,     0,     0,     0,     0,     0,
     359,     0,    86,    87,    88,    89,    90,    91,     0,    83,
       0,    84,     0,     0,     0,    85,   459,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,    83,     0,    84,     0,     0,     0,    85,   461,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,    84,     0,     0,    82,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,    83,     0,    84,     0,     0,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    51,    83,     0,    84,     0,     0,     0,   145,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,     0,     0,     0,     0,     0,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,   331,   296,     0,     0,   184,
       0,     0,     0,     0,     0,    53,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   227,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,     1,   228,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,   126,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,   183,   296,
       0,     1,   184,     0,     0,     0,     0,     0,    53,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,    29,     0,     0,     1,     0,
       0,     0,     0,     0,     0,   240,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     1,   347,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     1,   125,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     0,    30,     1,
     374,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,    29,    30,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     1,
      30,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    26,     0,
      27,     0,    28,     0,    30,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,    27,     0,
       0,    29,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,   410,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,    27,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      48,    49,    53,    85,   126,    53,    48,    49,    57,    59,
      48,     0,    50,   132,    32,    63,   185,   141,   131,    86,
     135,    63,   113,    57,    91,    92,   395,    83,    50,     3,
      76,     3,     3,    76,    80,     3,    63,    85,    78,    19,
      63,    76,     3,    85,    33,    34,    48,    49,     3,     3,
      39,    40,    41,    98,    43,   315,    76,    87,    88,    99,
      80,   143,   113,   145,   112,   184,   114,   126,    76,    98,
     112,   122,   114,   132,   122,     3,   125,   159,   447,     3,
       3,   130,     3,    85,   132,    83,   134,   135,    78,   112,
     149,   114,   134,   135,    84,   143,   130,   145,   180,   158,
     148,   143,   140,   145,    76,   123,   148,   134,   135,    83,
     128,   134,   135,    84,    86,   234,    84,    97,   140,   137,
       3,    76,    83,   247,   239,   184,   208,    99,    78,   389,
     390,    86,   183,   162,   163,   164,   184,    76,   229,    14,
      15,   143,   131,   145,    78,    78,   148,    76,    76,    99,
      76,    79,    76,    76,    80,    76,    80,    80,    86,    95,
     198,    96,    86,   222,   333,    99,    99,   216,    12,    13,
     203,    99,     9,    10,    11,   234,   198,    85,   229,   238,
     299,    80,    78,    82,    18,    76,   234,   306,    84,    80,
     238,   239,   305,    76,   183,    86,    79,   239,    77,    98,
      38,    39,    40,    86,   242,    77,   328,    78,   267,    78,
     269,   229,   239,    84,    78,    84,   239,    81,    93,    94,
     242,   169,   170,   171,   172,    16,    17,    77,    78,   311,
     312,   313,    77,    71,    77,    78,    77,    78,    78,    76,
     299,   270,    77,    80,   303,    82,    77,   306,    86,    78,
      79,   299,    77,    78,     3,   303,     3,   376,   306,    77,
      78,    77,    78,    77,    78,     6,   315,    77,    78,   328,
      77,    78,    98,   395,    79,   308,    79,   310,    77,    78,
     331,   340,    76,   333,   343,     3,   324,   165,   166,   173,
     174,    48,   340,    50,   167,   168,    76,    76,    76,    99,
     359,    99,   324,   362,    77,    81,    78,    81,   356,   368,
      79,    77,   371,   351,   356,    77,   305,   376,   440,    77,
     368,   380,    79,    80,    81,   447,   364,    78,   376,   351,
      62,   349,   380,    77,    77,    81,   395,    77,    99,    81,
      79,    98,   331,     3,     3,    81,    81,   336,    81,    83,
     383,    81,   434,   435,   436,    81,    77,    81,    81,    76,
      60,    99,    81,   175,   423,    81,    81,   426,    79,    79,
      99,   445,    81,    81,    81,   423,    81,    81,    81,   176,
     134,   440,   177,   140,   443,   178,   123,   446,   447,   179,
     349,    69,   336,   359,   216,    43,    -1,   445,   431,   432,
     433,    -1,   329,   445,    -1,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,    -1,    -1,    -1,   459,    -1,   461,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,
     473,   198,   475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   270,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   364,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    31,    76,    -1,    34,    -1,    -1,
      81,    38,    39,    40,    85,    86,    87,    88,    89,    90,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    31,    76,    -1,    34,
      -1,    -1,    81,    38,    39,    40,    85,    86,    87,    88,
      89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,     0,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    30,    77,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    98,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      -1,    30,    80,    -1,    -1,    -1,    -1,    -1,    86,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    84,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    83,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    30,
      77,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    74,    75,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    30,
      75,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    69,    -1,
      71,    -1,    73,    -1,    75,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    71,    -1,
      -1,    74,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
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
     145,   150,   151,    78,    99,    83,    98,   128,   129,   167,
     177,    76,    80,   149,    83,   136,   137,   138,   164,   142,
      98,    78,    84,    76,   110,    76,   110,   110,    76,    76,
     110,   123,   124,   126,   156,     9,    10,    11,    76,    80,
      82,   112,    86,    91,    92,    87,    88,    12,    13,    14,
      15,    93,    94,    16,    17,    85,    95,    96,    18,    19,
      97,    77,   138,    76,    80,   150,   157,   158,   138,    77,
      77,    78,    77,   145,   150,   131,   148,     3,    57,    58,
      59,    61,    62,    63,    64,    65,    66,    67,    68,    84,
      99,   126,   128,   165,   166,   167,   168,   169,   170,   171,
     172,   173,    83,   124,   159,   128,   167,     3,    77,   129,
     152,   153,   154,   155,    34,    81,    86,   124,   151,   136,
      84,   137,    79,    99,   139,   140,   148,    78,    84,   127,
      84,   143,   156,   156,   156,   124,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    98,   125,    77,    78,
      77,     3,    77,   109,   124,   126,     3,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   116,   116,
     117,   118,   119,   120,   121,   126,    77,   152,   157,    34,
      81,    86,   124,   151,   158,    76,    80,     6,    79,   127,
      79,    76,    76,    76,   165,    76,     3,    99,    99,    99,
     126,    99,    84,   169,    80,    82,   159,   160,   161,   162,
     163,    76,   148,   150,   157,    77,    78,    77,    78,   124,
     151,    81,    81,    34,    81,    86,   124,    84,   127,    78,
      99,    79,    84,    77,    77,    77,    78,   124,   124,    83,
     112,    77,    78,    81,    79,    77,    77,   124,   151,    81,
      81,    34,    81,   124,    77,   152,    34,    81,    86,   124,
     151,    77,   165,    79,   165,   126,   126,   126,    62,   128,
     170,    99,    99,   127,     3,    78,    84,   159,    98,   163,
      56,   154,     3,    81,   124,   124,    81,    81,   140,   127,
      58,   106,   107,   156,   160,   124,   123,    81,   124,   124,
      81,    77,   124,   151,    81,    81,    34,    81,   124,    99,
     165,    77,    77,    77,    76,   170,   170,    81,    84,   159,
     161,    81,    81,    79,    77,    78,    79,    78,    84,    81,
      81,    81,   124,   124,    81,   165,   165,   165,   126,    77,
     126,    77,   126,   159,   124,   107,   124,    84,    81,    81,
      60,    77,   165,    77,   165,    77,   165,    99,   165,   165
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
     175,   175,   176,   176,   177,   177
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
       1,     1,     4,     3,     1,     2
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
#line 84 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   IdentifierNode *idNode = new IdentifierNode((yyvsp[0].lexeme));
	   (yyval.expression) = idNode;
}
#line 2088 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 87 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2094 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 88 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2100 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 89 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2106 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 90 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2112 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 94 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {		/* includes character_constant */
	   IntegerLiteralNode *intLiteral = new IntegerLiteralNode((yyvsp[0].lexeme));
	   (yyval.expression) = intLiteral;
}
#line 2121 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      FloatLiteralNode *floatLiteral = new FloatLiteralNode((yyvsp[0].lexeme));
	   (yyval.expression) = floatLiteral;
}
#line 2130 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 100 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {	/* after it has been defined as such */
	   (yyval.expression) = NULL;
}
#line 2138 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 105 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   (yyval.expression) = NULL;
}
#line 2146 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 110 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   StringLiteralNode *stringLiteral = new StringLiteralNode((yyvsp[0].lexeme));
	   (yyval.expression) = stringLiteral;
}
#line 2155 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 113 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      StringLiteralNode *stringLiteral = new StringLiteralNode("__func__");
	   (yyval.expression) = stringLiteral;
}
#line 2164 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 119 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2170 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 133 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2176 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 134 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   ArrayReferenceNode *node = new ArrayReferenceNode((yyvsp[-3].expression), (yyvsp[-1].expression));
	   (yyval.expression) = node;
}
#line 2185 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 137 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	FunctionCallNode *node = new FunctionCallNode((yyvsp[-2].expression), NULL);
   	(yyval.expression) = node;
}
#line 2194 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 140 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	FunctionCallNode *node = new FunctionCallNode((yyvsp[-3].expression), (ArgumentListNode*)(yyvsp[-1].expression));
   	(yyval.expression) = node;
}
#line 2203 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 145 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PostUnaryExpressionNode *node = new PostUnaryExpressionNode((yyvsp[-1].expression), "++");
   	(yyval.expression) = node;
}
#line 2212 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 148 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PostUnaryExpressionNode *node = new PostUnaryExpressionNode((yyvsp[-1].expression), "--");
   	(yyval.expression) = node;
}
#line 2221 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 151 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2227 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 152 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2233 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 156 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ArgumentListNode *node = new ArgumentListNode((yyvsp[0].expression), NULL);
   	(yyval.expression) = node;
}
#line 2242 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 159 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      //TODO solve list inversion
   	ArgumentListNode *node = new ArgumentListNode((yyvsp[0].expression), (ArgumentListNode*)(yyvsp[-2].expression)); 
   	(yyval.expression) = node;
}
#line 2252 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 166 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2258 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 167 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PreUnaryExpressionNode *node = new PreUnaryExpressionNode("++", (yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2267 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 170 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PreUnaryExpressionNode *node = new PreUnaryExpressionNode("--", (yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2276 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 173 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	PreUnaryExpressionNode *node = new PreUnaryExpressionNode((yyvsp[-1].lexeme), (yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2285 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 176 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2291 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 177 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2297 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 178 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2303 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 182 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"&"; }
#line 2309 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 183 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"*"; }
#line 2315 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 184 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"+"; }
#line 2321 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 185 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"-"; }
#line 2327 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 186 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"~"; }
#line 2333 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 187 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"!"; }
#line 2339 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 191 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2345 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 192 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	CastNode *node = new CastNode("type",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2354 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 199 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"*",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2363 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 202 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"/",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2372 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 205 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"%",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2381 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 211 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2387 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 212 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"+",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2396 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 215 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"-",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2405 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 221 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2411 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 222 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"<<",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2420 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 225 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),">>",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2429 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 231 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2435 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 232 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"<",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2444 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 235 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),">",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2453 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 238 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"<=",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2462 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 241 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),">=",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2471 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 247 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2477 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 248 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"==",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2486 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 251 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"!=",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2495 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 257 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2501 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 258 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"&",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2510 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 264 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2516 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 265 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"^",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2525 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 271 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2531 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 272 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"|",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2540 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 278 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2546 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 279 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"&&",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2555 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 285 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2561 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 286 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),"||",(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2570 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 292 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2576 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 293 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ConditionalExpressionNode *node = new ConditionalExpressionNode((yyvsp[-4].expression),(yyvsp[-2].expression),(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2585 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 299 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2591 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 300 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	BinaryExpressionNode *node = new BinaryExpressionNode((yyvsp[-2].expression),(yyvsp[-1].lexeme),(yyvsp[0].expression));
   	(yyval.expression) = node;
}
#line 2600 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 306 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"="; }
#line 2606 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 307 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"*="; }
#line 2612 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 308 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"/="; }
#line 2618 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 309 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"%="; }
#line 2624 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 310 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"+="; }
#line 2630 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 311 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"-="; }
#line 2636 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 312 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"<<="; }
#line 2642 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 313 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)">>="; }
#line 2648 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 314 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"&="; }
#line 2654 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 315 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"^="; }
#line 2660 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 316 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"|="; }
#line 2666 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 320 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
   	ExpressionListNode *node = new ExpressionListNode((yyvsp[0].expression), NULL);
   	(yyval.expression) = node;
}
#line 2675 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 323 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      //TODO solve list inversion
   	ExpressionListNode *node = new ExpressionListNode((yyvsp[0].expression), (ExpressionListNode*)(yyvsp[-2].expression)); 
   	(yyval.expression) = node;
}
#line 2685 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 330 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2691 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 342 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 2700 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 345 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 2709 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 348 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 2718 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 351 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 2727 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 354 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 2736 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 357 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 2745 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 365 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationListNode *node = new DeclarationListNode((yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 2754 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 368 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationListNode *node = new DeclarationListNode((yyvsp[0].declaration), (DeclarationListNode*)(yyvsp[-2].declaration));
	   (yyval.declaration) = node;
}
#line 2763 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 374 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   AssignmentNode *node = new AssignmentNode((yyvsp[-2].declaration), (yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 2772 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 377 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[0].declaration); }
#line 2778 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 390 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_VOID);
	   (yyval.type) = node;
}
#line 2787 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 393 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_CHAR);
	   (yyval.type) = node;
}
#line 2796 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 396 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_SHORT);
	   (yyval.type) = node;
}
#line 2805 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 399 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_INT);
	   (yyval.type) = node;
}
#line 2814 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 402 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_LONG);
	   (yyval.type) = node;
}
#line 2823 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 405 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_FLOAT);
	   (yyval.type) = node;
}
#line 2832 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 408 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_DOUBLE);
	   (yyval.type) = node;
}
#line 2841 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 411 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_SIGNED);
	   (yyval.type) = node;
}
#line 2850 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 414 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_UNSIGNED);
	   (yyval.type) = node;
}
#line 2859 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 417 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_BOOL);
	   (yyval.type) = node;
}
#line 2868 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 420 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_COMPLEX);
	   (yyval.type) = node;
}
#line 2877 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 423 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {	  	/* non-mandated extension */
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_IMAGINARY);
	   (yyval.type) = node;
}
#line 2886 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 427 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2892 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 433 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeNode *node = NULL;
      if(strcmp((yyvsp[-3].lexeme),"struct")==0){
         node = new StructTypeNode("", (yyvsp[-1].declaration));
      }else if(strcmp((yyvsp[-3].lexeme),"union")==0){
         node = new UnionTypeNode("", (yyvsp[-1].declaration));
      }
      (yyval.type) = node;    
}
#line 2906 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 441 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeNode *node = NULL;
      if(strcmp((yyvsp[-4].lexeme),"struct")==0){
         node = new StructTypeNode((yyvsp[-3].lexeme), (yyvsp[-1].declaration));
      }else if(strcmp((yyvsp[-4].lexeme),"union")==0){
         node = new UnionTypeNode((yyvsp[-3].lexeme), (yyvsp[-1].declaration));
      }
      (yyval.type) = node;      
}
#line 2920 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 449 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeNode *node = NULL;
      if(strcmp((yyvsp[-1].lexeme),"struct")==0){
         node = new StructTypeNode((yyvsp[0].lexeme), NULL);
      }else if(strcmp((yyvsp[-1].lexeme),"union")==0){
         node = new UnionTypeNode((yyvsp[0].lexeme), NULL);
      }
      (yyval.type) = node;
}
#line 2934 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 460 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"struct"; }
#line 2940 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 461 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (char*)"union"; }
#line 2946 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 465 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationSequenceNode *node = new DeclarationSequenceNode((yyvsp[0].declaration), NULL);
      (yyval.declaration) = node;
}
#line 2955 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 468 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationSequenceNode *node = new DeclarationSequenceNode((yyvsp[0].declaration), (DeclarationSequenceNode *)(yyvsp[-1].declaration));
      (yyval.declaration) = node;
}
#line 2964 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 474 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {	/* for anonymous struct/union */
	   AttributeDeclarationNode *node = new AttributeDeclarationNode((yyvsp[-1].type), NULL, NULL);
	   (yyval.declaration) = node;
}
#line 2973 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 477 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      TypeNode *type = (yyvsp[-2].type);
	   DeclarationListNode *node = (DeclarationListNode*)(yyvsp[-1].declaration);
	   //TODO set type into node
	   (yyval.declaration) = node;
}
#line 2984 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 482 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = NULL; }
#line 2990 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 486 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 2999 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 489 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 3008 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 492 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[-1].type), (TypeCompositionNode*)(yyvsp[0].type));
	   (yyval.type) = node;
}
#line 3017 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 495 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   TypeCompositionNode *node = new TypeCompositionNode((yyvsp[0].type), NULL);
	   (yyval.type) = node;
}
#line 3026 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 501 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationListNode *node = new DeclarationListNode((yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3035 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 504 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationListNode *node = new DeclarationListNode((yyvsp[0].declaration), (DeclarationListNode*)(yyvsp[-2].declaration));
	   (yyval.declaration) = node;
}
#line 3044 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 510 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   AttributeDeclarationNode *node = new AttributeDeclarationNode(NULL, NULL, (yyvsp[0].expression));
	   (yyval.declaration) = node;
}
#line 3053 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 513 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   AttributeDeclarationNode *node = new AttributeDeclarationNode(NULL, (DeclaratorNode *)(yyvsp[-2].declaration), (yyvsp[0].expression));
	   (yyval.declaration) = node;
}
#line 3062 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 516 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   AttributeDeclarationNode *node = new AttributeDeclarationNode(NULL, (DeclaratorNode *)(yyvsp[0].declaration), NULL);
	   (yyval.declaration) = node;
}
#line 3071 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 544 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_CONST);
	   (yyval.type) = node;
}
#line 3080 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 547 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_RESTRICT);
	   (yyval.type) = node;
}
#line 3089 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 550 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_VOLATILE);
	   (yyval.type) = node;
}
#line 3098 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 553 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_ATOMIC);
	   (yyval.type) = node;
}
#line 3107 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 559 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   FunctionSpecifierNode *node = new FunctionSpecifierNode(TYPE_INLINE);
	   (yyval.type) = node;
}
#line 3116 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 562 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      FunctionSpecifierNode *node = new FunctionSpecifierNode(TYPE_NORETURN);
	   (yyval.type) = node;
}
#line 3125 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 573 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   //TODO pointer???
	   DeclaratorNode *node = new DeclaratorNode((yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3135 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 577 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclaratorNode *node = new DeclaratorNode((yyvsp[0].declaration));
	   (yyval.declaration) = node;
}
#line 3144 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 583 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      IdentifierDeclarationNode *node = new IdentifierDeclarationNode((yyvsp[0].lexeme));
      (yyval.declaration) = node;
}
#line 3153 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 586 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.declaration) = (yyvsp[-1].declaration); }
#line 3159 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 702 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3165 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 703 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3171 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 704 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3177 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 705 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3183 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 706 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3189 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 707 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3195 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 711 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   LabeledStatementNode *node = new LabeledStatementNode((yyvsp[-2].lexeme), (yyvsp[0].statement));
	   (yyval.statement) = node;
}
#line 3204 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 714 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   CaseStatementNode *node = new CaseStatementNode((yyvsp[-2].expression), (yyvsp[0].statement));
	   (yyval.statement) = node;
}
#line 3213 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 717 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   CaseStatementNode *node = new CaseStatementNode(NULL, (yyvsp[0].statement));
	   (yyval.statement) = node;
}
#line 3222 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 723 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = NULL; }
#line 3228 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 724 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[-1].statement); }
#line 3234 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 728 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   CompoundStatementNode *node = new CompoundStatementNode((yyvsp[0].statement), NULL);
	   (yyval.statement) = node;
}
#line 3243 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 731 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   CompoundStatementNode *node = new CompoundStatementNode((yyvsp[0].statement), (CompoundStatementNode *)(yyvsp[-1].statement));
	   (yyval.statement) = node;
}
#line 3252 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 737 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
	   DeclarationStatementNode *node = new DeclarationStatementNode((yyvsp[0].declaration));
	   (yyval.statement) = node;
}
#line 3261 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 740 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 3267 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 744 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { (yyval.statement) = NULL; }
#line 3273 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 745 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    { 
	   ExpressionStatementNode *node = new ExpressionStatementNode((yyvsp[-1].expression));
	   (yyval.statement) = node;
}
#line 3282 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 751 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      IfNode *node = new IfNode((yyvsp[-4].expression), (yyvsp[-2].statement), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3291 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 754 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      IfNode *node = new IfNode((yyvsp[-2].expression), (yyvsp[0].statement), new SkipNode());
      (yyval.statement) = node;
}
#line 3300 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 757 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      SwitchNode *node = new SwitchNode((yyvsp[-2].expression), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3309 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 763 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      WhileNode *node = new WhileNode((yyvsp[-2].expression), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3318 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 766 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DoWhileNode *node = new DoWhileNode((yyvsp[-5].statement), (yyvsp[-2].expression));
      (yyval.statement) = node;
}
#line 3327 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 769 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ForNode *node = new ForNode((yyvsp[-3].statement), (ExpressionStatementNode*)(yyvsp[-2].statement), NULL, (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3336 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 772 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ForNode *node = new ForNode((yyvsp[-4].statement), (ExpressionStatementNode*)(yyvsp[-3].statement), (yyvsp[-2].expression), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3345 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 775 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationStatementNode *init = new DeclarationStatementNode((yyvsp[-3].declaration));
      ForNode *node = new ForNode(init,(ExpressionStatementNode*) (yyvsp[-2].statement), NULL, (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3355 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 779 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      DeclarationStatementNode *init = new DeclarationStatementNode((yyvsp[-4].declaration));
      ForNode *node = new ForNode(init, (ExpressionStatementNode*)(yyvsp[-3].statement), (yyvsp[-2].expression), (yyvsp[0].statement));
      (yyval.statement) = node;
}
#line 3365 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 786 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      GotoNode *node = new GotoNode((yyvsp[-1].lexeme));
      (yyval.statement) = node;
}
#line 3374 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 789 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ContinueNode *node = new ContinueNode();
      (yyval.statement) = node;
}
#line 3383 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 792 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      BreakNode *node = new BreakNode();
      (yyval.statement) = node;
}
#line 3392 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 795 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ReturnNode *node = new ReturnNode(NULL);
      (yyval.statement) = node;
}
#line 3401 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 798 "src/parser/yacc_c11.y" /* yacc.c:1646  */
    {
      ReturnNode *node = new ReturnNode((yyvsp[-1].expression));
      (yyval.statement) = node;
}
#line 3410 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
    break;


#line 3414 "src/parser/yy_parser.cpp" /* yacc.c:1646  */
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
#line 823 "src/parser/yacc_c11.y" /* yacc.c:1906  */

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
