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
    BIGGER_EQUAL = 318,
    UMINUS = 319
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
#define UMINUS 319

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 7 "parserBottomUp.y" /* yacc.c:355  */

	int 	iValue;
	double 	dValue; 	//
	char * 	sValue;		//

#line 243 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 258 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   450

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  116
/* YYNRULES -- Number of rules.  */
#define YYNRULES  172
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  267

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

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
       2,     2,     2,     2,     2,    65,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    85,    85,    85,    86,    86,    87,    88,    92,    92,
      92,    96,    96,    97,   101,   101,   101,   102,   106,   106,
     106,   106,   110,   110,   110,   110,   111,   115,   116,   120,
     120,   120,   120,   120,   125,   125,   125,   125,   125,   130,
     130,   131,   131,   131,   132,   136,   136,   137,   141,   142,
     146,   146,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   162,   166,   166,   167,   171,   172,   172,   173,
     173,   177,   177,   181,   181,   181,   185,   185,   185,   186,
     187,   191,   191,   192,   196,   200,   200,   201,   205,   205,
     209,   210,   214,   218,   218,   218,   218,   218,   224,   224,
     226,   230,   230,   230,   231,   230,   238,   238,   238,   241,
     245,   245,   245,   247,   251,   251,   251,   251,   251,   256,
     257,   261,   261,   267,   267,   267,   267,   271,   271,   272,
     272,   273,   273,   274,   274,   275,   275,   276,   276,   277,
     277,   278,   278,   279,   279,   280,   280,   281,   281,   282,
     282,   283,   283,   284,   284,   285,   285,   286,   286,   287,
     288,   289,   290,   294,   294,   298,   298,   299,   303,   304,
     305,   306,   307
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
  "UMINUS", "'-'", "$accept", "declaration", "$@1", "$@2", "var", "$@3",
  "$@4", "id_exp", "$@5", "ids_exps", "$@6", "$@7", "const", "$@8", "$@9",
  "$@10", "const_aux", "$@11", "$@12", "$@13", "subprogram", "procedure",
  "$@14", "$@15", "$@16", "$@17", "function", "$@18", "$@19", "$@20",
  "$@21", "parameter_list", "$@22", "$@23", "$@24", "parameter_list_aux",
  "$@25", "cb", "block", "$@26", "command", "commands", "commands_aux",
  "$@27", "access_id", "$@28", "$@29", "attribuition", "$@30",
  "subprogram_call", "$@31", "$@32", "real_parameter_list", "$@33", "$@34",
  "real_parameter_list_aux", "$@35", "l_exp", "l_exp_aux", "$@36",
  "return", "$@37", "return_aux", "break", "if", "$@38", "$@39", "$@40",
  "$@41", "else", "$@42", "switch", "$@43", "$@44", "$@45", "$@46",
  "caselist", "$@47", "$@48", "default", "$@49", "$@50", "for", "$@51",
  "$@52", "$@53", "$@54", "for_aux", "loop", "$@55", "exit", "$@56",
  "$@57", "$@58", "expression", "$@59", "$@60", "$@61", "$@62", "$@63",
  "$@64", "$@65", "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72",
  "$@73", "$@74", "arr_exp", "$@75", "arr_exp_aux", "$@76", "literal", YY_NULLPTR
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
     315,   316,   317,   318,   319,    45
};
# endif

#define YYPACT_NINF -211

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-211)))

#define YYTABLE_NINF -74

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-74)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,  -211,  -211,  -211,  -211,    13,   -20,   -12,     7,  -211,
    -211,    38,    44,    49,    54,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,     7,     7,   -36,    18,     9,    31,  -211,
    -211,  -211,  -211,  -211,    50,  -211,    11,    11,    87,  -211,
    -211,    87,  -211,  -211,    46,    52,    55,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,     2,  -211,   364,  -211,
    -211,    92,   231,    60,    99,  -211,  -211,    62,    87,     5,
      87,    87,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,     7,     7,  -211,   303,    69,  -211,  -211,
     112,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,     9,   113,    11,    60,    97,
    -211,  -211,   108,  -211,  -211,    78,  -211,    83,   256,    30,
      30,  -211,  -211,  -211,   381,   381,    72,    72,   387,   387,
      72,    72,    50,  -211,  -211,  -211,  -211,  -211,    91,   281,
       5,  -211,  -211,  -211,  -211,  -211,    75,     4,   133,  -211,
    -211,  -211,    69,    87,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,   100,   117,     6,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,   108,  -211,  -211,    87,    87,
      98,   102,   137,     4,   105,  -211,  -211,  -211,  -211,   106,
    -211,   231,  -211,   364,  -211,  -211,  -211,   123,  -211,     4,
      87,  -211,  -211,    87,   143,    94,  -211,   114,  -211,   364,
     325,  -211,     8,  -211,  -211,  -211,  -211,    87,    87,   129,
     136,   135,   347,  -211,  -211,  -211,  -211,    87,  -211,   197,
     130,   189,   131,  -211,  -211,  -211,   132,  -211,  -211,  -211,
      87,  -211,   138,   197,   197,   206,   122,  -211,  -211,  -211,
    -211,  -211,     4,     4,   130,  -211,  -211
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,    29,    34,     8,    18,     0,     0,     0,     7,    27,
      28,     0,     0,     0,     0,     1,     2,     4,     6,    30,
      35,     9,    19,     7,     7,     0,     0,    13,     0,     3,
       5,    31,    36,    11,    17,    20,    44,    44,     0,    14,
      10,     0,    39,    41,     0,     0,    66,   168,   169,   170,
     171,   172,   157,   163,   155,   153,   159,   162,    12,   160,
     161,     0,    26,    47,     0,    32,    37,     0,     0,     0,
       0,     0,    67,    69,   143,   145,   147,   149,   151,   127,
     129,   135,   137,   131,   133,   139,   141,    15,    22,    21,
      45,    40,    42,     7,     7,    74,     0,   167,   156,   154,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,    44,    47,     0,
      33,    38,    80,   158,   165,     0,    68,     0,    87,   144,
     146,   148,   150,   152,   128,   130,   136,   138,   132,   134,
     140,   142,    17,    23,    46,    43,    50,    76,     0,    83,
       0,   164,    70,    85,    84,    16,     0,    52,     0,    75,
      81,    79,   167,     0,    24,    88,    92,    93,   101,   114,
     121,   123,    65,     0,     0,    60,    61,    53,    54,    55,
      56,    59,    57,    58,    77,    80,   166,    86,     0,    91,
       0,     0,     0,    52,     0,    63,    62,    51,    71,    83,
      82,    26,    89,    90,    94,   102,   115,     0,   124,    52,
       0,    78,    25,     0,     0,     0,   122,     0,    64,    72,
       0,    66,     0,   116,   125,    95,   103,     0,     0,     0,
       0,     0,     0,    96,   104,   120,   119,     0,   126,    52,
     109,     0,   100,    49,    48,   106,   113,   117,    98,    97,
       0,   110,     0,    52,    52,     0,     0,   105,   118,    99,
     107,   111,    52,    52,   109,   112,   108
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -211,    12,  -211,  -211,  -211,  -211,  -211,    47,  -211,    22,
    -211,  -211,  -211,  -211,  -211,  -211,   -33,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,   -35,  -211,  -211,  -211,    51,  -211,  -199,   -32,  -211,
    -210,  -185,  -211,  -211,  -156,  -211,  -211,  -211,  -211,  -153,
    -211,  -211,   -15,  -211,  -211,   -34,  -211,    14,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,   -93,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,   -38,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,    16,  -211,   -63
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   119,    23,    24,     6,    13,    27,    34,    38,    40,
      61,   115,     7,    14,    28,    41,    89,   116,   156,   188,
       8,     9,    11,    25,    36,    93,    10,    12,    26,    37,
      94,    44,    63,    64,   118,    91,   117,   242,   243,   157,
     172,   173,   196,   209,    56,   100,   101,   175,   210,    57,
      67,   122,   148,   158,   199,   161,   185,   127,   154,   163,
     177,   189,   202,   178,   179,   190,   213,   229,   239,   249,
     254,   180,   191,   214,   230,   240,   246,   250,   262,   252,
     256,   263,   181,   192,   215,   227,   253,   237,   182,   193,
     183,   194,   217,   228,   128,   107,   108,   111,   112,   109,
     110,   113,   114,   102,   103,   104,   105,   106,    71,    70,
      68,    59,    69,   125,   150,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,   174,    45,    62,   176,    31,    97,    46,   207,    47,
      48,    49,     5,    15,    42,     1,     2,    16,     3,     4,
      18,    43,    50,    51,   218,    17,   165,   166,   167,   244,
      96,   168,    98,    99,   169,    29,    30,   174,   170,   171,
     176,    19,    72,   244,   244,    73,    72,    20,    72,    73,
     226,    73,    21,   174,   258,   259,   176,    22,   222,    32,
     198,   120,   121,    33,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   264,   265,    76,
      77,    78,   144,   174,   149,    35,   176,   162,    65,    39,
      46,    47,    48,    49,    66,    87,   -73,   174,   174,    90,
     176,   176,    92,    95,    50,    51,   174,   174,   124,   176,
     176,    46,    47,    48,    49,   126,   143,   146,   147,    74,
      75,    76,    77,    78,   151,    50,    51,   152,    52,   164,
     -74,   -74,    53,   159,   -74,   -74,   184,   195,   197,   204,
     206,   208,    54,   205,   216,   160,   221,   149,   223,    52,
     201,   203,    55,    53,   233,   224,   234,   248,   245,   257,
     261,   251,   142,    54,   155,   211,   235,   236,   212,   145,
     200,   266,   219,    55,     0,   220,     0,   187,   186,     0,
       0,     0,    74,    75,    76,    77,    78,     0,     0,   231,
     232,    79,    80,    81,    82,    83,    84,    85,    86,   241,
      46,     0,     0,     0,     0,     1,     2,     0,     3,     4,
       0,     0,   255,     0,     0,     0,     0,    -7,     0,   165,
     166,   167,   247,     0,   168,     0,     0,   169,     0,     0,
       0,   170,   171,     0,     0,     0,    74,    75,    76,    77,
      78,     0,     0,     0,   260,    79,    80,    81,    82,    83,
      84,    85,    86,    74,    75,    76,    77,    78,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    85,    86,
      88,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    85,    86,   153,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    85,    86,
     160,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    85,    86,   123,     0,     0,     0,     0,
      74,    75,    76,    77,    78,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,    85,    86,   225,     0,     0,
       0,     0,    74,    75,    76,    77,    78,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    85,    86,   238,
       0,     0,     0,     0,    74,    75,    76,    77,    78,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    85,
      86,    74,    75,    76,    77,    78,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    85,    86,    74,    75,
      76,    77,    78,     0,    74,    75,    76,    77,    78,    81,
      82,    83,    84,    85,    86,    81,    82,   -74,   -74,    85,
      86
};

static const yytype_int16 yycheck[] =
{
      38,   157,    37,    41,   157,    41,    69,     3,   193,     4,
       5,     6,     0,     0,     3,     8,     9,    37,    11,    12,
       8,    10,    17,    18,   209,    37,    22,    23,    24,   239,
      68,    27,    70,    71,    30,    23,    24,   193,    34,    35,
     193,     3,    40,   253,   254,    43,    40,     3,    40,    43,
      42,    43,     3,   209,   253,   254,   209,     3,   214,    41,
      54,    93,    94,    54,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   262,   263,    49,
      50,    51,   117,   239,   122,    54,   239,   150,    42,    39,
       3,     4,     5,     6,    42,     3,    41,   253,   254,    39,
     253,   254,     3,    41,    17,    18,   262,   263,    39,   262,
     263,     3,     4,     5,     6,     3,     3,    20,    10,    47,
      48,    49,    50,    51,    46,    17,    18,    44,    41,    54,
      58,    59,    45,    42,    62,    63,     3,    37,    21,    41,
       3,    36,    55,    41,    21,    39,     3,   185,    54,    41,
     188,   189,    65,    45,    25,    41,    20,    26,    28,    21,
      38,    29,   115,    55,   142,   199,    31,    32,   201,   118,
     185,   264,   210,    65,    -1,   213,    -1,   163,   162,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,   227,
     228,    56,    57,    58,    59,    60,    61,    62,    63,   237,
       3,    -1,    -1,    -1,    -1,     8,     9,    -1,    11,    12,
      -1,    -1,   250,    -1,    -1,    -1,    -1,    20,    -1,    22,
      23,    24,    33,    -1,    27,    -1,    -1,    30,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    38,    56,    57,    58,    59,    60,
      61,    62,    63,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    42,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    42,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    42,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    47,    48,
      49,    50,    51,    -1,    47,    48,    49,    50,    51,    58,
      59,    60,    61,    62,    63,    58,    59,    60,    61,    62,
      63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    11,    12,    67,    70,    78,    86,    87,
      92,    88,    93,    71,    79,     0,    37,    37,    67,     3,
       3,     3,     3,    68,    69,    89,    94,    72,    80,    67,
      67,    41,    41,    54,    73,    54,    90,    95,    74,    39,
      75,    81,     3,    10,    97,    97,     3,     4,     5,     6,
      17,    18,    41,    45,    55,    65,   110,   115,   160,   177,
     181,    76,   160,    98,    99,    42,    42,   116,   176,   178,
     175,   174,    40,    43,    47,    48,    49,    50,    51,    56,
      57,    58,    59,    60,    61,    62,    63,     3,    39,    82,
      39,   101,     3,    91,    96,    41,   160,   181,   160,   160,
     111,   112,   169,   170,   171,   172,   173,   161,   162,   165,
     166,   163,   164,   167,   168,    77,    83,   102,   100,    67,
     104,   104,   117,    42,    39,   179,     3,   123,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,    73,     3,    97,   101,    20,    10,   118,   160,
     180,    46,    44,    39,   124,    75,    84,   105,   119,    42,
      39,   121,   181,   125,    54,    22,    23,    24,    27,    30,
      34,    35,   106,   107,   110,   113,   115,   126,   129,   130,
     137,   148,   154,   156,     3,   122,   179,   123,    85,   127,
     131,   138,   149,   155,   157,    37,   108,    21,    54,   120,
     118,   160,   128,   160,    41,    41,     3,   107,    36,   109,
     114,   121,    82,   132,   139,   150,    21,   158,   107,   160,
     160,     3,   110,    54,    41,    42,    42,   151,   159,   133,
     140,   160,   160,    25,    20,    31,    32,   153,    42,   134,
     141,   160,   103,   104,   106,    28,   142,    33,    26,   135,
     143,    29,   145,   152,   136,   160,   146,    21,   103,   103,
      38,    38,   144,   147,   107,   107,   142
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    68,    67,    69,    67,    67,    67,    71,    72,
      70,    74,    73,    73,    76,    77,    75,    75,    79,    80,
      81,    78,    83,    84,    85,    82,    82,    86,    86,    88,
      89,    90,    91,    87,    93,    94,    95,    96,    92,    98,
      97,    99,   100,    97,    97,   102,   101,   101,   103,   103,
     105,   104,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   107,   109,   108,   108,   110,   111,   110,   112,
     110,   114,   113,   116,   117,   115,   119,   120,   118,   118,
     118,   122,   121,   121,   123,   125,   124,   124,   127,   126,
     128,   128,   129,   131,   132,   133,   134,   130,   136,   135,
     135,   138,   139,   140,   141,   137,   143,   144,   142,   142,
     146,   147,   145,   145,   149,   150,   151,   152,   148,   153,
     153,   155,   154,   157,   158,   159,   156,   161,   160,   162,
     160,   163,   160,   164,   160,   165,   160,   166,   160,   167,
     160,   168,   160,   169,   160,   170,   160,   171,   160,   172,
     160,   173,   160,   174,   160,   175,   160,   176,   160,   160,
     160,   160,   160,   178,   177,   180,   179,   179,   181,   181,
     181,   181,   181
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     0,     4,     2,     0,     0,     0,
       6,     0,     3,     0,     0,     0,     6,     0,     0,     0,
       0,     8,     0,     0,     0,     8,     0,     1,     1,     0,
       0,     0,     0,    10,     0,     0,     0,     0,    10,     0,
       3,     0,     0,     5,     0,     0,     3,     0,     1,     1,
       0,     5,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     3,     0,     1,     0,     4,     0,
       5,     0,     4,     0,     0,     6,     0,     0,     5,     2,
       0,     0,     3,     0,     2,     0,     3,     0,     0,     3,
       1,     0,     1,     0,     0,     0,     0,    11,     0,     3,
       0,     0,     0,     0,     0,    12,     0,     0,     7,     0,
       0,     0,     5,     0,     0,     0,     0,     0,    12,     1,
       1,     0,     4,     0,     0,     0,     8,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     3,     0,     3,     0,     4,     1,
       1,     1,     1,     0,     5,     0,     4,     0,     1,     1,
       1,     1,     1
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
#line 85 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(";\n");}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 86 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(";\n");}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 92 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("var ");}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 92 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 92 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 96 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("= ");}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 101 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 101 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 106 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("const ");}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 106 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 106 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("= ");}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 106 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 110 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 110 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 110 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("= ");}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 120 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("procedure ");}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 120 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 120 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 120 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(")\n");}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 125 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("function ");}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 125 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 125 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 125 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(")\n");}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 130 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 131 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("ref ");}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 131 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 136 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 146 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("begin\n");}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 146 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("end\n");}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 166 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(";\n");}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 171 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 172 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(".");}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 172 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 173 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("[");}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 173 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("]");}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 177 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" = ");}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 181 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 181 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 181 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(")");}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 185 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("ref ");}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 185 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s ", (yyvsp[0].sValue));}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 191 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 200 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(", ");}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 205 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("return ");}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 205 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 214 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("break\n");}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 218 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("if ");}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 218 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 218 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(") ");}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 218 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("then\n");}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 224 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("else\n");}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 230 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("switch ");}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 230 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 230 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(")\n");}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 231 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("begin");}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 234 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("end\n");}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 238 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("case ");}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 238 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(":\n");}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 245 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("default");}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 245 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(":");}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 251 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("for ");}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 251 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 251 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" = ");}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 251 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" do\n");}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 256 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" to ");}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 257 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" downto ");}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 261 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("loop\n");}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 263 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("end\n");}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 267 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("exit ");}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 267 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("when ");}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 267 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 267 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(")");}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 271 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("||");}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 272 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("&&");}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 273 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("==");}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 274 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("!=");}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 275 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("<");}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 276 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(">");}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 277 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("<=");}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 278 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(">=");}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 279 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" + ");}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 280 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(" - ");}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 281 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("*");}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 282 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("/");}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 283 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("\\");}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 284 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("-");}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 285 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("!");}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 286 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("(");}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 286 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(")");}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 294 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("[");}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 294 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("]");}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 298 "parserBottomUp.y" /* yacc.c:1646  */
    {printf(",");}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 303 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%s", (yyvsp[0].sValue));}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 304 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%i", (yyvsp[0].iValue));}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 305 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("%f", (yyvsp[0].dValue));}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 306 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("true");}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 307 "parserBottomUp.y" /* yacc.c:1646  */
    {printf("false");}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2180 "y.tab.c" /* yacc.c:1646  */
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
#line 311 "parserBottomUp.y" /* yacc.c:1906  */

