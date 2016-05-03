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
    7,    7,    3,    3,    8,    9,   10,   10,   10,   12,
   12,   13,   13,   14,   14,   14,   14,   14,   14,   14,
   14,   11,   23,   24,   24,   15,   25,   25,   25,   26,
   26,   26,   27,   28,   30,   30,   30,   31,   31,   29,
   32,   32,   16,   33,   33,   17,   34,   35,   36,   37,
   18,   38,   38,   19,   39,   39,   40,   22,   41,   41,
   20,   21,    6,   43,   43,   42,   45,   45,   44,   47,
   47,   47,   46,   49,   49,   49,   49,   49,   48,   51,
   51,   51,   50,   53,   53,   53,   53,   52,   55,   55,
   54,   54,   54,   54,   56,   58,   58,   57,   57,   57,
   57,   57,
};
static const short yylen[] = {                            2,
    2,    2,    2,    0,    4,    2,    0,    4,    0,    5,
    5,    0,    1,    1,    6,    6,    2,    3,    0,    2,
    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    4,    2,    2,    0,    2,    1,    1,    1,    3,
    4,    0,    2,    3,    3,    2,    0,    2,    0,    2,
    2,    0,    2,    1,    0,    1,    0,    0,    0,    0,
   11,    2,    0,    8,    5,    0,    3,    8,    1,    1,
    3,    5,    2,    3,    0,    2,    3,    0,    2,    3,
    3,    0,    2,    3,    3,    3,    3,    0,    2,    3,
    3,    0,    2,    3,    3,    3,    0,    2,    2,    0,
    1,    1,    1,    3,    4,    3,    0,    1,    1,    1,
    1,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,   13,   14,
    0,    0,    0,    0,    1,    2,    3,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  101,  108,  109,  110,
  111,  112,    0,    0,    6,    0,    0,    0,    0,    0,
    0,    0,  102,  103,    0,    5,    0,    0,   17,    0,
    0,    0,    0,    0,    0,   73,    0,   76,    0,    0,
   79,    0,    0,    0,    0,   83,    0,    0,   89,    0,
    0,    0,   93,    0,   98,    0,    0,   10,   20,   18,
    0,   15,   16,  104,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   99,
    0,    0,    0,    0,  105,   74,   77,   80,   81,   84,
   85,   86,   87,   90,   91,   94,   95,   96,    8,    0,
    0,    0,   56,   57,    0,    0,    0,    0,    0,   24,
   25,   26,   27,   28,   29,   30,   31,    0,  106,    0,
    0,    0,    0,    0,   36,   37,   38,   39,   54,   53,
    0,    0,    0,    0,    0,    0,   33,   32,   11,    0,
    0,    0,    0,    0,    0,   43,   58,    0,    0,   71,
    0,   34,   40,    0,    0,   46,   44,    0,   50,    0,
    0,    0,    0,    0,   45,   48,   51,   41,    0,    0,
   70,   69,    0,   72,   59,    0,    0,    0,    0,    0,
    0,    0,    0,   60,    0,    0,   64,   23,   68,   22,
    0,    0,   67,    0,   65,    0,   61,   62,
};
static const short yydgoto[] = {                         81,
    6,    7,    8,   21,   46,  162,   78,    9,   10,   25,
  208,   49,  209,  210,  130,  131,  132,  133,  134,  135,
  136,  137,  138,  157,  145,  146,  147,  148,  165,  163,
  176,  179,  150,  151,  181,  199,  211,  217,  197,  202,
  193,   36,   56,   37,   58,   38,   61,   39,   66,   40,
   69,   41,   73,   42,   75,   43,   44,   86,
};
static const short yysindex[] = {                      -137,
 -229, -227, -204, -201,    0, -137, -137, -137,    0,    0,
 -279, -224, -214, -211,    0,    0,    0, -237, -237, -234,
 -194, -234, -183, -173, -184, -179,    0,    0,    0,    0,
    0,    0, -234, -192,    0, -160, -159, -296, -265, -210,
 -169, -182,    0,    0, -102,    0, -136, -237,    0, -183,
 -137, -137, -140, -134, -234,    0, -234,    0, -234, -234,
    0, -234, -234, -234, -234,    0, -234, -234,    0, -234,
 -234, -234,    0, -234,    0, -214,  -97,    0,    0,    0,
 -112,    0,    0,    0, -192, -135, -160, -159, -296, -296,
 -265, -265, -265, -265, -210, -210, -169, -169, -169,    0,
 -194, -144, -245, -134,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -234,
 -225, -234,    0,    0, -132,  -91, -245, -123, -121,    0,
    0,    0,    0,    0,    0,    0,    0, -107,    0, -136,
  -86, -250, -234, -234,    0,    0,    0,    0,    0,    0,
 -120,  -85, -131, -101, -117, -245,    0,    0,    0, -225,
  -78, -113, -115, -111, -114,    0,    0, -109, -234,    0,
 -234,    0,    0, -113, -250,    0,    0, -234,    0, -225,
 -234,  -89, -209, -108,    0,    0,    0,    0, -106,  -99,
    0,    0, -234,    0,    0, -234,  -94,  -96,  -93,  -95,
  -92,  -83, -203,    0, -203, -203,    0,    0,    0,    0,
 -203,  -99,    0,  -87,    0, -203,    0,    0,
};
static const short yyrindex[] = {                       194,
    0,    0,    0,    0,    0,    3,    3,    3,    0,    0,
    0,    0,   64,    0,    0,    0,    0,  -90,  -90,    0,
    6,    0,  -88,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  282,  245,  207,  169,  113,
   57,    1,    0,    0,    0,    0,  118,  -90,    0,  -88,
  -79,  -79,    0, -104,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   64,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  282,  245,  207,  207,
  169,  169,  169,  169,  113,  113,   57,   57,   57,    0,
    6,    0,    0, -104,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -193, -187,    0,    0,    0,    0,    0,    0,  -77,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  118,
    0,  -84,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -193,
    0,  -82,    0,  -81,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -82,  -84,    0,    0,    0,    0, -193,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -80,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -79,    0,  -79,  -79,    0,    0,    0,    0,
  -79,  -80,    0, -241,    0,  -79,    0,    0,
};
static const short yygindex[] = {                       101,
    0,    0,    0,  123,  100,  -20,   62,    0,    0,   -8,
   63,  154, -100,  -98,   53,    0,    0,    0,    0,    0,
    0,    0, -110,    0, -145,    0,    0,    0,   31,   35,
   37,    0,    0,    0,    0,    0,    0,    0,    4,    0,
    0,  158,  128,  161,  131,   84,   56,   68,   28,   80,
   58,   67,   43,  146,    0,    0,  -30,  117,
};
#define YYTABLESIZE 580
static const short yytable[] = {                         35,
  100,   47,    4,   54,  129,    9,   27,   28,   29,   30,
   26,  121,   53,  161,  173,   18,  154,   59,   60,   23,
   31,   32,   27,   28,   29,   30,   24,   11,  129,   12,
  122,  123,  124,   63,  188,  125,   31,   32,  126,   79,
   63,   63,  127,  128,   33,  172,   62,   63,   34,   63,
   64,   65,   13,  121,  104,   14,   97,  129,    1,    2,
   33,    3,    4,    7,   34,   28,   29,   30,  141,  142,
   19,  143,  122,  123,  124,  191,  192,  125,   31,   32,
  126,   42,  144,   50,  127,  128,   42,   55,   42,   42,
   67,   68,   55,   20,   55,   55,   22,   42,   45,  140,
    5,  149,   42,   55,  212,  213,   15,   16,   17,   48,
  214,   51,   92,   82,   83,  218,   52,   12,  110,  111,
  112,  113,  164,  166,    1,    2,   74,    3,    4,   91,
   92,   93,   94,   70,   71,   72,   97,   98,   99,  116,
  117,  118,   89,   90,  108,  109,   95,   96,  183,   55,
  184,   57,  114,  115,   76,   84,   77,  164,   85,  102,
  189,  103,  152,  120,  105,  153,  155,  158,   88,  156,
  160,  121,  198,  170,  167,  200,  169,  171,  174,  175,
  177,  178,  196,  180,  190,  204,  182,  194,  201,  195,
  203,  207,  216,    4,    4,  107,  205,   35,  101,  206,
  119,  159,   66,   80,  168,   19,   82,   21,  187,  186,
  185,   47,   87,   49,  106,  215,   52,   88,  107,  100,
  139,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   78,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  100,  100,    0,  100,  100,    9,    9,    0,
    9,    9,    0,    0,  100,  100,    4,    0,    0,    9,
  100,   75,  100,  100,    0,  100,  100,  100,    0,    0,
    0,  100,  100,  100,    0,    0,  100,    0,  100,    0,
    0,  100,  100,  100,  100,  100,    0,    0,    0,    0,
  100,  100,  100,  100,  100,  100,  100,  100,   97,   97,
    0,   97,   97,    0,    0,    7,    7,    0,    7,    7,
   97,   97,    0,    0,    0,    0,   97,    7,   97,   97,
    0,   97,   97,   97,    0,    0,    0,   97,   97,   97,
    0,    0,   97,    0,   97,    0,    7,   97,   97,    0,
    0,    0,    0,    0,    0,    0,   97,   97,   97,   97,
   97,   97,   97,   97,   92,   92,    0,   92,   92,   12,
   12,    0,   12,   12,    0,    0,   92,   92,    0,    0,
    0,   12,   92,    0,   92,   92,    0,   92,   92,   92,
    0,    0,    0,   92,   92,   92,    0,    0,   92,    0,
   92,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   92,   92,   92,   92,   92,   92,   92,   92,
   88,   88,    0,   88,   88,    0,    0,    0,    0,    0,
    0,    0,   88,   88,    0,    0,    0,    0,   88,    0,
   88,   88,    0,   88,   88,   88,    0,    0,    0,   88,
   88,   88,    0,    0,   88,    0,   88,    0,   82,   82,
    0,   82,   82,    0,    0,    0,    0,    0,   88,   88,
   82,   82,   88,   88,    0,    0,   82,    0,   82,   82,
    0,   82,   82,   82,    0,    0,    0,   82,   82,   82,
    0,    0,   82,    0,   82,    0,   78,   78,    0,   78,
   78,    0,    0,    0,    0,    0,   82,   82,   78,   78,
    0,    0,    0,    0,   78,    0,   78,   78,    0,   78,
   78,   78,    0,    0,    0,   78,   78,   78,    0,    0,
   78,    0,   78,   75,   75,    0,   75,   75,    0,    0,
    0,    0,    0,    0,   78,   75,   75,    0,    0,    0,
    0,   75,    0,   75,   75,    0,   75,   75,   75,    0,
    0,    0,   75,   75,   75,    0,    0,   75,    0,   75,
};
static const short yycheck[] = {                         20,
    0,   22,    0,   34,  103,    0,  257,  258,  259,  260,
   19,  257,   33,  264,  160,  295,  127,  314,  315,  257,
  271,  272,  257,  258,  259,  260,  264,  257,  127,  257,
  276,  277,  278,  275,  180,  281,  271,  272,  284,   48,
  282,  283,  288,  289,  295,  156,  312,  313,  299,  291,
  316,  317,  257,  257,   85,  257,    0,  156,  262,  263,
  295,  265,  266,    0,  299,  258,  259,  260,  294,  295,
  295,  297,  276,  277,  278,  285,  286,  281,  271,  272,
  284,  275,  308,  257,  288,  289,  280,  275,  282,  283,
  301,  302,  280,  308,  282,  283,  308,  291,  293,  120,
    0,  122,  296,  291,  205,  206,    6,    7,    8,  293,
  211,  296,    0,   51,   52,  216,  296,    0,   91,   92,
   93,   94,  143,  144,  262,  263,  309,  265,  266,   62,
   63,   64,   65,  303,  304,  305,   70,   71,   72,   97,
   98,   99,   59,   60,   89,   90,   67,   68,  169,  310,
  171,  311,   95,   96,  257,  296,  293,  178,  293,  257,
  181,  274,  295,  308,  300,  257,  290,  275,    0,  291,
  257,  257,  193,  275,  295,  196,  308,  295,  257,  293,
  296,  293,  282,  298,  274,  279,  296,  296,  283,  296,
  287,  275,  280,    0,  274,  300,  292,  275,   76,  292,
  101,  140,  283,   50,  152,  296,    0,  296,  178,  175,
  174,  296,   55,  296,   87,  212,  298,   57,   88,   74,
  104,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
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
"BREAK","IF","THEN","ELSE_","SWITCH","CASE","DEFAULT","FOR","DOWNTO","TO","DO",
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
"$$1 :",
"$$2 :",
"$$3 :",
"$$4 :",
"if : IF $$1 OPEN_PARENTHESIS $$2 expression CLOSE_PARENTHESIS $$3 THEN $$4 cb else",
"else : ELSE_ cb",
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
case 57:
#line 242 "parserBottomUp.y"
	{printf("if ");}
break;
case 58:
#line 242 "parserBottomUp.y"
	{printf("(");}
break;
case 59:
#line 242 "parserBottomUp.y"
	{printf(") ");}
break;
case 60:
#line 242 "parserBottomUp.y"
	{printf("then");}
break;
#line 763 "y.tab.c"
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
