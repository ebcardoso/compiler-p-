#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parserBottomUp.y"
	#include <stdio.h>

	int yyerror (char *s);

	int yylex();

#line 11 "parserBottomUp.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	int 	iValue;
	double 	dValue; 	/**/
	char * 	sValue;		/**/
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 39 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define IDENTIFIER 257
#define STRING_LIT 258
#define NUMBER_INT 259
#define NUMBER_REAL 260
#define COMMENT 261
#define PROCEDURE 262
#define FUNCTION 263
#define REF 264
#define VAR 265
#define CONST 266
#define INT 267
#define REAL 268
#define STRING 269
#define BOOLEAN 270
#define TRUE 271
#define FALSE 272
#define NIL 273
#define BEG 274
#define END 275
#define RETURN 276
#define BREAK 277
#define IF 278
#define THEN 279
#define ELSE 280
#define SWITCH 281
#define CASE 282
#define DEFAULT 283
#define FOR 284
#define DOWNTO 285
#define TO 286
#define DO 287
#define LOOP 288
#define EXIT 289
#define WHEN 290
#define SEMICOLON 291
#define COLON 292
#define COMMA 293
#define DOT 294
#define OPEN_PARENTHESIS 295
#define CLOSE_PARENTHESIS 296
#define OPEN_BRACKETS 297
#define CLOSE_BRACKETS 298
#define OPEN_BRACES 299
#define CLOSE_BRACES 300
#define ADD 301
#define SUB 302
#define MULT 303
#define DIV 304
#define MOD 305
#define INCREMENT 306
#define DECREMENT 307
#define EQUAL 308
#define NEG 309
#define OR 310
#define AND 311
#define LESS_THEN 312
#define BIGGER_THEN 313
#define EQUAL_LOGIC 314
#define NOT_EQUAL 315
#define LESS_EQUAL 316
#define BIGGER_EQUAL 317
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    0,    1,    4,    4,    5,    5,    2,
    7,    7,    3,    3,   10,    8,    9,   12,   12,   12,
   13,   13,   14,   14,   11,   11,   11,   11,   11,   11,
   11,   11,   10,   23,   24,   24,   15,   25,   25,   25,
   26,   26,   26,   27,   28,   30,   30,   30,   31,   31,
   29,   32,   32,   16,   33,   33,   17,   18,   34,   34,
   19,   35,   35,   36,   22,   37,   37,   20,   21,    6,
   39,   39,   38,   41,   41,   40,   43,   43,   43,   42,
   45,   45,   45,   45,   45,   44,   47,   47,   47,   46,
   49,   49,   49,   49,   48,   51,   51,   50,   50,   50,
   50,   52,   54,   54,   53,   53,   53,   53,   53,
};
static const short yylen[] = {                            2,
    2,    2,    2,    0,    4,    2,    0,    4,    0,    5,
    5,    0,    1,    1,    4,    6,    6,    2,    3,    0,
    2,    0,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    4,    2,    2,    0,    2,    1,    1,    1,
    3,    4,    0,    2,    3,    3,    2,    0,    2,    0,
    2,    2,    0,    2,    1,    0,    1,    7,    2,    0,
    8,    5,    0,    3,    8,    1,    1,    3,    5,    2,
    3,    0,    2,    3,    0,    2,    3,    3,    0,    2,
    3,    3,    3,    3,    0,    2,    3,    3,    0,    2,
    3,    3,    3,    0,    2,    2,    0,    1,    1,    1,
    3,    4,    3,    0,    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,   13,   14,
    0,    0,    0,    0,    1,    2,    3,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   98,  105,  106,  107,
  108,  109,    0,    0,    6,    0,    0,    0,    0,    0,
    0,    0,   99,  100,    0,    5,    0,    0,   18,    0,
    0,    0,    0,    0,    0,   70,    0,   73,    0,    0,
   76,    0,    0,    0,    0,   80,    0,    0,   86,    0,
    0,    0,   90,    0,   95,    0,    0,   10,   21,   19,
    0,   16,   17,  101,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   96,
    0,    0,    0,    0,  102,   71,   74,   77,   78,   81,
   82,   83,   84,   87,   88,   91,   92,   93,    8,    0,
    0,    0,   57,    0,    0,    0,    0,    0,    0,   25,
   26,   27,   28,   29,   30,   31,   32,    0,  103,    0,
    0,    0,    0,    0,   37,   38,   39,   40,   55,   54,
    0,    0,    0,    0,    0,    0,   15,    0,   34,   33,
   11,    0,    0,    0,    0,    0,    0,   44,    0,    0,
    0,   68,    0,   35,   41,    0,    0,   47,   45,    0,
   51,    0,    0,    0,    0,    0,   46,   49,   52,   42,
    0,    0,   67,   66,    0,   69,   24,   23,    0,    0,
    0,    0,    0,   58,    0,    0,    0,    0,   59,    0,
    0,   61,   65,    0,   64,   62,
};
static const short yydgoto[] = {                         81,
    6,    7,    8,   21,   46,  164,   78,    9,   10,  197,
  198,   25,   49,  199,  130,  131,  132,  133,  134,  135,
  136,  137,  138,  159,  145,  146,  147,  148,  167,  165,
  178,  181,  150,  204,  201,  207,  195,   36,   56,   37,
   58,   38,   61,   39,   66,   40,   69,   41,   73,   42,
   75,   43,   44,   86,
};
static const short yysindex[] = {                      -128,
 -228, -218, -216, -213,    0, -128, -128, -128,    0,    0,
 -272, -240, -262, -243,    0,    0,    0, -230, -230, -241,
 -217, -241, -210, -172, -202, -199,    0,    0,    0,    0,
    0,    0, -241, -234,    0, -211, -208, -282, -245, -249,
 -188, -173,    0,    0, -156,    0, -186, -230,    0, -210,
 -128, -128, -146, -141, -241,    0, -241,    0, -241, -241,
    0, -241, -241, -241, -241,    0, -241, -241,    0, -241,
 -241, -241,    0, -241,    0, -262,  -94,    0,    0,    0,
 -110,    0,    0,    0, -234, -135, -211, -208, -282, -282,
 -245, -245, -245, -245, -249, -249, -188, -188, -188,    0,
 -217, -142, -197, -141,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -241,
 -189, -241,    0, -127, -125,  -90, -197, -119, -255,    0,
    0,    0,    0,    0,    0,    0,    0, -103,    0, -186,
  -84, -250, -241, -241,    0,    0,    0,    0,    0,    0,
 -241,  -83, -132, -114,  -97, -116,    0, -197,    0,    0,
    0, -189,  -76, -111, -113, -109, -112,    0, -108, -107,
 -241,    0, -241,    0,    0, -111, -250,    0,    0, -241,
    0, -189,  -92,  -89, -139, -106,    0,    0,    0,    0,
 -215,  -91,    0,    0, -241,    0,    0,    0,  -88, -241,
  -87,  -93, -215,    0,  -95,  -86,  -82, -215,    0, -215,
 -215,    0,    0,  -91,    0,    0,
};
static const short yyrindex[] = {                       195,
    0,    0,    0,    0,    0,    3,    3,    3,    0,    0,
    0,    0,   64,    0,    0,    0,    0,  -98,  -98,    0,
    6,    0,  -96,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  282,  245,  207,  169,  113,
   57,    1,    0,    0,    0,    0,  118,  -98,    0,  -96,
  -75,  -75,    0,  -85,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   64,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  282,  245,  207,  207,
  169,  169,  169,  169,  113,  113,   57,   57,   57,    0,
    6,    0,    0,  -85,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -187, -205,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  118,
    0,  -80,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -74,    0,    0,    0,    0,    0,    0,
    0, -187,    0,  -79,    0,  -77,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -79,  -80,    0,    0,    0,
    0, -187,    0,    0,    0,    0,    0,    0,    0,    0,
  -75,  -81,    0,    0,    0,    0,    0,    0, -193,    0,
    0,    0,  -75,    0,    0,    0,    0,  -75,    0,  -75,
  -75,    0,    0,  -81,    0,    0,
};
static const short yygindex[] = {                       114,
    0,    0,    0,  127,  103,  -20,   65,    0,    0,   97,
  -99,   -8,  158,  -78,   58,    0,    0,    0,    0,    0,
    0,    0, -115,    0, -147,    0,    0,    0,   29,   34,
   36,    0,    0,    0,   -1,    0,    0,  159,  131,  162,
  132,   95,   67,   77,   35,   91,   66,   40,   46,  148,
    0,    0,  -29,  119,
};
#define YYTABLESIZE 580
static const short yytable[] = {                         35,
   97,   47,    4,  129,   54,    9,   27,   28,   29,   30,
   26,  155,   53,  163,  175,   27,   28,   29,   30,  157,
   31,   32,   18,   28,   29,   30,   23,  154,   11,   31,
   32,   59,   60,   24,  190,  158,   31,   32,   12,   79,
   13,  121,  174,   14,   33,   20,    1,    2,   34,    3,
    4,   67,   68,   33,   19,  104,   94,   34,  154,  121,
  122,  123,  124,    7,   22,  125,   62,   63,  126,   56,
   64,   65,  127,  128,   56,   45,   56,   56,  122,  123,
  124,   60,   48,  125,   50,   56,  126,   43,   60,   60,
  127,  128,   43,   51,   43,   43,   52,   60,   55,  140,
   76,  149,   57,   43,  141,  142,   77,  143,   43,   97,
   98,   99,   89,    5,   70,   71,   72,   12,  144,   15,
   16,   17,  166,  168,  209,  110,  111,  112,  113,  213,
  169,  214,  215,    1,    2,   74,    3,    4,   91,   92,
   93,   94,  116,  117,  118,  193,  194,   82,   83,   84,
  185,   85,  186,   89,   90,  108,  109,   95,   96,  166,
  114,  115,  102,  103,  105,  120,  153,  151,   85,  152,
  156,  160,  162,  121,  202,  171,  158,  172,  173,  205,
  176,  177,  179,  180,  192,  182,  191,  183,  184,  196,
  200,  203,  212,  208,    4,  206,  210,   20,    4,   22,
   36,   63,  101,  119,  161,  211,   79,   80,  189,  170,
  188,  187,  216,   87,  104,   48,   50,  106,   88,  107,
   53,  100,  139,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   75,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   97,   97,    0,   97,   97,    9,    9,    0,
    9,    9,    0,    0,   97,   97,    4,    0,    0,    9,
   97,   72,   97,   97,    0,   97,   97,   97,    0,    0,
    0,   97,   97,   97,    0,    0,   97,    0,   97,    0,
    0,   97,   97,   97,   97,   97,    0,    0,    0,    0,
   97,   97,   97,   97,   97,   97,   97,   97,   94,   94,
    0,   94,   94,    0,    0,    7,    7,    0,    7,    7,
   94,   94,    0,    0,    0,    0,   94,    7,   94,   94,
    0,   94,   94,   94,    0,    0,    0,   94,   94,   94,
    0,    0,   94,    0,   94,    0,    7,   94,   94,    0,
    0,    0,    0,    0,    0,    0,   94,   94,   94,   94,
   94,   94,   94,   94,   89,   89,    0,   89,   89,   12,
   12,    0,   12,   12,    0,    0,   89,   89,    0,    0,
    0,   12,   89,    0,   89,   89,    0,   89,   89,   89,
    0,    0,    0,   89,   89,   89,    0,    0,   89,    0,
   89,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   89,   89,   89,   89,   89,   89,   89,   89,
   85,   85,    0,   85,   85,    0,    0,    0,    0,    0,
    0,    0,   85,   85,    0,    0,    0,    0,   85,    0,
   85,   85,    0,   85,   85,   85,    0,    0,    0,   85,
   85,   85,    0,    0,   85,    0,   85,    0,   79,   79,
    0,   79,   79,    0,    0,    0,    0,    0,   85,   85,
   79,   79,   85,   85,    0,    0,   79,    0,   79,   79,
    0,   79,   79,   79,    0,    0,    0,   79,   79,   79,
    0,    0,   79,    0,   79,    0,   75,   75,    0,   75,
   75,    0,    0,    0,    0,    0,   79,   79,   75,   75,
    0,    0,    0,    0,   75,    0,   75,   75,    0,   75,
   75,   75,    0,    0,    0,   75,   75,   75,    0,    0,
   75,    0,   75,   72,   72,    0,   72,   72,    0,    0,
    0,    0,    0,    0,   75,   72,   72,    0,    0,    0,
    0,   72,    0,   72,   72,    0,   72,   72,   72,    0,
    0,    0,   72,   72,   72,    0,    0,   72,    0,   72,
};
static const short yycheck[] = {                         20,
    0,   22,    0,  103,   34,    0,  257,  258,  259,  260,
   19,  127,   33,  264,  162,  257,  258,  259,  260,  275,
  271,  272,  295,  258,  259,  260,  257,  127,  257,  271,
  272,  314,  315,  264,  182,  291,  271,  272,  257,   48,
  257,  257,  158,  257,  295,  308,  262,  263,  299,  265,
  266,  301,  302,  295,  295,   85,    0,  299,  158,  257,
  276,  277,  278,    0,  308,  281,  312,  313,  284,  275,
  316,  317,  288,  289,  280,  293,  282,  283,  276,  277,
  278,  275,  293,  281,  257,  291,  284,  275,  282,  283,
  288,  289,  280,  296,  282,  283,  296,  291,  310,  120,
  257,  122,  311,  291,  294,  295,  293,  297,  296,   70,
   71,   72,    0,    0,  303,  304,  305,    0,  308,    6,
    7,    8,  143,  144,  203,   91,   92,   93,   94,  208,
  151,  210,  211,  262,  263,  309,  265,  266,   62,   63,
   64,   65,   97,   98,   99,  285,  286,   51,   52,  296,
  171,  293,  173,   59,   60,   89,   90,   67,   68,  180,
   95,   96,  257,  274,  300,  308,  257,  295,    0,  295,
  290,  275,  257,  257,  195,  308,  291,  275,  295,  200,
  257,  293,  296,  293,  274,  298,  279,  296,  296,  296,
  282,  280,  275,  287,    0,  283,  292,  296,  274,  296,
  275,  283,   76,  101,  140,  292,    0,   50,  180,  152,
  177,  176,  214,   55,  300,  296,  296,   87,   57,   88,
  298,   74,  104,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,    0,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  262,  263,   -1,  265,  266,  262,  263,   -1,
  265,  266,   -1,   -1,  274,  275,  274,   -1,   -1,  274,
  280,    0,  282,  283,   -1,  285,  286,  287,   -1,   -1,
   -1,  291,  292,  293,   -1,   -1,  296,   -1,  298,   -1,
   -1,  301,  302,  303,  304,  305,   -1,   -1,   -1,   -1,
  310,  311,  312,  313,  314,  315,  316,  317,  262,  263,
   -1,  265,  266,   -1,   -1,  262,  263,   -1,  265,  266,
  274,  275,   -1,   -1,   -1,   -1,  280,  274,  282,  283,
   -1,  285,  286,  287,   -1,   -1,   -1,  291,  292,  293,
   -1,   -1,  296,   -1,  298,   -1,  293,  301,  302,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  310,  311,  312,  313,
  314,  315,  316,  317,  262,  263,   -1,  265,  266,  262,
  263,   -1,  265,  266,   -1,   -1,  274,  275,   -1,   -1,
   -1,  274,  280,   -1,  282,  283,   -1,  285,  286,  287,
   -1,   -1,   -1,  291,  292,  293,   -1,   -1,  296,   -1,
  298,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  310,  311,  312,  313,  314,  315,  316,  317,
  262,  263,   -1,  265,  266,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  274,  275,   -1,   -1,   -1,   -1,  280,   -1,
  282,  283,   -1,  285,  286,  287,   -1,   -1,   -1,  291,
  292,  293,   -1,   -1,  296,   -1,  298,   -1,  262,  263,
   -1,  265,  266,   -1,   -1,   -1,   -1,   -1,  310,  311,
  274,  275,  314,  315,   -1,   -1,  280,   -1,  282,  283,
   -1,  285,  286,  287,   -1,   -1,   -1,  291,  292,  293,
   -1,   -1,  296,   -1,  298,   -1,  262,  263,   -1,  265,
  266,   -1,   -1,   -1,   -1,   -1,  310,  311,  274,  275,
   -1,   -1,   -1,   -1,  280,   -1,  282,  283,   -1,  285,
  286,  287,   -1,   -1,   -1,  291,  292,  293,   -1,   -1,
  296,   -1,  298,  262,  263,   -1,  265,  266,   -1,   -1,
   -1,   -1,   -1,   -1,  310,  274,  275,   -1,   -1,   -1,
   -1,  280,   -1,  282,  283,   -1,  285,  286,  287,   -1,
   -1,   -1,  291,  292,  293,   -1,   -1,  296,   -1,  298,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 317
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IDENTIFIER","STRING_LIT",
"NUMBER_INT","NUMBER_REAL","COMMENT","PROCEDURE","FUNCTION","REF","VAR","CONST",
"INT","REAL","STRING","BOOLEAN","TRUE","FALSE","NIL","BEG","END","RETURN",
"BREAK","IF","THEN","ELSE","SWITCH","CASE","DEFAULT","FOR","DOWNTO","TO","DO",
"LOOP","EXIT","WHEN","SEMICOLON","COLON","COMMA","DOT","OPEN_PARENTHESIS",
"CLOSE_PARENTHESIS","OPEN_BRACKETS","CLOSE_BRACKETS","OPEN_BRACES",
"CLOSE_BRACES","ADD","SUB","MULT","DIV","MOD","INCREMENT","DECREMENT","EQUAL",
"NEG","OR","AND","LESS_THEN","BIGGER_THEN","EQUAL_LOGIC","NOT_EQUAL",
"LESS_EQUAL","BIGGER_EQUAL","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : declaration",
"declaration : var declaration",
"declaration : const declaration",
"declaration : subprogram declaration",
"declaration :",
"var : VAR IDENTIFIER id_exp ids_exps",
"id_exp : EQUAL expression",
"id_exp :",
"ids_exps : COMMA IDENTIFIER id_exp ids_exps",
"ids_exps :",
"const : CONST IDENTIFIER EQUAL expression const_aux",
"const_aux : COMMA IDENTIFIER EQUAL expression const_aux",
"const_aux :",
"subprogram : procedure",
"subprogram : function",
"block : declaration BEG command END",
"procedure : PROCEDURE IDENTIFIER OPEN_PARENTHESIS parameter_list CLOSE_PARENTHESIS block",
"function : FUNCTION IDENTIFIER OPEN_PARENTHESIS parameter_list CLOSE_PARENTHESIS block",
"parameter_list : IDENTIFIER parameter_list_aux",
"parameter_list : REF IDENTIFIER parameter_list_aux",
"parameter_list :",
"parameter_list_aux : COMMA parameter_list",
"parameter_list_aux :",
"cb : command",
"cb : block",
"command : access_n_call",
"command : return",
"command : break",
"command : if",
"command : switch",
"command : loop",
"command : exit",
"command : for",
"block : declaration BEG commands END",
"commands : command commands_aux",
"commands_aux : SEMICOLON commands",
"commands_aux :",
"access_n_call : IDENTIFIER access_n_call_aux",
"access_n_call_aux : access",
"access_n_call_aux : attribuition",
"access_n_call_aux : subprogram_call",
"access : DOT IDENTIFIER access_n_call_aux",
"access : OPEN_BRACKETS l_exp CLOSE_BRACKETS access_n_call_aux",
"access :",
"attribuition : EQUAL expression",
"subprogram_call : OPEN_PARENTHESIS real_parameter_list CLOSE_PARENTHESIS",
"real_parameter_list : REF IDENTIFIER real_parameter_list_aux",
"real_parameter_list : expression real_parameter_list_aux",
"real_parameter_list :",
"real_parameter_list_aux : COMMA real_parameter_list",
"real_parameter_list_aux :",
"l_exp : expression l_exp_aux",
"l_exp_aux : COMMA l_exp",
"l_exp_aux :",
"return : RETURN return_aux",
"return_aux : expression",
"return_aux :",
"break : BREAK",
"if : IF OPEN_PARENTHESIS expression CLOSE_PARENTHESIS THEN cb else",
"else : ELSE cb",
"else :",
"switch : SWITCH OPEN_PARENTHESIS access_n_call CLOSE_PARENTHESIS BEG caselist default END",
"caselist : CASE expression COLON cb caselist",
"caselist :",
"default : DEFAULT COLON cb",
"for : FOR IDENTIFIER EQUAL expression for_aux expression DO cb",
"for_aux : TO",
"for_aux : DOWNTO",
"loop : LOOP commands END",
"exit : EXIT WHEN OPEN_PARENTHESIS expression CLOSE_PARENTHESIS",
"expression : term_or term_or_tail",
"term_or_tail : OR term_or term_or_tail",
"term_or_tail :",
"term_or : term_and term_and_tail",
"term_and_tail : AND term_and term_and_tail",
"term_and_tail :",
"term_and : term_bool_comparison term_bool_comparison_tail",
"term_bool_comparison_tail : EQUAL_LOGIC term_bool_comparison term_bool_comparison_tail",
"term_bool_comparison_tail : NOT_EQUAL term_bool_comparison term_bool_comparison_tail",
"term_bool_comparison_tail :",
"term_bool_comparison : term_arit_comparison term_arit_comparison_tail",
"term_arit_comparison_tail : LESS_THEN term_arit_comparison term_arit_comparison_tail",
"term_arit_comparison_tail : BIGGER_THEN term_arit_comparison term_arit_comparison_tail",
"term_arit_comparison_tail : LESS_EQUAL term_arit_comparison term_arit_comparison_tail",
"term_arit_comparison_tail : BIGGER_EQUAL term_arit_comparison term_arit_comparison_tail",
"term_arit_comparison_tail :",
"term_arit_comparison : term term_tail",
"term_tail : ADD term term_tail",
"term_tail : SUB term term_tail",
"term_tail :",
"term : factor factor_tail",
"factor_tail : MULT factor factor_tail",
"factor_tail : DIV factor factor_tail",
"factor_tail : MOD factor factor_tail",
"factor_tail :",
"factor : negation_unsub negation_unsub_tail",
"negation_unsub_tail : NEG negation_unsub",
"negation_unsub_tail :",
"negation_unsub : IDENTIFIER",
"negation_unsub : arr_exp",
"negation_unsub : literal",
"negation_unsub : OPEN_PARENTHESIS expression CLOSE_PARENTHESIS",
"arr_exp : OPEN_BRACES literal arr_exp_aux CLOSE_BRACES",
"arr_exp_aux : COMMA literal arr_exp_aux",
"arr_exp_aux :",
"literal : STRING_LIT",
"literal : NUMBER_INT",
"literal : NUMBER_REAL",
"literal : TRUE",
"literal : FALSE",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
