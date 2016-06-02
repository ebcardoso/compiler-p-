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
	#include "symbolTable.h"
	int yyerror (char *s);
	int yylex();
#line 8 "parserBottomUp.y"
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
#line 37 "y.tab.c"

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
#define INIT 274
#define FINAL 275
#define RETURN 276
#define BREAK 277
#define IF 278
#define THEN 279
#define ELSE_ 280
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
#define NEGATION 309
#define OR 310
#define AND 311
#define LESS_THEN 312
#define BIGGER_THEN 313
#define EQUAL_LOGIC 314
#define NOT_EQUAL 315
#define LESS_EQUAL 316
#define BIGGER_EQUAL 317
#define UMINUS 318
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    2,    0,    4,    1,    6,    1,    1,    1,    8,   10,
    3,   13,    9,    9,   14,   15,   11,   11,   16,   17,
   18,    5,   20,   21,   22,   19,   19,    7,    7,   25,
   26,   28,   30,   23,   31,   32,   33,   34,   24,   36,
   27,   37,   38,   27,   27,   39,   35,   35,   40,   40,
   43,   29,   41,   41,   41,   41,   41,   41,   41,   41,
   41,   41,   42,   54,   53,   53,   55,   56,   55,   58,
   55,   59,   51,   60,   62,   52,   63,   65,   61,   61,
   61,   66,   64,   64,   57,   68,   67,   67,   70,   44,
   69,   69,   45,   71,   72,   73,   74,   46,   76,   75,
   75,   77,   78,   79,   81,   47,   83,   84,   80,   80,
   85,   86,   82,   82,   87,   88,   89,   91,   50,   90,
   90,   92,   48,   93,   94,   95,   49,   96,   12,   97,
   12,   98,   12,   99,   12,  100,   12,  101,   12,  102,
   12,  103,   12,  104,   12,  105,   12,  106,   12,  107,
   12,  108,   12,  109,   12,  110,   12,  111,   12,   12,
   12,   12,   12,  114,  112,  116,  115,  115,  113,  113,
  113,  113,  113,
};
static const short yylen[] = {                            2,
    0,    2,    0,    4,    0,    4,    2,    0,    0,    0,
    6,    0,    3,    0,    0,    0,    6,    0,    0,    0,
    0,    8,    0,    0,    0,    8,    0,    1,    1,    0,
    0,    0,    0,   10,    0,    0,    0,    0,   10,    0,
    3,    0,    0,    5,    0,    0,    3,    0,    1,    1,
    0,    5,    0,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    2,    0,    3,    0,    1,    0,    4,    0,
    5,    0,    4,    0,    0,    6,    0,    0,    5,    2,
    0,    0,    3,    0,    2,    0,    3,    0,    0,    3,
    1,    0,    1,    0,    0,    0,    0,   11,    0,    3,
    0,    0,    0,    0,    0,   12,    0,    0,    7,    0,
    0,    0,    5,    0,    0,    0,    0,    0,   12,    1,
    1,    0,    4,    0,    0,    0,    8,    0,    4,    0,
    4,    0,    4,    0,    4,    0,    4,    0,    4,    0,
    4,    0,    4,    0,    4,    0,    4,    0,    4,    0,
    4,    0,    4,    0,    3,    0,    3,    0,    4,    1,
    1,    1,    1,    0,    5,    0,    4,    0,    1,    1,
    1,    1,    1,
};
static const short yydefred[] = {                         1,
    0,    0,   30,   35,    9,   19,    2,    0,    0,    0,
   28,   29,    0,    0,    0,    0,    3,    5,    7,   31,
   36,   10,   20,    0,    0,    0,    0,    0,    0,    4,
    6,   32,   37,   12,    0,   21,    0,    0,    0,   15,
   11,    0,   40,   42,    0,    0,    0,  169,  170,  171,
  172,  173,  158,  164,  156,  154,    0,  163,    0,  161,
  162,    0,    0,    0,    0,   33,   38,    0,    0,    0,
    0,    0,  144,  146,  148,  150,  152,  128,  130,  136,
  138,  132,  134,  140,  142,   68,   70,   16,   23,   22,
   46,   41,   43,    0,    0,   75,    0,    0,  157,  155,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   34,   39,    0,  159,  166,    0,    0,    0,  149,  151,
  153,    0,    0,    0,    0,    0,    0,    0,    0,   69,
    0,    0,    0,   24,   47,   44,   51,   77,    0,    0,
    0,  165,   86,   85,   71,   17,    0,    0,    0,   82,
   80,   76,    0,    0,   25,   89,   93,   94,  102,  115,
  122,  124,    0,    0,   54,   55,   56,   57,   58,   59,
   60,   61,   62,    0,   78,    0,  167,   87,    0,    0,
    0,    0,    0,    0,    0,   64,   63,   52,   72,    0,
   83,    0,    0,   90,   95,  103,  116,    0,  125,    0,
    0,   79,   26,    0,    0,    0,  123,    0,   65,    0,
    0,   67,    0,  117,  126,   96,  104,    0,    0,    0,
    0,    0,    0,   97,  105,  121,  120,    0,  127,    0,
    0,    0,   50,    0,   49,  107,    0,  118,   99,   98,
    0,  111,    0,    0,    0,    0,    0,  106,  119,  100,
  108,  112,    0,    0,    0,  113,  109,
};
static const short yydgoto[] = {                          1,
  120,    2,    8,   24,    9,   25,   10,   15,   35,   28,
   41,  141,   39,   62,  116,   16,   29,   42,   90,  117,
  157,  189,   11,   12,   13,   26,   45,   37,  243,   94,
   14,   27,   38,   95,   92,   64,   65,  119,  118,  244,
  173,  174,  158,  175,  176,  177,  178,  179,  180,  181,
  182,   58,  197,  210,   59,  114,  142,  115,  211,   68,
  150,  123,  159,  161,  200,  186,  154,  164,  204,  190,
  191,  214,  230,  240,  250,  255,  192,  215,  231,  247,
  241,  253,  251,  263,  257,  264,  193,  216,  228,  238,
  254,  194,  195,  218,  229,  106,  107,  110,  111,  108,
  109,  112,  113,  101,  102,  103,  104,  105,   72,   71,
   69,   60,   61,   70,  126,  151,
};
static const short yysindex[] = {                         0,
    0, -143,    0,    0,    0,    0,    0, -288, -277, -143,
    0,    0, -226, -199, -195, -168,    0,    0,    0,    0,
    0,    0,    0, -143, -143, -192, -181, -190, -183,    0,
    0,    0,    0,    0, -193,    0, -208, -208,  -37,    0,
    0,  -37,    0,    0, -166, -160,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  475,    0, -251,    0,
    0, -133,  342, -152, -117,    0,    0, -150,  -37, -177,
  -37,  -37,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -143, -143,    0,  414, -147,    0,    0,
  -37,  -37,  -37,  -37,  -37,  -37,  -37,  -37,  -37,  -37,
  -37,  -37,  -37, -104,  -37, -190,  -93, -208, -152, -125,
    0,    0,  -45,    0,    0, -135, -212, -212,    0,    0,
    0,  492,  492,  -97,  -97,  498,  498,  -97,  -97,    0,
  367, -130, -193,    0,    0,    0,    0,    0,  392, -127,
 -177,    0,    0,    0,    0,    0, -131, -172,  -84,    0,
    0,    0, -147,  -37,    0,    0,    0,    0,    0,    0,
    0,    0, -113,  -95,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -276,    0,  -45,    0,    0,  -37,  -37,
 -114, -111,  -75, -172, -105,    0,    0,    0,    0, -102,
    0,  342,  475,    0,    0,    0,    0,  -83,    0, -172,
  -37,    0,    0,  -37,  -48,  -98,    0,  -78,    0,  475,
  436,    0, -281,    0,    0,    0,    0,  -37,  -37,  -68,
  -56, -115,  458,    0,    0,    0,    0,  -37,    0,  -33,
  -57,  300,    0,  -52,    0,    0,  -46,    0,    0,    0,
  -37,    0,  -34,  -33,  -33,  317,  -43,    0,    0,    0,
    0,    0, -172, -172,  -57,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,  240,    0,    0,    0,    0,    0,    0,    0,    1,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    1,    1,    0,    0, -178,    0,    0,
    0,    0,    0,    0, -277,    0,  -54,  -54,    0,    0,
    0,    0,    0,    0,    0,    0,   -9,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -141,    0,   34,    0,
    0,    0,  -38,  -31,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -28,  -28,    0,    0,  -39,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -178,    0,  -54,  -31,    0,
    0,    0,  -29,    0,    0,    0, -154,   77,    0,    0,
    0,  231,  253, -263,  120,  275,  297,  157,  194,    0,
  -19,    0, -277,    0,    0,    0,    0,    0,  -27,    0,
    0,    0,    0,    0,    0,    0,    0, -264,    0,    0,
    0,    0,  -39,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -222,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -29,    0,    0,    0,  -44,
    0,    0,    0, -264,    0,    0,    0,    0,    0,  -27,
    0,  -38,  -23,    0,    0,    0,    0,    0,    0, -148,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  142,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -108,
 -220,    0,    0,   83,    0,    0,  -12,    0,    0,    0,
    0,    0,    0, -108, -108,    0,    0,    0,    0,    0,
    0,    0, -148, -264, -220,    0,    0,
};
static const short yygindex[] = {                         0,
   40,    0,    0,    0,    0,    0,    0,    0,  154,    0,
  137,  -35,    0,    0,    0,    0,    0,    0,   79,    0,
    0,    0,    0,    0,    0,    0,  -32,    0,  -50,    0,
    0,    0,    0,    0,  171,    0,    0,    0,    0, -158,
 -215, -184,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -153,    0,    0, -156,    0,  127,    0,    0,    0,
  111,    0,    0,   98,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   35,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -61,    0,  147,    0,
};
#define YYTABLESIZE 815
static const short yytable[] = {                         56,
    8,  184,   17,   57,  183,   46,   63,   56,   98,  208,
   53,  137,   86,   18,  227,   87,  137,   86,  137,  137,
   87,  137,  137,  137,  245,  219,   53,  137,  137,  137,
   20,  199,  137,   97,  137,   99,  100,  184,  245,  245,
  183,    7,   86,  121,  122,   87,  137,  137,   43,   19,
  137,  137,   66,  184,  110,   44,  183,   21,  223,   66,
   66,   22,  110,   30,   31,  127,  128,  129,  130,  131,
  132,  133,  134,  135,  136,  137,  138,  139,  265,  266,
   48,   49,   50,  184,   47,  145,  183,  149,   23,  163,
   75,   76,   77,   51,   52,  259,  260,  184,  184,   40,
  183,  183,   32,  166,  167,  168,  184,  184,  169,  183,
  183,  170,   14,   33,   14,  171,  172,   34,    3,    4,
  145,    5,    6,   88,   36,  145,   53,  145,  145,   66,
  145,  145,  145,   53,   53,   67,  145,  145,  145,   93,
   91,  145,   53,  145,   96,  125,  145,  145,  147,   13,
  149,   13,  140,  202,  203,  145,  145,  145,  145,  145,
  145,  145,  145,  144,  152,    8,   53,  155,  162,  236,
  237,   53,  185,   53,   53,  220,  165,  196,  221,  198,
  205,  207,   53,  206,  209,   73,   74,   75,   76,   77,
  160,  217,  232,  233,   78,   79,   80,   81,   82,   83,
   84,   85,  242,   73,   74,   75,   76,   77,  222,  224,
  234,   47,   48,   49,   50,  256,  225,  235,  148,   47,
   48,   49,   50,   47,  246,   51,   52,  249,    3,    4,
   92,    5,    6,   51,   52,   92,  252,   92,   92,    8,
  258,   45,  166,  167,  168,    8,   92,  169,  262,   53,
  170,   91,   27,   54,  171,  172,   91,   53,   91,   91,
  168,   54,  114,   55,   48,   67,   81,   91,   84,  143,
   67,   55,   67,   67,    8,   67,   67,   67,   88,  156,
  213,   67,   67,   67,   67,   74,   67,   67,   67,  146,
  188,   67,   67,   67,   67,   67,  201,  212,   67,  267,
   67,   67,   67,   67,   67,   67,   67,   67,  160,  187,
    0,    0,    0,  160,    0,  160,  160,    0,  160,  160,
  160,    0,    0,    0,  160,  160,  160,    0,    0,  160,
    0,  160,    0,    0,  160,  160,  160,  160,  160,    0,
    0,    0,    0,  160,  160,  160,  160,  160,  160,  160,
  160,  147,    0,    0,    0,    0,  147,  101,  147,  147,
    0,  147,  147,  147,  101,  101,    0,  147,  147,  147,
    0,    0,  147,  101,  147,    0,    0,  147,  147,    0,
    0,    0,    0,    0,    0,    0,  147,  147,  147,  147,
  147,  147,  147,  147,  139,    0,    0,    0,    0,  139,
    0,  139,  139,    0,  139,  139,  139,    0,    0,    0,
  139,  139,  139,    0,    0,  139,   73,  139,    0,    0,
    0,   73,    0,   73,   73,    0,    0,    0,    0,  139,
  139,  141,   73,  139,  139,    0,  141,    0,  141,  141,
    0,  141,  141,  141,    0,    0,    0,  141,  141,  141,
    0,    0,  141,    0,  141,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  141,  141,  143,    0,
  141,  141,    0,  143,    0,  143,  143,    0,  143,  143,
  143,    0,    0,    0,  143,  143,  143,    0,    0,  143,
    0,  143,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  143,  143,  129,    0,  143,  143,    0,
  129,    0,  129,  129,    0,  129,  129,  129,    0,    0,
    0,  129,  129,  129,    0,    0,  129,  131,  129,    0,
    0,    0,  131,    0,  131,  131,    0,  131,  131,  131,
  129,  129,    0,  131,  131,  131,    0,    0,  131,  133,
  131,    0,    0,    0,  133,    0,  133,  133,    0,  133,
  133,  133,  131,  131,    0,  133,  133,  133,    0,    0,
  133,  135,  133,    0,    0,    0,  135,    0,  135,  135,
    0,  135,  135,  135,  133,  133,  248,  135,  135,  135,
    0,    0,  135,    0,  135,    0,    0,    0,    0,    0,
   73,   74,   75,   76,   77,    0,  135,  135,  261,   78,
   79,   80,   81,   82,   83,   84,   85,   73,   74,   75,
   76,   77,    0,    0,    0,    0,   78,   79,   80,   81,
   82,   83,   84,   85,   89,    0,    0,    0,    0,    0,
    0,    0,   73,   74,   75,   76,   77,    0,    0,    0,
    0,   78,   79,   80,   81,   82,   83,   84,   85,  153,
    0,    0,    0,    0,    0,    0,    0,   73,   74,   75,
   76,   77,    0,    0,    0,    0,   78,   79,   80,   81,
   82,   83,   84,   85,  160,    0,    0,    0,    0,    0,
    0,    0,   73,   74,   75,   76,   77,    0,    0,    0,
    0,   78,   79,   80,   81,   82,   83,   84,   85,  124,
    0,    0,    0,    0,   73,   74,   75,   76,   77,    0,
    0,    0,    0,   78,   79,   80,   81,   82,   83,   84,
   85,  226,    0,    0,    0,    0,   73,   74,   75,   76,
   77,    0,    0,    0,    0,   78,   79,   80,   81,   82,
   83,   84,   85,  239,    0,    0,    0,    0,   73,   74,
   75,   76,   77,    0,    0,    0,    0,   78,   79,   80,
   81,   82,   83,   84,   85,   73,   74,   75,   76,   77,
    0,    0,    0,    0,   78,   79,   80,   81,   82,   83,
   84,   85,   73,   74,   75,   76,   77,    0,   73,   74,
   75,   76,   77,   80,   81,   82,   83,   84,   85,   80,
   81,    0,    0,   84,   85,
};
static const short yycheck[] = {                         45,
    0,  158,  291,   39,  158,   38,   42,   45,   70,  194,
  275,  275,  294,  291,  296,  297,  280,  294,  282,  283,
  297,  285,  286,  287,  240,  210,  291,  291,  292,  293,
  257,  308,  296,   69,  298,   71,   72,  194,  254,  255,
  194,    2,  294,   94,   95,  297,  310,  311,  257,   10,
  314,  315,  275,  210,  275,  264,  210,  257,  215,  282,
  283,  257,  283,   24,   25,  101,  102,  103,  104,  105,
  106,  107,  108,  109,  110,  111,  112,  113,  263,  264,
  258,  259,  260,  240,  257,  118,  240,  123,  257,  151,
  303,  304,  305,  271,  272,  254,  255,  254,  255,  293,
  254,  255,  295,  276,  277,  278,  263,  264,  281,  263,
  264,  284,  291,  295,  293,  288,  289,  308,  262,  263,
  275,  265,  266,  257,  308,  280,  275,  282,  283,  296,
  285,  286,  287,  282,  283,  296,  291,  292,  293,  257,
  293,  296,  291,  298,  295,  293,  301,  302,  274,  291,
  186,  293,  257,  189,  190,  310,  311,  312,  313,  314,
  315,  316,  317,  257,  300,  274,  275,  298,  296,  285,
  286,  280,  257,  282,  283,  211,  308,  291,  214,  275,
  295,  257,  291,  295,  290,  301,  302,  303,  304,  305,
  293,  275,  228,  229,  310,  311,  312,  313,  314,  315,
  316,  317,  238,  301,  302,  303,  304,  305,  257,  308,
  279,  257,  258,  259,  260,  251,  295,  274,  264,  257,
  258,  259,  260,  257,  282,  271,  272,  280,  262,  263,
  275,  265,  266,  271,  272,  280,  283,  282,  283,    0,
  275,  296,  276,  277,  278,  274,  291,  281,  292,  295,
  284,  275,  291,  299,  288,  289,  280,  295,  282,  283,
  300,  299,  275,  309,  296,  275,  296,  291,  296,  116,
  280,  309,  282,  283,  274,  285,  286,  287,  298,  143,
  202,  291,  292,  293,  294,  295,  296,  297,  298,  119,
  164,  301,  302,  303,  304,  305,  186,  200,  308,  265,
  310,  311,  312,  313,  314,  315,  316,  317,  275,  163,
   -1,   -1,   -1,  280,   -1,  282,  283,   -1,  285,  286,
  287,   -1,   -1,   -1,  291,  292,  293,   -1,   -1,  296,
   -1,  298,   -1,   -1,  301,  302,  303,  304,  305,   -1,
   -1,   -1,   -1,  310,  311,  312,  313,  314,  315,  316,
  317,  275,   -1,   -1,   -1,   -1,  280,  275,  282,  283,
   -1,  285,  286,  287,  282,  283,   -1,  291,  292,  293,
   -1,   -1,  296,  291,  298,   -1,   -1,  301,  302,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  310,  311,  312,  313,
  314,  315,  316,  317,  275,   -1,   -1,   -1,   -1,  280,
   -1,  282,  283,   -1,  285,  286,  287,   -1,   -1,   -1,
  291,  292,  293,   -1,   -1,  296,  275,  298,   -1,   -1,
   -1,  280,   -1,  282,  283,   -1,   -1,   -1,   -1,  310,
  311,  275,  291,  314,  315,   -1,  280,   -1,  282,  283,
   -1,  285,  286,  287,   -1,   -1,   -1,  291,  292,  293,
   -1,   -1,  296,   -1,  298,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  310,  311,  275,   -1,
  314,  315,   -1,  280,   -1,  282,  283,   -1,  285,  286,
  287,   -1,   -1,   -1,  291,  292,  293,   -1,   -1,  296,
   -1,  298,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  310,  311,  275,   -1,  314,  315,   -1,
  280,   -1,  282,  283,   -1,  285,  286,  287,   -1,   -1,
   -1,  291,  292,  293,   -1,   -1,  296,  275,  298,   -1,
   -1,   -1,  280,   -1,  282,  283,   -1,  285,  286,  287,
  310,  311,   -1,  291,  292,  293,   -1,   -1,  296,  275,
  298,   -1,   -1,   -1,  280,   -1,  282,  283,   -1,  285,
  286,  287,  310,  311,   -1,  291,  292,  293,   -1,   -1,
  296,  275,  298,   -1,   -1,   -1,  280,   -1,  282,  283,
   -1,  285,  286,  287,  310,  311,  287,  291,  292,  293,
   -1,   -1,  296,   -1,  298,   -1,   -1,   -1,   -1,   -1,
  301,  302,  303,  304,  305,   -1,  310,  311,  292,  310,
  311,  312,  313,  314,  315,  316,  317,  301,  302,  303,
  304,  305,   -1,   -1,   -1,   -1,  310,  311,  312,  313,
  314,  315,  316,  317,  293,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  301,  302,  303,  304,  305,   -1,   -1,   -1,
   -1,  310,  311,  312,  313,  314,  315,  316,  317,  293,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  301,  302,  303,
  304,  305,   -1,   -1,   -1,   -1,  310,  311,  312,  313,
  314,  315,  316,  317,  293,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  301,  302,  303,  304,  305,   -1,   -1,   -1,
   -1,  310,  311,  312,  313,  314,  315,  316,  317,  296,
   -1,   -1,   -1,   -1,  301,  302,  303,  304,  305,   -1,
   -1,   -1,   -1,  310,  311,  312,  313,  314,  315,  316,
  317,  296,   -1,   -1,   -1,   -1,  301,  302,  303,  304,
  305,   -1,   -1,   -1,   -1,  310,  311,  312,  313,  314,
  315,  316,  317,  296,   -1,   -1,   -1,   -1,  301,  302,
  303,  304,  305,   -1,   -1,   -1,   -1,  310,  311,  312,
  313,  314,  315,  316,  317,  301,  302,  303,  304,  305,
   -1,   -1,   -1,   -1,  310,  311,  312,  313,  314,  315,
  316,  317,  301,  302,  303,  304,  305,   -1,  301,  302,
  303,  304,  305,  312,  313,  314,  315,  316,  317,  312,
  313,   -1,   -1,  316,  317,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 318
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,"'-'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IDENTIFIER","STRING_LIT",
"NUMBER_INT","NUMBER_REAL","COMMENT","PROCEDURE","FUNCTION","REF","VAR","CONST",
"INT","REAL","STRING","BOOLEAN","TRUE","FALSE","NIL","INIT","FINAL","RETURN",
"BREAK","IF","THEN","ELSE_","SWITCH","CASE","DEFAULT","FOR","DOWNTO","TO","DO",
"LOOP","EXIT","WHEN","SEMICOLON","COLON","COMMA","DOT","OPEN_PARENTHESIS",
"CLOSE_PARENTHESIS","OPEN_BRACKETS","CLOSE_BRACKETS","OPEN_BRACES",
"CLOSE_BRACES","ADD","SUB","MULT","DIV","MOD","INCREMENT","DECREMENT","EQUAL",
"NEGATION","OR","AND","LESS_THEN","BIGGER_THEN","EQUAL_LOGIC","NOT_EQUAL",
"LESS_EQUAL","BIGGER_EQUAL","UMINUS","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : program",
"$$1 :",
"program : $$1 declaration",
"$$2 :",
"declaration : var SEMICOLON $$2 declaration",
"$$3 :",
"declaration : const SEMICOLON $$3 declaration",
"declaration : subprogram declaration",
"declaration :",
"$$4 :",
"$$5 :",
"var : VAR $$4 IDENTIFIER $$5 id_exp ids_exps",
"$$6 :",
"id_exp : EQUAL $$6 expression",
"id_exp :",
"$$7 :",
"$$8 :",
"ids_exps : COMMA $$7 IDENTIFIER $$8 id_exp ids_exps",
"ids_exps :",
"$$9 :",
"$$10 :",
"$$11 :",
"const : CONST $$9 IDENTIFIER $$10 EQUAL $$11 expression const_aux",
"$$12 :",
"$$13 :",
"$$14 :",
"const_aux : COMMA $$12 IDENTIFIER $$13 EQUAL $$14 expression const_aux",
"const_aux :",
"subprogram : procedure",
"subprogram : function",
"$$15 :",
"$$16 :",
"$$17 :",
"$$18 :",
"procedure : PROCEDURE $$15 IDENTIFIER $$16 OPEN_PARENTHESIS $$17 parameter_list CLOSE_PARENTHESIS $$18 block",
"$$19 :",
"$$20 :",
"$$21 :",
"$$22 :",
"function : FUNCTION $$19 IDENTIFIER $$20 OPEN_PARENTHESIS $$21 parameter_list CLOSE_PARENTHESIS $$22 block",
"$$23 :",
"parameter_list : IDENTIFIER $$23 parameter_list_aux",
"$$24 :",
"$$25 :",
"parameter_list : REF $$24 IDENTIFIER $$25 parameter_list_aux",
"parameter_list :",
"$$26 :",
"parameter_list_aux : COMMA $$26 parameter_list",
"parameter_list_aux :",
"cb : command",
"cb : block",
"$$27 :",
"block : declaration INIT $$27 commands FINAL",
"command :",
"command : return",
"command : break",
"command : if",
"command : switch",
"command : loop",
"command : exit",
"command : for",
"command : attribuition",
"command : subprogram_call",
"commands : command commands_aux",
"$$28 :",
"commands_aux : SEMICOLON $$28 commands",
"commands_aux :",
"access_id : IDENTIFIER",
"$$29 :",
"access_id : access_id DOT $$29 IDENTIFIER",
"$$30 :",
"access_id : access_id OPEN_BRACKETS $$30 l_exp CLOSE_BRACKETS",
"$$31 :",
"attribuition : access_id EQUAL $$31 expression",
"$$32 :",
"$$33 :",
"subprogram_call : IDENTIFIER $$32 OPEN_PARENTHESIS $$33 real_parameter_list CLOSE_PARENTHESIS",
"$$34 :",
"$$35 :",
"real_parameter_list : REF $$34 IDENTIFIER $$35 real_parameter_list_aux",
"real_parameter_list : expression real_parameter_list_aux",
"real_parameter_list :",
"$$36 :",
"real_parameter_list_aux : COMMA $$36 real_parameter_list",
"real_parameter_list_aux :",
"l_exp : expression l_exp_aux",
"$$37 :",
"l_exp_aux : COMMA $$37 l_exp",
"l_exp_aux :",
"$$38 :",
"return : RETURN $$38 return_aux",
"return_aux : expression",
"return_aux :",
"break : BREAK",
"$$39 :",
"$$40 :",
"$$41 :",
"$$42 :",
"if : IF $$39 OPEN_PARENTHESIS $$40 expression CLOSE_PARENTHESIS $$41 THEN $$42 cb else",
"$$43 :",
"else : ELSE_ $$43 cb",
"else :",
"$$44 :",
"$$45 :",
"$$46 :",
"$$47 :",
"switch : SWITCH $$44 OPEN_PARENTHESIS $$45 access_id CLOSE_PARENTHESIS $$46 INIT $$47 caselist default FINAL",
"$$48 :",
"$$49 :",
"caselist : CASE $$48 expression COLON $$49 commands caselist",
"caselist :",
"$$50 :",
"$$51 :",
"default : DEFAULT $$50 COLON $$51 commands",
"default :",
"$$52 :",
"$$53 :",
"$$54 :",
"$$55 :",
"for : FOR $$52 IDENTIFIER $$53 EQUAL $$54 expression for_aux expression DO $$55 cb",
"for_aux : TO",
"for_aux : DOWNTO",
"$$56 :",
"loop : LOOP $$56 commands FINAL",
"$$57 :",
"$$58 :",
"$$59 :",
"exit : EXIT $$57 WHEN $$58 OPEN_PARENTHESIS $$59 expression CLOSE_PARENTHESIS",
"$$60 :",
"expression : expression OR $$60 expression",
"$$61 :",
"expression : expression AND $$61 expression",
"$$62 :",
"expression : expression EQUAL_LOGIC $$62 expression",
"$$63 :",
"expression : expression NOT_EQUAL $$63 expression",
"$$64 :",
"expression : expression LESS_THEN $$64 expression",
"$$65 :",
"expression : expression BIGGER_THEN $$65 expression",
"$$66 :",
"expression : expression LESS_EQUAL $$66 expression",
"$$67 :",
"expression : expression BIGGER_EQUAL $$67 expression",
"$$68 :",
"expression : expression ADD $$68 expression",
"$$69 :",
"expression : expression SUB $$69 expression",
"$$70 :",
"expression : expression MULT $$70 expression",
"$$71 :",
"expression : expression DIV $$71 expression",
"$$72 :",
"expression : expression MOD $$72 expression",
"$$73 :",
"expression : '-' $$73 expression",
"$$74 :",
"expression : NEGATION $$74 expression",
"$$75 :",
"expression : OPEN_PARENTHESIS $$75 expression CLOSE_PARENTHESIS",
"expression : access_id",
"expression : arr_exp",
"expression : literal",
"expression : subprogram_call",
"$$76 :",
"arr_exp : OPEN_BRACES $$76 literal arr_exp_aux CLOSE_BRACES",
"$$77 :",
"arr_exp_aux : COMMA $$77 literal arr_exp_aux",
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
case 1:
#line 85 "parserBottomUp.y"
	{ head = (Tabela*) malloc(sizeof(Tabela)); }
break;
case 3:
#line 91 "parserBottomUp.y"
	{printf(";\n");}
break;
case 5:
#line 92 "parserBottomUp.y"
	{printf(";\n");}
break;
case 9:
#line 98 "parserBottomUp.y"
	{printf("var ");}
break;
case 10:
#line 98 "parserBottomUp.y"
	{printf("%s ", yystack.l_mark[0].sValue); push(yystack.l_mark[0].sValue, "int", 0, 0, head);}
break;
case 11:
#line 98 "parserBottomUp.y"
	{printf("\n");}
break;
case 12:
#line 102 "parserBottomUp.y"
	{printf("= ");}
break;
case 15:
#line 107 "parserBottomUp.y"
	{printf(", ");}
break;
case 16:
#line 107 "parserBottomUp.y"
	{printf("%s ", yystack.l_mark[0].sValue);}
break;
case 19:
#line 112 "parserBottomUp.y"
	{printf("const ");}
break;
case 20:
#line 112 "parserBottomUp.y"
	{printf("%s ", yystack.l_mark[0].sValue);}
break;
case 21:
#line 112 "parserBottomUp.y"
	{printf("= ");}
break;
case 22:
#line 112 "parserBottomUp.y"
	{printf("\n");}
break;
case 23:
#line 116 "parserBottomUp.y"
	{printf(", ");}
break;
case 24:
#line 116 "parserBottomUp.y"
	{printf("%s ", yystack.l_mark[0].sValue);}
break;
case 25:
#line 116 "parserBottomUp.y"
	{printf("= ");}
break;
case 30:
#line 126 "parserBottomUp.y"
	{printf("procedure ");}
break;
case 31:
#line 126 "parserBottomUp.y"
	{printf("%s", yystack.l_mark[0].sValue);}
break;
case 32:
#line 126 "parserBottomUp.y"
	{printf("(");}
break;
case 33:
#line 126 "parserBottomUp.y"
	{printf(")\n");}
break;
case 35:
#line 131 "parserBottomUp.y"
	{printf("function ");}
break;
case 36:
#line 131 "parserBottomUp.y"
	{printf("%s", yystack.l_mark[0].sValue);}
break;
case 37:
#line 131 "parserBottomUp.y"
	{printf("(");}
break;
case 38:
#line 131 "parserBottomUp.y"
	{printf(")\n");}
break;
case 40:
#line 136 "parserBottomUp.y"
	{printf("%s", yystack.l_mark[0].sValue);}
break;
case 42:
#line 137 "parserBottomUp.y"
	{printf("ref ");}
break;
case 43:
#line 137 "parserBottomUp.y"
	{printf("%s", yystack.l_mark[0].sValue);}
break;
case 46:
#line 142 "parserBottomUp.y"
	{printf(", ");}
break;
case 51:
#line 152 "parserBottomUp.y"
	{printf("begin\n");}
break;
case 52:
#line 152 "parserBottomUp.y"
	{printf("end\n");}
break;
case 64:
#line 172 "parserBottomUp.y"
	{printf(";\n");}
break;
case 67:
#line 177 "parserBottomUp.y"
	{printf("%s ", yystack.l_mark[0].sValue);}
break;
case 68:
#line 178 "parserBottomUp.y"
	{printf(".");}
break;
case 69:
#line 178 "parserBottomUp.y"
	{printf("%s ", yystack.l_mark[0].sValue);}
break;
case 70:
#line 179 "parserBottomUp.y"
	{printf("[");}
break;
case 71:
#line 179 "parserBottomUp.y"
	{printf("]");}
break;
case 72:
#line 183 "parserBottomUp.y"
	{printf(" = ");}
break;
case 74:
#line 187 "parserBottomUp.y"
	{printf("%s", yystack.l_mark[0].sValue);}
break;
case 75:
#line 187 "parserBottomUp.y"
	{printf("(");}
break;
case 76:
#line 187 "parserBottomUp.y"
	{printf(")");}
break;
case 77:
#line 191 "parserBottomUp.y"
	{printf("ref ");}
break;
case 78:
#line 191 "parserBottomUp.y"
	{printf("%s ", yystack.l_mark[0].sValue);}
break;
case 82:
#line 197 "parserBottomUp.y"
	{printf(", ");}
break;
case 86:
#line 206 "parserBottomUp.y"
	{printf(", ");}
break;
case 89:
#line 211 "parserBottomUp.y"
	{printf("return ");}
break;
case 90:
#line 211 "parserBottomUp.y"
	{printf("\n");}
break;
case 93:
#line 220 "parserBottomUp.y"
	{printf("break\n");}
break;
case 94:
#line 224 "parserBottomUp.y"
	{printf("if ");}
break;
case 95:
#line 224 "parserBottomUp.y"
	{printf("(");}
break;
case 96:
#line 224 "parserBottomUp.y"
	{printf(") ");}
break;
case 97:
#line 224 "parserBottomUp.y"
	{printf("then\n");}
break;
case 99:
#line 230 "parserBottomUp.y"
	{printf("else\n");}
break;
case 102:
#line 236 "parserBottomUp.y"
	{printf("switch ");}
break;
case 103:
#line 236 "parserBottomUp.y"
	{printf("(");}
break;
case 104:
#line 236 "parserBottomUp.y"
	{printf(")\n");}
break;
case 105:
#line 237 "parserBottomUp.y"
	{printf("begin");}
break;
case 106:
#line 240 "parserBottomUp.y"
	{printf("end\n");}
break;
case 107:
#line 244 "parserBottomUp.y"
	{printf("case ");}
break;
case 108:
#line 244 "parserBottomUp.y"
	{printf(":\n");}
break;
case 111:
#line 251 "parserBottomUp.y"
	{printf("default");}
break;
case 112:
#line 251 "parserBottomUp.y"
	{printf(":");}
break;
case 115:
#line 257 "parserBottomUp.y"
	{printf("for ");}
break;
case 116:
#line 257 "parserBottomUp.y"
	{printf("%s", yystack.l_mark[0].sValue);}
break;
case 117:
#line 257 "parserBottomUp.y"
	{printf(" = ");}
break;
case 118:
#line 257 "parserBottomUp.y"
	{printf(" do\n");}
break;
case 120:
#line 262 "parserBottomUp.y"
	{printf(" to ");}
break;
case 121:
#line 263 "parserBottomUp.y"
	{printf(" downto ");}
break;
case 122:
#line 267 "parserBottomUp.y"
	{printf("loop\n");}
break;
case 123:
#line 269 "parserBottomUp.y"
	{printf("end\n");}
break;
case 124:
#line 273 "parserBottomUp.y"
	{printf("exit ");}
break;
case 125:
#line 273 "parserBottomUp.y"
	{printf("when ");}
break;
case 126:
#line 273 "parserBottomUp.y"
	{printf("(");}
break;
case 127:
#line 273 "parserBottomUp.y"
	{printf(")");}
break;
case 128:
#line 277 "parserBottomUp.y"
	{printf("||");}
break;
case 130:
#line 278 "parserBottomUp.y"
	{printf("&&");}
break;
case 132:
#line 279 "parserBottomUp.y"
	{printf("==");}
break;
case 134:
#line 280 "parserBottomUp.y"
	{printf("!=");}
break;
case 136:
#line 281 "parserBottomUp.y"
	{printf("<");}
break;
case 138:
#line 282 "parserBottomUp.y"
	{printf(">");}
break;
case 140:
#line 283 "parserBottomUp.y"
	{printf("<=");}
break;
case 142:
#line 284 "parserBottomUp.y"
	{printf(">=");}
break;
case 144:
#line 285 "parserBottomUp.y"
	{printf(" + ");}
break;
case 146:
#line 286 "parserBottomUp.y"
	{printf(" - ");}
break;
case 148:
#line 287 "parserBottomUp.y"
	{printf("*");}
break;
case 150:
#line 288 "parserBottomUp.y"
	{printf("/");}
break;
case 152:
#line 289 "parserBottomUp.y"
	{printf("\\");}
break;
case 154:
#line 290 "parserBottomUp.y"
	{printf("-");}
break;
case 156:
#line 291 "parserBottomUp.y"
	{printf("!");}
break;
case 158:
#line 292 "parserBottomUp.y"
	{printf("(");}
break;
case 159:
#line 292 "parserBottomUp.y"
	{printf(")");}
break;
case 164:
#line 300 "parserBottomUp.y"
	{printf("[");}
break;
case 165:
#line 300 "parserBottomUp.y"
	{printf("]");}
break;
case 166:
#line 304 "parserBottomUp.y"
	{printf(",");}
break;
case 169:
#line 309 "parserBottomUp.y"
	{printf("%s", yystack.l_mark[0].sValue);}
break;
case 170:
#line 310 "parserBottomUp.y"
	{printf("%i", yystack.l_mark[0].iValue);}
break;
case 171:
#line 311 "parserBottomUp.y"
	{printf("%f", yystack.l_mark[0].dValue);}
break;
case 172:
#line 312 "parserBottomUp.y"
	{printf("true");}
break;
case 173:
#line 313 "parserBottomUp.y"
	{printf("false");}
break;
#line 1286 "y.tab.c"
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
