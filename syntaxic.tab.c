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
#line 1 "syntaxic.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include "TableSymbole.h"
    #include "quadruplet.h"

    // Déclaration de la fonction `yylex` pour que le compilateur la reconnaisse.
    int yylex();

    // Déclaration de la fonction `yyerror` pour la gestion des erreurs de syntaxe.
    void yyerror(const char *s);
    char sauvType[20];
    int j=0;
    typedef struct
   {  
      char idfTab[9];
      
   } elt_idf;
   elt_idf saveIdf[20];
    char typeG[20];
   char typeD[20];
   char typeOG[20];
   char typeOD[20];
   char nomG[20];
   char nomD[20];
   char valIdf[20];
   char saveStr[20];
   char saveStrq[20];
   char saveS[20];
   char mDroit[20];
   char buffer1[20], buffer2[20], tmp[20];
   char *temp,*tt;
   int cpttemp=1;
   int nb_op;
   char *tempasg;
   char brnsup[20];
   char pasfor[20];
   char cptfor[20];
   char valcond1[20];
   char valcond2[20];
   int nbop=0;
   float valind;
   char *valDepile;


#line 118 "syntaxic.tab.c"

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

#include "syntaxic.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VAR_GLOBAL = 3,                 /* VAR_GLOBAL  */
  YYSYMBOL_DECLARATION = 4,                /* DECLARATION  */
  YYSYMBOL_INSTRUCTION = 5,                /* INSTRUCTION  */
  YYSYMBOL_INTEGER = 6,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 7,                      /* FLOAT  */
  YYSYMBOL_CHAR = 8,                       /* CHAR  */
  YYSYMBOL_CONST = 9,                      /* CONST  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_READ = 13,                      /* READ  */
  YYSYMBOL_WRITE = 14,                     /* WRITE  */
  YYSYMBOL_IDENTIFIER = 15,                /* IDENTIFIER  */
  YYSYMBOL_INT_NUMBER = 16,                /* INT_NUMBER  */
  YYSYMBOL_FLOAT_NUMBER = 17,              /* FLOAT_NUMBER  */
  YYSYMBOL_CHARACTERE = 18,                /* CHARACTERE  */
  YYSYMBOL_AND = 19,                       /* AND  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_NOT = 21,                       /* NOT  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NEQ = 23,                       /* NEQ  */
  YYSYMBOL_GEQ = 24,                       /* GEQ  */
  YYSYMBOL_LT = 25,                        /* LT  */
  YYSYMBOL_LEQ = 26,                       /* LEQ  */
  YYSYMBOL_GT = 27,                        /* GT  */
  YYSYMBOL_EQUALS = 28,                    /* EQUALS  */
  YYSYMBOL_PLUS = 29,                      /* PLUS  */
  YYSYMBOL_MINUS = 30,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 31,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 32,                    /* DIVIDE  */
  YYSYMBOL_LBRACE = 33,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 34,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 35,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 36,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 37,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 38,                  /* RBRACKET  */
  YYSYMBOL_SEMICOLON = 39,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_COLON = 41,                     /* COLON  */
  YYSYMBOL_STRING_LITERAL = 42,            /* STRING_LITERAL  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_type = 45,                      /* type  */
  YYSYMBOL_global_var_section = 46,        /* global_var_section  */
  YYSYMBOL_declaration_section = 47,       /* declaration_section  */
  YYSYMBOL_instruction_section = 48,       /* instruction_section  */
  YYSYMBOL_declaration = 49,               /* declaration  */
  YYSYMBOL_cst = 50,                       /* cst  */
  YYSYMBOL_variable_list = 51,             /* variable_list  */
  YYSYMBOL_statement = 52,                 /* statement  */
  YYSYMBOL_assignment = 53,                /* assignment  */
  YYSYMBOL_MDROIT = 54,                    /* MDROIT  */
  YYSYMBOL_TAB = 55,                       /* TAB  */
  YYSYMBOL_termtab = 56,                   /* termtab  */
  YYSYMBOL_factortab = 57,                 /* factortab  */
  YYSYMBOL_primarytab = 58,                /* primarytab  */
  YYSYMBOL_EXPRESSION_CHAR = 59,           /* EXPRESSION_CHAR  */
  YYSYMBOL_condition = 60,                 /* condition  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_elsebloc = 62,                  /* elsebloc  */
  YYSYMBOL_63_2 = 63,                      /* $@2  */
  YYSYMBOL_assignment_int = 64,            /* assignment_int  */
  YYSYMBOL_loop = 65,                      /* loop  */
  YYSYMBOL_66_3 = 66,                      /* $@3  */
  YYSYMBOL_67_4 = 67,                      /* $@4  */
  YYSYMBOL_io_statement = 68,              /* io_statement  */
  YYSYMBOL_io_expr_list = 69,              /* io_expr_list  */
  YYSYMBOL_io_expr = 70,                   /* io_expr  */
  YYSYMBOL_COND = 71,                      /* COND  */
  YYSYMBOL_AND_EXPR = 72,                  /* AND_EXPR  */
  YYSYMBOL_NOT_EXPR = 73,                  /* NOT_EXPR  */
  YYSYMBOL_comparison_expr = 74,           /* comparison_expr  */
  YYSYMBOL_DROIT = 75,                     /* DROIT  */
  YYSYMBOL_GAUCHE = 76,                    /* GAUCHE  */
  YYSYMBOL_OP_COMP = 77,                   /* OP_COMP  */
  YYSYMBOL_term = 78,                      /* term  */
  YYSYMBOL_factor = 79,                    /* factor  */
  YYSYMBOL_primary = 80,                   /* primary  */
  YYSYMBOL_term1 = 81,                     /* term1  */
  YYSYMBOL_factor1 = 82,                   /* factor1  */
  YYSYMBOL_primary1 = 83,                  /* primary1  */
  YYSYMBOL_term2 = 84,                     /* term2  */
  YYSYMBOL_factor2 = 85,                   /* factor2  */
  YYSYMBOL_primary2 = 86,                  /* primary2  */
  YYSYMBOL_term4 = 87,                     /* term4  */
  YYSYMBOL_factor4 = 88,                   /* factor4  */
  YYSYMBOL_primary4 = 89,                  /* primary4  */
  YYSYMBOL_term3 = 90,                     /* term3  */
  YYSYMBOL_factor3 = 91,                   /* factor3  */
  YYSYMBOL_primary3 = 92                   /* primary3  */
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
typedef yytype_int16 yy_state_t;

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
#define YYLAST   365

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  333

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   100,   100,   107,   108,   109,   114,   115,   116,   117,
     123,   124,   125,   126,   131,   132,   133,   138,   149,   174,
     187,   189,   195,   196,   203,   204,   205,   206,   207,   208,
     209,   210,   215,   228,   240,   245,   254,   282,   312,   313,
     332,   353,   354,   372,   396,   419,   425,   432,   438,   448,
     456,   465,   466,   493,   495,   499,   507,   535,   535,   543,
     543,   548,   552,   566,   577,   587,   599,   604,   599,   627,
     633,   634,   639,   640,   645,   651,   652,   658,   670,   674,
     686,   690,   700,   707,   719,   730,   741,   752,   763,   775,
     793,   809,   831,   834,   839,   842,   847,   848,   849,   850,
     851,   852,   858,   859,   878,   899,   900,   918,   942,   958,
     967,   977,   987,  1000,  1009,  1021,  1022,  1043,  1044,  1063,
    1084,  1085,  1103,  1127,  1147,  1157,  1168,  1178,  1191,  1200,
    1212,  1213,  1234,  1235,  1254,  1275,  1276,  1294,  1318,  1330,
    1337,  1342,  1349,  1358,  1364,  1371,  1372,  1389,  1390,  1409,
    1430,  1431,  1449,  1473,  1490,  1498,  1507,  1516,  1528,  1538,
    1549,  1550,  1569,  1572,  1576,  1577,  1596,  1617,  1618,  1636,
    1660,  1677,  1684,  1692,  1700,  1711,  1720,  1730,  1731,  1750,
    1753
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
  "\"end of file\"", "error", "\"invalid token\"", "VAR_GLOBAL",
  "DECLARATION", "INSTRUCTION", "INTEGER", "FLOAT", "CHAR", "CONST", "IF",
  "ELSE", "FOR", "READ", "WRITE", "IDENTIFIER", "INT_NUMBER",
  "FLOAT_NUMBER", "CHARACTERE", "AND", "OR", "NOT", "EQ", "NEQ", "GEQ",
  "LT", "LEQ", "GT", "EQUALS", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "LBRACE", "RBRACE", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET",
  "SEMICOLON", "COMMA", "COLON", "STRING_LITERAL", "$accept", "program",
  "type", "global_var_section", "declaration_section",
  "instruction_section", "declaration", "cst", "variable_list",
  "statement", "assignment", "MDROIT", "TAB", "termtab", "factortab",
  "primarytab", "EXPRESSION_CHAR", "condition", "$@1", "elsebloc", "$@2",
  "assignment_int", "loop", "$@3", "$@4", "io_statement", "io_expr_list",
  "io_expr", "COND", "AND_EXPR", "NOT_EXPR", "comparison_expr", "DROIT",
  "GAUCHE", "OP_COMP", "term", "factor", "primary", "term1", "factor1",
  "primary1", "term2", "factor2", "primary2", "term4", "factor4",
  "primary4", "term3", "factor3", "primary3", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-157)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,     5,    40,   176,  -157,  -157,  -157,  -157,    86,    52,
      36,    51,    67,     2,  -157,    55,   176,  -157,    68,    -5,
      52,    89,  -157,    45,   134,  -157,  -157,  -157,     6,  -157,
      25,    34,  -157,  -157,   176,   157,  -157,  -157,   124,   184,
     186,  -157,    -5,   205,   207,    20,    -5,    -5,    97,    -5,
      -5,    98,    87,    -5,   223,   225,   119,    45,    45,    45,
      45,    59,   120,   138,   140,   150,  -157,    34,    34,    52,
    -157,  -157,   198,   176,    91,   169,   171,   175,   179,  -157,
     186,   186,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
     200,  -157,  -157,  -157,  -157,  -157,  -157,   222,   203,   235,
     247,   254,   259,   271,   222,   218,   278,   279,   269,   270,
     272,    60,   295,   297,    11,    -5,  -157,  -157,  -157,    88,
      88,  -157,  -157,  -157,   276,  -157,  -157,  -157,    60,   128,
    -157,     7,   296,  -157,  -157,   204,   166,   212,  -157,   286,
     288,   277,   209,   281,   259,  -157,  -157,   283,   280,    95,
    -157,  -157,  -157,   184,  -157,   184,    -5,  -157,   231,   233,
     168,    60,   289,    60,  -157,  -157,  -157,  -157,  -157,  -157,
      92,    84,    84,    84,    84,    84,    84,   145,   145,    10,
     145,   145,    88,    88,    96,  -157,  -157,  -157,    11,  -157,
     137,   285,   287,   290,   291,  -157,   296,  -157,  -157,   292,
    -157,  -157,  -157,   135,  -157,  -157,   224,   220,  -157,   224,
     224,   224,   224,   224,   224,   212,   212,  -157,  -157,  -157,
    -157,   184,  -157,   184,   293,  -157,  -157,  -157,    16,  -157,
     226,   227,  -157,  -157,  -157,  -157,  -157,  -157,  -157,   222,
      -5,   244,   246,   170,    84,    84,    84,    84,    -5,   248,
     250,   172,    96,    96,   284,    96,    96,   294,   139,   298,
     299,   300,   301,  -157,   220,   220,  -157,  -157,   143,   302,
     303,   304,   305,  -157,   227,   227,   100,  -157,  -157,   313,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
     306,  -157,  -157,  -157,    56,  -157,   239,   240,  -157,   309,
    -157,    -5,   258,   260,   180,   100,   100,   308,   100,   100,
    -157,   149,   310,   311,   312,   314,  -157,   240,   240,   316,
    -157,  -157,   222,  -157,  -157,  -157,  -157,  -157,   222,   317,
     318,  -157,  -157
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     9,     1,     3,     4,     5,     0,     0,
       0,     8,     0,    20,    17,     0,     6,    19,     0,     0,
       0,     0,     7,     0,    44,    45,    46,    53,     0,    54,
       0,    38,    41,    22,    13,   108,   109,   110,     0,    18,
     102,   105,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    39,    40,     0,
      42,    43,     0,     9,     0,     0,     0,     0,     0,   115,
     103,   104,   106,   107,    52,    47,    49,    48,    50,    23,
       0,    11,   116,   111,   113,   112,   114,    16,     0,     0,
       0,     0,    36,     0,    14,    28,     0,     0,    29,    30,
      31,     0,     0,     0,     0,     0,     2,    15,    24,     0,
       0,    25,    26,    27,   138,   139,   140,    92,     0,     0,
      93,     0,    78,    80,    82,     0,     0,   132,   135,     0,
       0,     0,     0,     0,    74,    75,    76,     0,    72,     0,
      55,    56,    35,    32,    34,    33,     0,    81,     0,     0,
       0,     0,     0,     0,   100,   101,    98,    97,    99,    96,
       0,   100,   101,    98,    97,    99,    96,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    70,    71,     0,    37,
       0,     0,     0,     0,     0,   145,    77,    57,    79,   123,
     124,   125,    94,     0,    95,    91,    89,   117,   120,    85,
      88,    86,    84,    87,    83,   133,   134,    90,   136,   137,
      65,    62,    64,    63,   170,   171,   172,   180,     0,   179,
      66,   164,   167,    73,   146,   141,   143,   142,   144,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,   118,   119,   121,   122,     0,     0,
       0,     0,     0,   177,   165,   166,     0,   168,   169,    61,
     131,   126,   128,   127,   129,   178,   173,   175,   174,   176,
     153,   154,   155,   163,     0,   162,    67,   147,   150,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     0,     0,     0,     0,     0,   160,   148,   149,     0,
     151,   152,    16,   161,   156,   158,   157,   159,    16,     0,
       0,    60,    68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,   323,    -9,  -157,  -103,   319,  -157,   -12,  -157,
    -157,   242,  -109,   -28,   232,   234,  -114,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,   144,  -157,  -157,   194,
    -119,  -157,  -157,   154,   229,   -36,   228,   221,  -156,    43,
      44,   216,   115,   114,    62,    -8,    -7,   129,    47,    48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    51,   103,    11,    18,    14,   104,
     105,   106,   107,    30,    31,    32,   152,   108,   239,   300,
     322,   141,   109,   254,   307,   110,   147,   148,   131,   132,
     133,   134,   135,   205,   170,    39,    40,    41,   206,   207,
     208,   136,   137,   138,   296,   297,   298,   230,   231,   232
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,   117,    56,   140,   143,   146,   154,    22,    33,   157,
      24,    25,    26,    27,    61,   209,   210,   211,   212,   213,
     214,    24,    25,    26,    27,    74,   144,   161,   202,     1,
      28,   224,   225,   226,   227,    43,    44,    29,     3,    19,
       4,    28,    20,   162,   198,   249,   250,   243,    29,    46,
      47,   228,   204,   145,    46,    47,    66,    89,   229,    21,
      35,    36,    37,    48,    91,    49,    50,    13,   220,   222,
      15,   290,   291,   292,   293,   124,   125,   126,   127,   146,
      38,   128,    17,   153,   155,   302,   303,   149,    46,    47,
      16,   294,     5,     6,     7,   129,    23,    84,   295,   199,
     200,   201,   130,    35,    36,    37,   150,   199,   200,   201,
     202,   224,   225,   226,   227,   290,   291,   292,   293,   203,
      46,    47,    34,    38,    46,    47,    73,   203,   190,    92,
     151,   228,    72,   189,   204,   294,   257,    69,   229,    35,
      36,    37,   295,   124,   125,   126,   221,   223,    57,    58,
     199,   200,   201,    54,    55,    79,    85,   158,   159,    38,
     124,   125,   126,   129,   241,   242,    46,    47,    46,    47,
     203,    42,    46,    47,    86,   234,    87,   280,    46,    47,
     129,   285,     5,     6,     7,     8,    88,   323,   171,   172,
     173,   174,   175,   176,    53,   177,   178,   177,   178,   244,
     245,   252,   253,    90,   195,    93,   263,    94,   273,   305,
     306,    95,   258,    57,    58,    96,   316,    59,    60,   329,
     268,    62,    63,    64,    65,   330,   164,   165,   166,   167,
     168,   169,    98,    97,    99,   100,   101,   102,   111,    75,
      76,    77,    78,   180,   181,   185,   115,   191,   192,   193,
     194,   246,   247,   244,   245,   252,   253,   118,   255,   256,
     259,   260,   261,   262,   269,   270,   271,   272,   305,   306,
     112,   308,   309,   311,   312,   313,   314,   315,    67,    68,
      82,    83,   113,    70,    71,    80,    81,   264,   265,   114,
     266,   267,   215,   216,   218,   219,   115,   317,   318,   274,
     275,   320,   321,   277,   278,   116,   119,   120,   121,   122,
     102,   123,   142,   156,   182,   163,   183,   186,   184,   187,
     188,   235,   197,   236,   299,   276,   237,   238,   279,   240,
     248,    12,   233,   217,   281,   282,   283,   284,   286,   287,
     288,   289,   310,   301,   319,   160,   324,   325,   326,   328,
     327,   331,   332,    52,   139,   196,   304,   251,     0,     0,
       0,     0,     0,     0,     0,   179
};

static const yytype_int16 yycheck[] =
{
      28,   104,    38,   112,   113,   114,   120,    16,    20,   128,
      15,    16,    17,    18,    42,   171,   172,   173,   174,   175,
     176,    15,    16,    17,    18,    53,    15,    20,    18,     3,
      35,    15,    16,    17,    18,    29,    30,    42,    33,    37,
       0,    35,    40,    36,   163,    29,    30,   203,    42,    29,
      30,    35,    42,    42,    29,    30,    36,    69,    42,     4,
      15,    16,    17,    38,    73,    31,    32,    15,   182,   183,
      34,    15,    16,    17,    18,    15,    16,    17,    18,   188,
      35,    21,    15,   119,   120,    29,    30,   115,    29,    30,
      39,    35,     6,     7,     8,    35,    28,    38,    42,    15,
      16,    17,    42,    15,    16,    17,    18,    15,    16,    17,
      18,    15,    16,    17,    18,    15,    16,    17,    18,    35,
      29,    30,    33,    35,    29,    30,    39,    35,   156,    38,
      42,    35,    34,    38,    42,    35,   239,    40,    42,    15,
      16,    17,    42,    15,    16,    17,   182,   183,    29,    30,
      15,    16,    17,    29,    30,    36,    36,    29,    30,    35,
      15,    16,    17,    35,    29,    30,    29,    30,    29,    30,
      35,    37,    29,    30,    36,    38,    36,    38,    29,    30,
      35,    38,     6,     7,     8,     9,    36,    38,    22,    23,
      24,    25,    26,    27,    37,    29,    30,    29,    30,    29,
      30,    29,    30,     5,    36,    36,    36,    36,    36,    29,
      30,    36,   240,    29,    30,    36,    36,    31,    32,   322,
     248,    16,    17,    16,    17,   328,    22,    23,    24,    25,
      26,    27,    10,    33,    12,    13,    14,    15,    35,    16,
      17,    16,    17,    31,    32,    36,    37,    16,    17,    16,
      17,    31,    32,    29,    30,    29,    30,    39,    31,    32,
      16,    17,    16,    17,    16,    17,    16,    17,    29,    30,
      35,    31,    32,   301,    16,    17,    16,    17,    46,    47,
      59,    60,    35,    49,    50,    57,    58,   244,   245,    35,
     246,   247,   177,   178,   180,   181,    37,   305,   306,   252,
     253,   308,   309,   255,   256,    34,    28,    28,    39,    39,
      15,    39,    15,    37,    28,    19,    28,    36,    41,    36,
      40,    36,    33,    36,    11,    41,    36,    36,    34,    37,
      37,     8,   188,   179,    36,    36,    36,    36,    36,    36,
      36,    36,    33,    37,    36,   129,    36,    36,    36,    33,
      36,    34,    34,    34,   112,   161,   294,   228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    44,    33,     0,     6,     7,     8,     9,    45,
      46,    49,    45,    15,    51,    34,    39,    15,    50,    37,
      40,     4,    46,    28,    15,    16,    17,    18,    35,    42,
      56,    57,    58,    51,    33,    15,    16,    17,    35,    78,
      79,    80,    37,    29,    30,    56,    29,    30,    38,    31,
      32,    47,    49,    37,    29,    30,    78,    29,    30,    31,
      32,    56,    16,    17,    16,    17,    36,    57,    57,    40,
      58,    58,    34,    39,    56,    16,    17,    16,    17,    36,
      79,    79,    80,    80,    38,    36,    36,    36,    36,    51,
       5,    46,    38,    36,    36,    36,    36,    33,    10,    12,
      13,    14,    15,    48,    52,    53,    54,    55,    60,    65,
      68,    35,    35,    35,    35,    37,    34,    48,    39,    28,
      28,    39,    39,    39,    15,    16,    17,    18,    21,    35,
      42,    71,    72,    73,    74,    75,    84,    85,    86,    54,
      55,    64,    15,    55,    15,    42,    55,    69,    70,    56,
      18,    42,    59,    78,    59,    78,    37,    73,    29,    30,
      84,    20,    36,    19,    22,    23,    24,    25,    26,    27,
      77,    22,    23,    24,    25,    26,    27,    29,    30,    77,
      31,    32,    28,    28,    41,    36,    36,    36,    40,    38,
      56,    16,    17,    16,    17,    36,    72,    33,    73,    15,
      16,    17,    18,    35,    42,    76,    81,    82,    83,    81,
      81,    81,    81,    81,    81,    85,    85,    76,    86,    86,
      59,    78,    59,    78,    15,    16,    17,    18,    35,    42,
      90,    91,    92,    69,    38,    36,    36,    36,    36,    61,
      37,    29,    30,    81,    29,    30,    31,    32,    37,    29,
      30,    90,    29,    30,    66,    31,    32,    48,    56,    16,
      17,    16,    17,    36,    82,    82,    83,    83,    56,    16,
      17,    16,    17,    36,    91,    91,    41,    92,    92,    34,
      38,    36,    36,    36,    36,    38,    36,    36,    36,    36,
      15,    16,    17,    18,    35,    42,    87,    88,    89,    11,
      62,    37,    29,    30,    87,    29,    30,    67,    31,    32,
      33,    56,    16,    17,    16,    17,    36,    88,    88,    36,
      89,    89,    63,    38,    36,    36,    36,    36,    33,    48,
      48,    34,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    46,    46,
      47,    47,    47,    47,    48,    48,    48,    49,    49,    50,
      51,    51,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    53,    53,    53,    53,    54,    55,    56,    56,
      56,    57,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    61,    60,    63,
      62,    62,    64,    64,    64,    64,    66,    67,    65,    68,
      68,    68,    69,    69,    70,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    78,    78,    78,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    81,
      82,    82,    82,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      88,    88,    88,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    91,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    12,     1,     1,     1,     2,     3,     1,     0,
       2,     3,     1,     0,     1,     2,     0,     2,     5,     1,
       1,     4,     3,     6,     2,     2,     2,     2,     1,     1,
       1,     1,     3,     3,     3,     3,     1,     4,     1,     3,
       3,     1,     3,     3,     1,     1,     1,     4,     4,     4,
       4,     3,     4,     1,     1,     1,     1,     0,     9,     0,
       5,     0,     3,     3,     3,     3,     0,     0,    13,     4,
       4,     4,     1,     3,     1,     1,     1,     3,     1,     3,
       1,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     3,     3,     1,     1,
       1,     4,     4,     4,     4,     3,     4,     1,     3,     3,
       1,     3,     3,     1,     1,     1,     4,     4,     4,     4,
       3,     4,     1,     3,     3,     1,     3,     3,     1,     1,
       1,     4,     4,     4,     4,     3,     4,     1,     3,     3,
       1,     3,     3,     1,     1,     1,     4,     4,     4,     4,
       3,     4,     1,     1,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       1
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
YYSTYPE yylval;
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
  case 3: /* type: INTEGER  */
#line 107 "syntaxic.y"
            {strcpy(sauvType,"INTEGER");}
#line 1434 "syntaxic.tab.c"
    break;

  case 4: /* type: FLOAT  */
#line 108 "syntaxic.y"
            {strcpy(sauvType,"FLOAT");}
#line 1440 "syntaxic.tab.c"
    break;

  case 5: /* type: CHAR  */
#line 109 "syntaxic.y"
            {strcpy(sauvType,"CHAR");}
#line 1446 "syntaxic.tab.c"
    break;

  case 8: /* global_var_section: declaration  */
#line 116 "syntaxic.y"
                 {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d apres declaration",nb_ligne,colPrd);exit(0);}
#line 1452 "syntaxic.tab.c"
    break;

  case 12: /* declaration_section: declaration  */
#line 125 "syntaxic.y"
                 {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d apres declaration",nb_ligne,colPrd);exit(0);}
#line 1458 "syntaxic.tab.c"
    break;

  case 17: /* declaration: type variable_list  */
#line 138 "syntaxic.y"
                        {
        //verification de la double declaration et insertion du type
        for(j=0;strcmp(saveIdf[j].idfTab,"")!=0;j++){
            if(verifdeclaration(saveIdf[j].idfTab)==0) insererType(sauvType,saveIdf[j].idfTab);
            else {printf("Erreur semantique :double declaration de %s a la ligne %d colonne %d \n",saveIdf[j].idfTab,nb_ligne,col);
                exit(0);}
            //createQuad("DECL", sauvType, "", saveIdf[j].idfTab);
            strcpy(saveIdf[j].idfTab,"");
        }  
        j=0;  
    }
#line 1474 "syntaxic.tab.c"
    break;

  case 18: /* declaration: CONST type cst EQUALS term  */
#line 149 "syntaxic.y"
                                 {
    // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ((yyvsp[0].real) - floor((yyvsp[0].real)) != 0)) {
            printf("Erreur sémantique à la ligne %d colonne %d  : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne,col);
             exit(0);
        }
         
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[0].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f", (yyvsp[0].real));  // Convertir en flottant
        }
        sprintf(mDroit,"%s",(yyvsp[-2].string));
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",mDroit);

        // Ajout du quadruplet pour la déclaration d'une constante
        //createQuad("CONST", sauvType, saveStr, saveIdf[0].idfTab);
        insererVal(saveIdf[0].idfTab,saveStr);
        strcpy(saveIdf[0].idfTab,"");
    }
#line 1501 "syntaxic.tab.c"
    break;

  case 19: /* cst: IDENTIFIER  */
#line 174 "syntaxic.y"
              {
        strcpy(saveIdf[0].idfTab,(yyvsp[0].string));
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType((yyvsp[0].string)));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d colonne %d \n",saveIdf[0].idfTab,nb_ligne,col);
            
            
    }
#line 1515 "syntaxic.tab.c"
    break;

  case 20: /* variable_list: IDENTIFIER  */
#line 187 "syntaxic.y"
               {strcpy(saveIdf[j].idfTab,(yyvsp[0].string));j++;}
#line 1521 "syntaxic.tab.c"
    break;

  case 21: /* variable_list: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 189 "syntaxic.y"
                                          {strcpy(saveIdf[j].idfTab,(yyvsp[-3].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;

        sprintf(buffer1, "T%d", cpttemp-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[-3].string),"","");
        }
#line 1532 "syntaxic.tab.c"
    break;

  case 22: /* variable_list: IDENTIFIER COMMA variable_list  */
#line 195 "syntaxic.y"
                                      {strcpy(saveIdf[j].idfTab,(yyvsp[-2].string));j++;}
#line 1538 "syntaxic.tab.c"
    break;

  case 28: /* statement: assignment  */
#line 207 "syntaxic.y"
                {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d (';' apres chaque instruction)",nb_ligne,colPrd);exit(0);}
#line 1544 "syntaxic.tab.c"
    break;

  case 29: /* statement: condition  */
#line 208 "syntaxic.y"
                {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d (';' apres chaque instruction)",nb_ligne,colPrd);exit(0);}
#line 1550 "syntaxic.tab.c"
    break;

  case 30: /* statement: loop  */
#line 209 "syntaxic.y"
           {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d (';' apres chaque instruction)",nb_ligne,colPrd);exit(0);}
#line 1556 "syntaxic.tab.c"
    break;

  case 31: /* statement: io_statement  */
#line 210 "syntaxic.y"
                   {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d (';' apres chaque instruction)",nb_ligne,colPrd);exit(0);}
#line 1562 "syntaxic.tab.c"
    break;

  case 32: /* assignment: MDROIT EQUALS term  */
#line 215 "syntaxic.y"
                        {
  
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[0].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f",(yyvsp[0].real));  // Convertir en flottant
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    }
#line 1580 "syntaxic.tab.c"
    break;

  case 33: /* assignment: TAB EQUALS term  */
#line 228 "syntaxic.y"
                      {
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[0].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f",(yyvsp[0].real));  // Convertir en flottant
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    }
#line 1597 "syntaxic.tab.c"
    break;

  case 34: /* assignment: TAB EQUALS EXPRESSION_CHAR  */
#line 240 "syntaxic.y"
                                {
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    }
#line 1607 "syntaxic.tab.c"
    break;

  case 35: /* assignment: MDROIT EQUALS EXPRESSION_CHAR  */
#line 245 "syntaxic.y"
                                   {
        
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    }
#line 1618 "syntaxic.tab.c"
    break;

  case 36: /* MDROIT: IDENTIFIER  */
#line 254 "syntaxic.y"
               {
    // Vérification de la déclaration de la variable avant usage
    if (verifdeclaration((yyvsp[0].string)) == 0) {
        printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string));
         exit(0);
    } else if(strcmp(getCode((yyvsp[0].string)),"IDF TAB")==0){
        printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' est un tableau.\n",nb_ligne,col, (yyvsp[0].string));
         exit(0);
        strcpy(typeG, getType((yyvsp[0].string)));  // Récupérer le type de la variable à gauche
        if (comparCode((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique à la ligne %d colonne %d : affectation d'une constante\n", nb_ligne,col);
        } else {
            strcpy(mDroit, (yyvsp[0].string));
        }
        
    }
    else{
        strcpy(typeG, getType((yyvsp[0].string)));  // Récupérer le type de la variable à gauche
        if (comparCode((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique à la ligne %d colonne %d : affectation d'une constante\n", nb_ligne,col);
             exit(0);
        } else {
            strcpy(mDroit, (yyvsp[0].string));
        }
    }
    }
#line 1649 "syntaxic.tab.c"
    break;

  case 37: /* TAB: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 282 "syntaxic.y"
                                           {
                    if(verifdeclaration((yyvsp[-3].string))==0 )
                    {printf("Erreur semantique a la ligne %d colonne %d :Tableau %s non declare\n",nb_ligne,col,(yyvsp[-3].string));
                     exit(0);}
                    else if(strcmp(getCode((yyvsp[-3].string)),"IDF")==0){
                        printf("Erreur semantique la ligne %d colonne %d: La variable '%s' est n'est pasm un tableau.\n",nb_ligne,col, (yyvsp[-3].string));
                         exit(0);
                        strcpy(typeG, getType((yyvsp[-3].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[-3].string)));

                    }  
                    
                    
                        strcpy(mDroit,(yyvsp[-3].string));
                        temp=newtemp();
                        strcpy(temp,(yyvsp[-3].string));
                        strcpy(tmp,(yyvsp[-3].string));
                        strcat(tmp,"[");
                        valDepile = depiler(&pile3); 
                        strcpy(buffer2, valDepile); 
                        strcat(tmp,buffer2);
                        strcat(tmp,"]");
                       
                    }
#line 1680 "syntaxic.tab.c"
    break;

  case 39: /* termtab: termtab PLUS factortab  */
#line 313 "syntaxic.y"
                             {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        valind=t;
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("+", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    }
#line 1704 "syntaxic.tab.c"
    break;

  case 40: /* termtab: termtab MINUS factortab  */
#line 332 "syntaxic.y"
                              {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        valind=t;
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        empiler(&pile3,temp);
        cpttemp++;
    }
#line 1726 "syntaxic.tab.c"
    break;

  case 42: /* factortab: factortab MULTIPLY primarytab  */
#line 354 "syntaxic.y"
                                     { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        valind=t;
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("*", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    }
#line 1749 "syntaxic.tab.c"
    break;

  case 43: /* factortab: factortab DIVIDE primarytab  */
#line 372 "syntaxic.y"
                                      { 
        if((yyvsp[0].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
        valind=t;
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("/", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
}
#line 1774 "syntaxic.tab.c"
    break;

  case 44: /* primarytab: IDENTIFIER  */
#line 396 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                             if(strcmp("CHAR",typeD)==0 || strcmp("STRING",typeD)==0  ) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                         printf("l'indice/taille de tableau ne peut pas etre CHARACTERS\n",typeD,typeG); exit(0);
                                                        }
                            else if (strcmp("FLOAT",typeD)==0)
                            {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                         printf("l'indice/taille de tableau ne peut pas etre FLOAT\n",typeD,typeG); exit(0);}
                                
                                // if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d colonne %d : variable %s non initialisee\n",nb_ligne,col,$1); exit(0);}
                                 else{
                                  strcpy(valIdf,getVal((yyvsp[0].string)));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[0].string));
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  }
                                  
                             }
    }
#line 1802 "syntaxic.tab.c"
    break;

  case 45: /* primarytab: INT_NUMBER  */
#line 419 "syntaxic.y"
                 {
                  (yyval.real)=atof((yyvsp[0].string));
                  strcpy(buffer1,(yyvsp[0].string));
                  empiler(&pile3,buffer1);
                  
    }
#line 1813 "syntaxic.tab.c"
    break;

  case 46: /* primarytab: FLOAT_NUMBER  */
#line 425 "syntaxic.y"
                  {
        printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
        printf("l'indice/taille de tableau ne peut pas etre FLOAT\n",typeD,typeG); exit(0);
                   (yyval.real)=atof((yyvsp[0].string)); 
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
#line 1825 "syntaxic.tab.c"
    break;

  case 47: /* primarytab: LPAREN PLUS INT_NUMBER RPAREN  */
#line 432 "syntaxic.y"
                                  {
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        
    }
#line 1836 "syntaxic.tab.c"
    break;

  case 48: /* primarytab: LPAREN MINUS INT_NUMBER RPAREN  */
#line 438 "syntaxic.y"
                                   {
        printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
        printf("l'indice/taille de tableau ne peut pas etre NEGATIVE\n",typeD,typeG); exit(0);
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    }
#line 1851 "syntaxic.tab.c"
    break;

  case 49: /* primarytab: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 448 "syntaxic.y"
                                      {
                                   printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                         printf("l'indice/taille de tableau ne peut pas etre FLOAT\n",typeD,typeG); exit(0); 
                                    (yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      
                   }
#line 1864 "syntaxic.tab.c"
    break;

  case 50: /* primarytab: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 456 "syntaxic.y"
                                       {
        printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                         printf("l'indice/taille de tableau ne peut pas etre FLOAT\n",typeD,typeG); exit(0);
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    }
#line 1878 "syntaxic.tab.c"
    break;

  case 51: /* primarytab: LPAREN termtab RPAREN  */
#line 465 "syntaxic.y"
                            {(yyval.real)=(yyvsp[-1].real);}
#line 1884 "syntaxic.tab.c"
    break;

  case 52: /* primarytab: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 466 "syntaxic.y"
                                          {
         if(verifdeclaration((yyvsp[-3].string))==0 )
                    {printf("Erreur semantique a la ligne %d colonne %d :Tableau %s non declare\n",nb_ligne,col,(yyvsp[-3].string));
                     exit(0);}
                    else if(strcmp(getCode((yyvsp[-3].string)),"IDF")==0){
                        printf("Erreur semantique la ligne %d colonne %d: La variable '%s' est n'est pas un tableau.\n",nb_ligne,col, (yyvsp[-3].string));
                         exit(0);
                            }
                            else{
                        if(strcmp(getType((yyvsp[-3].string)),"INTEGER")!=0){
                            printf("Erreur semantique la ligne %d colonne %d: L'indice/taille du tableau doit etre un entier\n",nb_ligne,col);
                         exit(0);
                        }

                    } 
                                        
                        strcpy(tmp,(yyvsp[-3].string));
                        strcat(tmp,"[");
                        valDepile = depiler(&pile3); 
                        strcpy(buffer1, valDepile); 
                        strcat(tmp,buffer1);
                        strcat(tmp,"]");
                        strcpy(saveStrq,tmp);
                        strcpy(buffer1,tmp);
                        empiler(&pile3,buffer1);  
 
                }
#line 1916 "syntaxic.tab.c"
    break;

  case 53: /* primarytab: CHARACTERE  */
#line 493 "syntaxic.y"
                    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible\n",nb_ligne,col);
                                 printf("l'indice/taille ne peut pas etre CHAR\n"); exit(0);}
#line 1923 "syntaxic.tab.c"
    break;

  case 54: /* primarytab: STRING_LITERAL  */
#line 495 "syntaxic.y"
                       {printf("Erreur semantique a la ligne %d colonne %d :type incompatible\n",nb_ligne,col);
                                 printf("l'indice/taille ne peut pas etre STRING\n"); exit(0);}
#line 1930 "syntaxic.tab.c"
    break;

  case 55: /* EXPRESSION_CHAR: CHARACTERE  */
#line 499 "syntaxic.y"
                            {if(strcmp(typeG,"CHAR")!=0)   
                                {printf("Erreur semantique a la ligne %d colonne %d :type incompatible\n",nb_ligne,col);
                                 printf("tentative d'affecter CHAR a un %s\n",typeG); exit(0);
                                }
                            else {insererVal(mDroit,(yyvsp[0].string));}
                            strcpy(saveStrq,(yyvsp[0].string));
                            sprintf(saveStr, "%s",(yyvsp[0].string)); 
                           }
#line 1943 "syntaxic.tab.c"
    break;

  case 56: /* EXPRESSION_CHAR: STRING_LITERAL  */
#line 507 "syntaxic.y"
                                {   
                                 printf("Erreur semantique a la ligne %d colonne %d:type incompatible\n",nb_ligne,col);
                                 if(strcmp(typeG,"CHAR")==0) {printf("On ne peut pas affecter STRING a CHAR(on doit le faire caractere par caratere dans un tableaux)\n");exit(0);}
                                 else{printf("tentative d'affecter STRING a un %s\n",typeG); exit(0);}
                                 
                            
                            }
#line 1955 "syntaxic.tab.c"
    break;

  case 57: /* $@1: %empty  */
#line 535 "syntaxic.y"
                                   {
          createQuad("BZ","",QuadR[qc-1].res,"");
          empiler_Int(&pile1,qc-1);
        }
#line 1964 "syntaxic.tab.c"
    break;

  case 58: /* condition: IF LPAREN COND RPAREN LBRACE $@1 instruction_section RBRACE elsebloc  */
#line 539 "syntaxic.y"
                                            {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        }
#line 1972 "syntaxic.tab.c"
    break;

  case 59: /* $@2: %empty  */
#line 543 "syntaxic.y"
                      {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
        empiler_Int(&pile1,qc);
        createQuad("BR","","","");
        }
#line 1982 "syntaxic.tab.c"
    break;

  case 62: /* assignment_int: MDROIT EQUALS term  */
#line 552 "syntaxic.y"
                       {
        
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }else{
            //sprintf(saveStr, "%d", (int)$3); 
            createQuad("=", saveStrq, "",mDroit);
            empiler(&pile4,mDroit);
          //  insererVal(mDroit, saveStr);
        
        }
    }
#line 2001 "syntaxic.tab.c"
    break;

  case 63: /* assignment_int: TAB EQUALS term  */
#line 566 "syntaxic.y"
                      {
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d colonne %d:type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",tmp);
        empiler(&pile4,tmp);

        insererVal(mDroit, saveStr);
    }
#line 2017 "syntaxic.tab.c"
    break;

  case 64: /* assignment_int: TAB EQUALS EXPRESSION_CHAR  */
#line 577 "syntaxic.y"
                                {
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }
        createQuad("=", saveStrq, "",tmp);
        empiler(&pile4,tmp);

        insererVal(mDroit, saveStr);
    }
#line 2032 "syntaxic.tab.c"
    break;

  case 65: /* assignment_int: MDROIT EQUALS EXPRESSION_CHAR  */
#line 587 "syntaxic.y"
                                   {
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }
        createQuad("=", saveStrq, "",mDroit);
        empiler(&pile4,mDroit);
        insererVal(mDroit, saveStr);
    }
#line 2046 "syntaxic.tab.c"
    break;

  case 66: /* $@3: %empty  */
#line 599 "syntaxic.y"
                                          {
        valDepile = depiler(&pile3); 
        strcpy(pasfor, valDepile); 
        //$$ = atoi($6); // Capturer le pas
    }
#line 2056 "syntaxic.tab.c"
    break;

  case 67: /* $@4: %empty  */
#line 604 "syntaxic.y"
                {
        //char *cond_var = atoi($7); // Capturer la condition d'arrêt
        valDepile = depiler(&pile3); 
        strcpy(brnsup, valDepile); 
        empiler_Int(&pile1, qc);
        empiler_Int(&pile2, qc);
        valDepile = depiler(&pile4); 
        strcpy(mDroit, valDepile);
        createQuad("BG", "", mDroit, brnsup); 
        strcpy(cptfor,mDroit);
    }
#line 2072 "syntaxic.tab.c"
    break;

  case 68: /* loop: FOR LPAREN assignment_int COLON term3 $@3 COLON term4 $@4 RPAREN LBRACE instruction_section RBRACE  */
#line 615 "syntaxic.y"
                                              {
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);    
        cpttemp++;    
        createQuad("+", cptfor, pasfor, temp); 
        createQuad("=", temp, "", cptfor); 
        createQuad("BR", ToSTR(atoi(depiler(&pile1))), "", "");
        QuadR[atoi(depiler(&pile2))].opd1=ToSTR(qc);
    }
#line 2086 "syntaxic.tab.c"
    break;

  case 69: /* io_statement: READ LPAREN IDENTIFIER RPAREN  */
#line 627 "syntaxic.y"
                                  {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[-1].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col,(yyvsp[-1].string)); exit(0);
        }
    }
#line 2097 "syntaxic.tab.c"
    break;

  case 74: /* io_expr: IDENTIFIER  */
#line 645 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }
    }
#line 2108 "syntaxic.tab.c"
    break;

  case 77: /* COND: COND OR AND_EXPR  */
#line 659 "syntaxic.y"
    {
        temp = newtemp();
        sprintf(temp, "T%d", cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(valcond2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(valcond1, valDepile);
        createQuadL(2, valcond1, valcond2, temp);
        empiler(&pile3,temp);
        cpttemp++;
    }
#line 2124 "syntaxic.tab.c"
    break;

  case 79: /* AND_EXPR: AND_EXPR AND NOT_EXPR  */
#line 675 "syntaxic.y"
    {
        temp = newtemp();
        sprintf(temp, "T%d", cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(valcond2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(valcond1, valDepile);
        createQuadL(3, valcond1, valcond2, temp);
        empiler(&pile3,temp);
        cpttemp++;
    }
#line 2140 "syntaxic.tab.c"
    break;

  case 81: /* NOT_EXPR: NOT NOT_EXPR  */
#line 691 "syntaxic.y"
    {
        temp = newtemp();
        sprintf(temp, "T%d", cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(valcond1, valDepile); 
        createQuadL(1, valcond1, "", temp);
        empiler(&pile3,temp);
        cpttemp++;
    }
#line 2154 "syntaxic.tab.c"
    break;

  case 83: /* comparison_expr: term2 GT term1  */
#line 708 "syntaxic.y"
    {
        temp=newtemp();
         sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(6,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    }
#line 2170 "syntaxic.tab.c"
    break;

  case 84: /* comparison_expr: term2 LT term1  */
#line 719 "syntaxic.y"
                    {
        temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(5,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    }
#line 2186 "syntaxic.tab.c"
    break;

  case 85: /* comparison_expr: term2 EQ term1  */
#line 730 "syntaxic.y"
                   {
        temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(1,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    }
#line 2202 "syntaxic.tab.c"
    break;

  case 86: /* comparison_expr: term2 GEQ term1  */
#line 741 "syntaxic.y"
                    {
       temp=newtemp();
       sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(3,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    }
#line 2218 "syntaxic.tab.c"
    break;

  case 87: /* comparison_expr: term2 LEQ term1  */
#line 752 "syntaxic.y"
                    {
        temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(4,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    }
#line 2234 "syntaxic.tab.c"
    break;

  case 88: /* comparison_expr: term2 NEQ term1  */
#line 763 "syntaxic.y"
                    {
        temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(2,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    }
#line 2250 "syntaxic.tab.c"
    break;

  case 89: /* comparison_expr: DROIT OP_COMP term1  */
#line 775 "syntaxic.y"
                          {
            if(strcmp(typeD,typeG)!=0){
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("on ne peut pas comparer %s avec %s\n",typeG,typeD); exit(0);
        }
        else{
            temp=newtemp();
            sprintf(temp,"T%d",cpttemp);
            cpttemp++;
            valDepile = depiler(&pile3); 
            strcpy(buffer2, valDepile); 
            valDepile = depiler(&pile3); 
            strcpy(buffer1, valDepile);
            createQuadA(nb_op,buffer1,buffer2,temp);
            empiler(&pile3,temp);
        }
        
    }
#line 2273 "syntaxic.tab.c"
    break;

  case 90: /* comparison_expr: term2 OP_COMP GAUCHE  */
#line 793 "syntaxic.y"
                           {if(strcmp(typeD,typeG)!=0){
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("on ne peut pas comparer %s avec %s\n",typeG,typeD); exit(0);
        }
        else{
            temp=newtemp();
            sprintf(temp,"T%d",cpttemp);
            cpttemp++;
            valDepile = depiler(&pile3); 
            strcpy(buffer2, valDepile); 
            valDepile = depiler(&pile3); 
            strcpy(buffer1, valDepile);
            createQuadA(nb_op,buffer1,buffer2,temp);
            empiler(&pile3,temp);
        }
                            }
#line 2294 "syntaxic.tab.c"
    break;

  case 91: /* comparison_expr: DROIT OP_COMP GAUCHE  */
#line 809 "syntaxic.y"
                          {
        if(strcmp(typeD,typeG)!=0){
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("on ne peut pas comparer %s avec %s\n",typeG,typeD); exit(0);
        }
        else{
            temp=newtemp();
            sprintf(temp,"T%d",cpttemp);
            cpttemp++;
            valDepile = depiler(&pile3); 
            strcpy(buffer2, valDepile); 
            valDepile = depiler(&pile3); 
            strcpy(buffer1, valDepile);
            createQuadA(nb_op,buffer1,buffer2,temp);
            empiler(&pile3,temp);
        }
    }
#line 2316 "syntaxic.tab.c"
    break;

  case 92: /* DROIT: CHARACTERE  */
#line 831 "syntaxic.y"
              {strcpy(typeG,"CHAR");
    empiler(&pile3,(yyvsp[0].string));
    }
#line 2324 "syntaxic.tab.c"
    break;

  case 93: /* DROIT: STRING_LITERAL  */
#line 834 "syntaxic.y"
                   {strcpy(typeG,"STRING");
    empiler(&pile3,(yyvsp[0].string));
    }
#line 2332 "syntaxic.tab.c"
    break;

  case 94: /* GAUCHE: CHARACTERE  */
#line 839 "syntaxic.y"
             {strcpy(typeD,"CHAR");
   empiler(&pile3,(yyvsp[0].string));
   }
#line 2340 "syntaxic.tab.c"
    break;

  case 95: /* GAUCHE: STRING_LITERAL  */
#line 842 "syntaxic.y"
                   {strcpy(typeD,"STRING");
    empiler(&pile3,(yyvsp[0].string));
    }
#line 2348 "syntaxic.tab.c"
    break;

  case 96: /* OP_COMP: GT  */
#line 847 "syntaxic.y"
        {nb_op=6;}
#line 2354 "syntaxic.tab.c"
    break;

  case 97: /* OP_COMP: LT  */
#line 848 "syntaxic.y"
        {nb_op=5;}
#line 2360 "syntaxic.tab.c"
    break;

  case 98: /* OP_COMP: GEQ  */
#line 849 "syntaxic.y"
          {nb_op=3;}
#line 2366 "syntaxic.tab.c"
    break;

  case 99: /* OP_COMP: LEQ  */
#line 850 "syntaxic.y"
          {nb_op=4;}
#line 2372 "syntaxic.tab.c"
    break;

  case 100: /* OP_COMP: EQ  */
#line 851 "syntaxic.y"
        {nb_op=1;}
#line 2378 "syntaxic.tab.c"
    break;

  case 101: /* OP_COMP: NEQ  */
#line 852 "syntaxic.y"
         {nb_op=2;}
#line 2384 "syntaxic.tab.c"
    break;

  case 103: /* term: term PLUS factor  */
#line 859 "syntaxic.y"
                       {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("+", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    }
#line 2408 "syntaxic.tab.c"
    break;

  case 104: /* term: term MINUS factor  */
#line 878 "syntaxic.y"
                        {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        empiler(&pile3,temp);
        cpttemp++;
    }
#line 2430 "syntaxic.tab.c"
    break;

  case 106: /* factor: factor MULTIPLY primary  */
#line 900 "syntaxic.y"
                               { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);

        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("*", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    }
#line 2453 "syntaxic.tab.c"
    break;

  case 107: /* factor: factor DIVIDE primary  */
#line 918 "syntaxic.y"
                                { 
        if((yyvsp[0].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("/", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
}
#line 2478 "syntaxic.tab.c"
    break;

  case 108: /* primary: IDENTIFIER  */
#line 942 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 1\n",nb_ligne,col);
                                                            printf("tentative d'affecter %s a un %s\n",typeD,typeG); exit(0);}
                                strcpy(valIdf,getVal((yyvsp[0].string)));
                                 //if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d colonne %d : variable %s non initialisee\n",nb_ligne,col,$1); exit(0);}
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[0].string));
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
#line 2499 "syntaxic.tab.c"
    break;

  case 109: /* primary: INT_NUMBER  */
#line 958 "syntaxic.y"
                 {
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 2\n",nb_ligne,col);
                                        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
                  strcpy(saveStrq,(yyvsp[0].string));
                  strcpy(buffer1,(yyvsp[0].string));
                  empiler(&pile3,buffer1);
                  
    }
#line 2513 "syntaxic.tab.c"
    break;

  case 110: /* primary: FLOAT_NUMBER  */
#line 967 "syntaxic.y"
                  {
                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 3\n",nb_ligne,col);
                   printf("tentative d'affecter FLOAT a un %s\n",typeG); exit(0);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); }  
                   strcpy(saveStrq,(yyvsp[0].string));
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
#line 2528 "syntaxic.tab.c"
    break;

  case 111: /* primary: LPAREN PLUS INT_NUMBER RPAREN  */
#line 977 "syntaxic.y"
                                  {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 4\n",nb_ligne,col);
        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
        else{(yyval.real)=atof((yyvsp[-1].string));
        strcpy(saveStrq,(yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        }
    }
#line 2543 "syntaxic.tab.c"
    break;

  case 112: /* primary: LPAREN MINUS INT_NUMBER RPAREN  */
#line 987 "syntaxic.y"
                                   {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 5\n",nb_ligne,col);
            printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
                else{
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(saveStrq, saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            }
    }
#line 2561 "syntaxic.tab.c"
    break;

  case 113: /* primary: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1000 "syntaxic.y"
                                      {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 6\n",nb_ligne,col);
                                    printf("tentative d'affecter FLOAT a un %s\n",typeG); exit(0);}
                                      else{(yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(saveStrq,(yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      }
                   }
#line 2575 "syntaxic.tab.c"
    break;

  case 114: /* primary: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1009 "syntaxic.y"
                                       {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 7\n",nb_ligne,col);
                                      printf("tentative d'affecter FlOAT a un %s\n",typeG); exit(0);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(saveStrq, saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       }
    }
#line 2592 "syntaxic.tab.c"
    break;

  case 115: /* primary: LPAREN term RPAREN  */
#line 1021 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-1].real);}
#line 2598 "syntaxic.tab.c"
    break;

  case 116: /* primary: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 1022 "syntaxic.y"
                                          {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d \n",(yyvsp[-3].string),nb_ligne,col); exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 8\n",nb_ligne,col);
                                                                printf("tentative d'affecter %s a un %s\n",typeD,typeG); exit(0);}     
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    valDepile = depiler(&pile3); 
                                    strcpy(buffer1, valDepile);
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(saveStrq,tmp);
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                                 
                }
#line 2621 "syntaxic.tab.c"
    break;

  case 118: /* term1: term1 PLUS factor1  */
#line 1044 "syntaxic.y"
                         {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("+", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    }
#line 2645 "syntaxic.tab.c"
    break;

  case 119: /* term1: term1 MINUS factor1  */
#line 1063 "syntaxic.y"
                          {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        empiler(&pile3,temp);
        cpttemp++;
    }
#line 2667 "syntaxic.tab.c"
    break;

  case 121: /* factor1: factor1 MULTIPLY primary1  */
#line 1085 "syntaxic.y"
                                 { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);

        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("*", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    }
#line 2690 "syntaxic.tab.c"
    break;

  case 122: /* factor1: factor1 DIVIDE primary1  */
#line 1103 "syntaxic.y"
                                  { 
        if((yyvsp[0].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("/", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
}
#line 2715 "syntaxic.tab.c"
    break;

  case 123: /* primary1: IDENTIFIER  */
#line 1127 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string));
             exit(0);
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 1\n",nb_ligne,col);
                             printf("on ne peut pas comparer %s avec %s\n",typeD,typeG);
                              exit(0);
                             }
                                strcpy(valIdf,getVal((yyvsp[0].string)));
                                 //if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d colonne %d : variable %s non initialisee\n",nb_ligne,col,$1); exit(0);}
                            
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[0].string));
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
#line 2740 "syntaxic.tab.c"
    break;

  case 124: /* primary1: INT_NUMBER  */
#line 1147 "syntaxic.y"
                 {
       
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 2\n",nb_ligne,col);
        printf("on ne peut pas comparer INTEGER avec %s\n",typeG); exit(0);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
                  strcpy(saveStrq,(yyvsp[0].string));
                  strcpy(buffer1,(yyvsp[0].string));
                  empiler(&pile3,buffer1);
                  
    }
#line 2755 "syntaxic.tab.c"
    break;

  case 125: /* primary1: FLOAT_NUMBER  */
#line 1157 "syntaxic.y"
                  {       

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 3\n",nb_ligne,col);
                   printf("on ne peut pas comparer FLOAT avec %s\n",typeG); exit(0);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); }  
                   strcpy(saveStrq,(yyvsp[0].string));
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
#line 2771 "syntaxic.tab.c"
    break;

  case 126: /* primary1: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1168 "syntaxic.y"
                                  {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 4\n",nb_ligne,col);
        printf("on ne peut pas comparer INTEGER avec %s\n",typeG); exit(0);}
        else{(yyval.real)=atof((yyvsp[-1].string));
        strcpy(saveStrq,(yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        }
    }
#line 2786 "syntaxic.tab.c"
    break;

  case 127: /* primary1: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1178 "syntaxic.y"
                                   {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 5\n",nb_ligne,col);
            printf("on ne peut pas comparer INTEGER avec %s\n",typeG); exit(0);}
                else{
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(saveStrq, saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            }
    }
#line 2804 "syntaxic.tab.c"
    break;

  case 128: /* primary1: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1191 "syntaxic.y"
                                      {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 6\n",nb_ligne,col);
                                    printf("on ne peut pas comparer FLOAT avec %s\n",typeG); exit(0);}
                                      else{(yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(saveStrq,(yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      }
                   }
#line 2818 "syntaxic.tab.c"
    break;

  case 129: /* primary1: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1200 "syntaxic.y"
                                       {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 7\n",nb_ligne,col);
                                      printf("on ne peut pas comparer FLOAT avec %s\n",typeG); exit(0);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(saveStrq, saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       }
    }
#line 2835 "syntaxic.tab.c"
    break;

  case 130: /* primary1: LPAREN term1 RPAREN  */
#line 1212 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2841 "syntaxic.tab.c"
    break;

  case 131: /* primary1: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 1213 "syntaxic.y"
                                          {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique  :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[-3].string),nb_ligne,col);
                                          exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 8\n",nb_ligne,col);
                                     printf("on ne peut pas comparer %s avec %s\n",typeD,typeG); exit(0);}
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    valDepile = depiler(&pile3); 
                                    strcpy(buffer1, valDepile);
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(saveStrq,tmp);
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                }
#line 2864 "syntaxic.tab.c"
    break;

  case 133: /* term2: term2 PLUS factor2  */
#line 1235 "syntaxic.y"
                         {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("+", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    }
#line 2888 "syntaxic.tab.c"
    break;

  case 134: /* term2: term2 MINUS factor2  */
#line 1254 "syntaxic.y"
                          {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        empiler(&pile3,temp);
        cpttemp++;
    }
#line 2910 "syntaxic.tab.c"
    break;

  case 136: /* factor2: factor2 MULTIPLY primary2  */
#line 1276 "syntaxic.y"
                                 { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);

        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("*", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    }
#line 2933 "syntaxic.tab.c"
    break;

  case 137: /* factor2: factor2 DIVIDE primary2  */
#line 1294 "syntaxic.y"
                                  { 
        if((yyvsp[0].real)==0){ printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("/", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
}
#line 2958 "syntaxic.tab.c"
    break;

  case 138: /* primary2: IDENTIFIER  */
#line 1318 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }else {strcpy(typeG,getType((yyvsp[0].string)));
                                strcpy(valIdf,getVal((yyvsp[0].string)));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
#line 2975 "syntaxic.tab.c"
    break;

  case 139: /* primary2: INT_NUMBER  */
#line 1330 "syntaxic.y"
                 {
       strcpy(typeG,"INTEGER");
       (yyval.real)=atof((yyvsp[0].string));
       strcpy(buffer1,(yyvsp[0].string));
       empiler(&pile3,buffer1);
                  
    }
#line 2987 "syntaxic.tab.c"
    break;

  case 140: /* primary2: FLOAT_NUMBER  */
#line 1337 "syntaxic.y"
                  {strcpy(typeG,"FLOAT");
                   (yyval.real)=atof((yyvsp[0].string));  
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
#line 2997 "syntaxic.tab.c"
    break;

  case 141: /* primary2: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1342 "syntaxic.y"
                                  {
        strcpy(typeG,"INTEGER");
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        
    }
#line 3009 "syntaxic.tab.c"
    break;

  case 142: /* primary2: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1349 "syntaxic.y"
                                   {
        strcpy(typeG,"INTEGER");
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    }
#line 3023 "syntaxic.tab.c"
    break;

  case 143: /* primary2: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1358 "syntaxic.y"
                                      {strcpy(typeG,"FLOAT");
                                      (yyval.real)=atof((yyvsp[-1].string));;
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      
                   }
#line 3034 "syntaxic.tab.c"
    break;

  case 144: /* primary2: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1364 "syntaxic.y"
                                       {strcpy(typeG,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    }
#line 3046 "syntaxic.tab.c"
    break;

  case 145: /* primary2: LPAREN term2 RPAREN  */
#line 1371 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3052 "syntaxic.tab.c"
    break;

  case 146: /* primary2: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 1372 "syntaxic.y"
                                          {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[-3].string),nb_ligne,col); exit(0);}
                                else {
                                    strcpy(typeG,getType((yyvsp[-3].string)));
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    valDepile = depiler(&pile3); 
                                    strcpy(buffer1, valDepile);
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                }
#line 3071 "syntaxic.tab.c"
    break;

  case 148: /* term4: term4 PLUS factor4  */
#line 1390 "syntaxic.y"
                         {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("+", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    }
#line 3095 "syntaxic.tab.c"
    break;

  case 149: /* term4: term4 MINUS factor4  */
#line 1409 "syntaxic.y"
                          {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        empiler(&pile3,temp);
        cpttemp++;
    }
#line 3117 "syntaxic.tab.c"
    break;

  case 151: /* factor4: factor4 MULTIPLY primary4  */
#line 1431 "syntaxic.y"
                                 { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);

        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("*", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    }
#line 3140 "syntaxic.tab.c"
    break;

  case 152: /* factor4: factor4 DIVIDE primary4  */
#line 1449 "syntaxic.y"
                                  { 
        if((yyvsp[0].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("/", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
}
#line 3165 "syntaxic.tab.c"
    break;

  case 153: /* primary4: IDENTIFIER  */
#line 1473 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                if(strcmp(typeD,"CHAR")==0){printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle ne doit pas etre CHAR\n",nb_ligne,col);exit(0);}
                else if(strcmp(typeD,"INTEGER")!=0){
                    printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle doit etre INTEGER et pas FLOAT\n",nb_ligne,col);exit(0);
                }                
                                 strcpy(valIdf,getVal((yyvsp[0].string)));
                                  strcpy(brnsup,(yyvsp[0].string));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
#line 3187 "syntaxic.tab.c"
    break;

  case 154: /* primary4: INT_NUMBER  */
#line 1490 "syntaxic.y"
                 {
        strcpy(brnsup,(yyvsp[0].string));
       strcpy(typeD,"INTEGER");
       (yyval.real)=atof((yyvsp[0].string));
       strcpy(buffer1,(yyvsp[0].string));
       empiler(&pile3,buffer1);
                  
    }
#line 3200 "syntaxic.tab.c"
    break;

  case 155: /* primary4: FLOAT_NUMBER  */
#line 1498 "syntaxic.y"
                  {  
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre FLOAT\n");exit(0);
        strcpy(brnsup,(yyvsp[0].string));
        strcpy(typeD,"FLOAT");
                   (yyval.real)=atof((yyvsp[0].string));  
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
#line 3214 "syntaxic.tab.c"
    break;

  case 156: /* primary4: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1507 "syntaxic.y"
                                  {
        
         strcpy(brnsup,(yyvsp[-1].string));
        strcpy(typeD,"INTEGER");
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        
    }
#line 3228 "syntaxic.tab.c"
    break;

  case 157: /* primary4: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1516 "syntaxic.y"
                                   {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit etre POSITIVE\n");exit(0);
        strcpy(typeD,"INTEGER");
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                 strcpy(brnsup,saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    }
#line 3245 "syntaxic.tab.c"
    break;

  case 158: /* primary4: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1528 "syntaxic.y"
                                      {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre FLOAT\n");exit(0);
        strcpy(typeD,"FLOAT");
                                      (yyval.real)=atof((yyvsp[-1].string));;
                                       strcpy(brnsup,(yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      
                   }
#line 3260 "syntaxic.tab.c"
    break;

  case 159: /* primary4: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1538 "syntaxic.y"
                                       {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre FLOAT\n");exit(0);
        strcpy(typeD,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                            strcpy(brnsup,saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    }
#line 3276 "syntaxic.tab.c"
    break;

  case 160: /* primary4: LPAREN term4 RPAREN  */
#line 1549 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3282 "syntaxic.tab.c"
    break;

  case 161: /* primary4: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 1550 "syntaxic.y"
                                          {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[-3].string),nb_ligne,col); exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                    if(strcmp(typeD,"CHAR")==0){printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle ne doit pas etre CHAR\n",nb_ligne,col);exit(0);}
                else if(strcmp(typeD,"INTEGER")!=0){
                    printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle doit etre INTEGER et pas FLOAT\n",nb_ligne,col);exit(0);
                }
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    valDepile = depiler(&pile3); 
                                    strcpy(buffer1, valDepile); 
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(buffer1,tmp);
                                     strcpy(brnsup,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                }
#line 3306 "syntaxic.tab.c"
    break;

  case 162: /* primary4: STRING_LITERAL  */
#line 1569 "syntaxic.y"
                   {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre characters\n");exit(0);}
#line 3313 "syntaxic.tab.c"
    break;

  case 163: /* primary4: CHARACTERE  */
#line 1572 "syntaxic.y"
               {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre character\n");exit(0);}
#line 3320 "syntaxic.tab.c"
    break;

  case 165: /* term3: term3 PLUS factor3  */
#line 1577 "syntaxic.y"
                         {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("+", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    }
#line 3344 "syntaxic.tab.c"
    break;

  case 166: /* term3: term3 MINUS factor3  */
#line 1596 "syntaxic.y"
                          {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        empiler(&pile3,temp);
        cpttemp++;
    }
#line 3366 "syntaxic.tab.c"
    break;

  case 168: /* factor3: factor3 MULTIPLY primary3  */
#line 1618 "syntaxic.y"
                                 { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);

        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("*", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    }
#line 3389 "syntaxic.tab.c"
    break;

  case 169: /* factor3: factor3 DIVIDE primary3  */
#line 1636 "syntaxic.y"
                                 { 
        if((yyvsp[0].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("/", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
}
#line 3414 "syntaxic.tab.c"
    break;

  case 170: /* primary3: IDENTIFIER  */
#line 1660 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n", nb_ligne,col,(yyvsp[0].string));
             exit(0);
        }else {strcpy(typeG,getType((yyvsp[0].string)));
                if(strcmp(typeG,"CHAR")==0 ){printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle ne doit pas etre CHAR\n",nb_ligne,col);exit(0);}
                else if(strcmp(typeG,"INTEGER")!=0){
                    printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle doit INTEGER pas FLOAT\n",nb_ligne,col);exit(0);
                } 
                                  strcpy(valIdf,getVal((yyvsp[0].string)));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
#line 3436 "syntaxic.tab.c"
    break;

  case 171: /* primary3: INT_NUMBER  */
#line 1677 "syntaxic.y"
                 {
       strcpy(typeG,"INTEGER");
       (yyval.real)=atof((yyvsp[0].string));
       strcpy(buffer1,(yyvsp[0].string));
       empiler(&pile3,buffer1);
                  
    }
#line 3448 "syntaxic.tab.c"
    break;

  case 172: /* primary3: FLOAT_NUMBER  */
#line 1684 "syntaxic.y"
                  {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre FLOAT\n");exit(0);
        strcpy(typeG,"FLOAT");
                   (yyval.real)=atof((yyvsp[0].string));  
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
#line 3461 "syntaxic.tab.c"
    break;

  case 173: /* primary3: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1692 "syntaxic.y"
                                  {
        
        strcpy(typeG,"INTEGER");
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        
    }
#line 3474 "syntaxic.tab.c"
    break;

  case 174: /* primary3: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1700 "syntaxic.y"
                                   {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit etre positive\n");exit(0);
        strcpy(typeG,"INTEGER");
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    }
#line 3490 "syntaxic.tab.c"
    break;

  case 175: /* primary3: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1711 "syntaxic.y"
                                      {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre FLOAT\n");exit(0);
        strcpy(typeG,"FLOAT");
                                      (yyval.real)=atof((yyvsp[-1].string));;
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      
                   }
#line 3504 "syntaxic.tab.c"
    break;

  case 176: /* primary3: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1720 "syntaxic.y"
                                       {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre FLOAT\n");exit(0);
        strcpy(typeG,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    }
#line 3519 "syntaxic.tab.c"
    break;

  case 177: /* primary3: LPAREN term3 RPAREN  */
#line 1730 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3525 "syntaxic.tab.c"
    break;

  case 178: /* primary3: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 1731 "syntaxic.y"
                                          {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d \n",(yyvsp[-3].string),nb_ligne,col); exit(0);}
                                else {
                                    
                                    strcpy(typeG,getType((yyvsp[-3].string)));
                                    if(strcmp(typeG,"CHAR")==0 ){printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle ne doit pas etre CHAR\n",nb_ligne,col);exit(0);}
                else if(strcmp(typeG,"INTEGER")!=0){
                    printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle doit INTEGER pas FLOAT\n",nb_ligne,col);exit(0);
                }
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    valDepile = depiler(&pile3); 
                                    strcpy(buffer1, valDepile); 
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                }
#line 3549 "syntaxic.tab.c"
    break;

  case 179: /* primary3: STRING_LITERAL  */
#line 1750 "syntaxic.y"
                   {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre characters\n");exit(0);}
#line 3556 "syntaxic.tab.c"
    break;

  case 180: /* primary3: CHARACTERE  */
#line 1753 "syntaxic.y"
               {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre character\n");exit(0);}
#line 3563 "syntaxic.tab.c"
    break;


#line 3567 "syntaxic.tab.c"

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

#line 1757 "syntaxic.y"


// Main function to start the parser
int main() {
    initialisation();
    
    yyparse(); 
    printf("\n");
    printf("\n::::::::::::::::::::COMPILATION TERMINER AVEC SUCCÈS::::::::::::::::::::::::::\n");
	printf("________________________________________________________________________________\n");
    printf("\n");
    printf("\n");
    afficher(0);afficher(1);afficher(2);
    displayQuad();
    return 0;
}
int yywrap() {
    return 1;
}

// Function to handle errors during parsing

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d, column %d\n", s, nb_ligne, col);
    exit(0);
}

