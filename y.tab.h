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
extern YYSTYPE yylval;
