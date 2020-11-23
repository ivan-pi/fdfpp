
/*  A Bison parser, made from eval.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	YYQWE	257
#define	YYCOLON	258
#define	YYOR	259
#define	YYAND	260
#define	YYNOT	261
#define	YYEQV	262
#define	YYNEQV	263
#define	YYBITOR	264
#define	YYBITAND	265
#define	YYBITXOR	266
#define	YYBITNOT	267
#define	YYEQ	268
#define	YYNE	269
#define	YYLT	270
#define	YYGT	271
#define	YYLE	272
#define	YYGE	273
#define	YYLS	274
#define	YYRS	275
#define	YYADD	276
#define	YYSUB	277
#define	YYMUL	278
#define	YYDIV	279
#define	YYREM	280
#define	YYDEG	281
#define	YYLPAR	282
#define	YYRPAR	283
#define	YYNUM	284
#define	YYCOMMA	285
#define	YYSTOP	286
#define	YYBADLEX	287

#line 13 "eval.y"

#include "fpp.h"
#include "symtab.h"
#include "rgram.h"
#include "service.h"
#include "sb.h"
#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		64
#define	YYFLAG		-32768
#define	YYNTBASE	34

#define YYTRANSLATE(x) ((unsigned)(x) <= 287 ? yytranslate[x] : 37)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     3,     7,    11,    15,    19,    23,    27,    31,    35,
    39,    43,    47,    51,    55,    59,    63,    67,    71,    75,
    79,    83,    87,    93,    97,    99,   102,   105,   108,   112
};

static const short yyrhs[] = {    35,
    32,     0,    35,    27,    35,     0,    35,    24,    35,     0,
    35,    25,    35,     0,    35,    26,    35,     0,    35,    22,
    35,     0,    35,    23,    35,     0,    35,    20,    35,     0,
    35,    21,    35,     0,    35,    16,    35,     0,    35,    18,
    35,     0,    35,    17,    35,     0,    35,    19,    35,     0,
    35,    14,    35,     0,    35,    15,    35,     0,    35,    11,
    35,     0,    35,    12,    35,     0,    35,    10,    35,     0,
    35,     6,    35,     0,    35,     5,    35,     0,    35,     9,
    35,     0,    35,     8,    35,     0,    35,     3,    35,     4,
    35,     0,    35,    31,    35,     0,    36,     0,    23,    36,
     0,     7,    36,     0,    13,    36,     0,    28,    35,    29,
     0,    30,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    42,    44,    52,    53,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,    77,    78,    79,    80,    82,    83,    84,    85,    86
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","YYQWE",
"YYCOLON","YYOR","YYAND","YYNOT","YYEQV","YYNEQV","YYBITOR","YYBITAND","YYBITXOR",
"YYBITNOT","YYEQ","YYNE","YYLT","YYGT","YYLE","YYGE","YYLS","YYRS","YYADD","YYSUB",
"YYMUL","YYDIV","YYREM","YYDEG","YYLPAR","YYRPAR","YYNUM","YYCOMMA","YYSTOP",
"YYBADLEX","S","exp","term", NULL
};
#endif

static const short yyr1[] = {     0,
    34,    35,    35,    35,    35,    35,    35,    35,    35,    35,
    35,    35,    35,    35,    35,    35,    35,    35,    35,    35,
    35,    35,    35,    35,    35,    36,    36,    36,    36,    36
};

static const short yyr2[] = {     0,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     5,     3,     1,     2,     2,     2,     3,     1
};

static const short yydefact[] = {     0,
     0,     0,     0,     0,    30,     0,    25,    27,    28,    26,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     1,    29,     0,    20,    19,    22,
    21,    18,    16,    17,    14,    15,    10,    12,    11,    13,
     8,     9,     6,     7,     3,     4,     5,     2,    24,     0,
    23,     0,     0,     0
};

static const short yydefgoto[] = {    62,
     6,     7
};

static const short yypact[] = {   159,
   159,   159,   159,   159,-32768,    28,-32768,-32768,-32768,-32768,
    58,   159,   159,   159,   159,   159,   159,   159,   159,   159,
   159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
   159,   159,   159,   159,-32768,-32768,    87,   138,   138,   180,
   180,   198,   198,   198,   216,   216,   232,   232,   232,   232,
   152,   152,   240,   240,   -26,   -26,   -26,   -26,-32768,   159,
   114,     6,     7,-32768
};

static const short yypgoto[] = {-32768,
    -4,     1
};


#define	YYLAST		271


static const short yytable[] = {    11,
    33,     8,     9,    10,    34,    63,    64,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    12,     0,    13,    14,     0,    15,    16,    17,    18,    19,
     0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    61,     0,     0,    34,    35,
    12,     0,    13,    14,     0,    15,    16,    17,    18,    19,
     0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,     0,    36,     0,    34,    12,
    60,    13,    14,     0,    15,    16,    17,    18,    19,     0,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,     0,     0,    12,    34,    13,    14,
     0,    15,    16,    17,    18,    19,     0,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,     0,     0,     0,    34,    15,    16,    17,    18,    19,
     0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,     1,     0,     0,    34,     0,
     0,     2,     0,    28,    29,    30,    31,    32,    33,     0,
     0,     3,    34,     0,     0,     0,     4,     0,     5,    17,
    18,    19,     0,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,     0,     0,     0,
    34,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,     0,     0,     0,    34,-32768,
-32768,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,     0,     0,     0,    34,-32768,-32768,-32768,
-32768,    26,    27,    28,    29,    30,    31,    32,    33,     0,
     0,     0,    34,    30,    31,    32,    33,     0,     0,     0,
    34
};

static const short yycheck[] = {     4,
    27,     1,     2,     3,    31,     0,     0,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     3,    -1,     5,     6,    -1,     8,     9,    10,    11,    12,
    -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    60,    -1,    -1,    31,    32,
     3,    -1,     5,     6,    -1,     8,     9,    10,    11,    12,
    -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    -1,    29,    -1,    31,     3,
     4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    -1,    -1,     3,    31,     5,     6,
    -1,     8,     9,    10,    11,    12,    -1,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    -1,    -1,    -1,    31,     8,     9,    10,    11,    12,
    -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,     7,    -1,    -1,    31,    -1,
    -1,    13,    -1,    22,    23,    24,    25,    26,    27,    -1,
    -1,    23,    31,    -1,    -1,    -1,    28,    -1,    30,    10,
    11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
    31,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    -1,    -1,    -1,    31,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
    -1,    -1,    31,    24,    25,    26,    27,    -1,    -1,    -1,
    31
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/lib/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/lib/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 42 "eval.y"
{return yyvsp[-1];;
    break;}
case 2:
#line 44 "eval.y"
{ 
		int i, res = 1;
		if (yyvsp[0] < 0) res = 0;
		else {
			for (i=0; i < yyvsp[0]; i++) 
				res *= yyvsp[-2];
		}
		yyval = res; ;
    break;}
case 3:
#line 52 "eval.y"
{ yyval = yyvsp[-2] * yyvsp[0]; ;
    break;}
case 4:
#line 53 "eval.y"
{ 
		if (yyvsp[0] == 0) {
			fppmess(WARN_FPP_EXPR);
			yyval = 0;
		}
		else
			yyval = yyvsp[-2] / yyvsp[0]; ;
    break;}
case 5:
#line 60 "eval.y"
{ yyval = yyvsp[-2] % yyvsp[0]; ;
    break;}
case 6:
#line 61 "eval.y"
{ yyval = yyvsp[-2] + yyvsp[0]; ;
    break;}
case 7:
#line 62 "eval.y"
{ yyval = yyvsp[-2] - yyvsp[0]; ;
    break;}
case 8:
#line 63 "eval.y"
{ yyval = yyvsp[-2] << yyvsp[0]; ;
    break;}
case 9:
#line 64 "eval.y"
{ yyval = yyvsp[-2] >> yyvsp[0]; ;
    break;}
case 10:
#line 65 "eval.y"
{ yyval = yyvsp[-2] < yyvsp[0]; ;
    break;}
case 11:
#line 66 "eval.y"
{ yyval = yyvsp[-2] <= yyvsp[0]; ;
    break;}
case 12:
#line 67 "eval.y"
{ yyval = yyvsp[-2] > yyvsp[0]; ;
    break;}
case 13:
#line 68 "eval.y"
{ yyval = yyvsp[-2] >= yyvsp[0]; ;
    break;}
case 14:
#line 69 "eval.y"
{ yyval = yyvsp[-2] == yyvsp[0]; ;
    break;}
case 15:
#line 70 "eval.y"
{ yyval = yyvsp[-2] != yyvsp[0]; ;
    break;}
case 16:
#line 71 "eval.y"
{ yyval = yyvsp[-2] & yyvsp[0]; ;
    break;}
case 17:
#line 72 "eval.y"
{ yyval = yyvsp[-2] ^ yyvsp[0]; ;
    break;}
case 18:
#line 73 "eval.y"
{ yyval = yyvsp[-2] | yyvsp[0]; ;
    break;}
case 19:
#line 74 "eval.y"
{ yyval = yyvsp[-2] && yyvsp[0]; ;
    break;}
case 20:
#line 75 "eval.y"
{ yyval = yyvsp[-2] || yyvsp[0]; ;
    break;}
case 21:
#line 76 "eval.y"
{ yyval = !yyvsp[-2] && yyvsp[0] || yyvsp[-2] && !yyvsp[0]; ;
    break;}
case 22:
#line 77 "eval.y"
{ yyval = !yyvsp[-2] && !yyvsp[0] || yyvsp[-2] && yyvsp[0]; ;
    break;}
case 23:
#line 78 "eval.y"
{ yyval = yyvsp[-4] ? yyvsp[-2] : yyvsp[0]; ;
    break;}
case 24:
#line 79 "eval.y"
{ yyval = yyvsp[0]; ;
    break;}
case 25:
#line 80 "eval.y"
{ yyval = yyvsp[0]; ;
    break;}
case 26:
#line 82 "eval.y"
{ yyval = -yyvsp[0]; ;
    break;}
case 27:
#line 83 "eval.y"
{ yyval = !yyvsp[0]; ;
    break;}
case 28:
#line 84 "eval.y"
{ yyval = ~yyvsp[0]; ;
    break;}
case 29:
#line 85 "eval.y"
{ yyval = yyvsp[-1]; ;
    break;}
case 30:
#line 86 "eval.y"
{ yyval = yyvsp[0]; ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/lib/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 87 "eval.y"


int
yyerror( const char *s ) {
	fppmess(ERR_IF,s);
}

int
yylex() {
	int	lmode;
	int	n;
	char	c, *s;
	SymPtr	sym;
	Token   *tokp;

	lmode = (mmode & ~(MOD_SPACE | MOD_CONT)) | MOD_IF;
	tokp = skipbl(lmode);
	switch (tokp->token[0]) {
	case '(':	return YYLPAR;
	case ')':	return YYRPAR;
	case ',':	return YYCOMMA;
	case '%':	return YYREM;
	case '/':	return YYDIV;
	case '*':	if (tokp->token[1] == '*')
				return YYDEG;
			else	return YYMUL;
	case '-':	return YYSUB;
	case '+':	return YYADD;
	case '~':	return YYBITNOT;
	case '^':	return YYBITXOR;
	case '?':	return YYQWE;
	case ':':	return YYCOLON;
	case '|':	
		if (tokp->token[1] == '|')
			return YYOR;
		else	return YYBITOR;
	case '&':
		if (tokp->token[1] == '&')
			return YYAND;
		else	return YYBITAND;
	case '!':
		if (tokp->token[1] == '=')
			return YYNE;
		else	return YYNOT;
	case '=':
		if (tokp->token[1] == '=')
			return YYEQ;
		else 	return YYSTOP;
	case '<':
		if (tokp->token[1] == '=')
			return YYLE;
		else if (tokp->token[1] == '<') 
			return YYLS;
		else 	return YYLT;
	case '>':
		if (tokp->token[1] == '=')
			return YYGE;
		else if (tokp->token[1] == '>') 
			return YYRS;
		else 	return YYGT;
	case '\n':	return YYSTOP;
	case '.':
		skipbl(lmode);
		sym = symget(tokp->token,CL_FOP);
		if (sym == NULL) return YYBADLEX;
		n = symvali(sym);
		switch (n) {
		case FTN_TRUE: n = YYNUM; yylval = 1;
			break;
		case FTN_FALSE: n = YYNUM; yylval = 0;
			break;
		case FTN_EQ : n = YYEQ;
			break;
		case FTN_NE : n = YYNE;
			break;
		case FTN_LT : n = YYLT;
			break;
		case FTN_LE : n = YYLE;
			break;
		case FTN_GT : n = YYGT;
			break;
		case FTN_GE : n = YYGE;
			break;
		case FTN_AND : n = YYAND;
			break;
		case FTN_OR : n = YYOR;
			break;
		case FTN_NEQV :
		case FTN_XOR : n = YYNEQV;	/* these two are the same */
			break;
		case FTN_EQV : n = YYEQV;
			break;
		case FTN_NOT : n = YYNOT;
			break;
		default:
			return YYBADLEX;
		}
		skipbl(lmode);
		if (tokp->token[0] != '.') 
			return YYBADLEX;
		else	return n;
	default: 
		if (tokp->val == TK_NAME) {
			if (!strcmp(tokp->token,"defined")) {
				int save;

				save = dosubstfl;
				dosubstfl = 0;
				tokp = skipbl(lmode);
				if (tokp->val == TK_NAME) {
					dosubstfl = save;
					if (symget(tokp->token,CL_NM))
						yylval = 1;
					else
						yylval = 0;
					return YYNUM;
				}	
				else if (tokp->token[0] != '(') {
					dosubstfl = save;
					return YYBADLEX;
				}
				tokp = skipbl(lmode);
				dosubstfl = save;
				if (tokp->val == TK_NAME && symget(tokp->token,CL_NM))
					yylval = 1;
				else
					yylval = 0;
				tokp = skipbl(lmode);
				if (tokp->token[0] != ')') 
					return YYBADLEX;
				return YYNUM;
			}
			else {
				if (sbfl) {
					sb_mref(tokp->token, 0, 0);
					sb_mref_end();
				}
				yylval = 0;
				return YYNUM;
			}
		}
		else if (tokp->val == TK_NUM) {
			s = tokp->token;
			while (c=*s++) {
				if (!is_num(c))
					return YYBADLEX;
			}
#if USE_C_HEX_CONST
			if (tokp->token[0] == '0') {
				/* C octal constant is allowed 
				 * in #if expression */
				strtoi(tokp->token,&yylval,8);
			}
			else
#endif /* USE_C_HEX_CONST */
				strtoi(tokp->token,&yylval,10);
			return YYNUM;
		}
		else if (tokp->val == TK_BOZ) {
			int	err;

			switch (lowcase(tokp->token[0])) {
			case 'b':
				tokp = skipbl(lmode);
				CHECK(tokp->token[0] == '\'' || tokp->token[0] == '"');

				/* Erase the trailing quote */
				tokp->token[--tokp->length] = 0;
				err = strtoi(tokp->token+1, &yylval, 2);
				if (err) 
					return YYBADLEX;
				else	return YYNUM;
				break;
			case 'o':
				tokp = skipbl(lmode);
				CHECK(tokp->token[0] == '\'' || tokp->token[0] == '"');
				tokp->token[--tokp->length] = 0;
				err = strtoi(tokp->token+1, &yylval, 8);
				if (err) 
					return YYBADLEX;
				else	return YYNUM;
				break;
			case 'x':
			case 'z':
				tokp = skipbl(lmode);
				CHECK(tokp->token[0] == '\'' || tokp->token[0] == '"');
				tokp->token[--tokp->length] = 0;
				err = strtoi(tokp->token+1, &yylval, 16);
				if (err) 
					return YYBADLEX;
				else	return YYNUM;
				break;
			case '\'':
			case '"':
				c = tokp->token[tokp->length - 1];
				if (lowcase(c) == 'o') {
					tokp->length -= 2;
					tokp->token[tokp->length] = 0;
					err = strtoi(tokp->token+1, &yylval, 8);
				}
				else if (lowcase(c) == 'x') {
					tokp->length -= 2;
					tokp->token[tokp->length] = 0;
					err = strtoi(tokp->token+1, &yylval, 16);
				}
				else return YYBADLEX;
				if (err) 
					return YYBADLEX;
				else	return YYNUM;
#if USE_C_HEX_CONST
			case '0':
				CHECK(lowcase(tokp->token[1]) == 'x');
				err = strtoi(tokp->token+2, &yylval, 16);
				if (err) 
					return YYBADLEX;
				else	return YYNUM;
				break;
#endif /* USE_C_HEX_CONST */
			default:
				CHECK(0);
				return YYBADLEX;
			}
		}
		else
			return YYBADLEX;
	}
/*	return YYBADLEX; */
}
