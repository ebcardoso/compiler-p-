#ifndef YYTOKENTYPE
#define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   
#endif
/* Tokens.  */

#define COMMENT 397

#define PROCEDURE 398
#define FUNCTION 399

#define REF 400
#define VAR 401

#define CONST 402 
#define INT 403
#define REAL 404
#define STRING 405
#define BOOLEAN 406

#define TRUE 407
#define FALSE 408
#define NULL 409
#define VAL_STRING 410

#define BEGIN 411
#define END 412

#define RETURN 413
#define BREAK 414

#define IF 415
#define THEN 416
#define ELSE 417

#define SWITCH 418
#define CASE 419
#define DEFAULT 420

#define FOR 421
#define DOWNTO 422
#define TO 423
#define DO 424

#define LOOP 425
#define EXIT 426
#define WHEN 427

#define ID 428
#define NUMBER_INT 429
#define NUMBER_REAL 430

#define SEMICOLON 431 // ;
#define COMMA 432 // ,
#define DOT 433 // .
#define OPEN_PARENTHESIS 434 // (
#define CLOSE_PARENTHESIS 435 // )
#define OPEN_BRACKETS 436 // [
#define CLOSE_BRACKETS 437// ]
#define OPEN_BRACES 438 
#define CLOSE_BRACES 439

#define ADD 440
#define SUB 441
#define MULT 442
#define DIV 443
#define EQUAL 444
#define MOD 445
#define NEG 446
#define OR 447
#define AND 448
#define LESS_THEN 449
#define BIGGER_THEN 450
#define EQUAL_LOGIC 451
#define NOT_EQUAL 452
#define LESS_EQUAL 453
#define BIGGER_EQUAL 454
#define INCREMENT 455
#define DECREMENT 456


#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif
