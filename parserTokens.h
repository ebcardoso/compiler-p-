/*#ifndef YYTOKENTYPE
#define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.
   
#endif
 Tokens.  */

#include <stdio.h>  /* include declarations for i/o routines */
#include <ctype.h>  /* ... and for character test routines */
#include <stdlib.h> /* ... and for some standard routines, such as exit */
#include <string.h> /* ... and for string routines */

#define BSIZE 100  /* buffer size */
#define NONE -1
#define EOS '\0'

#define COMMENT 200 /* */

#define PROCEDURE 210
#define FUNCTION 211

#define REF 300
#define VAR 301

#define CONST 310 
#define INT 311
#define REAL 312
#define STRING 313
#define BOOLEAN 314

#define TRUE 320
#define FALSE 321
#define NIL 322
#define VAL_STRING 323

#define BEG 400 // begin
#define END 401

#define RETURN 410
#define BREAK 411

#define IF 420
#define THEN 421
#define ELSE 422

#define SWITCH 430
#define CASE 431
#define DEFAULT 432

#define FOR 440
#define DOWNTO 441
#define TO 442
#define DO 443

#define LOOP 450
#define EXIT 451
#define WHEN 452

#define ID 500
#define NUMBER_INT 501
#define NUMBER_REAL 502

#define SEMICOLON 600 // ;
#define COMMA 601 // ,
#define DOT 602 // .

#define OPEN_PARENTHESIS 610 // (
#define CLOSE_PARENTHESIS 611 // )
#define OPEN_BRACKETS 612 // [
#define CLOSE_BRACKETS 613 // ]
#define OPEN_BRACES 614 // {
#define CLOSE_BRACES 615 // }

#define ADD 700 //+
#define SUB 701 //-
#define MULT 702 //*
#define DIV 703 // /
#define MOD 704 // %
#define INCREMENT 705 //++
#define DECREMENT 706 //--

#define EQUAL 710 //=
#define NEG 711 // !
#define OR 712 // ||
#define AND 713 //&&
#define LESS_THEN 714 // <
#define BIGGER_THEN 715 // >
#define EQUAL_LOGIC 716 // ==
#define NOT_EQUAL 717 // !=
#define LESS_EQUAL 718 // <=
#define BIGGER_EQUAL 719 // >=

extern int yylineno;
extern char *yytext;
extern FILE *yyin;

//extern void error(char* m); /*  generates all error messages  */
extern int yylex(); /*  lexical analyzer  */

/*#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
# define yystype YYSTYPE /* obsolescent; will be withdrawn 
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif*/
