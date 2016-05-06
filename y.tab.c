/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parserBottomUp.y" /* yacc.c:339  */

	#include <stdio.h>
	int yyerror (char *s);
	int yylex();

#line 72 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    STRING_LIT = 259,
    NUMBER_INT = 260,
    NUMBER_REAL = 261,
    COMMENT = 262,
    PROCEDURE = 263,
    FUNCTION = 264,
    REF = 265,
    VAR = 266,
    CONST = 267,
    INT = 268,
    REAL = 269,
    STRING = 270,
    BOOLEAN = 271,
    TRUE = 272,
    FALSE = 273,
    NIL = 274,
    INIT = 275,
    FINAL = 276,
    RETURN = 277,
    BREAK = 278,
    IF = 279,
    THEN = 280,
    ELSE_ = 281,
    SWITCH = 282,
    CASE = 283,
    DEFAULT = 284,
    FOR = 285,
    DOWNTO = 286,
    TO = 287,
    DO = 288,
    LOOP = 289,
    EXIT = 290,
    WHEN = 291,
    SEMICOLON = 292,
    COLON = 293,
    COMMA = 294,
    DOT = 295,
    OPEN_PARENTHESIS = 296,
    CLOSE_PARENTHESIS = 297,
    OPEN_BRACKETS = 298,
    CLOSE_BRACKETS = 299,
    OPEN_BRACES = 300,
    CLOSE_BRACES = 301,
    ADD = 302,
    SUB = 303,
    MULT = 304,
    DIV = 305,
    MOD = 306,
    INCREMENT = 307,
    DECREMENT = 308,
    EQUAL = 309,
    NEGATION = 310,
    OR = 311,
    AND = 312,
    LESS_THEN = 313,
    BIGGER_THEN = 314,
    EQUAL_LOGIC = 315,
    NOT_EQUAL = 316,
    LESS_EQUAL = 317,
    BIGGER_EQUAL = 318
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_LIT 259
#define NUMBER_INT 260
#define NUMBER_REAL 261
#define COMMENT 262
#define PROCEDURE 263
#define FUNCTION 264
#define REF 265
#define VAR 266
#define CONST 267
#define INT 268
#define REAL 269
#define STRING 270
#define BOOLEAN 271
#define TRUE 272
#define FALSE 273
#define NIL 274
#define INIT 275
#define FINAL 276
#define RETURN 277
#define BREAK 278
#define IF 279
#define THEN 280
#define ELSE_ 281
#define SWITCH 282
#define CASE 283
#define DEFAULT 284
#define FOR 285
#define DOWNTO 286
#define TO 287
#define DO 288
#define LOOP 289
#define EXIT 290
#define WHEN 291
#define SEMICOLON 292
#define COLON 293
#define COMMA 294
#define DOT 295
#define OPEN_PARENTHESIS 296
#define CLOSE_PARENTHESIS 297
#define OPEN_BRACKETS 298
#define CLOSE_BRACKETS 299
#define OPEN_BRACES 300
#define CLOSE_BRACES 301
#define ADD 302
#define SUB 303
#define MULT 304
#define DIV 305
#define MOD 306
#define INCREMENT 307
#define DECREMENT 308
#define EQUAL 309
#define NEGATION 310
#define OR 311
#define AND 312
#define LESS_THEN 313
#define BIGGER_THEN 314
#define EQUAL_LOGIC 315
#define NOT_EQUAL 316
#define LESS_EQUAL 317
#define BIGGER_EQUAL 318

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "parserBottomUp.y" /* yacc.c:355  */

	int 	iValue;
	double 	dValue; 	//
	char * 	sValue;		//

#line 244 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 261 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   240

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  291

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    77,    78,    79,    83,    83,    83,    87,
      87,    88,    92,    92,    92,    93,    97,    97,    97,    97,
     101,   101,   101,   101,   102,   106,   107,   111,   111,   111,
     111,   111,   116,   116,   116,   116,   116,   121,   121,   122,
     122,   122,   123,   127,   127,   128,   132,   133,   137,   137,
     141,   142,   143,   144,   145,   146,   147,   148,   152,   156,
     156,   157,   161,   161,   165,   166,   167,   171,   171,   171,
     172,   172,   172,   173,   177,   177,   181,   181,   185,   185,
     185,   186,   187,   191,   191,   192,   196,   200,   200,   201,
     205,   205,   209,   210,   214,   218,   218,   218,   218,   218,
     224,   224,   226,   230,   230,   230,   231,   230,   238,   238,
     238,   241,   245,   245,   245,   250,   250,   250,   250,   250,
     255,   256,   260,   260,   266,   266,   266,   266,   270,   274,
     274,   275,   279,   283,   283,   284,   288,   292,   292,   293,
     293,   294,   298,   302,   302,   303,   303,   304,   304,   305,
     305,   306,   310,   314,   314,   315,   315,   316,   320,   324,
     324,   325,   325,   326,   326,   327,   331,   335,   335,   336,
     340,   341,   342,   343,   343,   347,   347,   351,   351,   352,
     356,   357,   358,   359,   360
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LIT", "NUMBER_INT",
  "NUMBER_REAL", "COMMENT", "PROCEDURE", "FUNCTION", "REF", "VAR", "CONST",
  "INT", "REAL", "STRING", "BOOLEAN", "TRUE", "FALSE", "NIL", "INIT",
  "FINAL", "RETURN", "BREAK", "IF", "THEN", "ELSE_", "SWITCH", "CASE",
  "DEFAULT", "FOR", "DOWNTO", "TO", "DO", "LOOP", "EXIT", "WHEN",
  "SEMICOLON", "COLON", "COMMA", "DOT", "OPEN_PARENTHESIS",
  "CLOSE_PARENTHESIS", "OPEN_BRACKETS", "CLOSE_BRACKETS", "OPEN_BRACES",
  "CLOSE_BRACES", "ADD", "SUB", "MULT", "DIV", "MOD", "INCREMENT",
  "DECREMENT", "EQUAL", "NEGATION", "OR", "AND", "LESS_THEN",
  "BIGGER_THEN", "EQUAL_LOGIC", "NOT_EQUAL", "LESS_EQUAL", "BIGGER_EQUAL",
  "$accept", "declaration", "var", "$@1", "$@2", "id_exp", "$@3",
  "ids_exps", "$@4", "$@5", "const", "$@6", "$@7", "$@8", "const_aux",
  "$@9", "$@10", "$@11", "subprogram", "procedure", "$@12", "$@13", "$@14",
  "$@15", "function", "$@16", "$@17", "$@18", "$@19", "parameter_list",
  "$@20", "$@21", "$@22", "parameter_list_aux", "$@23", "cb", "block",
  "$@24", "command", "commands", "commands_aux", "$@25", "access_n_call",
  "$@26", "access_n_call_aux", "access", "$@27", "$@28", "$@29", "$@30",
  "attribuition", "$@31", "subprogram_call", "$@32", "real_parameter_list",
  "$@33", "$@34", "real_parameter_list_aux", "$@35", "l_exp", "l_exp_aux",
  "$@36", "return", "$@37", "return_aux", "break", "if", "$@38", "$@39",
  "$@40", "$@41", "else", "$@42", "switch", "$@43", "$@44", "$@45", "$@46",
  "caselist", "$@47", "$@48", "default", "$@49", "$@50", "for", "$@51",
  "$@52", "$@53", "$@54", "for_aux", "loop", "$@55", "exit", "$@56",
  "$@57", "$@58", "expression", "term_or_tail", "$@59", "term_or",
  "term_and_tail", "$@60", "term_and", "term_bool_comparison_tail", "$@61",
  "$@62", "term_bool_comparison", "term_arit_comparison_tail", "$@63",
  "$@64", "$@65", "$@66", "term_arit_comparison", "term_tail", "$@67",
  "$@68", "term", "factor_tail", "$@69", "$@70", "$@71", "factor",
  "negation_unsub_tail", "$@72", "negation_unsub", "$@73", "arr_exp",
  "$@74", "arr_exp_aux", "$@75", "literal", YY_NULLPTR
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
     315,   316,   317,   318
};
# endif

#define YYPACT_NINF -214

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-214)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      95,  -214,  -214,  -214,  -214,    13,    95,    95,    95,  -214,
    -214,    25,    28,    39,    49,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,    42,    59,    21,    51,  -214,  -214,  -214,
     -19,  -214,     9,     9,    12,  -214,  -214,    12,  -214,  -214,
      81,    91,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,    79,    77,   -21,    34,     8,    17,    82,  -214,
    -214,   133,    99,   100,   137,  -214,  -214,    22,    12,    20,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,    95,    95,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,   101,   102,    12,
      12,    12,    12,    12,    12,    12,    12,    12,    12,    12,
      12,    12,    12,    21,   139,     9,   100,   124,  -214,  -214,
     142,     4,    12,    12,  -214,  -214,   103,    79,    77,   -21,
     -21,    34,    34,    34,    34,     8,     8,    17,    17,    17,
    -214,   -19,  -214,  -214,  -214,  -214,  -214,  -214,   104,   108,
     106,   109,  -214,    20,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,    97,
      47,    22,   149,  -214,  -214,  -214,  -214,  -214,  -214,   102,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,   116,   134,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
       4,    22,    12,  -214,    12,    12,   113,   115,   154,    47,
     122,  -214,  -214,  -214,   108,  -214,  -214,  -214,    99,  -214,
    -214,  -214,  -214,  -214,   138,  -214,    47,  -214,  -214,    12,
     157,   107,  -214,   121,  -214,   123,   125,  -214,  -214,  -214,
    -214,    12,    12,   141,   143,    41,   126,  -214,  -214,  -214,
    -214,    12,  -214,    24,   136,   140,   144,  -214,  -214,  -214,
     145,  -214,  -214,  -214,    12,  -214,   148,    24,    24,   146,
     147,  -214,  -214,  -214,  -214,  -214,    24,    24,   136,  -214,
    -214
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,    27,    32,     6,    16,     0,     5,     5,     5,    25,
      26,     0,     0,     0,     0,     1,     2,     3,     4,    28,
      33,     7,    17,     0,     0,    11,     0,    29,    34,     9,
      15,    18,    42,    42,     0,    12,     8,     0,    37,    39,
       0,     0,    62,   180,   181,   182,   183,   184,   173,   175,
     170,    10,   131,   135,   141,   151,   157,   165,   169,   171,
     172,     0,    24,    45,     0,    30,    35,    73,     0,     0,
     129,   128,   133,   132,   137,   139,   136,   143,   145,   147,
     149,   142,   153,   155,   152,   159,   161,   163,   158,   167,
     166,    13,    20,    19,    43,    38,    40,     5,     5,    67,
      76,    70,    74,    63,    64,    65,    66,     0,   179,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,    42,    45,     0,    31,    36,
       0,    82,     0,     0,   174,   177,     0,   131,   135,   141,
     141,   151,   151,   151,   151,   157,   157,   165,   165,   165,
     168,    15,    21,    44,    41,    48,    68,    78,     0,    85,
       0,    89,    75,     0,   176,   130,   134,   138,   140,   144,
     146,   148,   150,   154,   156,   160,   162,   164,    14,     0,
       0,    73,     0,    77,    83,    81,    71,    87,    86,   179,
      22,    90,    94,    95,   103,   115,   122,   124,    61,     0,
      50,    51,    52,    53,    54,    57,    55,    56,    69,    79,
      82,    73,     0,   178,     0,    93,     0,     0,     0,     0,
       0,    59,    58,    49,    85,    84,    72,    88,    24,    91,
      92,    96,   104,   116,     0,   125,     0,    80,    23,     0,
       0,     0,   123,     0,    60,     0,     0,   117,   126,    97,
     105,     0,     0,     0,     0,     0,     0,    98,   106,   121,
     120,     0,   127,     5,   111,     0,   102,    47,    46,   108,
       0,   118,   100,    99,     0,   112,     0,     5,     5,     0,
       0,   107,   119,   101,   109,   113,     5,     5,   111,   114,
     110
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -214,    78,  -214,  -214,  -214,    48,  -214,    26,  -214,  -214,
    -214,  -214,  -214,  -214,   -56,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,   -31,
    -214,  -214,  -214,    50,  -214,  -198,    -7,  -214,  -175,  -213,
    -214,  -214,  -176,  -214,  -170,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,   -35,  -214,  -214,   -45,  -214,   -30,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -105,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,   -34,    52,  -214,    83,
      53,  -214,    76,   -12,  -214,  -214,    -3,   -29,  -214,  -214,
    -214,  -214,     3,   -16,  -214,  -214,    14,   -27,  -214,  -214,
    -214,     5,  -214,  -214,    65,  -214,  -214,  -214,    -1,  -214,
     -68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   127,     6,    13,    25,    30,    34,    36,    61,   123,
       7,    14,    26,    37,    93,   124,   179,   214,     8,     9,
      11,    23,    32,    97,    10,    12,    24,    33,    98,    40,
      63,    64,   126,    95,   125,   266,   267,   180,   268,   199,
     222,   236,    50,    67,   103,   104,   130,   181,   132,   211,
     105,   133,   106,   131,   158,   182,   224,   185,   210,   160,
     188,   212,   201,   215,   229,   202,   203,   216,   239,   253,
     263,   273,   278,   204,   217,   240,   254,   264,   270,   274,
     286,   276,   280,   287,   205,   218,   241,   251,   277,   261,
     206,   219,   207,   220,   243,   252,   159,    71,   109,    52,
      73,   110,    53,    76,   111,   112,    54,    81,   113,   114,
     115,   116,    55,    84,   117,   118,    56,    88,   119,   120,
     121,    57,    90,   122,    58,    68,    59,    69,   136,   163,
      60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      51,   108,    41,    62,   200,   198,   234,    42,    43,    44,
      45,   208,    38,    15,   157,    42,    43,    44,    45,    39,
      35,    46,    47,   244,    43,    44,    45,    42,    19,    46,
      47,    20,     1,     2,   107,     3,     4,    46,    47,    74,
      75,   226,    21,   200,   198,    48,   191,   192,   193,    49,
      42,   194,    22,    48,   195,    82,    83,    49,   196,   197,
     200,   198,    99,   100,   246,   101,    85,    86,    87,   191,
     192,   193,   259,   260,   194,    29,   102,   195,     5,   282,
     283,   196,   197,    27,    16,    17,    18,   200,   288,   289,
     128,   129,    77,    78,   153,   189,    79,    80,   161,   162,
      28,   200,   200,     1,     2,    31,     3,     4,   139,   140,
     200,   200,   169,   170,   171,   172,   141,   142,   143,   144,
     175,   176,   177,    65,   147,   148,   149,   167,   168,   173,
     174,   145,   146,    66,    72,    70,    91,    89,    92,    94,
      96,   135,   152,   134,   155,   156,   183,   184,   187,   164,
     186,   190,   209,   221,   231,   223,   232,   233,   235,   242,
      42,   247,   248,   258,   269,   249,   257,   250,   262,   281,
     272,   151,   238,   271,   275,   225,   154,   178,   161,   237,
     228,   230,   227,   290,   284,   285,   138,   150,   213,   165,
       0,   166,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   255,   256,     0,
       0,     0,     0,     0,     0,     0,     0,   265,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     279
};

static const yytype_int16 yycheck[] =
{
      34,    69,    33,    37,   180,   180,   219,     3,     4,     5,
       6,   181,     3,     0,    10,     3,     4,     5,     6,    10,
      39,    17,    18,   236,     4,     5,     6,     3,     3,    17,
      18,     3,     8,     9,    68,    11,    12,    17,    18,    60,
      61,   211,     3,   219,   219,    41,    22,    23,    24,    45,
       3,    27,     3,    41,    30,    47,    48,    45,    34,    35,
     236,   236,    40,    41,   240,    43,    49,    50,    51,    22,
      23,    24,    31,    32,    27,    54,    54,    30,     0,   277,
     278,    34,    35,    41,     6,     7,     8,   263,   286,   287,
      97,    98,    58,    59,   125,   163,    62,    63,   132,   133,
      41,   277,   278,     8,     9,    54,    11,    12,   111,   112,
     286,   287,   141,   142,   143,   144,   113,   114,   115,   116,
     147,   148,   149,    42,   119,   120,   121,   139,   140,   145,
     146,   117,   118,    42,    57,    56,     3,    55,    39,    39,
       3,    39,     3,    42,    20,     3,    42,    39,    39,    46,
      44,    54,     3,    37,    41,    21,    41,     3,    36,    21,
       3,    54,    41,    20,    28,    42,    25,    42,    42,    21,
      26,   123,   228,    33,    29,   210,   126,   151,   212,   224,
     214,   215,   212,   288,    38,    38,   110,   122,   189,   137,
      -1,   138,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   251,   252,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     274
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    11,    12,    65,    66,    74,    82,    83,
      88,    84,    89,    67,    75,     0,    65,    65,    65,     3,
       3,     3,     3,    85,    90,    68,    76,    41,    41,    54,
      69,    54,    86,    91,    70,    39,    71,    77,     3,    10,
      93,    93,     3,     4,     5,     6,    17,    18,    41,    45,
     106,   160,   163,   166,   170,   176,   180,   185,   188,   190,
     194,    72,   160,    94,    95,    42,    42,   107,   189,   191,
      56,   161,    57,   164,    60,    61,   167,    58,    59,    62,
      63,   171,    47,    48,   177,    49,    50,    51,   181,    55,
     186,     3,    39,    78,    39,    97,     3,    87,    92,    40,
      41,    43,    54,   108,   109,   114,   116,   160,   194,   162,
     165,   168,   169,   172,   173,   174,   175,   178,   179,   182,
     183,   184,   187,    73,    79,    98,    96,    65,   100,   100,
     110,   117,   112,   115,    42,    39,   192,   163,   166,   170,
     170,   176,   176,   176,   176,   180,   180,   185,   185,   185,
     188,    69,     3,    93,    97,    20,     3,    10,   118,   160,
     123,   160,   160,   193,    46,   161,   164,   167,   167,   171,
     171,   171,   171,   177,   177,   181,   181,   181,    71,    80,
     101,   111,   119,    42,    39,   121,    44,    39,   124,   194,
      54,    22,    23,    24,    27,    30,    34,    35,   102,   103,
     106,   126,   129,   130,   137,   148,   154,   156,   108,     3,
     122,   113,   125,   192,    81,   127,   131,   138,   149,   155,
     157,    37,   104,    21,   120,   118,   108,   123,   160,   128,
     160,    41,    41,     3,   103,    36,   105,   121,    78,   132,
     139,   150,    21,   158,   103,   160,   106,    54,    41,    42,
      42,   151,   159,   133,   140,   160,   160,    25,    20,    31,
      32,   153,    42,   134,   141,   160,    99,   100,   102,    28,
     142,    33,    26,   135,   143,    29,   145,   152,   136,   160,
     146,    21,    99,    99,    38,    38,   144,   147,    99,    99,
     142
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    67,    68,    66,    70,
      69,    69,    72,    73,    71,    71,    75,    76,    77,    74,
      79,    80,    81,    78,    78,    82,    82,    84,    85,    86,
      87,    83,    89,    90,    91,    92,    88,    94,    93,    95,
      96,    93,    93,    98,    97,    97,    99,    99,   101,   100,
     102,   102,   102,   102,   102,   102,   102,   102,   103,   105,
     104,   104,   107,   106,   108,   108,   108,   110,   111,   109,
     112,   113,   109,   109,   115,   114,   117,   116,   119,   120,
     118,   118,   118,   122,   121,   121,   123,   125,   124,   124,
     127,   126,   128,   128,   129,   131,   132,   133,   134,   130,
     136,   135,   135,   138,   139,   140,   141,   137,   143,   144,
     142,   142,   146,   147,   145,   149,   150,   151,   152,   148,
     153,   153,   155,   154,   157,   158,   159,   156,   160,   162,
     161,   161,   163,   165,   164,   164,   166,   168,   167,   169,
     167,   167,   170,   172,   171,   173,   171,   174,   171,   175,
     171,   171,   176,   178,   177,   179,   177,   177,   180,   182,
     181,   183,   181,   184,   181,   181,   185,   187,   186,   186,
     188,   188,   188,   189,   188,   191,   190,   193,   192,   192,
     194,   194,   194,   194,   194
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     0,     0,     6,     0,
       3,     0,     0,     0,     6,     0,     0,     0,     0,     8,
       0,     0,     0,     8,     0,     1,     1,     0,     0,     0,
       0,    10,     0,     0,     0,     0,    10,     0,     3,     0,
       0,     5,     0,     0,     3,     0,     1,     1,     0,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       3,     0,     0,     3,     1,     1,     1,     0,     0,     5,
       0,     0,     6,     0,     0,     3,     0,     4,     0,     0,
       5,     2,     0,     0,     3,     0,     2,     0,     3,     0,
       0,     3,     1,     0,     1,     0,     0,     0,     0,    11,
       0,     3,     0,     0,     0,     0,     0,    12,     0,     0,
       7,     0,     0,     0,     5,     0,     0,     0,     0,    12,
       1,     1,     0,     4,     0,     0,     0,     8,     2,     0,
       4,     0,     2,     0,     4,     0,     2,     0,     4,     0,
       4,     0,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     2,     0,     4,     0,     4,     0,     2,     0,
       4,     0,     4,     0,     4,     0,     2,     0,     3,     0,
       1,     1,     1,     0,     4,     0,     5,     0,     4,     0,
       1,     1,     1,     1,     1
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
        case 6:
#line 83 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("var ");}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 83 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 83 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 87 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("= ");}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 92 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 92 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 97 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("const ");}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 97 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("= ");}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 97 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 101 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 101 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 101 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("= ");}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 111 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("procedure ");}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 111 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 111 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(")\n");}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 116 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("function ");}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 116 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 116 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 116 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(")\n");}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 121 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 122 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("ref ");}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 122 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 127 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 137 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("begin\n");}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 137 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("end\n");}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 156 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(";\n");}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 161 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 171 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(".");}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 171 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 172 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("[");}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 172 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("]");}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 177 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" = ");}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 181 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 181 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(")");}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 185 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("ref ");}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 185 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 191 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 200 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 205 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("return ");}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 205 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 214 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("break\n");}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 218 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("if ");}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 218 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 218 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(") ");}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 218 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("then\n");}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 224 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("else\n");}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 230 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("switch ");}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 230 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 230 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(")\n");}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 231 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("begin");}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 234 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("end");}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 238 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("case ");}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 238 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(":\n");}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 245 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("default");}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 245 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(":");}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 250 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("for ");}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 250 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 250 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" = ");}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 250 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" do\n");}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 255 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" to ");}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 256 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" downto ");}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 260 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("loop\n");}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 262 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("end\n");}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 266 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("exit ");}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 266 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("when ");}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 266 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 266 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(")");}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 274 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("||");}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 283 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("&&");}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 292 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("==");}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 293 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("!=");}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 302 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("<");}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 303 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(">");}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 304 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("<=");}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 305 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(">=");}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 314 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" + ");}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 315 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" - ");}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 324 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("*");}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 325 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("/");}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 326 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%");}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 335 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("!");}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 343 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 343 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(")");}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 347 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("[");}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 347 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("]");}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 351 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(",");}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 356 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 357 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%i", (yyvsp[0].iValue));}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 358 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%f", (yyvsp[0].dValue));}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 359 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("true");}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 360 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("false");}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2137 "y.tab.c" /* yacc.c:1646  */
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
#line 364 "parserBottomUp.y" /* yacc.c:1906  */
