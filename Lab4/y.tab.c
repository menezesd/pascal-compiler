/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parse.y"
     /* pars1.y    Pascal Parser      Gordon S. Novak Jr.  ; 30 Jul 13   */

/* Copyright (c) 2013 Gordon S. Novak Jr. and
   The University of Texas at Austin. */

/* 14 Feb 01; 01 Oct 04; 02 Mar 07; 27 Feb 08; 24 Jul 09; 02 Aug 12 */

/*
; This program is free software; you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation; either version 2 of the License, or
; (at your option) any later version.

; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.

; You should have received a copy of the GNU General Public License
; along with this program; if not, see <http://www.gnu.org/licenses/>.
  */

/* NOTE:   Copy your lexan.l lexical analyzer to this directory.      */

/* Yacc reports 1 shift/reduce conflict, due to the ELSE part of
    the IF statement, but Yacc's default resolves it in the right way.*/

/*
 * Last modified: 1730, 14/08/11
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include "token.h"
#include "lexan.h"
#include "symtab.h"
#include "parse.h"

/* define the type of the Yacc stack element to be TOKEN */

#define YYSTYPE TOKEN

TOKEN parseresult;


#line 121 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    STRING = 259,                  /* STRING  */
    NUMBER = 260,                  /* NUMBER  */
    PLUS = 261,                    /* PLUS  */
    MINUS = 262,                   /* MINUS  */
    TIMES = 263,                   /* TIMES  */
    DIVIDE = 264,                  /* DIVIDE  */
    ASSIGN = 265,                  /* ASSIGN  */
    EQ = 266,                      /* EQ  */
    NE = 267,                      /* NE  */
    LT = 268,                      /* LT  */
    LE = 269,                      /* LE  */
    GE = 270,                      /* GE  */
    GT = 271,                      /* GT  */
    POINT = 272,                   /* POINT  */
    DOT = 273,                     /* DOT  */
    AND = 274,                     /* AND  */
    OR = 275,                      /* OR  */
    NOT = 276,                     /* NOT  */
    DIV = 277,                     /* DIV  */
    MOD = 278,                     /* MOD  */
    IN = 279,                      /* IN  */
    COMMA = 280,                   /* COMMA  */
    SEMICOLON = 281,               /* SEMICOLON  */
    COLON = 282,                   /* COLON  */
    LPAREN = 283,                  /* LPAREN  */
    RPAREN = 284,                  /* RPAREN  */
    LBRACKET = 285,                /* LBRACKET  */
    RBRACKET = 286,                /* RBRACKET  */
    DOTDOT = 287,                  /* DOTDOT  */
    ARRAY = 288,                   /* ARRAY  */
    BEGINBEGIN = 289,              /* BEGINBEGIN  */
    CASE = 290,                    /* CASE  */
    CONST = 291,                   /* CONST  */
    DO = 292,                      /* DO  */
    DOWNTO = 293,                  /* DOWNTO  */
    ELSE = 294,                    /* ELSE  */
    END = 295,                     /* END  */
    FILEFILE = 296,                /* FILEFILE  */
    FOR = 297,                     /* FOR  */
    FUNCTION = 298,                /* FUNCTION  */
    GOTO = 299,                    /* GOTO  */
    IF = 300,                      /* IF  */
    LABEL = 301,                   /* LABEL  */
    NIL = 302,                     /* NIL  */
    OF = 303,                      /* OF  */
    PACKED = 304,                  /* PACKED  */
    PROCEDURE = 305,               /* PROCEDURE  */
    PROGRAM = 306,                 /* PROGRAM  */
    RECORD = 307,                  /* RECORD  */
    REPEAT = 308,                  /* REPEAT  */
    SET = 309,                     /* SET  */
    THEN = 310,                    /* THEN  */
    TO = 311,                      /* TO  */
    TYPE = 312,                    /* TYPE  */
    UNTIL = 313,                   /* UNTIL  */
    VAR = 314,                     /* VAR  */
    WHILE = 315,                   /* WHILE  */
    WITH = 316                     /* WITH  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define STRING 259
#define NUMBER 260
#define PLUS 261
#define MINUS 262
#define TIMES 263
#define DIVIDE 264
#define ASSIGN 265
#define EQ 266
#define NE 267
#define LT 268
#define LE 269
#define GE 270
#define GT 271
#define POINT 272
#define DOT 273
#define AND 274
#define OR 275
#define NOT 276
#define DIV 277
#define MOD 278
#define IN 279
#define COMMA 280
#define SEMICOLON 281
#define COLON 282
#define LPAREN 283
#define RPAREN 284
#define LBRACKET 285
#define RBRACKET 286
#define DOTDOT 287
#define ARRAY 288
#define BEGINBEGIN 289
#define CASE 290
#define CONST 291
#define DO 292
#define DOWNTO 293
#define ELSE 294
#define END 295
#define FILEFILE 296
#define FOR 297
#define FUNCTION 298
#define GOTO 299
#define IF 300
#define LABEL 301
#define NIL 302
#define OF 303
#define PACKED 304
#define PROCEDURE 305
#define PROGRAM 306
#define RECORD 307
#define REPEAT 308
#define SET 309
#define THEN 310
#define TO 311
#define TYPE 312
#define UNTIL 313
#define VAR 314
#define WHILE 315
#define WITH 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_NUMBER = 5,                     /* NUMBER  */
  YYSYMBOL_PLUS = 6,                       /* PLUS  */
  YYSYMBOL_MINUS = 7,                      /* MINUS  */
  YYSYMBOL_TIMES = 8,                      /* TIMES  */
  YYSYMBOL_DIVIDE = 9,                     /* DIVIDE  */
  YYSYMBOL_ASSIGN = 10,                    /* ASSIGN  */
  YYSYMBOL_EQ = 11,                        /* EQ  */
  YYSYMBOL_NE = 12,                        /* NE  */
  YYSYMBOL_LT = 13,                        /* LT  */
  YYSYMBOL_LE = 14,                        /* LE  */
  YYSYMBOL_GE = 15,                        /* GE  */
  YYSYMBOL_GT = 16,                        /* GT  */
  YYSYMBOL_POINT = 17,                     /* POINT  */
  YYSYMBOL_DOT = 18,                       /* DOT  */
  YYSYMBOL_AND = 19,                       /* AND  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_NOT = 21,                       /* NOT  */
  YYSYMBOL_DIV = 22,                       /* DIV  */
  YYSYMBOL_MOD = 23,                       /* MOD  */
  YYSYMBOL_IN = 24,                        /* IN  */
  YYSYMBOL_COMMA = 25,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 26,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 27,                     /* COLON  */
  YYSYMBOL_LPAREN = 28,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 29,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 30,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 31,                  /* RBRACKET  */
  YYSYMBOL_DOTDOT = 32,                    /* DOTDOT  */
  YYSYMBOL_ARRAY = 33,                     /* ARRAY  */
  YYSYMBOL_BEGINBEGIN = 34,                /* BEGINBEGIN  */
  YYSYMBOL_CASE = 35,                      /* CASE  */
  YYSYMBOL_CONST = 36,                     /* CONST  */
  YYSYMBOL_DO = 37,                        /* DO  */
  YYSYMBOL_DOWNTO = 38,                    /* DOWNTO  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_END = 40,                       /* END  */
  YYSYMBOL_FILEFILE = 41,                  /* FILEFILE  */
  YYSYMBOL_FOR = 42,                       /* FOR  */
  YYSYMBOL_FUNCTION = 43,                  /* FUNCTION  */
  YYSYMBOL_GOTO = 44,                      /* GOTO  */
  YYSYMBOL_IF = 45,                        /* IF  */
  YYSYMBOL_LABEL = 46,                     /* LABEL  */
  YYSYMBOL_NIL = 47,                       /* NIL  */
  YYSYMBOL_OF = 48,                        /* OF  */
  YYSYMBOL_PACKED = 49,                    /* PACKED  */
  YYSYMBOL_PROCEDURE = 50,                 /* PROCEDURE  */
  YYSYMBOL_PROGRAM = 51,                   /* PROGRAM  */
  YYSYMBOL_RECORD = 52,                    /* RECORD  */
  YYSYMBOL_REPEAT = 53,                    /* REPEAT  */
  YYSYMBOL_SET = 54,                       /* SET  */
  YYSYMBOL_THEN = 55,                      /* THEN  */
  YYSYMBOL_TO = 56,                        /* TO  */
  YYSYMBOL_TYPE = 57,                      /* TYPE  */
  YYSYMBOL_UNTIL = 58,                     /* UNTIL  */
  YYSYMBOL_VAR = 59,                       /* VAR  */
  YYSYMBOL_WHILE = 60,                     /* WHILE  */
  YYSYMBOL_WITH = 61,                      /* WITH  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_statement = 64,                 /* statement  */
  YYSYMBOL_stmtlist = 65,                  /* stmtlist  */
  YYSYMBOL_idlist = 66,                    /* idlist  */
  YYSYMBOL_argslist = 67,                  /* argslist  */
  YYSYMBOL_lblock = 68,                    /* lblock  */
  YYSYMBOL_cblock = 69,                    /* cblock  */
  YYSYMBOL_tblock = 70,                    /* tblock  */
  YYSYMBOL_vblock = 71,                    /* vblock  */
  YYSYMBOL_block = 72,                     /* block  */
  YYSYMBOL_paramlist = 73,                 /* paramlist  */
  YYSYMBOL_paramgroup = 74,                /* paramgroup  */
  YYSYMBOL_llist = 75,                     /* llist  */
  YYSYMBOL_clist = 76,                     /* clist  */
  YYSYMBOL_tspecs = 77,                    /* tspecs  */
  YYSYMBOL_tgroup = 78,                    /* tgroup  */
  YYSYMBOL_varspecs = 79,                  /* varspecs  */
  YYSYMBOL_vargroup = 80,                  /* vargroup  */
  YYSYMBOL_endpart = 81,                   /* endpart  */
  YYSYMBOL_endif = 82,                     /* endif  */
  YYSYMBOL_assignment = 83,                /* assignment  */
  YYSYMBOL_var = 84,                       /* var  */
  YYSYMBOL_mergebracks = 85,               /* mergebracks  */
  YYSYMBOL_mergelist = 86,                 /* mergelist  */
  YYSYMBOL_fieldlist = 87,                 /* fieldlist  */
  YYSYMBOL_type = 88,                      /* type  */
  YYSYMBOL_simpletype = 89,                /* simpletype  */
  YYSYMBOL_simplelist = 90,                /* simplelist  */
  YYSYMBOL_expr = 91,                      /* expr  */
  YYSYMBOL_simpexpr = 92,                  /* simpexpr  */
  YYSYMBOL_unaryexpr = 93,                 /* unaryexpr  */
  YYSYMBOL_term = 94,                      /* term  */
  YYSYMBOL_factor = 95,                    /* factor  */
  YYSYMBOL_factorlist = 96                 /* factorlist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   259

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  241

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    80,    81,    83,    86,    87,    88,    89,
      91,    94,    97,    98,   102,   103,   107,   108,   112,   113,
     117,   118,   122,   123,   127,   128,   132,   133,   137,   140,
     144,   148,   149,   153,   155,   158,   161,   164,   167,   170,
     171,   176,   177,   181,   184,   188,   189,   193,   197,   198,
     202,   206,   207,   211,   212,   216,   220,   221,   222,   223,
     227,   231,   233,   238,   240,   243,   247,   248,   250,   253,
     257,   258,   259,   263,   264,   268,   269,   270,   271,   272,
     273,   274,   275,   279,   280,   281,   282,   286,   287,   288,
     292,   293,   294,   295,   296,   297,   301,   302,   303,   304,
     305,   306,   307,   308,   312,   313,   314,   315
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "NUMBER", "PLUS", "MINUS", "TIMES", "DIVIDE", "ASSIGN", "EQ", "NE", "LT",
  "LE", "GE", "GT", "POINT", "DOT", "AND", "OR", "NOT", "DIV", "MOD", "IN",
  "COMMA", "SEMICOLON", "COLON", "LPAREN", "RPAREN", "LBRACKET",
  "RBRACKET", "DOTDOT", "ARRAY", "BEGINBEGIN", "CASE", "CONST", "DO",
  "DOWNTO", "ELSE", "END", "FILEFILE", "FOR", "FUNCTION", "GOTO", "IF",
  "LABEL", "NIL", "OF", "PACKED", "PROCEDURE", "PROGRAM", "RECORD",
  "REPEAT", "SET", "THEN", "TO", "TYPE", "UNTIL", "VAR", "WHILE", "WITH",
  "$accept", "program", "statement", "stmtlist", "idlist", "argslist",
  "lblock", "cblock", "tblock", "vblock", "block", "paramlist",
  "paramgroup", "llist", "clist", "tspecs", "tgroup", "varspecs",
  "vargroup", "endpart", "endif", "assignment", "var", "mergebracks",
  "mergelist", "fieldlist", "type", "simpletype", "simplelist", "expr",
  "simpexpr", "unaryexpr", "term", "factor", "factorlist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-183)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-99)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -42,    18,    22,     1,  -183,    27,    16,    19,    27,    23,
    -183,   105,    34,    50,    55,    54,    60,    99,    27,    78,
    -183,  -183,  -183,  -183,    47,  -183,    85,    69,   128,   128,
      34,    69,   106,   128,  -183,    34,   128,   -14,  -183,    -3,
    -183,   114,   109,    93,   129,   112,   137,   129,   127,   111,
     142,   145,     2,   148,  -183,   128,   128,  -183,    34,   143,
    -183,  -183,    69,    69,   149,   185,    11,  -183,   157,   150,
     146,   -14,   -31,  -183,   126,   158,   125,   152,    34,  -183,
    -183,  -183,   182,   128,   188,  -183,     7,   167,    54,   110,
     184,    37,  -183,    99,    37,  -183,    27,   183,   186,   187,
    -183,   128,  -183,  -183,  -183,   128,   128,   128,   128,   128,
     128,   128,    69,    69,    69,    69,    69,    69,    69,    69,
     128,  -183,  -183,   128,   128,    34,    34,   128,    34,   -14,
    -183,  -183,   189,    27,    27,    27,   190,  -183,   210,  -183,
    -183,     2,  -183,   191,   211,    27,   192,    27,  -183,  -183,
    -183,  -183,  -183,   206,   128,   194,   196,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,   195,   193,   197,   180,  -183,  -183,  -183,  -183,
      50,   199,    66,   200,   218,   202,   203,   227,  -183,   204,
      41,   208,   198,  -183,  -183,  -183,   128,    34,    34,    34,
    -183,  -183,   233,     7,  -183,   234,    72,     2,  -183,  -183,
    -183,   214,   209,    37,  -183,  -183,  -183,  -183,  -183,    74,
    -183,    84,     7,  -183,   215,    41,   201,   216,     7,  -183,
       7,  -183,  -183,  -183,  -183,    37,    27,  -183,  -183,  -183,
    -183
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    17,     0,     0,     0,
      16,     0,    13,     0,     0,     0,     0,     0,     0,     0,
      21,    23,    25,    27,    56,   102,    96,     0,     0,   107,
      13,     0,     0,     0,   103,    13,     0,     0,     4,    97,
      58,     0,     0,     0,    32,    42,     0,    32,     0,     0,
       0,     0,     0,     0,     2,     0,     0,    60,    13,    56,
      96,   100,     0,     0,     0,    82,    86,    89,    95,   104,
       0,     0,     0,    12,     0,    15,     0,     0,    13,    52,
      30,    59,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,    24,    46,     0,    26,    49,     0,    19,     0,
       3,     0,    87,    88,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     6,     0,     0,    13,    13,     0,    13,     0,
      57,    55,     0,     0,     0,     0,     0,    31,     0,    41,
      20,     0,    70,     0,     0,     0,     0,    65,    47,    66,
      45,    50,    48,     5,     0,    61,     0,    75,    78,    76,
      79,    80,    77,    81,    83,    84,    85,    90,    91,    94,
      92,    93,   106,     0,     0,    54,    14,     9,     8,    51,
      44,     0,     0,     0,     0,     0,     0,     0,    67,     0,
       0,     0,     0,    18,    62,    98,   107,    13,    13,    13,
       7,    43,     0,     0,    39,     0,     0,     0,    28,    72,
      71,    74,     0,     0,    69,   105,    11,    10,    53,     0,
      40,     0,     0,    33,     0,     0,     0,    63,     0,    35,
       0,    37,    34,    29,    73,     0,    65,    36,    38,    68,
      64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,    -7,   117,    -5,   -45,  -183,   155,   205,   207,
     -48,   212,  -142,   159,    65,   153,  -183,   154,  -183,   -69,
    -183,   220,  -183,  -183,    98,    21,   -88,  -182,    29,    -1,
      97,  -183,   -29,   -11,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    75,    76,   136,    97,    19,    20,    21,    22,
      23,    87,   137,    46,    43,    49,    50,    52,    53,    80,
     200,    38,    39,    40,    57,   192,   148,   149,   212,    98,
      65,    66,    67,    68,    70
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    41,   122,    10,    95,    37,   151,   123,   211,     1,
       6,    99,    78,    51,    81,    82,    61,   112,   113,    41,
      41,     3,     4,    71,    41,   124,    79,    64,    69,     5,
       6,   114,    74,   102,   103,    77,    12,    24,    25,    26,
     142,     8,   143,   211,   142,    14,   143,    41,     9,    11,
     133,   100,    16,    42,   144,    27,   156,   134,    44,    45,
     179,   220,    28,    47,    29,   145,   135,    41,    30,   145,
     146,   129,    59,    25,    60,    55,    31,    56,    32,    33,
     232,    34,   131,   164,   165,   166,   237,    35,   238,   147,
      27,    51,   203,   186,    36,   204,    54,    28,   222,    29,
     228,   223,    48,   229,   167,   168,   169,   170,   171,   193,
     230,    73,    58,   231,    41,    41,    34,    41,   175,   172,
      84,   178,   173,   174,    83,   227,   177,    12,   181,   182,
     183,    59,    25,    60,    62,    63,    14,    88,    91,    12,
     189,    13,   191,    16,    12,    12,    13,   239,    14,    27,
      17,    15,    18,    14,    14,    16,    28,    86,    29,   224,
      16,    16,    17,    89,    18,   115,   116,    17,    93,    18,
      18,   101,    94,    56,    96,    34,   117,   121,   104,   118,
     119,   125,   120,   127,   126,   130,    41,    41,    41,   128,
     216,   217,   218,   132,   138,    69,   105,   106,   107,   108,
     109,   110,   157,   158,   159,   160,   161,   162,   163,   111,
     141,   154,   153,   185,   188,   180,   -98,   184,   155,   199,
     196,   206,   190,   187,    56,   195,   202,   205,   207,   208,
     197,   191,   209,   210,   198,   213,   219,   221,   214,   225,
     226,   233,   236,   176,   140,   201,   150,   139,    85,   235,
     152,    72,   215,   194,   234,     0,    92,   240,     0,    90
};

static const yytype_int16 yycheck[] =
{
       5,    12,    71,     8,    52,    12,    94,    38,   190,    51,
       3,    56,    26,    18,    17,    18,    27,     6,     7,    30,
      31,     3,     0,    30,    35,    56,    40,    28,    29,    28,
       3,    20,    33,    62,    63,    36,    34,     3,     4,     5,
       3,    25,     5,   225,     3,    43,     5,    58,    29,    26,
      43,    58,    50,     3,    17,    21,   101,    50,     3,     5,
     129,   203,    28,     3,    30,    28,    59,    78,    34,    28,
      33,    78,     3,     4,     5,    28,    42,    30,    44,    45,
     222,    47,    83,   112,   113,   114,   228,    53,   230,    52,
      21,    96,    26,   141,    60,    29,    18,    28,    26,    30,
      26,    29,     3,    29,   115,   116,   117,   118,   119,   154,
      26,     5,    27,    29,   125,   126,    47,   128,   125,   120,
      11,   128,   123,   124,    10,   213,   127,    34,   133,   134,
     135,     3,     4,     5,     6,     7,    43,    25,    11,    34,
     145,    36,   147,    50,    34,    34,    36,   235,    43,    21,
      57,    46,    59,    43,    43,    50,    28,    28,    30,   207,
      50,    50,    57,    26,    59,     8,     9,    57,    26,    59,
      59,    28,    27,    30,    26,    47,    19,    31,    29,    22,
      23,    55,    32,    58,    26,     3,   197,   198,   199,    37,
     197,   198,   199,     5,    27,   196,    11,    12,    13,    14,
      15,    16,   105,   106,   107,   108,   109,   110,   111,    24,
      26,    25,    29,     3,     3,    26,    10,    27,    31,    39,
      25,     3,    30,    32,    30,    29,    27,    27,    26,    26,
      37,   236,     5,    29,    37,    27,     3,     3,    40,    25,
      31,    26,    26,   126,    89,   180,    93,    88,    43,    48,
      96,    31,   196,   155,   225,    -1,    49,   236,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,    63,     3,     0,    28,     3,    66,    25,    29,
      66,    26,    34,    36,    43,    46,    50,    57,    59,    68,
      69,    70,    71,    72,     3,     4,     5,    21,    28,    30,
      34,    42,    44,    45,    47,    53,    60,    64,    83,    84,
      85,    95,     3,    76,     3,     5,    75,     3,     3,    77,
      78,    66,    79,    80,    18,    28,    30,    86,    27,     3,
       5,    95,     6,     7,    91,    92,    93,    94,    95,    91,
      96,    64,    83,     5,    91,    64,    65,    91,    26,    40,
      81,    17,    18,    10,    11,    70,    28,    73,    25,    26,
      73,    11,    71,    26,    27,    72,    26,    67,    91,    67,
      64,    28,    94,    94,    29,    11,    12,    13,    14,    15,
      16,    24,     6,     7,    20,     8,     9,    19,    22,    23,
      32,    31,    81,    38,    56,    55,    26,    58,    37,    64,
       3,    91,     5,    43,    50,    59,    66,    74,    27,    75,
      69,    26,     3,     5,    17,    28,    33,    52,    88,    89,
      77,    88,    79,    29,    25,    31,    67,    92,    92,    92,
      92,    92,    92,    92,    94,    94,    94,    95,    95,    95,
      95,    95,    91,    91,    91,    64,    65,    91,    64,    81,
      26,    66,    66,    66,    27,     3,    72,    32,     3,    66,
      30,    66,    87,    67,    86,    29,    25,    37,    37,    39,
      82,    76,    27,    26,    29,    27,     3,    26,    26,     5,
      29,    89,    90,    27,    40,    96,    64,    64,    64,     3,
      74,     3,    26,    29,    72,    25,    31,    88,    26,    29,
      26,    29,    74,    26,    90,    48,    26,    74,    74,    88,
      87
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    69,    69,    70,    70,    71,    71,    72,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    79,    79,
      80,    81,    81,    82,    82,    83,    84,    84,    84,    84,
      85,    86,    86,    87,    87,    87,    88,    88,    88,    88,
      89,    89,    89,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    93,    93,    93,
      94,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      95,    95,    95,    95,    96,    96,    96,    96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     8,     3,     1,     4,     3,     5,     4,     4,
       6,     6,     2,     0,     3,     1,     3,     1,     3,     1,
       4,     1,     3,     1,     3,     1,     3,     1,     6,     8,
       3,     2,     0,     4,     5,     5,     6,     5,     6,     3,
       4,     3,     1,     5,     4,     3,     2,     3,     3,     2,
       3,     3,     1,     2,     0,     3,     1,     3,     1,     2,
       2,     3,     4,     3,     5,     0,     1,     2,     6,     3,
       1,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     2,     2,     1,
       3,     3,     3,     3,     3,     1,     1,     1,     4,     3,
       2,     3,     1,     1,     1,     5,     3,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
extern YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: PROGRAM IDENTIFIER LPAREN idlist RPAREN SEMICOLON lblock DOT  */
#line 76 "parse.y"
                                                                                                        { parseresult = makeprogram(yyvsp[-6], yyvsp[-4], yyvsp[-1]); }
#line 1525 "y.tab.c"
    break;

  case 3: /* statement: NUMBER COLON statement  */
#line 80 "parse.y"
                                                                                { yyval = dolabel(yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1531 "y.tab.c"
    break;

  case 4: /* statement: assignment  */
#line 81 "parse.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1537 "y.tab.c"
    break;

  case 5: /* statement: IDENTIFIER LPAREN argslist RPAREN  */
#line 84 "parse.y"
                                                                                        { yyval = makefuncall(yyvsp[-2], yyvsp[-3], yyvsp[-1]); }
#line 1543 "y.tab.c"
    break;

  case 6: /* statement: BEGINBEGIN statement endpart  */
#line 86 "parse.y"
                                                                { yyval = makepnb(yyvsp[-2], cons(yyvsp[-1], yyvsp[0])); }
#line 1549 "y.tab.c"
    break;

  case 7: /* statement: IF expr THEN statement endif  */
#line 87 "parse.y"
                                                                { yyval = makeif(yyvsp[-4], yyvsp[-3], yyvsp[-1], yyvsp[0]); }
#line 1555 "y.tab.c"
    break;

  case 8: /* statement: WHILE expr DO statement  */
#line 88 "parse.y"
                                                                        { yyval = makewhile(yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1561 "y.tab.c"
    break;

  case 9: /* statement: REPEAT stmtlist UNTIL expr  */
#line 89 "parse.y"
                                                                { yyval = makerepeat(yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1567 "y.tab.c"
    break;

  case 10: /* statement: FOR assignment TO expr DO statement  */
#line 92 "parse.y"
                                                                                { yyval = makefor(1, yyvsp[-5], yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1573 "y.tab.c"
    break;

  case 11: /* statement: FOR assignment DOWNTO expr DO statement  */
#line 95 "parse.y"
                                                                                { yyval = makefor(-1, yyvsp[-5], yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1579 "y.tab.c"
    break;

  case 12: /* statement: GOTO NUMBER  */
#line 97 "parse.y"
                                                                                { yyval = dogoto(yyvsp[-1], yyvsp[0]); }
#line 1585 "y.tab.c"
    break;

  case 13: /* statement: %empty  */
#line 98 "parse.y"
                                                                                { yyval = NULL; }
#line 1591 "y.tab.c"
    break;

  case 14: /* stmtlist: statement SEMICOLON stmtlist  */
#line 102 "parse.y"
                                                                        { yyval = cons(yyvsp[-2], yyvsp[0]); }
#line 1597 "y.tab.c"
    break;

  case 15: /* stmtlist: statement  */
#line 103 "parse.y"
                                                                                                { yyval = yyvsp[0]; }
#line 1603 "y.tab.c"
    break;

  case 16: /* idlist: IDENTIFIER COMMA idlist  */
#line 107 "parse.y"
                                                                                { yyval = cons(yyvsp[-2], yyvsp[0]); }
#line 1609 "y.tab.c"
    break;

  case 17: /* idlist: IDENTIFIER  */
#line 108 "parse.y"
                                                                                        { yyval = cons(yyvsp[0], NULL); }
#line 1615 "y.tab.c"
    break;

  case 18: /* argslist: expr COMMA argslist  */
#line 112 "parse.y"
                                                                                { yyval = cons(yyvsp[-2], yyvsp[0]); }
#line 1621 "y.tab.c"
    break;

  case 19: /* argslist: expr  */
#line 113 "parse.y"
                                                                                                { yyval = cons(yyvsp[0], NULL); }
#line 1627 "y.tab.c"
    break;

  case 20: /* lblock: LABEL llist SEMICOLON cblock  */
#line 117 "parse.y"
                                                                        { yyval = yyvsp[0]; }
#line 1633 "y.tab.c"
    break;

  case 21: /* lblock: cblock  */
#line 118 "parse.y"
                                                                                                { yyval = yyvsp[0]; }
#line 1639 "y.tab.c"
    break;

  case 22: /* cblock: CONST clist tblock  */
#line 122 "parse.y"
                                                                                { yyval = yyvsp[0]; }
#line 1645 "y.tab.c"
    break;

  case 23: /* cblock: tblock  */
#line 123 "parse.y"
                                                                                                { yyval = yyvsp[0]; }
#line 1651 "y.tab.c"
    break;

  case 24: /* tblock: TYPE tspecs vblock  */
#line 127 "parse.y"
                                                                                { yyval = yyvsp[0]; }
#line 1657 "y.tab.c"
    break;

  case 25: /* tblock: vblock  */
#line 128 "parse.y"
                                                                                                { yyval = yyvsp[0]; }
#line 1663 "y.tab.c"
    break;

  case 26: /* vblock: VAR varspecs block  */
#line 132 "parse.y"
                                                                                { yyval = yyvsp[0]; }
#line 1669 "y.tab.c"
    break;

  case 27: /* vblock: block  */
#line 133 "parse.y"
                                                                                                { yyval = yyvsp[0]; }
#line 1675 "y.tab.c"
    break;

  case 28: /* block: PROCEDURE IDENTIFIER paramlist SEMICOLON block SEMICOLON  */
#line 138 "parse.y"
                                                                                { yyval = yyvsp[-5]; }
#line 1681 "y.tab.c"
    break;

  case 29: /* block: FUNCTION IDENTIFIER paramlist COLON IDENTIFIER SEMICOLON block SEMICOLON  */
#line 142 "parse.y"
                                                                                        { yyval = yyvsp[-7]; }
#line 1687 "y.tab.c"
    break;

  case 30: /* block: BEGINBEGIN statement endpart  */
#line 144 "parse.y"
                                                                        { yyval = makepnb(yyvsp[-2], cons(yyvsp[-1], yyvsp[0])); }
#line 1693 "y.tab.c"
    break;

  case 31: /* paramlist: LPAREN paramgroup  */
#line 148 "parse.y"
                                                                                        { yyval = yyvsp[-1]; }
#line 1699 "y.tab.c"
    break;

  case 32: /* paramlist: %empty  */
#line 149 "parse.y"
                                                                                        { yyval = NULL; }
#line 1705 "y.tab.c"
    break;

  case 33: /* paramgroup: idlist COLON IDENTIFIER RPAREN  */
#line 153 "parse.y"
                                                                        { yyval = cons(yyvsp[-3], yyvsp[-1]); }
#line 1711 "y.tab.c"
    break;

  case 34: /* paramgroup: idlist COLON IDENTIFIER SEMICOLON paramgroup  */
#line 156 "parse.y"
                                                                                { yyval = cons(yyvsp[-4], yyvsp[-2]); }
#line 1717 "y.tab.c"
    break;

  case 35: /* paramgroup: FUNCTION idlist COLON IDENTIFIER RPAREN  */
#line 159 "parse.y"
                                                                                        { yyval = cons(yyvsp[-3], yyvsp[-1]); }
#line 1723 "y.tab.c"
    break;

  case 36: /* paramgroup: FUNCTION idlist COLON IDENTIFIER SEMICOLON paramgroup  */
#line 162 "parse.y"
                                                                                { yyval = cons(yyvsp[-4], yyvsp[-2]); }
#line 1729 "y.tab.c"
    break;

  case 37: /* paramgroup: VAR idlist COLON IDENTIFIER RPAREN  */
#line 165 "parse.y"
                                                                                        { yyval = cons(yyvsp[-3], yyvsp[-1]); }
#line 1735 "y.tab.c"
    break;

  case 38: /* paramgroup: VAR idlist COLON IDENTIFIER SEMICOLON paramgroup  */
#line 168 "parse.y"
                                                                                { yyval = cons(yyvsp[-4], yyvsp[-2]); }
#line 1741 "y.tab.c"
    break;

  case 39: /* paramgroup: PROCEDURE idlist RPAREN  */
#line 170 "parse.y"
                                                                                { yyval = yyvsp[-1]; }
#line 1747 "y.tab.c"
    break;

  case 40: /* paramgroup: PROCEDURE idlist SEMICOLON paramgroup  */
#line 172 "parse.y"
                                                                                                { yyval = yyvsp[-2]; }
#line 1753 "y.tab.c"
    break;

  case 41: /* llist: NUMBER COMMA llist  */
#line 176 "parse.y"
                                                                                { instlabel(yyvsp[-2]); }
#line 1759 "y.tab.c"
    break;

  case 42: /* llist: NUMBER  */
#line 177 "parse.y"
                                                                                                { instlabel(yyvsp[0]); }
#line 1765 "y.tab.c"
    break;

  case 43: /* clist: IDENTIFIER EQ NUMBER SEMICOLON clist  */
#line 182 "parse.y"
                                                                                        { instconst(yyvsp[-4], yyvsp[-2]); }
#line 1771 "y.tab.c"
    break;

  case 44: /* clist: IDENTIFIER EQ NUMBER SEMICOLON  */
#line 184 "parse.y"
                                                                        { instconst(yyvsp[-3], yyvsp[-1]); }
#line 1777 "y.tab.c"
    break;

  case 45: /* tspecs: tgroup SEMICOLON tspecs  */
#line 188 "parse.y"
                                                                                { yyval = yyvsp[0]; }
#line 1783 "y.tab.c"
    break;

  case 46: /* tspecs: tgroup SEMICOLON  */
#line 189 "parse.y"
                                                                                        { yyval = yyvsp[-1]; }
#line 1789 "y.tab.c"
    break;

  case 47: /* tgroup: IDENTIFIER EQ type  */
#line 193 "parse.y"
                                                                                { insttype(yyvsp[-2], yyvsp[0]); }
#line 1795 "y.tab.c"
    break;

  case 48: /* varspecs: vargroup SEMICOLON varspecs  */
#line 197 "parse.y"
                                                                        { yyval = yyvsp[0]; }
#line 1801 "y.tab.c"
    break;

  case 49: /* varspecs: vargroup SEMICOLON  */
#line 198 "parse.y"
                                                                                { yyval = yyvsp[-1]; }
#line 1807 "y.tab.c"
    break;

  case 50: /* vargroup: idlist COLON type  */
#line 202 "parse.y"
                                                                                        { instvars(yyvsp[-2], yyvsp[0]); }
#line 1813 "y.tab.c"
    break;

  case 51: /* endpart: SEMICOLON statement endpart  */
#line 206 "parse.y"
                                                                        { yyval = cons(yyvsp[-1], yyvsp[0]); }
#line 1819 "y.tab.c"
    break;

  case 52: /* endpart: END  */
#line 207 "parse.y"
                                                                { yyval = NULL; }
#line 1825 "y.tab.c"
    break;

  case 53: /* endif: ELSE statement  */
#line 211 "parse.y"
                                                                        { yyval = yyvsp[0]; }
#line 1831 "y.tab.c"
    break;

  case 54: /* endif: %empty  */
#line 212 "parse.y"
                                                                { yyval = NULL; }
#line 1837 "y.tab.c"
    break;

  case 55: /* assignment: factor ASSIGN expr  */
#line 216 "parse.y"
                                                                        { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 1843 "y.tab.c"
    break;

  case 56: /* var: IDENTIFIER  */
#line 220 "parse.y"
                                                                                        { yyval = findid(yyvsp[0]); }
#line 1849 "y.tab.c"
    break;

  case 57: /* var: var DOT IDENTIFIER  */
#line 221 "parse.y"
                                                                                { yyval = reducedot(yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1855 "y.tab.c"
    break;

  case 58: /* var: mergebracks  */
#line 222 "parse.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1861 "y.tab.c"
    break;

  case 59: /* var: var POINT  */
#line 223 "parse.y"
                                                                                                { yyval = dopoint(yyvsp[-1], yyvsp[0]); }
#line 1867 "y.tab.c"
    break;

  case 60: /* mergebracks: IDENTIFIER mergelist  */
#line 227 "parse.y"
                                                                                { yyval = arrayref(yyvsp[-1], NULL, yyvsp[0], NULL); }
#line 1873 "y.tab.c"
    break;

  case 61: /* mergelist: LBRACKET argslist RBRACKET  */
#line 231 "parse.y"
                                                                        { yyval = yyvsp[-1]; }
#line 1879 "y.tab.c"
    break;

  case 62: /* mergelist: LBRACKET argslist RBRACKET mergelist  */
#line 234 "parse.y"
                                                                                        { yyval = nconc(yyvsp[-2], yyvsp[0]); }
#line 1885 "y.tab.c"
    break;

  case 63: /* fieldlist: idlist COLON type  */
#line 238 "parse.y"
                                                                                        { instfields(yyvsp[-2], yyvsp[0]); }
#line 1891 "y.tab.c"
    break;

  case 64: /* fieldlist: idlist COLON type SEMICOLON fieldlist  */
#line 241 "parse.y"
                                                                                        { instfields(yyvsp[-4], yyvsp[-2]); yyval = nconc(yyvsp[-4], yyvsp[0]); }
#line 1897 "y.tab.c"
    break;

  case 65: /* fieldlist: %empty  */
#line 243 "parse.y"
                                                                                        { yyval = NULL; }
#line 1903 "y.tab.c"
    break;

  case 66: /* type: simpletype  */
#line 247 "parse.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1909 "y.tab.c"
    break;

  case 67: /* type: POINT IDENTIFIER  */
#line 248 "parse.y"
                                                                                        { yyval = instpoint(yyvsp[-1], yyvsp[0]); }
#line 1915 "y.tab.c"
    break;

  case 68: /* type: ARRAY LBRACKET simplelist RBRACKET OF type  */
#line 251 "parse.y"
                                                                                        { yyval = instarray(yyvsp[-3], yyvsp[0]); }
#line 1921 "y.tab.c"
    break;

  case 69: /* type: RECORD fieldlist END  */
#line 253 "parse.y"
                                                                                { yyval = instrec(yyvsp[-2], yyvsp[-1]); }
#line 1927 "y.tab.c"
    break;

  case 70: /* simpletype: IDENTIFIER  */
#line 257 "parse.y"
                                                                                        { yyval = findtype(yyvsp[0]); }
#line 1933 "y.tab.c"
    break;

  case 71: /* simpletype: LPAREN idlist RPAREN  */
#line 258 "parse.y"
                                                                                { yyval = instenum(yyvsp[-1]); }
#line 1939 "y.tab.c"
    break;

  case 72: /* simpletype: NUMBER DOTDOT NUMBER  */
#line 259 "parse.y"
                                                                                { yyval = instdotdot(yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 1945 "y.tab.c"
    break;

  case 73: /* simplelist: simpletype COMMA simplelist  */
#line 263 "parse.y"
                                                                        { yyval = cons(yyvsp[0], yyvsp[-2]); }
#line 1951 "y.tab.c"
    break;

  case 74: /* simplelist: simpletype  */
#line 264 "parse.y"
                                                                                        { yyval = yyvsp[0]; }
#line 1957 "y.tab.c"
    break;

  case 75: /* expr: simpexpr EQ simpexpr  */
#line 268 "parse.y"
                                                                                { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 1963 "y.tab.c"
    break;

  case 76: /* expr: simpexpr LT simpexpr  */
#line 269 "parse.y"
                                                                                { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 1969 "y.tab.c"
    break;

  case 77: /* expr: simpexpr GT simpexpr  */
#line 270 "parse.y"
                                                                        { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 1975 "y.tab.c"
    break;

  case 78: /* expr: simpexpr NE simpexpr  */
#line 271 "parse.y"
                                                                        { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 1981 "y.tab.c"
    break;

  case 79: /* expr: simpexpr LE simpexpr  */
#line 272 "parse.y"
                                                                        { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 1987 "y.tab.c"
    break;

  case 80: /* expr: simpexpr GE simpexpr  */
#line 273 "parse.y"
                                                                        { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 1993 "y.tab.c"
    break;

  case 81: /* expr: simpexpr IN simpexpr  */
#line 274 "parse.y"
                                                                        { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 1999 "y.tab.c"
    break;

  case 82: /* expr: simpexpr  */
#line 275 "parse.y"
                                                                                        { yyval = yyvsp[0]; }
#line 2005 "y.tab.c"
    break;

  case 83: /* simpexpr: unaryexpr PLUS term  */
#line 279 "parse.y"
                                                                                { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 2011 "y.tab.c"
    break;

  case 84: /* simpexpr: unaryexpr MINUS term  */
#line 280 "parse.y"
                                                                                { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 2017 "y.tab.c"
    break;

  case 85: /* simpexpr: unaryexpr OR term  */
#line 281 "parse.y"
                                                                                        { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 2023 "y.tab.c"
    break;

  case 86: /* simpexpr: unaryexpr  */
#line 282 "parse.y"
                                                                                                { yyval = yyvsp[0]; }
#line 2029 "y.tab.c"
    break;

  case 87: /* unaryexpr: PLUS term  */
#line 286 "parse.y"
                                                                                                { yyval = unaryop(yyvsp[-1], yyvsp[0]); }
#line 2035 "y.tab.c"
    break;

  case 88: /* unaryexpr: MINUS term  */
#line 287 "parse.y"
                                                                                        { yyval = unaryop(yyvsp[-1], yyvsp[0]); }
#line 2041 "y.tab.c"
    break;

  case 89: /* unaryexpr: term  */
#line 288 "parse.y"
                                                                                                { yyval = yyvsp[0]; }
#line 2047 "y.tab.c"
    break;

  case 90: /* term: factor TIMES factor  */
#line 292 "parse.y"
                                                                        { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 2053 "y.tab.c"
    break;

  case 91: /* term: factor DIVIDE factor  */
#line 293 "parse.y"
                                                                    { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 2059 "y.tab.c"
    break;

  case 92: /* term: factor DIV factor  */
#line 294 "parse.y"
                                                                        { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 2065 "y.tab.c"
    break;

  case 93: /* term: factor MOD factor  */
#line 295 "parse.y"
                                                                        { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 2071 "y.tab.c"
    break;

  case 94: /* term: factor AND factor  */
#line 296 "parse.y"
                                                                        { yyval = binop(yyvsp[-1], yyvsp[-2], yyvsp[0]); }
#line 2077 "y.tab.c"
    break;

  case 95: /* term: factor  */
#line 297 "parse.y"
                                                                                        { yyval = yyvsp[0]; }
#line 2083 "y.tab.c"
    break;

  case 96: /* factor: NUMBER  */
#line 301 "parse.y"
                                                                                                { yyval = yyvsp[0]; }
#line 2089 "y.tab.c"
    break;

  case 97: /* factor: var  */
#line 302 "parse.y"
                                                                                                { yyval = yyvsp[0]; }
#line 2095 "y.tab.c"
    break;

  case 98: /* factor: IDENTIFIER LPAREN argslist RPAREN  */
#line 303 "parse.y"
                                                                        { yyval = makefuncall(yyvsp[-2], yyvsp[-3], yyvsp[-1]); }
#line 2101 "y.tab.c"
    break;

  case 99: /* factor: LPAREN expr RPAREN  */
#line 304 "parse.y"
                                                                        { yyval = yyvsp[-1]; }
#line 2107 "y.tab.c"
    break;

  case 100: /* factor: NOT factor  */
#line 305 "parse.y"
                                                                                        { yyval = unaryop(yyvsp[-1], yyvsp[0]); }
#line 2113 "y.tab.c"
    break;

  case 101: /* factor: LBRACKET factorlist RBRACKET  */
#line 306 "parse.y"
                                                                { yyval = yyvsp[-1]; }
#line 2119 "y.tab.c"
    break;

  case 102: /* factor: STRING  */
#line 307 "parse.y"
                                                                                        { yyval = yyvsp[0]; }
#line 2125 "y.tab.c"
    break;

  case 103: /* factor: NIL  */
#line 308 "parse.y"
                                                                                        { yyval = yyvsp[0]; }
#line 2131 "y.tab.c"
    break;

  case 104: /* factorlist: expr  */
#line 312 "parse.y"
                                                                                                { yyval = yyvsp[0]; }
#line 2137 "y.tab.c"
    break;

  case 105: /* factorlist: expr DOTDOT expr COMMA factorlist  */
#line 313 "parse.y"
                                                                        { yyval = yyvsp[0]; }
#line 2143 "y.tab.c"
    break;

  case 106: /* factorlist: expr DOTDOT expr  */
#line 314 "parse.y"
                                                                                        { yyval = instdotdot(yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2149 "y.tab.c"
    break;

  case 107: /* factorlist: %empty  */
#line 315 "parse.y"
                                                                                        { yyval = NULL; }
#line 2155 "y.tab.c"
    break;


#line 2159 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 318 "parse.y"


/* Used in makefloat(). If true, the program will print	NUMBERTOKs being cast
   to float with their scientific notation values. Otherwise, it will print
   their values with the word "float" preceding them. Useful for debugging.

   E.g., y = 34: true - 3.400000e+01, false - (float 34) */
#define NUM_COERCE_IMPLICIT	1

#define ELIM_NESTED_PROGN 	1		/* disables makepnb() functionality and defaults to makeprogn() if 0 */

#define DEBUG_MASTER_SWITCH	0		/* 1 for true, 0 for false  */

/* See parse.h for all debug constants */

 int labelnumber = 0;  /* sequential counter for internal label numbers */
 int debug_call_num = 0;	/* sequential counter for finding a specific place during program execution */
 char *last_method = "makeprogram()"; 	/* the method that called the currently-executing method, if applicable */

/* arrayref processes an array reference a[i]
   subs is a list of subscript expressions.
   tok and tokb are (now) unused tokens that are recycled. */
TOKEN arrayref(TOKEN arr, TOKEN tok, TOKEN subs, TOKEN tokb) {
	if (DEBUG & DB_ARRAYREF) {
		printf("(%d)\n", debug_call_num++);
		printf("In arrayref(), from %s\n", last_method);
		dbugprint4args(arr, tok, subs, tokb);
		last_method = "arrayref()";
	}

	TOKEN array_ref = NULL;
	SYMBOL arr_varsym, typesym, temp;
	SYMBOL arrsyms[10];

	arr_varsym = searchst(arr->stringval);

	if (!arr_varsym) {
		printf(" Error: array \"%s\" not found in symbol table, arrayref().\n", arr->stringval);
		return NULL;
	}

	temp = arr_varsym->datatype;

	int counter = 0;
	int num_arr_dims = 0;	// not being used for anything

	/* Store the ARRAYSYMs into an array */
	while (temp && temp->kind != TYPESYM) {
		arrsyms[counter] = temp;
		num_arr_dims++;
		counter++;
		temp = temp->datatype;
	}

	/* The type of the array */
	typesym = temp;

	if (subs->link == NULL && subs->tokentype == NUMBERTOK) {
		int total_size = (subs->whichval - 1) * typesym->size;
		array_ref = makearef(arr, makeintc(total_size), NULL);
		array_ref->datatype = arr_varsym->basicdt;
		return array_ref;
	}
	// else if tokentype is IDENTIFIER?

	counter = 0;
	TOKEN curr_sub = subs;

	while (curr_sub) {

		if (counter == 0) {		// first iteration; need to make aref
			SYMBOL curr_sym = arrsyms[counter];
			int curr_size = curr_sym->size / (curr_sym->highbound - curr_sym->lowbound + 1);

			// TOKEN mul_op = maketimes(makeintc(curr_size), curr_sub, NULL);

			TOKEN mul_op = makeop(TIMESOP);
			TOKEN pos_typesym_size = makeintc(curr_size);
			TOKEN neg_typesym_size = makeintc(curr_size * -1);

			mul_op->operands = pos_typesym_size;
			pos_typesym_size->link = curr_sub;

			neg_typesym_size->link = mul_op;

			TOKEN plus_op = makeplus(neg_typesym_size, mul_op, NULL);

			array_ref = makearef(arr, plus_op, NULL);
			array_ref->datatype = arr_varsym->basicdt;

		}
		else {

			if (curr_sub->tokentype == NUMBERTOK) {		// smash constants (optimization)
				TOKEN add_to = array_ref->operands->link->operands;
				add_to = addint(add_to, makeintc(curr_sub->whichval * typesym->size), NULL);
			}
			else {
				/* Smash constants and add to tree */

				SYMBOL curr_sym = arrsyms[counter];
				int curr_size = curr_sym->size / (curr_sym->highbound - curr_sym->lowbound + 1);

				TOKEN mul_op = makeop(TIMESOP);
				TOKEN pos_typesym_size = makeintc(curr_size);
				TOKEN neg_typesym_size = makeintc(curr_size * -1);

				mul_op->operands = pos_typesym_size;
				pos_typesym_size->link = curr_sub;

				TOKEN added = array_ref->operands->link->operands;
				added = addint(added, neg_typesym_size, NULL);

				TOKEN add_to = array_ref->operands->link->operands->link;
				TOKEN plus_op = makeplus(add_to, mul_op, NULL);
				add_to = plus_op;

			}
		}

		/* Destroy the current link */
		TOKEN unlink = curr_sub;
		curr_sub = curr_sub->link;
		unlink->link = NULL;
		counter++;
	}

	if (DEBUG & DB_ARRAYREF) {
		printf(" Finished arrayref().\n");
		dbugprint1tok(array_ref);
		last_method = "arrayref()";
	}	
	
	return array_ref;
}

/* instarray installs an array declaration into the symbol table.
   bounds points to a SUBRANGE symbol table entry.
   The symbol table pointer is returned in token typetok. */
TOKEN instarray(TOKEN bounds, TOKEN typetok) {
	if (DEBUG & DB_INSTARRAY) {
		printf("(%d)\n", debug_call_num++);
		printf("In instarray(), from %s\n", last_method);
		dbugprint2args(bounds, typetok);
//		dbprsymbol(typetok->symtype);
		last_method = "instarray()";
	}

	// bounds->symtype->[low/highbound]

	TOKEN curr_bound = bounds;
	SYMBOL prev_sym = NULL;

	SYMBOL typesym = searchst(typetok->stringval);
	int low, high;

	// if (!typesym) {
	// 	printf(" Error: array \"%s\" not found in symbol table, instarray().\n", typetok->stringval);
	// 	return NULL;
	// }

	while (curr_bound) {
		SYMBOL arrsym = symalloc();
		arrsym->kind = ARRAYSYM;

		if (typesym) {
			arrsym->datatype = typesym;
		}
		else {
//			arrsym->basicdt = typetok->datatype;
		}

		low = curr_bound->symtype->lowbound;
		high = curr_bound->symtype->highbound;

		if (!prev_sym) {
			arrsym->size = (high - low + 1) * typesym->size;
		}
		else {
			arrsym->datatype = typetok->symtype;
			arrsym->size = (high - low + 1) * prev_sym->size;
		}

		typetok->symtype = arrsym;
		prev_sym = arrsym;

		arrsym->lowbound = low;
		arrsym->highbound = high;

		curr_bound = curr_bound->link;
	}

	if (DEBUG & DB_INSTARRAY) {
		printf(" Finished instarray().\n");
		dbugprint1tok(typetok);
	}
	
	return typetok;
}

/* instfields will install type in a list idlist of field name tokens:
   re, im: real    put the pointer to REAL in the RE, IM tokens.
   typetok is a token whose symtype is a symbol table pointer.
   Note that nconc() can be used to combine these lists after instrec() */
TOKEN instfields(TOKEN idlist, TOKEN typetok) {
	if (DEBUG & DB_INSTFIELDS) {
		printf("(%d)\n", debug_call_num++);
		printf("In instfields(), from %s\n", last_method);
		printf(" typetok: ");
		ppexpr(typetok);
		dbugprinttok(typetok);
		printf("\n Installing...\n");
		last_method = "instfields()";
	}

	int next = 0;
	int offset = 0;

	SYMBOL recsym, typesym;
	typesym = searchst(typetok->stringval);

	TOKEN temp = idlist;

	/* Set the symtype of each record field (each TOKEN in idlist).
	   These will be linked together in instrec(). */
	while (temp) {
		recsym = makesym(temp->stringval);
		recsym->datatype = typesym;

		// offset = next; next = next + n;
		offset = next;
		next = next + typesym->size;

		recsym->offset = offset;
		recsym->size = typesym->size;
		recsym->datatype = typesym;

		if (typesym->kind == BASICTYPE) {
			recsym->basicdt = typesym->basicdt;
		}

		temp->symtype = recsym;

		if (DEBUG & DB_INSTFIELDS) {
			dbprsymbol(typesym);
			dbugprintsym(recsym);
		}

		temp = temp->link;
	}

	if (DEBUG & DB_INSTFIELDS) {
//		printf(" Finished instfields().\n");
		printf("\n");
	}

	return idlist;
}

/* instpoint will install a pointer type in symbol table */
TOKEN instpoint(TOKEN tok, TOKEN typename) {
	if (DEBUG & DB_INSTPOINT) {
		printf("(%d)\n", debug_call_num++);
		printf("In instpoint(), from %s\n", last_method);
		dbugprint2args(tok, typename);
		last_method = "instpoint()";
	}

	SYMBOL ptrsym, sym;

	ptrsym = symalloc();
	ptrsym->kind = POINTERSYM;
	ptrsym->basicdt = POINTER;
	ptrsym->size = basicsizes[POINTER];
	tok->symtype = ptrsym;

	sym = searchins(typename->stringval);
	sym->kind = TYPESYM;
	ptrsym->datatype = sym;

	if (DEBUG & DB_INSTPOINT) {
		printf(" Finished instpoint().\n");
		dbugprint1tok(tok);
		printf(" ");
		dbprsymbol(tok->symtype);
		printf(" ");
		dbprsymbol(tok->symtype->datatype);
		printf("\n");
	}

	tok->datatype = POINTER;

	return tok;
}

/* instrec will install a record definition.  Each token in the linked list
   argstok has a pointer its type.  rectok is just a trash token to be
   used to return the result in its symtype */
TOKEN instrec(TOKEN rectok, TOKEN argstok) {
	if (DEBUG & DB_INSTREC) {
		printf("In instrec(), from %s\n", last_method);
		dbugprint2args(rectok, argstok);
		last_method = "instrec()";
	}

	int total_size, offset;

	SYMBOL recsym = symalloc();
	recsym->kind = RECORDSYM;
	rectok->symtype = recsym;
	recsym->datatype = argstok->symtype;
	offset = wordaddress(argstok->symtype->size, 8);	// TODO: test this w/ something size 8
	total_size = offset;

	if (DEBUG & DB_INSTREC) {
		printf(" Installing...\n");
		dbugprint1sym(recsym->datatype);
	}

	TOKEN curr = argstok;
	TOKEN next = argstok->link;
	while (next) {
		/* Link the symtypes of each TOKEN (the record fields) together
		   and calculate the total size of the record */

		curr->symtype->link = next->symtype;
		offset = wordaddress(next->symtype->size, 8);		
		next->symtype->offset = total_size;
		total_size += offset;

		if (DEBUG & DB_INSTREC) {
			printf("  ");
			dbprsymbol(next->symtype);
		}

		curr = next;
		next = next->link;
	}

	recsym->size = total_size;

	if (DEBUG & DB_INSTREC) {
		printf(" Finished instrec().\n");
		dbugprint1tok(rectok);
	}

	return rectok;
}

/* insttype will install a type name in symbol table.
   typetok is a token containing symbol table pointers. */
void insttype(TOKEN typename, TOKEN typetok) {
	if (DEBUG & DB_INSTTYPE) {
		printf("(%d)\n", debug_call_num++);
		printf("In insttype(), from %s\n", last_method);
		dbugprint2args(typename, typetok);
		printf(" Installing...\n");
		last_method = "insttype()";
	}

	SYMBOL sym, typesym;

	typesym = typetok->symtype;

	sym = searchins(typename->stringval);	// insert if not found
	sym->kind = TYPESYM;
	sym->size = typesym->size;
	sym->datatype = typesym;
	sym->basicdt = typesym->basicdt;

	if (DEBUG & DB_INSTTYPE) {
		printf(" ");
		dbugprinttok(typename);
		printf(" ");
		dbprsymbol(sym);
		printf(" ");
		dbprsymbol(typesym);
		printf("\n");
	}

}

/* makesubrange makes a SUBRANGE symbol table entry, puts the pointer to it
   into tok, and returns tok. */
TOKEN makesubrange(TOKEN tok, int low, int high) {
	if (DEBUG & DB_MAKESUBRANGE) {
		printf("(%d)\n", debug_call_num++);
		printf("In makesubrange(), from %s\n", last_method);
		dbugprint1arg(tok);
		printf("  low bound: %d\n  high bound: %d\n\n", low, high);		
		last_method = "makesubrange()";
	}
	if (low > high) {
		printf(" Error: low bound cannot be greater than high bound\n\n");
		return NULL;
	}

	TOKEN out = copytok(tok);

	SYMBOL subrange_entry = symalloc();
	subrange_entry->kind = SUBRANGE;
	subrange_entry->basicdt = INTEGER;
	subrange_entry->lowbound = low;
	subrange_entry->highbound = high;
	subrange_entry->size = basicsizes[INTEGER];	// each entry is a constant (int)

	out->symtype = subrange_entry;

	if (DEBUG & DB_ADDOFFS) {
		printf(" Finished makesubrange().\n");
		dbugprint1tok(out);
		last_method = "makesubrange()";
	}	
	
	return out;
}

/* nconc concatenates two token lists, destructively, by making the last link
   of lista point to listb.
   (nconc '(a b) '(c d e))  =  (a b c d e)  */
/* nconc is useful for putting together two fieldlist groups to
   make them into a single list in a record declaration. */
TOKEN nconc(TOKEN lista, TOKEN listb) {
	if (DEBUG & DB_NCONC) {
		printf("(%d)\n", debug_call_num++);
		printf("In nconc(), from %s\n", last_method);
		dbugprint2args(lista, listb);		
		last_method = "nconc()";
	}

	// TODO: check if lista contains members of listb or vice versa?

	get_last_link(lista)->link = listb;

	if (DEBUG & DB_NCONC) {
		printf(" Finished nconc().\n");
		dbugprintlinks(lista);
		last_method = "nconc()";
	}	
	
	return lista;
}

TOKEN get_rec(TOKEN rec, TOKEN offset) {
	TOKEN out = NULL;

	SYMBOL recsym = rec->symtype;
	while (recsym && !out) {
		
		if (recsym->offset == offset->whichval) {
			out = talloc();
			out->symtype = recsym;
		}
		else {
			recsym = recsym->link;
		}
	}

	return out;
}

/* Search the given record for the specified field.
   Returns a pointer to the record field SYMBOL if
   found (stored in TOKEN->symtype), NULL otherwise. */
TOKEN get_rec_field(TOKEN rec, TOKEN field) {

	TOKEN out = NULL;

	SYMBOL recsym = rec->symtype;
	while (recsym && !out) {
		if (strcmp(recsym->namestring, field->stringval) == 0) {
			out = talloc();
			out->symtype = recsym;
		}
		else {
			recsym = recsym->link;
		}
	}

	return out;
}

/* Helper method for reducedot(). Searches for the offset
   of the given field in var. Returns a NUMBERTOK whose
   whichval field is the offset if found, otherwise returns
   with a whichval of -1. */
TOKEN get_offset(TOKEN var, TOKEN field) {

	TOKEN offset = makeintc(-1);

	TOKEN root_name = get_last_operand(var);
	TOKEN last_offset = get_last_link(var->operands);

	SYMBOL found = NULL;
	SYMBOL varsym = searchst(root_name->stringval);

	boolean var_is_arefop = false;
	if (var->whichval == AREFOP) {
		var_is_arefop = true;
	}
	
	if (!varsym) {
		printf(" Error: could not find symbol \"%s\" in symbol table, get_offset():1.\n", root_name->stringval);
		return NULL;
	}

	SYMBOL temp = varsym;
	while (temp) {
		if (temp->datatype && temp->datatype->kind == BASICTYPE) {
			break;
		}
		temp = temp->datatype;
	}

	if (!temp) {
		printf(" Error: symbol table entry \"%s\" is corrupt, get_offset():2.\n", root_name->stringval);
		return NULL;
	}

	while (temp) {

		if ((strcmp(temp->namestring, field->stringval) == 0)) {
			found = temp;
			if (var_is_arefop) {

				/* TOKEN var is an aref TOKEN; ignore */
				if (last_offset->tokentype == OPERATOR) {
					offset->whichval = -1;
				}
				else {
					offset->whichval = last_offset->whichval + found->offset;	
				}

				/* Set offset's link field to a REAL NUMBERTOK.
				   Is necessary to ensure correct behaviour of
				   binop() during type checking/coercion.

				   The link MUST be nulled out after use, otherwise
				   the console output will be incorrect. */
				if (found->datatype->basicdt == REAL) {
					offset->link = makerealtok(0);
					offset->link->realval = -DBL_MAX;
				}
			}
			else {

				offset->whichval = found->offset;
				if (found->datatype->basicdt == REAL) {
					offset->link = makerealtok(0);
					offset->link->realval = -DBL_MAX;
				}
			}

			return offset;
		}
		else if (var_is_arefop && (temp->offset == last_offset->whichval)) {
			found = temp;
			break;
		}

		temp = temp->link;
	}

	/* NOT an error condition if !found here. */

	if (!var_is_arefop && found) {
		offset->whichval = found->offset;
		if (found->datatype->basicdt == REAL) {
			offset->link = makerealtok(0);
			offset->link->realval = -DBL_MAX;
		}
		return offset;
	}
	else if (var_is_arefop && found) {
		/* TOKEN field represents a record field; search for
		   the record in the symbol table and then search for
		   the field within that record. */

		SYMBOL temp1 = searchst(found->datatype->namestring);
		found = NULL;
		if (!temp1) {
			printf(" Error: symbol table entry \"%s\" is corrupt, get_offset():3.\n", root_name->stringval);
			return NULL;
		}

		while (temp1) {
			if (temp1->datatype && temp1->datatype->kind == BASICTYPE) {
				break;
			}
			temp1 = temp1->datatype;
		}

		if (!temp1) {
			printf(" Error: symbol table entry \"%s\" is corrupt, get_offset():4.\n", root_name->stringval);
			return NULL;
		}

		while (temp1 && !found) {
			if (strcmp(temp1->namestring, field->stringval) == 0) {
				found = temp1;
			}
			else {
				temp1 = temp1->link;
			}
		}

		/* NOT an error condition if !found here. */
		if (found) {
			offset->whichval = last_offset->whichval + found->offset;
			if (found->datatype->basicdt == REAL) {
				offset->link = makerealtok(0);
				offset->link->realval = -DBL_MAX;
			}

			return offset;
		}
	}

	return offset;
}

/* reducedot handles a record reference.
   dot is a (now) unused token that is recycled. */
TOKEN reducedot(TOKEN var, TOKEN dot, TOKEN field) {
	if (DEBUG & DB_REDUCEDOT) {
		printf("(%d)\n", debug_call_num++);
		printf("In reducedot(), from %s\n", last_method);
		dbugprint3args(var, dot, field);
		last_method = "reducedot()";
	}

	TOKEN aref;
	TOKEN offset = get_offset(var, field);

	if (var->whichval == AREFOP) {
		/* Avoid adding multiple copies to the tree. */

		if (offset->whichval >= 0) {
			var->operands->link = offset;
		}
		aref = var;
	}
	else {
		aref = makearef(var, offset, NULL);
	}

	/* Change aref's datatype to REAL to avoid incorrect
	   fixes/floats in binop(). NULL out the dummy link. */
	if (offset->link && offset->link->datatype == REAL &&
		offset->link->realval == -DBL_MAX) {

		aref->datatype = REAL;
		offset->link = NULL;
	}
	
	if (DEBUG & DB_REDUCEDOT) {
		printf(" Finished reducedot().\n");
		dbugprint1tok(aref);
		last_method = "reducedot()";
		// ppexpr(aref);
		// printf("\n");
	}

	return aref;
}

/* ############################################################################################################################################################### */

/* addint adds integer off to expression exp, possibly using tok */
TOKEN addint(TOKEN exp, TOKEN off, TOKEN tok) {
	if (!exp || !off) {
		return NULL;
	}

	int a = exp->intval;
	int b = off->intval;
	
	if (DEBUG & DB_ADDINT) {
		printf("(%d)\n", debug_call_num++);
		printf("In addint(), from %s\n Adding %d to %d\n", last_method, b, a);
		dbugprint3args(exp, off, tok);
		last_method = "addint()";
	}

	if ((b > 0) && (a > INT_MAX - b)) { // if ((INT_MAX / exp->intval) > off->intval)
		printf(" Error: integer overflow detected, addint()\n");
		printf(" Cannot add %d to %d\n", b, a);
	}
	else {
		exp->intval = a + b;
	}

	if (DEBUG & DB_ADDINT) {
		printf(" New value of exp: %d\n", exp->intval);
		dbugprint1tok(exp);
	}
	
	return exp;
}

/* addoffs adds offset, off, to an aref expression, exp */
TOKEN addoffs(TOKEN exp, TOKEN off) {
	if (DEBUG & DB_ADDOFFS) {
		printf("(%d)\n", debug_call_num++);
		printf("In addoffs(), from %s\n", last_method);
		dbugprint2args(exp, off);
		last_method = "addoffs()";
	}

	exp = addint(exp, off, NULL);

	if (DEBUG & DB_ADDOFFS) {
		printf(" Finished addoffs().\n");
		dbugprint1tok(exp);
		last_method = "addoffs()";
	}	
	
	return exp;
}

/* binop links a binary operator op to two operands, lhs and rhs.

   TODO
   - boolean types?
   - funcall return types?
*/
TOKEN binop(TOKEN op, TOKEN lhs, TOKEN rhs) {

	if (DEBUG & DB_BINOP) {
		printf("(%d)\n", debug_call_num++);
		printf("In binop(), from %s\n", last_method);
		dbugprint3args(op, lhs, rhs);
		last_method = "binop()";
	}

	/* If rhs represents nil, convert rhs to
	   an INTEGER NUMBERTOK with ->whichval = 0. */
	if (rhs->whichval == (NIL - RESERVED_BIAS)) {
		rhs->tokentype = NUMBERTOK;
		rhs->datatype = INTEGER;
		rhs->whichval = 0;
		// rhs->stringval[0] = 'N';
		// rhs->stringval[1] = 'I';
		// rhs->stringval[2] = 'L';
		// rhs->stringval[3] = '\0';
	}

	int lhs_datatype = lhs->datatype;
	int rhs_datatype = rhs->datatype;
	int op_type = op->whichval;

	/* Type checking/coercion needed. */
	if (lhs_datatype != rhs_datatype) {
		op = binop_type_coerce(op, lhs, rhs);
	}
	else {
		op->datatype = lhs->datatype;
		op->operands = lhs;		// link operands to operator
		lhs->link = rhs;		// link second operand to first
		rhs->link = NULL;		// terminate operand list
	}
	
	if (DEBUG & DB_BINOP) {
		printf(" Finished binop().\n");
		dbugprint1tok(op);
		last_method = "binop()";
//		ppexpr(op);
	}

	return op;
}

/* This method fixes or floats a NUMBERTOK as necessary. */
TOKEN binop_type_coerce(TOKEN op, TOKEN lhs, TOKEN rhs) {

	TOKEN cast_tok;

	int lhs_datatype = lhs->datatype;
	int rhs_datatype = rhs->datatype;
	int op_type = op->whichval;

	if (lhs_datatype == INTEGER && rhs_datatype == REAL) {
		/* LHS is integer, RHS is real.
		   Fix if ASSIGNOP, else float the integer. */

		op->datatype = REAL;

		if (op_type == ASSIGNOP) {
			cast_tok = makefix(rhs);
			op->operands = lhs;
			lhs->link = cast_tok;
		}
		else {
			cast_tok = makefloat(lhs);
			op->operands = cast_tok;
			cast_tok->link = rhs;
		}

	}
	else if (lhs_datatype == REAL && rhs_datatype == INTEGER) {
		/* LHS is real, RHS is integer.
		   Float the integer value.
		   DO NOT fix; lhs still takes precedence. */

		cast_tok = makefloat(rhs);

		op->datatype = REAL;
		op->operands = lhs;
		lhs->link = cast_tok;
		cast_tok->link = NULL;
		rhs->link = NULL;

	}
	else {
		op->datatype = lhs->datatype;
		op->operands = lhs;		// link operands to operator
		lhs->link = rhs;		// link second operand to first
		rhs->link = NULL;		// terminate operand list
	}

	return op;
}

/* cons links a new item onto the front of a list.  Equivalent to a push.
   (cons 'a '(b c))  =  (a b c) */
TOKEN cons(TOKEN item, TOKEN list) {

	if (DEBUG & DB_CONS) {
		printf("(%d)\n", debug_call_num++);
		printf("In cons(), from %s\n", last_method);
		dbugprint2args(item, list);		
		last_method = "cons()";
	}

	item->link = list;

	if (DEBUG & DB_CONS) {
		printf(" Finished cons().\n");
		dbugprint1tok(item);
	}

	return item;
}

/* copytok makes a new token that is a copy of origtok */
TOKEN copytok(TOKEN origtok) {

	if (DEBUG & DB_COPYTOK) {
		printf("(%d)\n", debug_call_num++);
		printf("In copytok(), from %s\n", last_method);
		dbugprint1arg(origtok);
		last_method = "copytok()";
	}

	if (!origtok) {
		return NULL;
	}
	TOKEN out = talloc();
	if (!out) {
		printf(" Failed to alloc TOKEN, copytok().\n");
		return NULL;
	}

	out->tokentype = origtok->tokentype;
	out->datatype = origtok->datatype;

	/* Shallow copies only (as expected). */
	out->symtype = origtok->symtype;
	out->symentry = origtok->symentry;
	out->operands = origtok->operands;
	out->link = origtok->link;
	
	if (origtok->stringval[0] != '\0') {
		strncpy(out->stringval, origtok->stringval, 16);
	}
	else if (origtok->whichval != -1) {
		out->whichval = origtok->whichval;
	}
	else if (origtok->realval != -DBL_MIN) {
		out->realval = origtok->realval;
	}
	else {
		out->intval = origtok->intval;
	}

	if (DEBUG & DB_COPYTOK) {
		printf(" Finished copytok().\n");
		printf("  Original:\n    ");
		dbugprinttok(origtok);
		printf("  Copy:\n    ");
		dbugprinttok(out);
		printf("\n");
	}

	return out;
}

/* dogoto is the action for a goto statement.
   tok is a (now) unused token that is recycled. */
TOKEN dogoto(TOKEN tok, TOKEN labeltok) {

	// THIS METHOD SHOULD ONLY BE CALLED FOR A USER LABEL

	if (DEBUG & DB_DOGOTO) {
		printf("(%d)\n", debug_call_num++);
		printf("In dogoto(), from %s\n", last_method);
		dbugprint2args(tok, labeltok);		
		last_method = "dogoto()";
	}

	if (labeltok->intval < 0) {
		printf(" Warning: label number is negative, dogoto().\n");
	}

	int internal_label_num = get_internal_label_num(labeltok->intval);
	if (internal_label_num == -1) {
		printf(" Error: could not find internal label number corresponding to user label number %d\n", labeltok->intval);
		return NULL;
	}
	
	if (DEBUG & DB_DOGOTO) {
		printf(" Finished dogoto().\n");
		printf("  Found internal label number %d corresponding to user label number %d\n", internal_label_num, labeltok->intval);
		printf("  Transferring to makegoto()...\n\n");
	}

	return (makegoto(internal_label_num));
}

/* dolabel is the action for a label of the form   <number>: <statement>
   tok is a (now) unused token that is recycled. */
TOKEN dolabel(TOKEN labeltok, TOKEN tok, TOKEN statement) {

	if (DEBUG & DB_DOLABEL) {
		printf("(%d)\n", debug_call_num++);
		printf("In dolabel(), from %s\n", last_method);
		dbugprint3args(labeltok, tok, statement);		
		last_method = "dolabel()";
	}
	
	int internal_label_num = get_internal_label_num(labeltok->intval);
	if (internal_label_num == -1) {
		printf(" Error: label %d not found in label table\n", labeltok->intval);
		return NULL;
	}

	TOKEN do_progn_tok = makeop(PROGNOP);
	TOKEN label_tok = makeop(LABELOP);
//	TOKEN do_progn_tok = makeprogn(makeop(PROGNOP), makeop(LABELOP));	// second arg will never be progn, so skip makepnb()
	TOKEN label_num_tok = makeintc(internal_label_num);

	if (!do_progn_tok || !label_tok || !label_num_tok) {
		printf(" Failed to alloc label TOKEN(s), dolabel().\n");
		return NULL;
	}

	do_progn_tok->operands = label_tok;
	label_tok->operands = label_num_tok;
	label_tok->link = statement;

	if (DEBUG & DB_DOLABEL) {
		printf(" Finished dolabel().\n");
		dbugprint1tok(do_progn_tok);
		last_method = "dolabel()";
	}

	return do_progn_tok;
}

/* dopoint handles a ^ operator.
   tok is a (now) unused token that is recycled. */
TOKEN dopoint(TOKEN var, TOKEN tok) {
	if (DEBUG & DB_DOPOINT) {
		printf("(%d)\n", debug_call_num++);
		printf("In dopoint(), from %s\n", last_method);
		dbugprint2args(var, tok);		
		last_method = "dopoint()";
	}

	tok->operands = var;

	if (DEBUG & DB_DOPOINT) {
		printf(" Finished dopoint().\n");
		dbugprint1tok(tok);
	}

	return tok;
}

/* findid finds an identifier in the symbol table, sets up symbol table\n
   pointers, changes a constant to its number equivalent

   Adapted from Prof. Novak's class notes with permission. */
TOKEN findid(TOKEN tok) {

	if (DEBUG & DB_FINDID) {
		printf("(%d)\n", debug_call_num++);
		printf("In findid(), from %s\n", last_method);
		dbugprint1arg(tok);
		last_method = "findid()";
	}

	SYMBOL sym, typ;
	sym = searchst(tok->stringval);

	if (sym->kind == CONSTSYM) {
	
		tok->tokentype = NUMBERTOK;

		if (sym->basicdt == 0) {
			tok->datatype = INTEGER;
			tok->intval = sym->constval.intnum;
		}
		else if (sym->basicdt == 1) {
			tok->datatype = REAL;
			tok->realval = sym->constval.realnum;
		}

	}
	else {
	
		tok->symentry = sym;
		typ = sym->datatype;
		tok->symtype = typ;

		if (typ->kind == BASICTYPE || typ->kind == POINTERSYM) {
			tok->datatype = typ->basicdt;
		}

	}
	
	if (DEBUG & DB_FINDID) {
		printf(" Finished findid().\n");
		dbugprint1tok(tok);
	}	

	return tok;
}

/* findtype looks up a type name in the symbol table, puts the pointer
   to its type into tok->symtype, returns tok. */
TOKEN findtype(TOKEN tok) {

	if (DEBUG & DB_FINDTYPE) {
		printf("(%d)\n", debug_call_num++);
		printf("In findtype(), from %s\n", last_method);
		dbugprint1arg(tok);
		last_method = "findtype()";
	}
	
	SYMBOL sym, typ;
//	sym = searchins(tok->stringval);	// triggers segfault
	sym = searchst(tok->stringval);

	if (!sym) {
		printf(" Error: type \"%s\" not found in symbol table, findtype().\n", tok->stringval);
		return NULL;
	}

	typ = sym->datatype;
	int kind = sym->kind;

	/* Arg represents symbol of basic datatype (INTEGER, REAL, STRINGTYPE, BOOLETYPE, POINTER) */
	if (kind == BASICTYPE) {
		tok->datatype = sym->basicdt;
		tok->symtype = sym;
	}
	else {
		tok->symtype = typ;
	}

	if (DEBUG & DB_FINDTYPE) {
		printf(" Finished findtype().\n");
		dbugprint1tok(tok);
	}

	return tok;
}

/* Gets and returns the last TOKEN (in)directly
   connected via ->link to TOKEN tok. Mostly used 
   to handle elimination of nested progns. */
TOKEN get_last_link(TOKEN tok) {
	if (!tok) {
		return NULL;
	}

	TOKEN curr = tok;
	TOKEN curr_link = curr->link;
	while (curr_link) {
		curr = curr_link;
		curr_link = curr_link->link;
	}

	return curr;
}

/* Gets and returns the last TOKEN (in)directly
   connected via ->operands to TOKEN tok. */
TOKEN get_last_operand(TOKEN tok) {
	if (!tok) {
		return NULL;
	}

	TOKEN curr = tok;
	TOKEN curr_operand = curr->operands;
	while (curr_operand) {
		curr = curr_operand;
		curr_operand = curr_operand->operands;
	}

	return curr;	
}

/* instconst installs a constant in the symbol table */
void instconst(TOKEN idtok, TOKEN consttok) {

	if (DEBUG & DB_INSTCONST) {
		printf("(%d)\n", debug_call_num++);
		printf("In instconstant(), from %s\n", last_method);
		dbugprint2args(idtok, consttok);		
		last_method = "instconst()";
	}

	SYMBOL sym;

	sym = insertsym(idtok->stringval);
	sym->kind = CONSTSYM;
	sym->basicdt = consttok->datatype;

	if (sym->basicdt == INTEGER) {		// INTEGER
		sym->constval.intnum = consttok->intval;
		sym->size = basicsizes[INTEGER];	// 4
	}
	else if (sym->basicdt == REAL) {	// REAL
		sym->constval.realnum = consttok->realval;
		sym->size = basicsizes[REAL];	// 8
	}
	else if (sym->basicdt == STRINGTYPE) {
		strncpy(sym->constval.stringconst, consttok->stringval, 16);
		sym->size = basicsizes[STRINGTYPE];
	}

	if (DEBUG & DB_INSTCONST) {
		printf(" Finished instconstant().\n");
		dbugprint2toks(idtok, consttok);
	}

}

/* instdotdot installs a .. subrange in the symbol table.
   dottok is a (now) unused token that is recycled. */
TOKEN instdotdot(TOKEN lowtok, TOKEN dottok, TOKEN hightok) {
	if (DEBUG & DB_INSTDOTDOT) {
		printf("(%d)\n", debug_call_num++);
		printf("In instdotdot(), from %s\n", last_method);
		dbugprint3args(lowtok, dottok, hightok);	
		last_method = "instdotdot()";	
	}

	TOKEN out = makesubrange(dottok, lowtok->intval, hightok->intval);

	if (DEBUG & DB_INSTDOTDOT) {
		printf(" Finished instdotdot().\n");
		dbugprint1tok(out);
		last_method = "instdotdot()";	
	}

	return out;
}

/* instenum installs an enumerated subrange in the symbol table,
   e.g., type color = (red, white, blue)
   by calling makesubrange and returning the token it returns. */
TOKEN instenum(TOKEN idlist) {
	if (DEBUG & DB_INSTENUM) {
		printf("(%d)\n", debug_call_num++);
		printf("In instenum(), from %s\n", last_method);
		dbugprint1arg(idlist);
		last_method = "instenum()";
	}

	int total_size = 0;
	TOKEN temp = idlist;
	while (temp) {
		instconst(temp, makeintc(total_size));
		total_size++;
		temp = temp->link;
	}

	TOKEN subrange_tok = makesubrange(idlist, 0, (total_size - 1));

	if (DEBUG & DB_INSTENUM) {
		printf(" Finished instenum().\n");
		dbugprint1tok(subrange_tok);
		last_method = "instenum()";
	}

	return subrange_tok;
}

/* instlabel installs a user label into the label table */
void instlabel (TOKEN num) {

	// DO NOT CALL THIS METHOD FOR COMPILER-GENERATED LABELS

	if (DEBUG & DB_INSTLABEL) {
		printf("(%d)\n", debug_call_num++);
		printf("In dolabel(), from %s\n", last_method);
		dbugprint1arg(num);
		last_method = "instlabel()";
	}
	
//	insert_label(labelnumber++, num->intval);
	insert_label(labelnumber++, num);

	if (DEBUG & DB_INSTLABEL) {
		printf(" Finished dolabel().\n");
	}
}

/* instvars will install variables in symbol table.
   typetok is a token containing symbol table pointer for type.

   Note that initsyms() is already called in main().

   Adapted from Prof. Novak's class notes with permission. */
void instvars(TOKEN idlist, TOKEN typetok) {

	if (DEBUG & DB_INSTVARS) {
		printf("(%d)\n", debug_call_num++);
		printf("In instvars(), from %s\n", last_method);
		printf(" typetok: ");
		ppexpr(typetok);
		dbugprint1tok(typetok);
		printf(" Installing...\n");
		last_method = "instvars()";
	}

	SYMBOL sym, typesym;
	int align;

	typesym = typetok->symtype;
	align = alignsize(typesym);

	while (idlist != NULL) {
		sym = insertsym(idlist->stringval);
		sym->kind = VARSYM;
		sym->offset = wordaddress(blockoffs[blocknumber], align);
		sym->size = typesym->size;
		blockoffs[blocknumber] = sym->offset + sym->size;
		sym->datatype = typesym;
		sym->basicdt = typesym->basicdt;

		if (typesym->datatype != NULL && typesym->datatype->kind == ARRAYSYM) {
			SYMBOL arr_type = typesym->datatype;
			while (arr_type && arr_type->kind == ARRAYSYM) {
				arr_type = arr_type->datatype;
			}
			if (arr_type->kind == BASICTYPE) {
				sym->basicdt = arr_type->basicdt;
			}
		}

		if (DEBUG & DB_INSTVARS) {
			printf(" ");
			dbugprinttok(idlist);
		}
		
		idlist = idlist->link;
	}

	if (DEBUG & DB_INSTVARS) {
		printf("\n");
	}
}

/* makearef makes an array reference operation.
   off is be an integer constant token
   tok (if not NULL) is a (now) unused token that is recycled. */
TOKEN makearef(TOKEN var, TOKEN off, TOKEN tok) {
	if (DEBUG & DB_MAKEAREF) {
		printf("(%d)\n", debug_call_num++);
		printf("In makearef(), from %s\n", last_method);
		dbugprint3args(var, off, tok);
		last_method = "makearef()";
	}

	TOKEN aref = makeop(AREFOP);
	aref->operands = var;
	var->link = off;

	if (DEBUG & DB_MAKEAREF) {
		printf(" Finished makearef().\n");
		dbugprint1tok(aref);
		last_method = "makearef()";
	}	
	
	return aref;
}

/* makefix forces the item tok to be integer, by truncating a constant
   or by inserting a FIXOP operator */
TOKEN makefix(TOKEN tok) {

	if (DEBUG & DB_MAKEFIX) {
		printf("(%d)\n", debug_call_num++);
		printf("In makefix(), from %s\n", last_method);
		last_method = "makefix()";
		dbugprint1arg(tok);
		last_method = "makefix()";
	}

	TOKEN out = makeop(FIXOP);	// create FIXOP TOKEN
	if (!out) {
		printf(" Failed to alloc TOKEN, makefix().\n");
		return NULL;
	}

	out->operands = tok;
	out->link = NULL;

	if (DEBUG & DB_MAKEFIX) {
		printf(" Finished makefix().\n");
		dbugprint1tok(out);
		last_method = "makefix()";
	}

	return out;
}

/* makefloat forces the item tok to be floating, by floating a constant
   or by inserting a FLOATOP operator */
TOKEN makefloat(TOKEN tok) {

	if (DEBUG & DB_MAKEFLOAT) {
		printf("(%d)\n", debug_call_num++);
		printf("In makefloat(), from %s\n", last_method);
		dbugprint1arg(tok);
		last_method = "makefloat()";
	}

	TOKEN out;

	if (NUM_COERCE_IMPLICIT && tok->tokentype == NUMBERTOK) {
		/* e.g., floating 34 prints "3.400000e+01" to console */
		out = tok;
		out->datatype = REAL;
		out->realval = out->intval;
		out->intval = INT_MIN;
	}
	else {
		/* e.g., floating 34 prints "(float 34)" to console */
		out = makeop(FLOATOP);
		if (!out) {
			printf(" Failed to alloc TOKEN, makefloat().\n");
			return NULL;
		}

		out->operands = tok;
		out->link = NULL;	
	}

	if (DEBUG & DB_MAKEFLOAT) {
		printf(" Finished makefloat().\n");
		dbugprint1tok(out);
		last_method = "makefloat()";
	}

	return out;
}

/* makefor makes structures for a for statement. sign == 1 for regular
   for-loop, -1 for downto for-loop. tok, tokb and tokc are (now) unused
   tokens that are recycled. */
TOKEN makefor(int sign, TOKEN tok, TOKEN asg, TOKEN tokb, 
			TOKEN endexpr, TOKEN tokc, TOKEN statement) {

	if (DEBUG & DB_MAKEFOR) {
		printf("(%d)\n", debug_call_num++);
		printf("In makefor(), from %s\n", last_method);
		dbugprint6args(tok, asg, tokb, endexpr, tokc, statement);	
		last_method = "makefor()";	
	}

	TOKEN for_asg_progn_tok = makepnb(talloc(), asg);
	TOKEN label_tok = makelabel();
	
	TOKEN stop_op_tok = makeop(LEOP);
	TOKEN do_progn_tok = makepnb(talloc(), statement);
	TOKEN ifop_tok = makeif(makeop(IFOP), stop_op_tok, do_progn_tok, NULL);

	TOKEN loop_stop_tok = copytok(asg->operands); // the counter var, eg "i" in trivb.pas
	TOKEN stmt_incr_tok = makeloopincr(asg->operands, sign);
	TOKEN goto_tok;

	if (!for_asg_progn_tok || !label_tok || !ifop_tok || !stop_op_tok ||
		!do_progn_tok || !loop_stop_tok || !stmt_incr_tok) {
		printf(" Failed to alloc TOKEN(s), makefor().\n");
		return NULL;
	}

	goto_tok = makegoto(label_tok->operands->intval);	// TODO: not null-checked

	if (sign == -1) {
		stop_op_tok->whichval = GEOP;	// "downto"
	}

	/* Link all the tokens together. */
	asg->link = label_tok;
	label_tok->link = ifop_tok;
	stop_op_tok->operands = loop_stop_tok;
	loop_stop_tok->link = endexpr;

	/* Handle elimination of nested progns */
	if (do_progn_tok->whichval != PROGNOP) {
		do_progn_tok->operands = statement;
		statement->link = stmt_incr_tok;
	}
	else {	// do_progn_tok == statement
		get_last_link(do_progn_tok->operands)->link = stmt_incr_tok;
	}
	stmt_incr_tok->link = goto_tok;
	
	if (DEBUG & DB_MAKEFOR) {
		printf(" Finished makefor().\n");
		dbugprint1tok(for_asg_progn_tok);
		last_method = "makefor()";	
	}

	return for_asg_progn_tok;
}
			
/* makefuncall makes a FUNCALL operator and links it to the fn and args.
   tok is a (now) unused token that is recycled. */
TOKEN makefuncall(TOKEN tok, TOKEN fn, TOKEN args) {

	if (DEBUG & DB_MAKEFUNCALL) {
		printf("(%d)\n", debug_call_num++);
		printf("In makefuncall(), from %s\n", last_method);
		dbugprint3args(tok, fn, args);
		last_method = "makefuncall()";
	}

	TOKEN funcall_tok;

	if (strcmp(fn->stringval, "new") != 0) {

		funcall_tok = makeop(FUNCALLOP);		// 24
		if (!funcall_tok) {
			printf(" Failed to allocate TOKEN, makefuncall().\n");	// according to the Prof, print message and coredump
			return NULL;
		}

		SYMBOL this_fxn = searchst(fn->stringval);
		if (!this_fxn) {
			printf(" Failed to find function with name \"%s\" in symbol table.\n", fn->stringval);
			return NULL;
		}
		
		funcall_tok->datatype = this_fxn->datatype->basicdt;

		/* Check for type compatibility between the write functions and
		   the arguments. Correct if necessary. */
		if (strcmp(fn->stringval, "write") == 0 || strcmp(fn->stringval, "writeln") == 0) {
			fn = write_fxn_args_type_check(fn, args);
			if (!fn) {
				return NULL;
			}
		}

		/* (+ i j) => +->operands = i and i->link = j; (funcall_tok fn args) */
		funcall_tok->operands = fn;
		fn->link = args;
	}
	else {
		/* For whenever new() is called */

		funcall_tok = makeop(ASSIGNOP);
		TOKEN funcall = makeop(FUNCALLOP);

		SYMBOL this_type = searchst(args->stringval);

		if (!this_type) {
			printf(" Error: type \"%s\" not found in symbol table, findtype().\n", args->stringval);
			return NULL;
		}

		funcall_tok->operands = args;
		args->link = funcall;
		funcall->operands = fn;
		fn->link = makeintc(this_type->datatype->datatype->datatype->size);

	}

	if (DEBUG & DB_MAKEFUNCALL) {
		printf(" Finished makefuncall().\n");
		dbugprint3toks(funcall_tok, funcall_tok->operands, funcall_tok->operands->link);
//		ppexpr(funcall_tok);
		last_method = "makefuncall()";
	}

	return funcall_tok;
}

/* makegoto makes a GOTO operator to go to the specified label.
   The label number is put into a number token. */
TOKEN makegoto(int label) {

	if (DEBUG & DB_MAKEGOTO) {
		printf("(%d)\n", debug_call_num++);
		printf("In makegoto(), from %s\n", last_method);
		if (DB_PRINT_ARGS) {
			printf(" Arguments:\n  %d\n\n", label);
		}
		last_method = "makegoto()";
	}

	if (label < 0) {
		printf(" Warning: label number is negative (%d), makegoto().\n", label);
	}

	TOKEN goto_tok = makeop(GOTOOP);
	TOKEN goto_num_tok = makeintc(label);
	if (!goto_tok || !goto_num_tok) {
		printf(" Failed to alloc TOKEN, makegoto().\n");
		return NULL;
	}

	goto_tok->operands = goto_num_tok;	// operand together

	if (DEBUG & DB_MAKEGOTO) {
		printf(" Finished makegoto().\n");
		dbugprint1tok(goto_tok);
		last_method = "makegoto()";
	}

	return goto_tok;
}

/* makeif makes an IF operator and links it to its arguments.
   tok is a (now) unused token that is recycled to become an IFOP operator */
TOKEN makeif(TOKEN tok, TOKEN exp, TOKEN thenpart, TOKEN elsepart) {

	if (DEBUG & DB_MAKEIF) {
		printf("(%d)\n", debug_call_num++);
		printf("In makeif(), from %s\n", last_method);
		dbugprint4args(tok, exp, thenpart, elsepart);	
		last_method = "makeif()";	
	}
	
	tok->tokentype = OPERATOR;	/* Make it look like an operator. */
	tok->whichval = IFOP;
	
	if (elsepart != NULL) {
		elsepart->link = NULL;
	}

	thenpart->link = elsepart;
	exp->link = thenpart;
	tok->operands = exp;

	if (DEBUG & DB_MAKEIF) {
		printf(" Finished makeif().\n");
		dbugprint1tok(tok);
	}

	return tok;
}

/* makeintc makes a new token with num as its value */
TOKEN makeintc(int num) {

	if (DEBUG & DB_MAKEINTC) {
		printf("(%d)\n", debug_call_num++);
		printf("In makeintc(), from %s\n", last_method);
		printf(" Arguments:\n  %d\n\n", num);
		last_method = "makeintc()";
	} 

	TOKEN out = talloc();
	if (!out) {
		printf(" Failed to alloc TOKEN, makeintc().\n");
		return NULL;
	}

	out->tokentype = NUMBERTOK;
	out->datatype = INTEGER;
	out->intval = num;

	if (DEBUG & DB_MAKEINTC) {
		printf(" Finished makeintc().\n");
		dbugprint1tok(out);
	}

	return out;
}

/* makelabel makes a new label, using labelnumber++ */
TOKEN makelabel() {

	// DO NOT CALL FOR USER LABELS

	if (DEBUG & DB_MAKELABEL) {
		printf("(%d)\n", debug_call_num++);
		printf("In makelabel(), from %s\n\n", last_method);
		last_method = "makelabel()";
	}

	TOKEN label_tok = makeop(LABELOP);
	TOKEN label_num_tok = makeintc(labelnumber++);	// increment it after creation
	
	if (!label_tok || !label_num_tok) {
		printf(" Failed to alloc TOKEN(s), makelabel().\n");
		return NULL;
	}

	label_tok->operands = label_num_tok;	// operand together

	if (DEBUG & DB_MAKELABEL) {
		printf(" Finished makelabel().\n");
		dbugprint1tok(label_tok);
		last_method = "makelabel()";
	}

	return label_tok;
}

/* A helper method used to create the TOKENs required to increment
   the counter var in a for-loop.

   Returned TOKENs are of the form "(:= i (+ i 1))".  */
TOKEN makeloopincr(TOKEN var, int incr_amt) {
	// if in makefor(), send in asg->operands

	TOKEN assignop = makeop(ASSIGNOP);
	TOKEN var_cpy = copytok(var);
	TOKEN plusop = makeplus(copytok(var), makeintc(incr_amt), NULL);	// PLUSOP operand "var" link amt

	assignop->operands = var_cpy;
	var_cpy->link = plusop;

	return assignop;
}

/* makeop makes a new operator token with operator number opnum.
   Example:  makeop(FLOATOP)  */
TOKEN makeop(int opnum) {

	if (DEBUG & DB_MAKEOP) {
		printf("(%d)\n", debug_call_num++);
		printf("In makeop(), from %s\n", last_method);
		if (DB_PRINT_ARGS) {
			printf(" Arguments:\n  %d\n\n", opnum);	
		}
		last_method = "makeop()";
	}

	if (opnum < 0) {
		printf(" Warning: opnum is negative (%d), makeop().\n", opnum);
	}

	TOKEN out = talloc();
	if (!out) {
		printf(" Failed to alloc TOKEN, makeop().\n");
		return NULL;
	}

	out->tokentype = OPERATOR;
	out->whichval = opnum;

	if (DEBUG & DB_MAKEOP) {
		printf(" Finished makeop().\n");
		dbugprint1tok(out);
	}

	return out;
}

/* makeplus makes a + operator.
   tok (if not NULL) is a (now) unused token that is recycled. */
TOKEN makeplus(TOKEN lhs, TOKEN rhs, TOKEN tok) {

	if (DEBUG & DB_MAKEPLUS) {
		printf("(%d)\n", debug_call_num++);
		printf("In makeplus(), from %s\n", last_method);
		dbugprint3args(lhs, rhs, tok);		
		last_method = "makeplus()";
	}

	TOKEN out = makeop(PLUSOP);
	if (lhs && rhs) {
		out->operands = lhs;
		lhs->link = rhs;
		rhs->link = NULL;
	}
	
	if (DEBUG & DB_MAKEPLUS) {
		printf(" Finished makeplus().\n");
		dbugprint1tok(out);
		last_method = "makeplus()";
	}

	return out;
}

/* Make a * operator TOKEN. Sets operands and
   fields if not NULL and returns this, otherwise
   just returns a * OPERATOR TOKEN. */
TOKEN maketimes(TOKEN lhs, TOKEN rhs, TOKEN tok) {

	TOKEN out = makeop(TIMESOP);
	if (lhs && rhs) {
		out->operands = lhs;
		lhs->link = rhs;
		rhs->link = NULL;
	}

	return out;
}

/* makepnb is like makeprogn, except that if statements is already a progn,
   it just returns statements.  This is optional. */
TOKEN makepnb(TOKEN tok, TOKEN statements) {

	if (statements->whichval == PROGNOP && ELIM_NESTED_PROGN) {
		if (DEBUG & DB_MAKEPNB) {
			printf("(%d)\n", debug_call_num++);
			printf("In makepnb(), from %s\n", last_method);
			dbugprint2args(tok, statements);
			printf(" Finished makepnb().\n");
			dbugprint1tok(statements);
		}
		return statements;
	}
	if (DEBUG & DB_MAKEPNB) {
		printf("(%d)\n", debug_call_num++);
		printf("In makepnb(), from %s; transferring to makeprogn()...\n", last_method);
	}
	return (makeprogn(tok, statements));
}

/* makeprogn makes a PROGN operator and links it to the list of statements.
   tok is a (now) unused token that is recycled. */
TOKEN makeprogn(TOKEN tok, TOKEN statements) {

	if (DEBUG & DB_MAKEPROGN) {
		printf("(%d)\n", debug_call_num++);
		printf("In makeprogn(), from %s\n", last_method);
		dbugprint2args(tok, statements);
		last_method = "makeprogn()";
	}

	tok->tokentype = OPERATOR;		// 0
	tok->whichval = PROGNOP;		// 22
	tok->operands = statements;

	if (DEBUG & DB_MAKEPROGN) {
		printf(" Finished makeprogn().\n");
		dbugprint2toks(tok, statements);
	}

	return tok;
}

/* makeprogram makes the tree structures for the top-level program */
TOKEN makeprogram(TOKEN name, TOKEN args, TOKEN statements) {

	if (DEBUG & DB_MAKEPROGRAM) {
		printf("(%d)\n", debug_call_num++);
		printf("In makeprogram(), from %s\n", last_method);
		dbugprint3args(name, args, statements);
		last_method = "makeprogram()";
	}

	TOKEN program_start = makeop(PROGRAMOP);		// 26
	TOKEN progn_start = makepnb(talloc(), args);	// set []->operands to args
	
	if (!program_start || !progn_start) {
		printf(" Failed to alloc TOKEN, makeprogram().\n");	// according to the Prof, print message and coredump
		return NULL;
	}

	/* Create the head of the tree (this is stored in parseresult). */
	program_start->operands = name;
	progn_start->link = statements;
	name->link = progn_start;

	if (DEBUG & DB_MAKEPROGRAM) {
		printf(" Finished makeprogram().\n");
		dbugprint1tok(program_start);
		last_method = "makeprogram()";
	}

	return program_start;
}

/* Not really much use for this except
   in get_offset() */
TOKEN makerealtok(float num) {
	TOKEN out = talloc();
	if (!out) {
		printf(" Failed to alloc TOKEN, makerealtok().\n");
		return NULL;
	}

	out->tokentype = NUMBERTOK;
	out->datatype = REAL;
	out->realval = num;

	return out;
}

/* makerepeat makes structures for a repeat statement.
   tok and tokb are (now) unused tokens that are recycled. */
TOKEN makerepeat(TOKEN tok, TOKEN statements, TOKEN tokb, TOKEN expr) {

	if (DEBUG & DB_MAKEREPEAT) {
		printf("(%d)\n", debug_call_num++);
		printf("In makerepeat(), from %s\n", last_method);
		dbugprint4args(tok, statements, tokb, expr);
		last_method = "makerepeat()";
	}

	TOKEN label_tok = makelabel();
	TOKEN goto_tok = makegoto(label_tok->operands->intval);
	TOKEN rpt_progn_tok = makepnb(talloc(), label_tok);	// operand label_tok to rpt_progn_tok
	TOKEN do_progn_tok = makeop(PROGNOP);
	TOKEN ifop_tok = makeif(makeop(IFOP), expr, do_progn_tok, NULL);

	if (!label_tok || !goto_tok || !rpt_progn_tok ||
		!do_progn_tok ||!ifop_tok) {
		printf(" Failed to alloc TOKEN(s), makerepeat().\n");
		return NULL;
	}

	/* Link TOKENs together */
	label_tok->link = statements;
	do_progn_tok->link = goto_tok;

	/* Handle elimination of nested progns */
	get_last_link(statements)->link = ifop_tok;

	if (DEBUG & DB_MAKEREPEAT) {
		printf(" Finished makerepeat().\n");
		dbugprint1tok(rpt_progn_tok);
		last_method = "makerepeat()";
	}

	return rpt_progn_tok;
}

/* makewhile makes structures for a while statement.
   tok and tokb are (now) unused tokens that are recycled. */
TOKEN makewhile(TOKEN tok, TOKEN expr, TOKEN tokb, TOKEN statement) {

	if (DEBUG & DB_MAKEWHILE) {
		printf("(%d)\n", debug_call_num++);
		printf("In makewhile(), from %s\n", last_method);
		dbugprint4args(tok, expr, tokb, statement);
		last_method = "makewhile()";
	}

	if (expr->operands->link && expr->operands->link->whichval == (NIL - RESERVED_BIAS)) {
		expr->operands->link->tokentype = NUMBERTOK;
		expr->operands->link->datatype = INTEGER;
		expr->operands->link->whichval = 0;
	}

	TOKEN label_tok = makelabel();
	TOKEN goto_tok = makegoto(label_tok->operands->intval);
	TOKEN while_progn_tok = makepnb(talloc(), label_tok);	// operand label_tok to while_progn_tok
	TOKEN do_progn_tok = makepnb(talloc(), statement);		// operand statement to do_progn_tok
	TOKEN ifop_tok = makeif(makeop(IFOP), expr, do_progn_tok, NULL);

	if (!label_tok || !goto_tok || !while_progn_tok ||
		!do_progn_tok ||!ifop_tok) {
		printf(" Failed to alloc TOKEN(s), makewhile().\n");
		return NULL;
	}

	label_tok->link = ifop_tok;

	/* Handle elimination of nested progns */
	if (do_progn_tok->whichval != PROGNOP) {
		do_progn_tok->operands = statement;
		statement->link = goto_tok;
	}
	else {	// do_progn_tok == statement
		get_last_link(do_progn_tok->operands)->link = goto_tok;
	}

	if (DEBUG & DB_MAKEWHILE) {
		printf(" Finished makewhile().\n");
		dbugprint1tok(while_progn_tok);
		last_method = "makewhile()";
	}

	return while_progn_tok;
}

/* mulint multiplies expression exp by integer n */
TOKEN mulint(TOKEN exp, int n) {
	if (!exp) {
		return NULL;
	}

	if (exp->datatype == INTEGER) {

		int a = exp->intval;
		int val = a * n;
		
		if (DEBUG & DB_MULINT) {
			printf("(%d)\n", debug_call_num++);
			printf("In mulint(), from %s\n Multiplying %d to %d\n", last_method, n, a);
			last_method = "mulint()";
		}

		if (a != 0 && (a * n) / a != n) {
			printf(" Integer overflow detected, mulint()\n");
			printf(" Cannot multiply %d to %d\n", n, a);
		}
		else {
			exp->intval = val;
		}

		if (DEBUG & DB_MULINT) {
			printf(" New value of exp: %d\n", exp->intval);
			dbugprint1tok(exp);
		}

	}
	else if (exp->datatype == REAL) {

		if (DEBUG & DB_MULINT) {
			printf("In mulint()\n Multiplying %d to %f\n", n, exp->realval);
		}
	
		double val = exp->realval * n;

		if ((val > FLT_MAX || val < FLT_MIN)) {
			printf(" Floating number out of range, mulint()\n");
			printf(" Cannot multiply %d to %f\n", n, exp->realval);
		}
		else {
			exp->realval = val;
		}

		if (DEBUG & DB_MULINT) {
			printf(" New value of exp: %f\n", exp->realval);
			dbugprint1tok(exp);
		}

	}

	return exp;
}

/* searchins will search for symbol, inserting it if not present. */
SYMBOL searchinsst(char name[]) {
	return (searchins(name));
}

/* settoktype sets up the type fields of token tok.
   typ = type pointer, ent = symbol table entry of the variable  */
void settoktype(TOKEN tok, SYMBOL typ, SYMBOL ent) {

	if (DEBUG & DB_SETTOKTYPE) {
		printf("(%d)\n", debug_call_num++);
		printf("In settoktype(), from %s\n", last_method);
		dbugprint3args(tok, typ, ent);
		last_method = "settoktype()";
	}

	if (!tok || !typ || !ent) {
		// something;
	}

	tok->symtype = typ;
	tok->symentry = ent;

	if (DEBUG & DB_SETTOKTYPE) {
		printf(" Finished settoktype().\n\n");
	}
}

/* unaryop links a unary operator op to one operand, lhs. +/-/NOT */
TOKEN unaryop(TOKEN op, TOKEN lhs) {

	if (DEBUG & DB_UNARYOP) {
		printf("(%d)\n", debug_call_num++);
		printf("In unaryop(), from %s\n", last_method);
		dbugprint2args(op, lhs);
		last_method = "unaryop()";
	}

	op->operands = lhs;
	lhs->link = NULL;

	if (DEBUG & DB_UNARYOP) {
		printf(" Finished unaryop().\n");
		dbugprint2toks(op, lhs);
	}

	return op;
}

/* wordaddress pads the offset n to be a multiple of wordsize.
   wordsize should be 4 for integer, 8 for real and pointers,
   16 for records and arrays */
int wordaddress(int n, int wordsize) { 
	return ((n + wordsize - 1) / wordsize) * wordsize;
}

// TODO: assumes fn is always a write() or writeln() function
// TODO: does not do cross-conversions (e.g., send in writelnf() to convert to writelni())
// TODO: identifier datatypes?
/* Check for type compatibility between the write functions and
   the arguments. Correct if necessary. */
TOKEN write_fxn_args_type_check(TOKEN fn, TOKEN args) {

	if (args->datatype == STRINGTYPE) {
		return fn;
	}

	TOKEN out = NULL;

	SYMBOL fn_sym = searchst(fn->stringval);
	if (!fn_sym) {
		printf(" Error: function \"%s\" is not defined.\n", fn->stringval);
		return out;
	}

	int fn_arg_type = fn_sym->datatype->link->basicdt;
	int args_type = args->datatype;

	if (args_type == STRINGTYPE) {
		out = fn;
	}
	else {

		int replace_index = 5;
		if (strcmp(fn->stringval, "writeln") == 0) {
			replace_index = 7;
		}

		if (strcmp(fn->stringval, "write") == 0) {

			if (args_type == INTEGER) {
				fn->stringval[replace_index] = 'i';
				fn->stringval[replace_index + 1] = '\0';
				out = fn;
			}
			else if (args_type == REAL) {
				fn->stringval[replace_index] = 'f';
				fn->stringval[replace_index + 1] = '\0';
				out = fn;				
			}

		}
		else if (strcmp(fn->stringval, "writeln") == 0) {

			if (args_type == INTEGER) {
				fn->stringval[replace_index] = 'i';
				fn->stringval[replace_index + 1] = '\0';
				out = fn;
			}
			else if (args_type == REAL) {
				fn->stringval[replace_index] = 'f';
				fn->stringval[replace_index + 1] = '\0';
				out = fn;
			}

		}
	}

	return out;
}

yyerror(s) char *s; {
	fputs(s, stderr);
	putc('\n', stderr);
}

int main(int argc, char **argv) {
	int res;
	initsyms();
	res = yyparse();

	if (!DEBUG_MASTER_SWITCH && !GEN_OUTPUT) {
		/* Set DEBUG_MASTER_SWITCH and GEN_OUTPUT to 0 */
		printst();
		printf("yyparse result = %8d\n", res);
		ppexpr(parseresult);
	}
	else if (DEBUG & DB_PARSERES && !GEN_OUTPUT) {
		/* Set DEBUG_MASTER_SWITCH to 1 and GEN_OUTPUT to 0; set DB_PRINT_ARGS to 1 if desired */
		printf("Done.\n\n");

		printst();

		printf("--------------------------------------------------------------------\n\n");
		printf("yyparse result = %8d\n\n", res);
		printf("parseresult:\n");
		dbugprinttok(parseresult);
		printf("\n");
		ppexpr(parseresult);	/* Pretty-print the result tree */
		printf("\n");
		printf("--------------------------------------------------------------------\n");
	}
	else {
		/* Set GEN_OUTPUT to 1 (everything else is irrelevant) */
//		ppexpr(parseresult);
//		system("testparser");
		gencode(parseresult, blockoffs[blocknumber], labelnumber);
	}

	destroy_toklist();		/* Free all tokens allocated during program runtime (including lex) */
	destroy_symlist();		/* Free all symbols allocated during program runtime */
	destroy_user_labels();	/* Free all user labels allocated during program runtime */

	return 0;
}




// DEPRECATED DEPRECATED DEPRECATED DEPRECATED DEPRECATED DEPRECATED DEPRECATED DEPRECATED DEPRECATED

// TOKEN get_offset(TOKEN var, TOKEN field) {
	
// 	TOKEN offset = makeintc(-1);

// 	TOKEN root_name = get_last_operand(var);
// 	TOKEN last_offset = get_last_link(var->operands);

// 	if (var->whichval != AREFOP) {
// 		SYMBOL found = NULL;

// 		SYMBOL varsym = searchst(root_name->stringval);
// 		if (varsym) {
// 			SYMBOL temp = varsym;
// 			while (temp) {
// 				if (temp->datatype && temp->datatype->kind == BASICTYPE) {
// 					break;
// 				}
// 				temp = temp->datatype;
// 			}
// 			while (temp && !found) {
// 				if (strcmp(temp->namestring, field->stringval) == 0) {
// 					found = temp;
// 				}
// 				else {
// 					temp = temp->link;
// 				}
// 			}
// 			if (found) {
// 				offset->whichval = found->offset;
// 				return offset;
// 			}
// 		}

// 	}
// 	else {
// 		SYMBOL found = NULL;

// 		SYMBOL varsym = searchst(root_name->stringval);
// 		if (varsym) {
// 			SYMBOL temp = varsym;
// 			while (temp) {
// 				if (temp->datatype && temp->datatype->kind == BASICTYPE) {
// 					break;
// 				}
// 				temp = temp->datatype;
// 			}
// 			while (temp && !found) {
// 				if (temp->offset == last_offset->whichval) {
// 					found = temp;
// 				}
// 				else {
// 					temp = temp->link;
// 				}
// 			}
// 			if (found) {
// 				SYMBOL found_cpy = found;
// 				SYMBOL blah = searchst(found->datatype->namestring);
// 				found = NULL;
// 				while (blah) {
// 					if (blah->datatype && blah->datatype->kind == BASICTYPE) {
// 						break;
// 					}
// 					blah = blah->datatype;
// 				}
// 				while (blah && !found) {
					
// 					if (strcmp(blah->namestring, field->stringval) == 0) {
// 						found = blah;
// 					}
// 					else {
// 						blah = blah->link;
// 					}
// 				}
// 				if (found) {
// 					offset->whichval = last_offset->whichval + found->offset;
// 				}				
// 			}
// 		}		
// 	}

// 	return offset;
// }

// PARTIALLY WORKING
// TOO MANY LOGICAL FLAWS TO BE CURRENTLY VIABLE
// TOKEN std_fxn_args_type_check(TOKEN fn, TOKEN args) {

// 	SYMBOL fn_sym = searchst(fn->stringval);
// 	if (!fn_sym) {
// 		printf(" Error: function \"%s\" is not defined.\n", fn->stringval);
// 		return NULL;
// 	}
// /* The following defines are commented out, but may be needed.
// #define INTEGER    0
// #define REAL       1
// #define STRINGTYPE 2
// #define BOOLETYPE  3
// #define POINTER    4
//     */
// 	int fn_arg_type = fn_sym->datatype->link->basicdt;
// 	int args_type = args->datatype;

// 	if (args_type == fn_arg_type) {
// 		return fn;
// 	}
// 	else {

// 		if (strcmp(fn->stringval, "write") == 0 || strcmp(fn->stringval, "writeln") == 0) {

// 			int replacement_index = 5;
// 			if (strcmp(fn->stringval, "writeln") == 0) {
// 				replacement_index = 7;
// 			}

// 			if (args_type == INTEGER) {
// 				fn->stringval[replacement_index] = 'i';
// 				fn->stringval[replacement_index + 1] = '\0';
// 				return fn;
// 			}
// 			else if (args_type == REAL) {
// 				fn->stringval[replacement_index] = 'f';
// 				fn->stringval[replacement_index + 1] = '\0';
// 				return fn;
// 			}
// 		}
// 	}

// 	printf(" Error: function \"%s\" with argument type %d cannot accept arguments of type %d.\n", fn->stringval, fn_arg_type, args_type);

// 	return NULL;
// }
