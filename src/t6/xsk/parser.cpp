// A Bison parser, made by GNU Bison 3.7.5.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

// "%code top" blocks.
#line 34 "parser.ypp"

#include "stdafx.hpp"
#include "parser.hpp"
#include "lexer.hpp"
using namespace xsk::arc;
xsk::arc::t6::parser::symbol_type T6lex(xsk::arc::t6::lexer& lexer);

#line 47 "parser.cpp"

// Take the name prefix into account.
#define yylex   T6lex



#include "parser.hpp"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if T6DEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !T6DEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !T6DEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 13 "parser.ypp"
namespace xsk { namespace arc { namespace t6 {
#line 149 "parser.cpp"

  /// Build a parser object.
  parser::parser (xsk::arc::t6::lexer& lexer_yyarg, xsk::arc::ast::program::ptr& ast_yyarg)
#if T6DEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      yy_lac_established_ (false),
      lexer (lexer_yyarg),
      ast (ast_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | symbol kinds.  |
  `---------------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_pointer: // expr_pointer
        value.YY_MOVE_OR_COPY< ast::call > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_declaration: // declaration
        value.YY_MOVE_OR_COPY< ast::decl > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decl_constant: // decl_constant
        value.YY_MOVE_OR_COPY< ast::decl_constant::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decl_thread: // decl_thread
        value.YY_MOVE_OR_COPY< ast::decl_thread::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decl_usingtree: // decl_usingtree
        value.YY_MOVE_OR_COPY< ast::decl_usingtree::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_or_empty: // expr_or_empty
      case symbol_kind::S_expr_assign: // expr_assign
      case symbol_kind::S_expr_increment: // expr_increment
      case symbol_kind::S_expr_decrement: // expr_decrement
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
      case symbol_kind::S_expr_object: // expr_object
        value.YY_MOVE_OR_COPY< ast::expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_abs: // expr_abs
        value.YY_MOVE_OR_COPY< ast::expr_abs::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_angleclamp180: // expr_angleclamp180
        value.YY_MOVE_OR_COPY< ast::expr_angleclamp180::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_anglestoforward: // expr_anglestoforward
        value.YY_MOVE_OR_COPY< ast::expr_anglestoforward::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_anglestoright: // expr_anglestoright
        value.YY_MOVE_OR_COPY< ast::expr_anglestoright::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_anglestoup: // expr_anglestoup
        value.YY_MOVE_OR_COPY< ast::expr_anglestoup::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_anim: // expr_anim
        value.YY_MOVE_OR_COPY< ast::expr_anim::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_animation: // expr_animation
        value.YY_MOVE_OR_COPY< ast::expr_animation::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_no_empty: // expr_arguments_no_empty
        value.YY_MOVE_OR_COPY< ast::expr_arguments::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_array: // expr_array
        value.YY_MOVE_OR_COPY< ast::expr_array::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call: // expr_call
        value.YY_MOVE_OR_COPY< ast::expr_call::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_complement: // expr_complement
        value.YY_MOVE_OR_COPY< ast::expr_complement::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_empty_array: // expr_empty_array
        value.YY_MOVE_OR_COPY< ast::expr_empty_array::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_false: // expr_false
        value.YY_MOVE_OR_COPY< ast::expr_false::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_field: // expr_field
        value.YY_MOVE_OR_COPY< ast::expr_field::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_float: // expr_float
        value.YY_MOVE_OR_COPY< ast::expr_float::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_game: // expr_game
        value.YY_MOVE_OR_COPY< ast::expr_game::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvar: // expr_getdvar
        value.YY_MOVE_OR_COPY< ast::expr_getdvar::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarcoloralpha: // expr_getdvarcoloralpha
        value.YY_MOVE_OR_COPY< ast::expr_getdvarcoloralpha::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarcolorblue: // expr_getdvarcolorblue
        value.YY_MOVE_OR_COPY< ast::expr_getdvarcolorblue::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarcolorgreen: // expr_getdvarcolorgreen
        value.YY_MOVE_OR_COPY< ast::expr_getdvarcolorgreen::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarcolorred: // expr_getdvarcolorred
        value.YY_MOVE_OR_COPY< ast::expr_getdvarcolorred::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarfloat: // expr_getdvarfloat
        value.YY_MOVE_OR_COPY< ast::expr_getdvarfloat::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarint: // expr_getdvarint
        value.YY_MOVE_OR_COPY< ast::expr_getdvarint::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarvector: // expr_getdvarvector
        value.YY_MOVE_OR_COPY< ast::expr_getdvarvector::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getfirstarraykey: // expr_getfirstarraykey
        value.YY_MOVE_OR_COPY< ast::expr_getfirstarraykey::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getnextarraykey: // expr_getnextarraykey
        value.YY_MOVE_OR_COPY< ast::expr_getnextarraykey::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_gettime: // expr_gettime
        value.YY_MOVE_OR_COPY< ast::expr_gettime::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_hash: // expr_hash
        value.YY_MOVE_OR_COPY< ast::expr_hash::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_identifier: // expr_identifier
        value.YY_MOVE_OR_COPY< ast::expr_identifier::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_integer: // expr_integer
        value.YY_MOVE_OR_COPY< ast::expr_integer::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_isdefined: // expr_isdefined
        value.YY_MOVE_OR_COPY< ast::expr_isdefined::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_istring: // expr_istring
        value.YY_MOVE_OR_COPY< ast::expr_istring::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_level: // expr_level
        value.YY_MOVE_OR_COPY< ast::expr_level::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_method: // expr_method
        value.YY_MOVE_OR_COPY< ast::expr_method::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_not: // expr_not
        value.YY_MOVE_OR_COPY< ast::expr_not::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_parameters: // expr_parameters
        value.YY_MOVE_OR_COPY< ast::expr_parameters::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_paren: // expr_paren
        value.YY_MOVE_OR_COPY< ast::expr_paren::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_path: // expr_path
        value.YY_MOVE_OR_COPY< ast::expr_path::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_reference: // expr_reference
        value.YY_MOVE_OR_COPY< ast::expr_reference::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_self: // expr_self
        value.YY_MOVE_OR_COPY< ast::expr_self::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_size: // expr_size
        value.YY_MOVE_OR_COPY< ast::expr_size::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_string: // expr_string
        value.YY_MOVE_OR_COPY< ast::expr_string::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_true: // expr_true
        value.YY_MOVE_OR_COPY< ast::expr_true::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_undefined: // expr_undefined
        value.YY_MOVE_OR_COPY< ast::expr_undefined::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_vector: // expr_vector
        value.YY_MOVE_OR_COPY< ast::expr_vector::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_vectorscale: // expr_vectorscale
        value.YY_MOVE_OR_COPY< ast::expr_vectorscale::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_vectortoangles: // expr_vectortoangles
        value.YY_MOVE_OR_COPY< ast::expr_vectortoangles::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_include: // include
        value.YY_MOVE_OR_COPY< ast::include::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
        value.YY_MOVE_OR_COPY< ast::program::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_stmt_or_dev: // stmt_or_dev
        value.YY_MOVE_OR_COPY< ast::stmt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.YY_MOVE_OR_COPY< ast::stmt_assign::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.YY_MOVE_OR_COPY< ast::stmt_break::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        value.YY_MOVE_OR_COPY< ast::stmt_breakpoint::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.YY_MOVE_OR_COPY< ast::stmt_call::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.YY_MOVE_OR_COPY< ast::stmt_case::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.YY_MOVE_OR_COPY< ast::stmt_continue::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.YY_MOVE_OR_COPY< ast::stmt_default::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_dev: // stmt_dev
        value.YY_MOVE_OR_COPY< ast::stmt_dev::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_dowhile: // stmt_dowhile
        value.YY_MOVE_OR_COPY< ast::stmt_dowhile::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.YY_MOVE_OR_COPY< ast::stmt_endon::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_expr: // stmt_expr
        value.YY_MOVE_OR_COPY< ast::stmt_expr::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.YY_MOVE_OR_COPY< ast::stmt_for::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.YY_MOVE_OR_COPY< ast::stmt_foreach::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.YY_MOVE_OR_COPY< ast::stmt_if::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.YY_MOVE_OR_COPY< ast::stmt_ifelse::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_stmt_or_dev_list: // stmt_or_dev_list
      case symbol_kind::S_stmt_block: // stmt_block
        value.YY_MOVE_OR_COPY< ast::stmt_list::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.YY_MOVE_OR_COPY< ast::stmt_notify::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        value.YY_MOVE_OR_COPY< ast::stmt_prof_begin::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        value.YY_MOVE_OR_COPY< ast::stmt_prof_end::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.YY_MOVE_OR_COPY< ast::stmt_return::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.YY_MOVE_OR_COPY< ast::stmt_switch::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.YY_MOVE_OR_COPY< ast::stmt_wait::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.YY_MOVE_OR_COPY< ast::stmt_waittill::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.YY_MOVE_OR_COPY< ast::stmt_waittillframeend::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.YY_MOVE_OR_COPY< ast::stmt_waittillmatch::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.YY_MOVE_OR_COPY< ast::stmt_while::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FIELD: // "field"
      case symbol_kind::S_PATH: // "path"
      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_HASH: // "hash"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INTEGER: // "integer"
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_pointer: // expr_pointer
        value.move< ast::call > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_declaration: // declaration
        value.move< ast::decl > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decl_constant: // decl_constant
        value.move< ast::decl_constant::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decl_thread: // decl_thread
        value.move< ast::decl_thread::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decl_usingtree: // decl_usingtree
        value.move< ast::decl_usingtree::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_or_empty: // expr_or_empty
      case symbol_kind::S_expr_assign: // expr_assign
      case symbol_kind::S_expr_increment: // expr_increment
      case symbol_kind::S_expr_decrement: // expr_decrement
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
      case symbol_kind::S_expr_object: // expr_object
        value.move< ast::expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_abs: // expr_abs
        value.move< ast::expr_abs::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_angleclamp180: // expr_angleclamp180
        value.move< ast::expr_angleclamp180::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_anglestoforward: // expr_anglestoforward
        value.move< ast::expr_anglestoforward::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_anglestoright: // expr_anglestoright
        value.move< ast::expr_anglestoright::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_anglestoup: // expr_anglestoup
        value.move< ast::expr_anglestoup::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_anim: // expr_anim
        value.move< ast::expr_anim::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_animation: // expr_animation
        value.move< ast::expr_animation::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_no_empty: // expr_arguments_no_empty
        value.move< ast::expr_arguments::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_array: // expr_array
        value.move< ast::expr_array::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call: // expr_call
        value.move< ast::expr_call::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_complement: // expr_complement
        value.move< ast::expr_complement::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_empty_array: // expr_empty_array
        value.move< ast::expr_empty_array::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_false: // expr_false
        value.move< ast::expr_false::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_field: // expr_field
        value.move< ast::expr_field::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_float: // expr_float
        value.move< ast::expr_float::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_game: // expr_game
        value.move< ast::expr_game::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvar: // expr_getdvar
        value.move< ast::expr_getdvar::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarcoloralpha: // expr_getdvarcoloralpha
        value.move< ast::expr_getdvarcoloralpha::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarcolorblue: // expr_getdvarcolorblue
        value.move< ast::expr_getdvarcolorblue::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarcolorgreen: // expr_getdvarcolorgreen
        value.move< ast::expr_getdvarcolorgreen::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarcolorred: // expr_getdvarcolorred
        value.move< ast::expr_getdvarcolorred::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarfloat: // expr_getdvarfloat
        value.move< ast::expr_getdvarfloat::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarint: // expr_getdvarint
        value.move< ast::expr_getdvarint::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getdvarvector: // expr_getdvarvector
        value.move< ast::expr_getdvarvector::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getfirstarraykey: // expr_getfirstarraykey
        value.move< ast::expr_getfirstarraykey::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_getnextarraykey: // expr_getnextarraykey
        value.move< ast::expr_getnextarraykey::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_gettime: // expr_gettime
        value.move< ast::expr_gettime::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_hash: // expr_hash
        value.move< ast::expr_hash::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_identifier: // expr_identifier
        value.move< ast::expr_identifier::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_integer: // expr_integer
        value.move< ast::expr_integer::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_isdefined: // expr_isdefined
        value.move< ast::expr_isdefined::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_istring: // expr_istring
        value.move< ast::expr_istring::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_level: // expr_level
        value.move< ast::expr_level::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_method: // expr_method
        value.move< ast::expr_method::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_not: // expr_not
        value.move< ast::expr_not::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_parameters: // expr_parameters
        value.move< ast::expr_parameters::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_paren: // expr_paren
        value.move< ast::expr_paren::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_path: // expr_path
        value.move< ast::expr_path::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_reference: // expr_reference
        value.move< ast::expr_reference::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_self: // expr_self
        value.move< ast::expr_self::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_size: // expr_size
        value.move< ast::expr_size::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_string: // expr_string
        value.move< ast::expr_string::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_true: // expr_true
        value.move< ast::expr_true::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_undefined: // expr_undefined
        value.move< ast::expr_undefined::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_vector: // expr_vector
        value.move< ast::expr_vector::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_vectorscale: // expr_vectorscale
        value.move< ast::expr_vectorscale::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_vectortoangles: // expr_vectortoangles
        value.move< ast::expr_vectortoangles::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_include: // include
        value.move< ast::include::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
        value.move< ast::program::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_stmt_or_dev: // stmt_or_dev
        value.move< ast::stmt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.move< ast::stmt_assign::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.move< ast::stmt_break::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        value.move< ast::stmt_breakpoint::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.move< ast::stmt_call::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.move< ast::stmt_case::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.move< ast::stmt_continue::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.move< ast::stmt_default::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_dev: // stmt_dev
        value.move< ast::stmt_dev::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_dowhile: // stmt_dowhile
        value.move< ast::stmt_dowhile::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.move< ast::stmt_endon::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_expr: // stmt_expr
        value.move< ast::stmt_expr::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.move< ast::stmt_for::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.move< ast::stmt_foreach::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.move< ast::stmt_if::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.move< ast::stmt_ifelse::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_stmt_or_dev_list: // stmt_or_dev_list
      case symbol_kind::S_stmt_block: // stmt_block
        value.move< ast::stmt_list::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.move< ast::stmt_notify::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        value.move< ast::stmt_prof_begin::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        value.move< ast::stmt_prof_end::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.move< ast::stmt_return::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.move< ast::stmt_switch::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.move< ast::stmt_wait::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.move< ast::stmt_waittill::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.move< ast::stmt_waittillframeend::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.move< ast::stmt_waittillmatch::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.move< ast::stmt_while::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FIELD: // "field"
      case symbol_kind::S_PATH: // "path"
      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_HASH: // "hash"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INTEGER: // "integer"
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_pointer: // expr_pointer
        value.copy< ast::call > (that.value);
        break;

      case symbol_kind::S_declaration: // declaration
        value.copy< ast::decl > (that.value);
        break;

      case symbol_kind::S_decl_constant: // decl_constant
        value.copy< ast::decl_constant::ptr > (that.value);
        break;

      case symbol_kind::S_decl_thread: // decl_thread
        value.copy< ast::decl_thread::ptr > (that.value);
        break;

      case symbol_kind::S_decl_usingtree: // decl_usingtree
        value.copy< ast::decl_usingtree::ptr > (that.value);
        break;

      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_or_empty: // expr_or_empty
      case symbol_kind::S_expr_assign: // expr_assign
      case symbol_kind::S_expr_increment: // expr_increment
      case symbol_kind::S_expr_decrement: // expr_decrement
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
      case symbol_kind::S_expr_object: // expr_object
        value.copy< ast::expr > (that.value);
        break;

      case symbol_kind::S_expr_abs: // expr_abs
        value.copy< ast::expr_abs::ptr > (that.value);
        break;

      case symbol_kind::S_expr_angleclamp180: // expr_angleclamp180
        value.copy< ast::expr_angleclamp180::ptr > (that.value);
        break;

      case symbol_kind::S_expr_anglestoforward: // expr_anglestoforward
        value.copy< ast::expr_anglestoforward::ptr > (that.value);
        break;

      case symbol_kind::S_expr_anglestoright: // expr_anglestoright
        value.copy< ast::expr_anglestoright::ptr > (that.value);
        break;

      case symbol_kind::S_expr_anglestoup: // expr_anglestoup
        value.copy< ast::expr_anglestoup::ptr > (that.value);
        break;

      case symbol_kind::S_expr_anim: // expr_anim
        value.copy< ast::expr_anim::ptr > (that.value);
        break;

      case symbol_kind::S_expr_animation: // expr_animation
        value.copy< ast::expr_animation::ptr > (that.value);
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_no_empty: // expr_arguments_no_empty
        value.copy< ast::expr_arguments::ptr > (that.value);
        break;

      case symbol_kind::S_expr_array: // expr_array
        value.copy< ast::expr_array::ptr > (that.value);
        break;

      case symbol_kind::S_expr_call: // expr_call
        value.copy< ast::expr_call::ptr > (that.value);
        break;

      case symbol_kind::S_expr_complement: // expr_complement
        value.copy< ast::expr_complement::ptr > (that.value);
        break;

      case symbol_kind::S_expr_empty_array: // expr_empty_array
        value.copy< ast::expr_empty_array::ptr > (that.value);
        break;

      case symbol_kind::S_expr_false: // expr_false
        value.copy< ast::expr_false::ptr > (that.value);
        break;

      case symbol_kind::S_expr_field: // expr_field
        value.copy< ast::expr_field::ptr > (that.value);
        break;

      case symbol_kind::S_expr_float: // expr_float
        value.copy< ast::expr_float::ptr > (that.value);
        break;

      case symbol_kind::S_expr_game: // expr_game
        value.copy< ast::expr_game::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvar: // expr_getdvar
        value.copy< ast::expr_getdvar::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarcoloralpha: // expr_getdvarcoloralpha
        value.copy< ast::expr_getdvarcoloralpha::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarcolorblue: // expr_getdvarcolorblue
        value.copy< ast::expr_getdvarcolorblue::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarcolorgreen: // expr_getdvarcolorgreen
        value.copy< ast::expr_getdvarcolorgreen::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarcolorred: // expr_getdvarcolorred
        value.copy< ast::expr_getdvarcolorred::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarfloat: // expr_getdvarfloat
        value.copy< ast::expr_getdvarfloat::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarint: // expr_getdvarint
        value.copy< ast::expr_getdvarint::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarvector: // expr_getdvarvector
        value.copy< ast::expr_getdvarvector::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getfirstarraykey: // expr_getfirstarraykey
        value.copy< ast::expr_getfirstarraykey::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getnextarraykey: // expr_getnextarraykey
        value.copy< ast::expr_getnextarraykey::ptr > (that.value);
        break;

      case symbol_kind::S_expr_gettime: // expr_gettime
        value.copy< ast::expr_gettime::ptr > (that.value);
        break;

      case symbol_kind::S_expr_hash: // expr_hash
        value.copy< ast::expr_hash::ptr > (that.value);
        break;

      case symbol_kind::S_expr_identifier: // expr_identifier
        value.copy< ast::expr_identifier::ptr > (that.value);
        break;

      case symbol_kind::S_expr_integer: // expr_integer
        value.copy< ast::expr_integer::ptr > (that.value);
        break;

      case symbol_kind::S_expr_isdefined: // expr_isdefined
        value.copy< ast::expr_isdefined::ptr > (that.value);
        break;

      case symbol_kind::S_expr_istring: // expr_istring
        value.copy< ast::expr_istring::ptr > (that.value);
        break;

      case symbol_kind::S_expr_level: // expr_level
        value.copy< ast::expr_level::ptr > (that.value);
        break;

      case symbol_kind::S_expr_method: // expr_method
        value.copy< ast::expr_method::ptr > (that.value);
        break;

      case symbol_kind::S_expr_not: // expr_not
        value.copy< ast::expr_not::ptr > (that.value);
        break;

      case symbol_kind::S_expr_parameters: // expr_parameters
        value.copy< ast::expr_parameters::ptr > (that.value);
        break;

      case symbol_kind::S_expr_paren: // expr_paren
        value.copy< ast::expr_paren::ptr > (that.value);
        break;

      case symbol_kind::S_expr_path: // expr_path
        value.copy< ast::expr_path::ptr > (that.value);
        break;

      case symbol_kind::S_expr_reference: // expr_reference
        value.copy< ast::expr_reference::ptr > (that.value);
        break;

      case symbol_kind::S_expr_self: // expr_self
        value.copy< ast::expr_self::ptr > (that.value);
        break;

      case symbol_kind::S_expr_size: // expr_size
        value.copy< ast::expr_size::ptr > (that.value);
        break;

      case symbol_kind::S_expr_string: // expr_string
        value.copy< ast::expr_string::ptr > (that.value);
        break;

      case symbol_kind::S_expr_true: // expr_true
        value.copy< ast::expr_true::ptr > (that.value);
        break;

      case symbol_kind::S_expr_undefined: // expr_undefined
        value.copy< ast::expr_undefined::ptr > (that.value);
        break;

      case symbol_kind::S_expr_vector: // expr_vector
        value.copy< ast::expr_vector::ptr > (that.value);
        break;

      case symbol_kind::S_expr_vectorscale: // expr_vectorscale
        value.copy< ast::expr_vectorscale::ptr > (that.value);
        break;

      case symbol_kind::S_expr_vectortoangles: // expr_vectortoangles
        value.copy< ast::expr_vectortoangles::ptr > (that.value);
        break;

      case symbol_kind::S_include: // include
        value.copy< ast::include::ptr > (that.value);
        break;

      case symbol_kind::S_program: // program
        value.copy< ast::program::ptr > (that.value);
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_stmt_or_dev: // stmt_or_dev
        value.copy< ast::stmt > (that.value);
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.copy< ast::stmt_assign::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.copy< ast::stmt_break::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        value.copy< ast::stmt_breakpoint::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.copy< ast::stmt_call::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.copy< ast::stmt_case::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.copy< ast::stmt_continue::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.copy< ast::stmt_default::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_dev: // stmt_dev
        value.copy< ast::stmt_dev::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_dowhile: // stmt_dowhile
        value.copy< ast::stmt_dowhile::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.copy< ast::stmt_endon::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_expr: // stmt_expr
        value.copy< ast::stmt_expr::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.copy< ast::stmt_for::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.copy< ast::stmt_foreach::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.copy< ast::stmt_if::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.copy< ast::stmt_ifelse::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_stmt_or_dev_list: // stmt_or_dev_list
      case symbol_kind::S_stmt_block: // stmt_block
        value.copy< ast::stmt_list::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.copy< ast::stmt_notify::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        value.copy< ast::stmt_prof_begin::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        value.copy< ast::stmt_prof_end::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.copy< ast::stmt_return::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.copy< ast::stmt_switch::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.copy< ast::stmt_wait::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.copy< ast::stmt_waittill::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.copy< ast::stmt_waittillframeend::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.copy< ast::stmt_waittillmatch::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.copy< ast::stmt_while::ptr > (that.value);
        break;

      case symbol_kind::S_FIELD: // "field"
      case symbol_kind::S_PATH: // "path"
      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_HASH: // "hash"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INTEGER: // "integer"
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_pointer: // expr_pointer
        value.move< ast::call > (that.value);
        break;

      case symbol_kind::S_declaration: // declaration
        value.move< ast::decl > (that.value);
        break;

      case symbol_kind::S_decl_constant: // decl_constant
        value.move< ast::decl_constant::ptr > (that.value);
        break;

      case symbol_kind::S_decl_thread: // decl_thread
        value.move< ast::decl_thread::ptr > (that.value);
        break;

      case symbol_kind::S_decl_usingtree: // decl_usingtree
        value.move< ast::decl_usingtree::ptr > (that.value);
        break;

      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_or_empty: // expr_or_empty
      case symbol_kind::S_expr_assign: // expr_assign
      case symbol_kind::S_expr_increment: // expr_increment
      case symbol_kind::S_expr_decrement: // expr_decrement
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
      case symbol_kind::S_expr_object: // expr_object
        value.move< ast::expr > (that.value);
        break;

      case symbol_kind::S_expr_abs: // expr_abs
        value.move< ast::expr_abs::ptr > (that.value);
        break;

      case symbol_kind::S_expr_angleclamp180: // expr_angleclamp180
        value.move< ast::expr_angleclamp180::ptr > (that.value);
        break;

      case symbol_kind::S_expr_anglestoforward: // expr_anglestoforward
        value.move< ast::expr_anglestoforward::ptr > (that.value);
        break;

      case symbol_kind::S_expr_anglestoright: // expr_anglestoright
        value.move< ast::expr_anglestoright::ptr > (that.value);
        break;

      case symbol_kind::S_expr_anglestoup: // expr_anglestoup
        value.move< ast::expr_anglestoup::ptr > (that.value);
        break;

      case symbol_kind::S_expr_anim: // expr_anim
        value.move< ast::expr_anim::ptr > (that.value);
        break;

      case symbol_kind::S_expr_animation: // expr_animation
        value.move< ast::expr_animation::ptr > (that.value);
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_no_empty: // expr_arguments_no_empty
        value.move< ast::expr_arguments::ptr > (that.value);
        break;

      case symbol_kind::S_expr_array: // expr_array
        value.move< ast::expr_array::ptr > (that.value);
        break;

      case symbol_kind::S_expr_call: // expr_call
        value.move< ast::expr_call::ptr > (that.value);
        break;

      case symbol_kind::S_expr_complement: // expr_complement
        value.move< ast::expr_complement::ptr > (that.value);
        break;

      case symbol_kind::S_expr_empty_array: // expr_empty_array
        value.move< ast::expr_empty_array::ptr > (that.value);
        break;

      case symbol_kind::S_expr_false: // expr_false
        value.move< ast::expr_false::ptr > (that.value);
        break;

      case symbol_kind::S_expr_field: // expr_field
        value.move< ast::expr_field::ptr > (that.value);
        break;

      case symbol_kind::S_expr_float: // expr_float
        value.move< ast::expr_float::ptr > (that.value);
        break;

      case symbol_kind::S_expr_game: // expr_game
        value.move< ast::expr_game::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvar: // expr_getdvar
        value.move< ast::expr_getdvar::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarcoloralpha: // expr_getdvarcoloralpha
        value.move< ast::expr_getdvarcoloralpha::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarcolorblue: // expr_getdvarcolorblue
        value.move< ast::expr_getdvarcolorblue::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarcolorgreen: // expr_getdvarcolorgreen
        value.move< ast::expr_getdvarcolorgreen::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarcolorred: // expr_getdvarcolorred
        value.move< ast::expr_getdvarcolorred::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarfloat: // expr_getdvarfloat
        value.move< ast::expr_getdvarfloat::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarint: // expr_getdvarint
        value.move< ast::expr_getdvarint::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getdvarvector: // expr_getdvarvector
        value.move< ast::expr_getdvarvector::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getfirstarraykey: // expr_getfirstarraykey
        value.move< ast::expr_getfirstarraykey::ptr > (that.value);
        break;

      case symbol_kind::S_expr_getnextarraykey: // expr_getnextarraykey
        value.move< ast::expr_getnextarraykey::ptr > (that.value);
        break;

      case symbol_kind::S_expr_gettime: // expr_gettime
        value.move< ast::expr_gettime::ptr > (that.value);
        break;

      case symbol_kind::S_expr_hash: // expr_hash
        value.move< ast::expr_hash::ptr > (that.value);
        break;

      case symbol_kind::S_expr_identifier: // expr_identifier
        value.move< ast::expr_identifier::ptr > (that.value);
        break;

      case symbol_kind::S_expr_integer: // expr_integer
        value.move< ast::expr_integer::ptr > (that.value);
        break;

      case symbol_kind::S_expr_isdefined: // expr_isdefined
        value.move< ast::expr_isdefined::ptr > (that.value);
        break;

      case symbol_kind::S_expr_istring: // expr_istring
        value.move< ast::expr_istring::ptr > (that.value);
        break;

      case symbol_kind::S_expr_level: // expr_level
        value.move< ast::expr_level::ptr > (that.value);
        break;

      case symbol_kind::S_expr_method: // expr_method
        value.move< ast::expr_method::ptr > (that.value);
        break;

      case symbol_kind::S_expr_not: // expr_not
        value.move< ast::expr_not::ptr > (that.value);
        break;

      case symbol_kind::S_expr_parameters: // expr_parameters
        value.move< ast::expr_parameters::ptr > (that.value);
        break;

      case symbol_kind::S_expr_paren: // expr_paren
        value.move< ast::expr_paren::ptr > (that.value);
        break;

      case symbol_kind::S_expr_path: // expr_path
        value.move< ast::expr_path::ptr > (that.value);
        break;

      case symbol_kind::S_expr_reference: // expr_reference
        value.move< ast::expr_reference::ptr > (that.value);
        break;

      case symbol_kind::S_expr_self: // expr_self
        value.move< ast::expr_self::ptr > (that.value);
        break;

      case symbol_kind::S_expr_size: // expr_size
        value.move< ast::expr_size::ptr > (that.value);
        break;

      case symbol_kind::S_expr_string: // expr_string
        value.move< ast::expr_string::ptr > (that.value);
        break;

      case symbol_kind::S_expr_true: // expr_true
        value.move< ast::expr_true::ptr > (that.value);
        break;

      case symbol_kind::S_expr_undefined: // expr_undefined
        value.move< ast::expr_undefined::ptr > (that.value);
        break;

      case symbol_kind::S_expr_vector: // expr_vector
        value.move< ast::expr_vector::ptr > (that.value);
        break;

      case symbol_kind::S_expr_vectorscale: // expr_vectorscale
        value.move< ast::expr_vectorscale::ptr > (that.value);
        break;

      case symbol_kind::S_expr_vectortoangles: // expr_vectortoangles
        value.move< ast::expr_vectortoangles::ptr > (that.value);
        break;

      case symbol_kind::S_include: // include
        value.move< ast::include::ptr > (that.value);
        break;

      case symbol_kind::S_program: // program
        value.move< ast::program::ptr > (that.value);
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_stmt_or_dev: // stmt_or_dev
        value.move< ast::stmt > (that.value);
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.move< ast::stmt_assign::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.move< ast::stmt_break::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        value.move< ast::stmt_breakpoint::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.move< ast::stmt_call::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.move< ast::stmt_case::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.move< ast::stmt_continue::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.move< ast::stmt_default::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_dev: // stmt_dev
        value.move< ast::stmt_dev::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_dowhile: // stmt_dowhile
        value.move< ast::stmt_dowhile::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.move< ast::stmt_endon::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_expr: // stmt_expr
        value.move< ast::stmt_expr::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.move< ast::stmt_for::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.move< ast::stmt_foreach::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.move< ast::stmt_if::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.move< ast::stmt_ifelse::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_stmt_or_dev_list: // stmt_or_dev_list
      case symbol_kind::S_stmt_block: // stmt_block
        value.move< ast::stmt_list::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.move< ast::stmt_notify::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        value.move< ast::stmt_prof_begin::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        value.move< ast::stmt_prof_end::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.move< ast::stmt_return::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.move< ast::stmt_switch::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.move< ast::stmt_wait::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.move< ast::stmt_waittill::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.move< ast::stmt_waittillframeend::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.move< ast::stmt_waittillmatch::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.move< ast::stmt_while::ptr > (that.value);
        break;

      case symbol_kind::S_FIELD: // "field"
      case symbol_kind::S_PATH: // "path"
      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_HASH: // "hash"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INTEGER: // "integer"
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if T6DEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if T6DEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // T6DEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    /// Discard the LAC context in case there still is one left from a
    /// previous invocation.
    yy_lac_discard_ ("init");

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (lexer));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        if (!yy_lac_establish_ (yyla.kind ()))
           goto yyerrlab;
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        if (!yy_lac_establish_ (yyla.kind ()))
           goto yyerrlab;

        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    yy_lac_discard_ ("shift");
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_pointer: // expr_pointer
        yylhs.value.emplace< ast::call > ();
        break;

      case symbol_kind::S_declaration: // declaration
        yylhs.value.emplace< ast::decl > ();
        break;

      case symbol_kind::S_decl_constant: // decl_constant
        yylhs.value.emplace< ast::decl_constant::ptr > ();
        break;

      case symbol_kind::S_decl_thread: // decl_thread
        yylhs.value.emplace< ast::decl_thread::ptr > ();
        break;

      case symbol_kind::S_decl_usingtree: // decl_usingtree
        yylhs.value.emplace< ast::decl_usingtree::ptr > ();
        break;

      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_or_empty: // expr_or_empty
      case symbol_kind::S_expr_assign: // expr_assign
      case symbol_kind::S_expr_increment: // expr_increment
      case symbol_kind::S_expr_decrement: // expr_decrement
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
      case symbol_kind::S_expr_object: // expr_object
        yylhs.value.emplace< ast::expr > ();
        break;

      case symbol_kind::S_expr_abs: // expr_abs
        yylhs.value.emplace< ast::expr_abs::ptr > ();
        break;

      case symbol_kind::S_expr_angleclamp180: // expr_angleclamp180
        yylhs.value.emplace< ast::expr_angleclamp180::ptr > ();
        break;

      case symbol_kind::S_expr_anglestoforward: // expr_anglestoforward
        yylhs.value.emplace< ast::expr_anglestoforward::ptr > ();
        break;

      case symbol_kind::S_expr_anglestoright: // expr_anglestoright
        yylhs.value.emplace< ast::expr_anglestoright::ptr > ();
        break;

      case symbol_kind::S_expr_anglestoup: // expr_anglestoup
        yylhs.value.emplace< ast::expr_anglestoup::ptr > ();
        break;

      case symbol_kind::S_expr_anim: // expr_anim
        yylhs.value.emplace< ast::expr_anim::ptr > ();
        break;

      case symbol_kind::S_expr_animation: // expr_animation
        yylhs.value.emplace< ast::expr_animation::ptr > ();
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_no_empty: // expr_arguments_no_empty
        yylhs.value.emplace< ast::expr_arguments::ptr > ();
        break;

      case symbol_kind::S_expr_array: // expr_array
        yylhs.value.emplace< ast::expr_array::ptr > ();
        break;

      case symbol_kind::S_expr_call: // expr_call
        yylhs.value.emplace< ast::expr_call::ptr > ();
        break;

      case symbol_kind::S_expr_complement: // expr_complement
        yylhs.value.emplace< ast::expr_complement::ptr > ();
        break;

      case symbol_kind::S_expr_empty_array: // expr_empty_array
        yylhs.value.emplace< ast::expr_empty_array::ptr > ();
        break;

      case symbol_kind::S_expr_false: // expr_false
        yylhs.value.emplace< ast::expr_false::ptr > ();
        break;

      case symbol_kind::S_expr_field: // expr_field
        yylhs.value.emplace< ast::expr_field::ptr > ();
        break;

      case symbol_kind::S_expr_float: // expr_float
        yylhs.value.emplace< ast::expr_float::ptr > ();
        break;

      case symbol_kind::S_expr_game: // expr_game
        yylhs.value.emplace< ast::expr_game::ptr > ();
        break;

      case symbol_kind::S_expr_getdvar: // expr_getdvar
        yylhs.value.emplace< ast::expr_getdvar::ptr > ();
        break;

      case symbol_kind::S_expr_getdvarcoloralpha: // expr_getdvarcoloralpha
        yylhs.value.emplace< ast::expr_getdvarcoloralpha::ptr > ();
        break;

      case symbol_kind::S_expr_getdvarcolorblue: // expr_getdvarcolorblue
        yylhs.value.emplace< ast::expr_getdvarcolorblue::ptr > ();
        break;

      case symbol_kind::S_expr_getdvarcolorgreen: // expr_getdvarcolorgreen
        yylhs.value.emplace< ast::expr_getdvarcolorgreen::ptr > ();
        break;

      case symbol_kind::S_expr_getdvarcolorred: // expr_getdvarcolorred
        yylhs.value.emplace< ast::expr_getdvarcolorred::ptr > ();
        break;

      case symbol_kind::S_expr_getdvarfloat: // expr_getdvarfloat
        yylhs.value.emplace< ast::expr_getdvarfloat::ptr > ();
        break;

      case symbol_kind::S_expr_getdvarint: // expr_getdvarint
        yylhs.value.emplace< ast::expr_getdvarint::ptr > ();
        break;

      case symbol_kind::S_expr_getdvarvector: // expr_getdvarvector
        yylhs.value.emplace< ast::expr_getdvarvector::ptr > ();
        break;

      case symbol_kind::S_expr_getfirstarraykey: // expr_getfirstarraykey
        yylhs.value.emplace< ast::expr_getfirstarraykey::ptr > ();
        break;

      case symbol_kind::S_expr_getnextarraykey: // expr_getnextarraykey
        yylhs.value.emplace< ast::expr_getnextarraykey::ptr > ();
        break;

      case symbol_kind::S_expr_gettime: // expr_gettime
        yylhs.value.emplace< ast::expr_gettime::ptr > ();
        break;

      case symbol_kind::S_expr_hash: // expr_hash
        yylhs.value.emplace< ast::expr_hash::ptr > ();
        break;

      case symbol_kind::S_expr_identifier: // expr_identifier
        yylhs.value.emplace< ast::expr_identifier::ptr > ();
        break;

      case symbol_kind::S_expr_integer: // expr_integer
        yylhs.value.emplace< ast::expr_integer::ptr > ();
        break;

      case symbol_kind::S_expr_isdefined: // expr_isdefined
        yylhs.value.emplace< ast::expr_isdefined::ptr > ();
        break;

      case symbol_kind::S_expr_istring: // expr_istring
        yylhs.value.emplace< ast::expr_istring::ptr > ();
        break;

      case symbol_kind::S_expr_level: // expr_level
        yylhs.value.emplace< ast::expr_level::ptr > ();
        break;

      case symbol_kind::S_expr_method: // expr_method
        yylhs.value.emplace< ast::expr_method::ptr > ();
        break;

      case symbol_kind::S_expr_not: // expr_not
        yylhs.value.emplace< ast::expr_not::ptr > ();
        break;

      case symbol_kind::S_expr_parameters: // expr_parameters
        yylhs.value.emplace< ast::expr_parameters::ptr > ();
        break;

      case symbol_kind::S_expr_paren: // expr_paren
        yylhs.value.emplace< ast::expr_paren::ptr > ();
        break;

      case symbol_kind::S_expr_path: // expr_path
        yylhs.value.emplace< ast::expr_path::ptr > ();
        break;

      case symbol_kind::S_expr_reference: // expr_reference
        yylhs.value.emplace< ast::expr_reference::ptr > ();
        break;

      case symbol_kind::S_expr_self: // expr_self
        yylhs.value.emplace< ast::expr_self::ptr > ();
        break;

      case symbol_kind::S_expr_size: // expr_size
        yylhs.value.emplace< ast::expr_size::ptr > ();
        break;

      case symbol_kind::S_expr_string: // expr_string
        yylhs.value.emplace< ast::expr_string::ptr > ();
        break;

      case symbol_kind::S_expr_true: // expr_true
        yylhs.value.emplace< ast::expr_true::ptr > ();
        break;

      case symbol_kind::S_expr_undefined: // expr_undefined
        yylhs.value.emplace< ast::expr_undefined::ptr > ();
        break;

      case symbol_kind::S_expr_vector: // expr_vector
        yylhs.value.emplace< ast::expr_vector::ptr > ();
        break;

      case symbol_kind::S_expr_vectorscale: // expr_vectorscale
        yylhs.value.emplace< ast::expr_vectorscale::ptr > ();
        break;

      case symbol_kind::S_expr_vectortoangles: // expr_vectortoangles
        yylhs.value.emplace< ast::expr_vectortoangles::ptr > ();
        break;

      case symbol_kind::S_include: // include
        yylhs.value.emplace< ast::include::ptr > ();
        break;

      case symbol_kind::S_program: // program
        yylhs.value.emplace< ast::program::ptr > ();
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_stmt_or_dev: // stmt_or_dev
        yylhs.value.emplace< ast::stmt > ();
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        yylhs.value.emplace< ast::stmt_assign::ptr > ();
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        yylhs.value.emplace< ast::stmt_break::ptr > ();
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        yylhs.value.emplace< ast::stmt_breakpoint::ptr > ();
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        yylhs.value.emplace< ast::stmt_call::ptr > ();
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        yylhs.value.emplace< ast::stmt_case::ptr > ();
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        yylhs.value.emplace< ast::stmt_continue::ptr > ();
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        yylhs.value.emplace< ast::stmt_default::ptr > ();
        break;

      case symbol_kind::S_stmt_dev: // stmt_dev
        yylhs.value.emplace< ast::stmt_dev::ptr > ();
        break;

      case symbol_kind::S_stmt_dowhile: // stmt_dowhile
        yylhs.value.emplace< ast::stmt_dowhile::ptr > ();
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        yylhs.value.emplace< ast::stmt_endon::ptr > ();
        break;

      case symbol_kind::S_stmt_expr: // stmt_expr
        yylhs.value.emplace< ast::stmt_expr::ptr > ();
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        yylhs.value.emplace< ast::stmt_for::ptr > ();
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        yylhs.value.emplace< ast::stmt_foreach::ptr > ();
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        yylhs.value.emplace< ast::stmt_if::ptr > ();
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        yylhs.value.emplace< ast::stmt_ifelse::ptr > ();
        break;

      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_stmt_or_dev_list: // stmt_or_dev_list
      case symbol_kind::S_stmt_block: // stmt_block
        yylhs.value.emplace< ast::stmt_list::ptr > ();
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        yylhs.value.emplace< ast::stmt_notify::ptr > ();
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        yylhs.value.emplace< ast::stmt_prof_begin::ptr > ();
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        yylhs.value.emplace< ast::stmt_prof_end::ptr > ();
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        yylhs.value.emplace< ast::stmt_return::ptr > ();
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        yylhs.value.emplace< ast::stmt_switch::ptr > ();
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        yylhs.value.emplace< ast::stmt_wait::ptr > ();
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        yylhs.value.emplace< ast::stmt_waittill::ptr > ();
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        yylhs.value.emplace< ast::stmt_waittillframeend::ptr > ();
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        yylhs.value.emplace< ast::stmt_waittillmatch::ptr > ();
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        yylhs.value.emplace< ast::stmt_while::ptr > ();
        break;

      case symbol_kind::S_FIELD: // "field"
      case symbol_kind::S_PATH: // "path"
      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_HASH: // "hash"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INTEGER: // "integer"
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // root: program
#line 284 "parser.ypp"
              { ast = std::move(yystack_[0].value.as < ast::program::ptr > ()); }
#line 2315 "parser.cpp"
    break;

  case 3: // root: %empty
#line 285 "parser.ypp"
              { ast = std::make_unique<ast::program>(yylhs.location); }
#line 2321 "parser.cpp"
    break;

  case 4: // program: program inline
#line 290 "parser.ypp"
        { yylhs.value.as < ast::program::ptr > () = std::move(yystack_[1].value.as < ast::program::ptr > ()); }
#line 2327 "parser.cpp"
    break;

  case 5: // program: program include
#line 292 "parser.ypp"
        { yylhs.value.as < ast::program::ptr > () = std::move(yystack_[1].value.as < ast::program::ptr > ()); yylhs.value.as < ast::program::ptr > ()->includes.push_back(std::move(yystack_[0].value.as < ast::include::ptr > ())); }
#line 2333 "parser.cpp"
    break;

  case 6: // program: program declaration
#line 294 "parser.ypp"
        { yylhs.value.as < ast::program::ptr > () = std::move(yystack_[1].value.as < ast::program::ptr > ()); yylhs.value.as < ast::program::ptr > ()->declarations.push_back(std::move(yystack_[0].value.as < ast::decl > ())); }
#line 2339 "parser.cpp"
    break;

  case 7: // program: inline
#line 296 "parser.ypp"
        { yylhs.value.as < ast::program::ptr > () = std::make_unique<ast::program>(yylhs.location); }
#line 2345 "parser.cpp"
    break;

  case 8: // program: include
#line 298 "parser.ypp"
        { yylhs.value.as < ast::program::ptr > () = std::make_unique<ast::program>(yylhs.location); yylhs.value.as < ast::program::ptr > ()->includes.push_back(std::move(yystack_[0].value.as < ast::include::ptr > ())); }
#line 2351 "parser.cpp"
    break;

  case 9: // program: declaration
#line 300 "parser.ypp"
        { yylhs.value.as < ast::program::ptr > () = std::make_unique<ast::program>(yylhs.location); yylhs.value.as < ast::program::ptr > ()->declarations.push_back(std::move(yystack_[0].value.as < ast::decl > ())); }
#line 2357 "parser.cpp"
    break;

  case 10: // inline: "#inline" expr_path ";"
#line 304 "parser.ypp"
                                 { lexer.push_header(yystack_[1].value.as < ast::expr_path::ptr > ()->value); }
#line 2363 "parser.cpp"
    break;

  case 11: // include: "#include" expr_path ";"
#line 309 "parser.ypp"
        { yylhs.value.as < ast::include::ptr > () = std::make_unique<ast::include>(yylhs.location, std::move(yystack_[1].value.as < ast::expr_path::ptr > ())); }
#line 2369 "parser.cpp"
    break;

  case 12: // declaration: "/#"
#line 313 "parser.ypp"
                        { yylhs.value.as < ast::decl > ().as_dev_begin = std::make_unique<ast::decl_dev_begin>(yylhs.location); }
#line 2375 "parser.cpp"
    break;

  case 13: // declaration: "#/"
#line 314 "parser.ypp"
                        { yylhs.value.as < ast::decl > ().as_dev_end = std::make_unique<ast::decl_dev_end>(yylhs.location); }
#line 2381 "parser.cpp"
    break;

  case 14: // declaration: decl_usingtree
#line 315 "parser.ypp"
                        { yylhs.value.as < ast::decl > ().as_usingtree = std::move(yystack_[0].value.as < ast::decl_usingtree::ptr > ()); }
#line 2387 "parser.cpp"
    break;

  case 15: // declaration: decl_constant
#line 316 "parser.ypp"
                        { yylhs.value.as < ast::decl > ().as_constant = std::move(yystack_[0].value.as < ast::decl_constant::ptr > ()); }
#line 2393 "parser.cpp"
    break;

  case 16: // declaration: decl_thread
#line 317 "parser.ypp"
                        { yylhs.value.as < ast::decl > ().as_thread = std::move(yystack_[0].value.as < ast::decl_thread::ptr > ()); }
#line 2399 "parser.cpp"
    break;

  case 17: // decl_usingtree: "#using_animtree" "(" expr_string ")" ";"
#line 322 "parser.ypp"
        { lexer.ban_header(yylhs.location); yylhs.value.as < ast::decl_usingtree::ptr > () = std::make_unique<ast::decl_usingtree>(yylhs.location, std::move(yystack_[2].value.as < ast::expr_string::ptr > ())); }
#line 2405 "parser.cpp"
    break;

  case 18: // decl_constant: expr_identifier "=" expr ";"
#line 327 "parser.ypp"
        { yylhs.value.as < ast::decl_constant::ptr > () = std::make_unique<ast::decl_constant>(yylhs.location, std::move(yystack_[3].value.as < ast::expr_identifier::ptr > ()), std::move(yystack_[1].value.as < ast::expr > ())); }
#line 2411 "parser.cpp"
    break;

  case 19: // decl_thread: expr_identifier "(" expr_parameters ")" stmt_block
#line 332 "parser.ypp"
        { lexer.ban_header(yylhs.location); yylhs.value.as < ast::decl_thread::ptr > () = std::make_unique<ast::decl_thread>(yylhs.location, std::move(yystack_[4].value.as < ast::expr_identifier::ptr > ()), std::move(yystack_[2].value.as < ast::expr_parameters::ptr > ()), std::move(yystack_[0].value.as < ast::stmt_list::ptr > ())); }
#line 2417 "parser.cpp"
    break;

  case 20: // stmt: stmt_block
#line 336 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_list = std::move(yystack_[0].value.as < ast::stmt_list::ptr > ()); }
#line 2423 "parser.cpp"
    break;

  case 21: // stmt: stmt_call
#line 337 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_call = std::move(yystack_[0].value.as < ast::stmt_call::ptr > ()); }
#line 2429 "parser.cpp"
    break;

  case 22: // stmt: stmt_assign
#line 338 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_assign = std::move(yystack_[0].value.as < ast::stmt_assign::ptr > ()); }
#line 2435 "parser.cpp"
    break;

  case 23: // stmt: stmt_endon
#line 339 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_endon = std::move(yystack_[0].value.as < ast::stmt_endon::ptr > ()); }
#line 2441 "parser.cpp"
    break;

  case 24: // stmt: stmt_notify
#line 340 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_notify = std::move(yystack_[0].value.as < ast::stmt_notify::ptr > ()); }
#line 2447 "parser.cpp"
    break;

  case 25: // stmt: stmt_wait
#line 341 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_wait = std::move(yystack_[0].value.as < ast::stmt_wait::ptr > ()); }
#line 2453 "parser.cpp"
    break;

  case 26: // stmt: stmt_waittill
#line 342 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_waittill = std::move(yystack_[0].value.as < ast::stmt_waittill::ptr > ()); }
#line 2459 "parser.cpp"
    break;

  case 27: // stmt: stmt_waittillmatch
#line 343 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_waittillmatch = std::move(yystack_[0].value.as < ast::stmt_waittillmatch::ptr > ()); }
#line 2465 "parser.cpp"
    break;

  case 28: // stmt: stmt_waittillframeend
#line 344 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_waittillframeend = std::move(yystack_[0].value.as < ast::stmt_waittillframeend::ptr > ()); }
#line 2471 "parser.cpp"
    break;

  case 29: // stmt: stmt_if
#line 345 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_if = std::move(yystack_[0].value.as < ast::stmt_if::ptr > ()); }
#line 2477 "parser.cpp"
    break;

  case 30: // stmt: stmt_ifelse
#line 346 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_ifelse = std::move(yystack_[0].value.as < ast::stmt_ifelse::ptr > ()); }
#line 2483 "parser.cpp"
    break;

  case 31: // stmt: stmt_while
#line 347 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_while = std::move(yystack_[0].value.as < ast::stmt_while::ptr > ()); }
#line 2489 "parser.cpp"
    break;

  case 32: // stmt: stmt_dowhile
#line 348 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_dowhile = std::move(yystack_[0].value.as < ast::stmt_dowhile::ptr > ()); }
#line 2495 "parser.cpp"
    break;

  case 33: // stmt: stmt_for
#line 349 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_for = std::move(yystack_[0].value.as < ast::stmt_for::ptr > ()); }
#line 2501 "parser.cpp"
    break;

  case 34: // stmt: stmt_foreach
#line 350 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_foreach = std::move(yystack_[0].value.as < ast::stmt_foreach::ptr > ()); }
#line 2507 "parser.cpp"
    break;

  case 35: // stmt: stmt_switch
#line 351 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_switch = std::move(yystack_[0].value.as < ast::stmt_switch::ptr > ()); }
#line 2513 "parser.cpp"
    break;

  case 36: // stmt: stmt_case
#line 352 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_case = std::move(yystack_[0].value.as < ast::stmt_case::ptr > ()); }
#line 2519 "parser.cpp"
    break;

  case 37: // stmt: stmt_default
#line 353 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_default = std::move(yystack_[0].value.as < ast::stmt_default::ptr > ()); }
#line 2525 "parser.cpp"
    break;

  case 38: // stmt: stmt_break
#line 354 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_break = std::move(yystack_[0].value.as < ast::stmt_break::ptr > ()); }
#line 2531 "parser.cpp"
    break;

  case 39: // stmt: stmt_continue
#line 355 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_continue = std::move(yystack_[0].value.as < ast::stmt_continue::ptr > ()); }
#line 2537 "parser.cpp"
    break;

  case 40: // stmt: stmt_return
#line 356 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_return = std::move(yystack_[0].value.as < ast::stmt_return::ptr > ()); }
#line 2543 "parser.cpp"
    break;

  case 41: // stmt: stmt_breakpoint
#line 357 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_breakpoint = std::move(yystack_[0].value.as < ast::stmt_breakpoint::ptr > ()); }
#line 2549 "parser.cpp"
    break;

  case 42: // stmt: stmt_prof_begin
#line 358 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_prof_begin = std::move(yystack_[0].value.as < ast::stmt_prof_begin::ptr > ()); }
#line 2555 "parser.cpp"
    break;

  case 43: // stmt: stmt_prof_end
#line 359 "parser.ypp"
                             { yylhs.value.as < ast::stmt > ().as_prof_end = std::move(yystack_[0].value.as < ast::stmt_prof_end::ptr > ()); }
#line 2561 "parser.cpp"
    break;

  case 44: // stmt_or_dev: stmt
#line 363 "parser.ypp"
               { yylhs.value.as < ast::stmt > () = std::move(yystack_[0].value.as < ast::stmt > ()); }
#line 2567 "parser.cpp"
    break;

  case 45: // stmt_or_dev: stmt_dev
#line 364 "parser.ypp"
               { yylhs.value.as < ast::stmt > ().as_dev = std::move(yystack_[0].value.as < ast::stmt_dev::ptr > ()); }
#line 2573 "parser.cpp"
    break;

  case 46: // stmt_list: stmt_list stmt
#line 369 "parser.ypp"
        { yylhs.value.as < ast::stmt_list::ptr > () = std::move(yystack_[1].value.as < ast::stmt_list::ptr > ()); yylhs.value.as < ast::stmt_list::ptr > ()->list.push_back(std::move(yystack_[0].value.as < ast::stmt > ())); }
#line 2579 "parser.cpp"
    break;

  case 47: // stmt_list: stmt
#line 371 "parser.ypp"
        { yylhs.value.as < ast::stmt_list::ptr > () = std::make_unique<ast::stmt_list>(yylhs.location); yylhs.value.as < ast::stmt_list::ptr > ()->list.push_back(std::move(yystack_[0].value.as < ast::stmt > ())); }
#line 2585 "parser.cpp"
    break;

  case 48: // stmt_or_dev_list: stmt_or_dev_list stmt_or_dev
#line 376 "parser.ypp"
        { yylhs.value.as < ast::stmt_list::ptr > () = std::move(yystack_[1].value.as < ast::stmt_list::ptr > ()); yylhs.value.as < ast::stmt_list::ptr > ()->list.push_back(std::move(yystack_[0].value.as < ast::stmt > ())); }
#line 2591 "parser.cpp"
    break;

  case 49: // stmt_or_dev_list: stmt_or_dev
#line 378 "parser.ypp"
        { yylhs.value.as < ast::stmt_list::ptr > () = std::make_unique<ast::stmt_list>(yylhs.location); yylhs.value.as < ast::stmt_list::ptr > ()->list.push_back(std::move(yystack_[0].value.as < ast::stmt > ())); }
#line 2597 "parser.cpp"
    break;

  case 50: // stmt_dev: "/#" stmt_list "#/"
#line 382 "parser.ypp"
                                { yylhs.value.as < ast::stmt_dev::ptr > () = std::make_unique<ast::stmt_dev>(yylhs.location, std::move(yystack_[1].value.as < ast::stmt_list::ptr > ())); }
#line 2603 "parser.cpp"
    break;

  case 51: // stmt_dev: "/#" "#/"
#line 383 "parser.ypp"
                      { yylhs.value.as < ast::stmt_dev::ptr > () = std::make_unique<ast::stmt_dev>(yylhs.location, std::make_unique<ast::stmt_list>(yylhs.location)); }
#line 2609 "parser.cpp"
    break;

  case 52: // stmt_block: "{" stmt_or_dev_list "}"
#line 387 "parser.ypp"
                                     { yylhs.value.as < ast::stmt_list::ptr > () = std::move(yystack_[1].value.as < ast::stmt_list::ptr > ()); }
#line 2615 "parser.cpp"
    break;

  case 53: // stmt_block: "{" "}"
#line 388 "parser.ypp"
                    { yylhs.value.as < ast::stmt_list::ptr > () = std::make_unique<ast::stmt_list>(yylhs.location); }
#line 2621 "parser.cpp"
    break;

  case 54: // stmt_expr: expr_assign
#line 393 "parser.ypp"
        { yylhs.value.as < ast::stmt_expr::ptr > () = std::make_unique<ast::stmt_expr>(yylhs.location, std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2627 "parser.cpp"
    break;

  case 55: // stmt_expr: expr_increment
#line 395 "parser.ypp"
        { yylhs.value.as < ast::stmt_expr::ptr > () = std::make_unique<ast::stmt_expr>(yylhs.location, std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2633 "parser.cpp"
    break;

  case 56: // stmt_expr: expr_decrement
#line 397 "parser.ypp"
        { yylhs.value.as < ast::stmt_expr::ptr > () = std::make_unique<ast::stmt_expr>(yylhs.location, std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2639 "parser.cpp"
    break;

  case 57: // stmt_expr: %empty
#line 399 "parser.ypp"
        { yylhs.value.as < ast::stmt_expr::ptr > () = std::make_unique<ast::stmt_expr>(yylhs.location, std::make_unique<ast::node>(yylhs.location)); }
#line 2645 "parser.cpp"
    break;

  case 58: // stmt_call: expr_call ";"
#line 404 "parser.ypp"
        { yylhs.value.as < ast::stmt_call::ptr > () = std::make_unique<ast::stmt_call>(yylhs.location, ast::expr(std::move(yystack_[1].value.as < ast::expr_call::ptr > ()))); }
#line 2651 "parser.cpp"
    break;

  case 59: // stmt_call: expr_method ";"
#line 406 "parser.ypp"
        { yylhs.value.as < ast::stmt_call::ptr > () = std::make_unique<ast::stmt_call>(yylhs.location, ast::expr(std::move(yystack_[1].value.as < ast::expr_method::ptr > ()))); }
#line 2657 "parser.cpp"
    break;

  case 60: // stmt_assign: expr_assign ";"
#line 411 "parser.ypp"
        { yylhs.value.as < ast::stmt_assign::ptr > () = std::make_unique<ast::stmt_assign>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 2663 "parser.cpp"
    break;

  case 61: // stmt_assign: expr_increment ";"
#line 413 "parser.ypp"
        { yylhs.value.as < ast::stmt_assign::ptr > () = std::make_unique<ast::stmt_assign>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 2669 "parser.cpp"
    break;

  case 62: // stmt_assign: expr_decrement ";"
#line 415 "parser.ypp"
        { yylhs.value.as < ast::stmt_assign::ptr > () = std::make_unique<ast::stmt_assign>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 2675 "parser.cpp"
    break;

  case 63: // stmt_endon: expr_object "endon" "(" expr ")" ";"
#line 420 "parser.ypp"
        { yylhs.value.as < ast::stmt_endon::ptr > () = std::make_unique<ast::stmt_endon>(yylhs.location, std::move(yystack_[5].value.as < ast::expr > ()), std::move(yystack_[2].value.as < ast::expr > ())); }
#line 2681 "parser.cpp"
    break;

  case 64: // stmt_notify: expr_object "notify" "(" expr "," expr_arguments_no_empty ")" ";"
#line 425 "parser.ypp"
        { yylhs.value.as < ast::stmt_notify::ptr > () = std::make_unique<ast::stmt_notify>(yylhs.location, std::move(yystack_[7].value.as < ast::expr > ()), std::move(yystack_[4].value.as < ast::expr > ()), std::move(yystack_[2].value.as < ast::expr_arguments::ptr > ())); }
#line 2687 "parser.cpp"
    break;

  case 65: // stmt_notify: expr_object "notify" "(" expr ")" ";"
#line 427 "parser.ypp"
        { yylhs.value.as < ast::stmt_notify::ptr > () = std::make_unique<ast::stmt_notify>(yylhs.location, std::move(yystack_[5].value.as < ast::expr > ()), std::move(yystack_[2].value.as < ast::expr > ()), std::make_unique<ast::expr_arguments>(yylhs.location)); }
#line 2693 "parser.cpp"
    break;

  case 66: // stmt_wait: "wait" expr ";"
#line 432 "parser.ypp"
        { yylhs.value.as < ast::stmt_wait::ptr > () = std::make_unique<ast::stmt_wait>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 2699 "parser.cpp"
    break;

  case 67: // stmt_waittill: expr_object "waittill" "(" expr "," expr_arguments_no_empty ")" ";"
#line 437 "parser.ypp"
        { yylhs.value.as < ast::stmt_waittill::ptr > () = std::make_unique<ast::stmt_waittill>(yylhs.location, std::move(yystack_[7].value.as < ast::expr > ()), std::move(yystack_[4].value.as < ast::expr > ()), std::move(yystack_[2].value.as < ast::expr_arguments::ptr > ())); }
#line 2705 "parser.cpp"
    break;

  case 68: // stmt_waittill: expr_object "waittill" "(" expr ")" ";"
#line 439 "parser.ypp"
        { yylhs.value.as < ast::stmt_waittill::ptr > () = std::make_unique<ast::stmt_waittill>(yylhs.location, std::move(yystack_[5].value.as < ast::expr > ()), std::move(yystack_[2].value.as < ast::expr > ()), std::make_unique<ast::expr_arguments>(yylhs.location)); }
#line 2711 "parser.cpp"
    break;

  case 69: // stmt_waittillmatch: expr_object "waittillmatch" "(" expr "," expr_arguments_no_empty ")" ";"
#line 444 "parser.ypp"
        { yylhs.value.as < ast::stmt_waittillmatch::ptr > () = std::make_unique<ast::stmt_waittillmatch>(yylhs.location, std::move(yystack_[7].value.as < ast::expr > ()), std::move(yystack_[4].value.as < ast::expr > ()), std::move(yystack_[2].value.as < ast::expr_arguments::ptr > ())); }
#line 2717 "parser.cpp"
    break;

  case 70: // stmt_waittillmatch: expr_object "waittillmatch" "(" expr ")" ";"
#line 446 "parser.ypp"
        { yylhs.value.as < ast::stmt_waittillmatch::ptr > () = std::make_unique<ast::stmt_waittillmatch>(yylhs.location, std::move(yystack_[5].value.as < ast::expr > ()), std::move(yystack_[2].value.as < ast::expr > ()), std::make_unique<ast::expr_arguments>(yylhs.location)); }
#line 2723 "parser.cpp"
    break;

  case 71: // stmt_waittillframeend: "waittillframeend" ";"
#line 451 "parser.ypp"
        { yylhs.value.as < ast::stmt_waittillframeend::ptr > () = std::make_unique<ast::stmt_waittillframeend>(yylhs.location); }
#line 2729 "parser.cpp"
    break;

  case 72: // stmt_if: "if" "(" expr ")" stmt
#line 456 "parser.ypp"
        { yylhs.value.as < ast::stmt_if::ptr > () = std::make_unique<ast::stmt_if>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::stmt > ())); }
#line 2735 "parser.cpp"
    break;

  case 73: // stmt_ifelse: "if" "(" expr ")" stmt "else" stmt
#line 461 "parser.ypp"
        { yylhs.value.as < ast::stmt_ifelse::ptr > () = std::make_unique<ast::stmt_ifelse>(yylhs.location, std::move(yystack_[4].value.as < ast::expr > ()), std::move(yystack_[2].value.as < ast::stmt > ()), std::move(yystack_[0].value.as < ast::stmt > ())); }
#line 2741 "parser.cpp"
    break;

  case 74: // stmt_while: "while" "(" expr ")" stmt
#line 466 "parser.ypp"
        { yylhs.value.as < ast::stmt_while::ptr > () = std::make_unique<ast::stmt_while>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::stmt > ())); }
#line 2747 "parser.cpp"
    break;

  case 75: // stmt_dowhile: "do" stmt "while" "(" expr ")" ";"
#line 471 "parser.ypp"
        { yylhs.value.as < ast::stmt_dowhile::ptr > () = std::make_unique<ast::stmt_dowhile>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[5].value.as < ast::stmt > ())); }
#line 2753 "parser.cpp"
    break;

  case 76: // stmt_for: "for" "(" stmt_expr ";" expr_or_empty ";" stmt_expr ")" stmt
#line 476 "parser.ypp"
        { yylhs.value.as < ast::stmt_for::ptr > () = std::make_unique<ast::stmt_for>(yylhs.location, ast::stmt(std::move(yystack_[6].value.as < ast::stmt_expr::ptr > ())), std::move(yystack_[4].value.as < ast::expr > ()), ast::stmt(std::move(yystack_[2].value.as < ast::stmt_expr::ptr > ())), std::move(yystack_[0].value.as < ast::stmt > ())); }
#line 2759 "parser.cpp"
    break;

  case 77: // stmt_foreach: "foreach" "(" expr_identifier "in" expr ")" stmt
#line 481 "parser.ypp"
        { yylhs.value.as < ast::stmt_foreach::ptr > () = std::make_unique<ast::stmt_foreach>(yylhs.location, ast::expr(std::move(yystack_[4].value.as < ast::expr_identifier::ptr > ())), std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::stmt > ())); }
#line 2765 "parser.cpp"
    break;

  case 78: // stmt_foreach: "foreach" "(" expr_identifier "," expr_identifier "in" expr ")" stmt
#line 483 "parser.ypp"
        { yylhs.value.as < ast::stmt_foreach::ptr > () = std::make_unique<ast::stmt_foreach>(yylhs.location, ast::expr(std::move(yystack_[6].value.as < ast::expr_identifier::ptr > ())), ast::expr(std::move(yystack_[4].value.as < ast::expr_identifier::ptr > ())), std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::stmt > ())); }
#line 2771 "parser.cpp"
    break;

  case 79: // stmt_switch: "switch" "(" expr ")" stmt_block
#line 488 "parser.ypp"
        { yylhs.value.as < ast::stmt_switch::ptr > () = std::make_unique<ast::stmt_switch>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::stmt_list::ptr > ())); }
#line 2777 "parser.cpp"
    break;

  case 80: // stmt_case: "case" expr_integer ":"
#line 493 "parser.ypp"
        { yylhs.value.as < ast::stmt_case::ptr > () = std::make_unique<ast::stmt_case>(yylhs.location, ast::expr(std::move(yystack_[1].value.as < ast::expr_integer::ptr > ())), std::make_unique<ast::stmt_list>(yylhs.location)); }
#line 2783 "parser.cpp"
    break;

  case 81: // stmt_case: "case" expr_string ":"
#line 495 "parser.ypp"
        { yylhs.value.as < ast::stmt_case::ptr > () = std::make_unique<ast::stmt_case>(yylhs.location, ast::expr(std::move(yystack_[1].value.as < ast::expr_string::ptr > ())), std::make_unique<ast::stmt_list>(yylhs.location)); }
#line 2789 "parser.cpp"
    break;

  case 82: // stmt_default: "default" ":"
#line 500 "parser.ypp"
        { yylhs.value.as < ast::stmt_default::ptr > () = std::make_unique<ast::stmt_default>(yylhs.location, std::make_unique<ast::stmt_list>(yylhs.location)); }
#line 2795 "parser.cpp"
    break;

  case 83: // stmt_break: "break" ";"
#line 505 "parser.ypp"
        { yylhs.value.as < ast::stmt_break::ptr > () = std::make_unique<ast::stmt_break>(yylhs.location); }
#line 2801 "parser.cpp"
    break;

  case 84: // stmt_continue: "continue" ";"
#line 510 "parser.ypp"
        { yylhs.value.as < ast::stmt_continue::ptr > () = std::make_unique<ast::stmt_continue>(yylhs.location); }
#line 2807 "parser.cpp"
    break;

  case 85: // stmt_return: "return" expr ";"
#line 515 "parser.ypp"
        { yylhs.value.as < ast::stmt_return::ptr > () = std::make_unique<ast::stmt_return>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 2813 "parser.cpp"
    break;

  case 86: // stmt_return: "return" ";"
#line 517 "parser.ypp"
        { yylhs.value.as < ast::stmt_return::ptr > () = std::make_unique<ast::stmt_return>(yylhs.location, std::make_unique<ast::node>(yylhs.location)); }
#line 2819 "parser.cpp"
    break;

  case 87: // stmt_breakpoint: "breakpoint" ";"
#line 522 "parser.ypp"
        { yylhs.value.as < ast::stmt_breakpoint::ptr > () = std::make_unique<ast::stmt_breakpoint>(yylhs.location); }
#line 2825 "parser.cpp"
    break;

  case 88: // stmt_prof_begin: "prof_begin" "(" expr_arguments ")" ";"
#line 527 "parser.ypp"
        { yylhs.value.as < ast::stmt_prof_begin::ptr > () = std::make_unique<ast::stmt_prof_begin>(yylhs.location, std::move(yystack_[2].value.as < ast::expr_arguments::ptr > ())); }
#line 2831 "parser.cpp"
    break;

  case 89: // stmt_prof_end: "prof_end" "(" expr_arguments ")" ";"
#line 532 "parser.ypp"
        { yylhs.value.as < ast::stmt_prof_end::ptr > () = std::make_unique<ast::stmt_prof_end>(yylhs.location, std::move(yystack_[2].value.as < ast::expr_arguments::ptr > ())); }
#line 2837 "parser.cpp"
    break;

  case 90: // expr: expr_ternary
#line 536 "parser.ypp"
                     { yylhs.value.as < ast::expr > () = std::move(yystack_[0].value.as < ast::expr > ()); }
#line 2843 "parser.cpp"
    break;

  case 91: // expr: expr_binary
#line 537 "parser.ypp"
                     { yylhs.value.as < ast::expr > () = std::move(yystack_[0].value.as < ast::expr > ()); }
#line 2849 "parser.cpp"
    break;

  case 92: // expr: expr_primitive
#line 538 "parser.ypp"
                     { yylhs.value.as < ast::expr > () = std::move(yystack_[0].value.as < ast::expr > ()); }
#line 2855 "parser.cpp"
    break;

  case 93: // expr_or_empty: expr
#line 542 "parser.ypp"
                     { yylhs.value.as < ast::expr > () = std::move(yystack_[0].value.as < ast::expr > ()); }
#line 2861 "parser.cpp"
    break;

  case 94: // expr_or_empty: %empty
#line 543 "parser.ypp"
                     { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::node>(yylhs.location); }
#line 2867 "parser.cpp"
    break;

  case 95: // expr_assign: expr_object "=" expr
#line 548 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_assign_equal>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2873 "parser.cpp"
    break;

  case 96: // expr_assign: expr_object "|=" expr
#line 550 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_assign_bitwise_or>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2879 "parser.cpp"
    break;

  case 97: // expr_assign: expr_object "&=" expr
#line 552 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_assign_bitwise_and>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2885 "parser.cpp"
    break;

  case 98: // expr_assign: expr_object "^=" expr
#line 554 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_assign_bitwise_exor>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2891 "parser.cpp"
    break;

  case 99: // expr_assign: expr_object "<<=" expr
#line 556 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_assign_shift_left>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()),std::move( yystack_[0].value.as < ast::expr > ())); }
#line 2897 "parser.cpp"
    break;

  case 100: // expr_assign: expr_object ">>=" expr
#line 558 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_assign_shift_right>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2903 "parser.cpp"
    break;

  case 101: // expr_assign: expr_object "+=" expr
#line 560 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_assign_add>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2909 "parser.cpp"
    break;

  case 102: // expr_assign: expr_object "-=" expr
#line 562 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_assign_sub>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2915 "parser.cpp"
    break;

  case 103: // expr_assign: expr_object "*=" expr
#line 564 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_assign_mul>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2921 "parser.cpp"
    break;

  case 104: // expr_assign: expr_object "/=" expr
#line 566 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_assign_div>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2927 "parser.cpp"
    break;

  case 105: // expr_assign: expr_object "%=" expr
#line 568 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_assign_mod>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2933 "parser.cpp"
    break;

  case 106: // expr_increment: "++" expr_object
#line 573 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_increment>(yylhs.location, std::move(yystack_[0].value.as < ast::expr > ()), true); }
#line 2939 "parser.cpp"
    break;

  case 107: // expr_increment: expr_object "++"
#line 575 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_increment>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ()), false); }
#line 2945 "parser.cpp"
    break;

  case 108: // expr_decrement: "--" expr_object
#line 580 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_decrement>(yylhs.location, std::move(yystack_[0].value.as < ast::expr > ()), true); }
#line 2951 "parser.cpp"
    break;

  case 109: // expr_decrement: expr_object "--"
#line 582 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_decrement>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ()), false); }
#line 2957 "parser.cpp"
    break;

  case 110: // expr_ternary: expr "?" expr ":" expr
#line 587 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_ternary>(yylhs.location, std::move(yystack_[4].value.as < ast::expr > ()), std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2963 "parser.cpp"
    break;

  case 111: // expr_binary: expr "||" expr
#line 592 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_or>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2969 "parser.cpp"
    break;

  case 112: // expr_binary: expr "&&" expr
#line 594 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_and>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2975 "parser.cpp"
    break;

  case 113: // expr_binary: expr "==" expr
#line 596 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_equality>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2981 "parser.cpp"
    break;

  case 114: // expr_binary: expr "!=" expr
#line 598 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_inequality>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2987 "parser.cpp"
    break;

  case 115: // expr_binary: expr "<=" expr
#line 600 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_less_equal>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2993 "parser.cpp"
    break;

  case 116: // expr_binary: expr ">=" expr
#line 602 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_greater_equal>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 2999 "parser.cpp"
    break;

  case 117: // expr_binary: expr "<" expr
#line 604 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_less>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3005 "parser.cpp"
    break;

  case 118: // expr_binary: expr ">" expr
#line 606 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_greater>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3011 "parser.cpp"
    break;

  case 119: // expr_binary: expr "|" expr
#line 608 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_bitwise_or>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3017 "parser.cpp"
    break;

  case 120: // expr_binary: expr "&" expr
#line 610 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_bitwise_and>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3023 "parser.cpp"
    break;

  case 121: // expr_binary: expr "^" expr
#line 612 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_bitwise_exor>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3029 "parser.cpp"
    break;

  case 122: // expr_binary: expr "<<" expr
#line 614 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_shift_left>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3035 "parser.cpp"
    break;

  case 123: // expr_binary: expr ">>" expr
#line 616 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_shift_right>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3041 "parser.cpp"
    break;

  case 124: // expr_binary: expr "+" expr
#line 618 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_add>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3047 "parser.cpp"
    break;

  case 125: // expr_binary: expr "-" expr
#line 620 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_sub>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3053 "parser.cpp"
    break;

  case 126: // expr_binary: expr "*" expr
#line 622 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_mul>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3059 "parser.cpp"
    break;

  case 127: // expr_binary: expr "/" expr
#line 624 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_div>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3065 "parser.cpp"
    break;

  case 128: // expr_binary: expr "%" expr
#line 626 "parser.ypp"
        { yylhs.value.as < ast::expr > ().as_node = std::make_unique<ast::expr_mod>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3071 "parser.cpp"
    break;

  case 129: // expr_primitive: expr_complement
#line 630 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_complement::ptr > ()); }
#line 3077 "parser.cpp"
    break;

  case 130: // expr_primitive: expr_not
#line 631 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_not::ptr > ()); }
#line 3083 "parser.cpp"
    break;

  case 131: // expr_primitive: expr_call
#line 632 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_call::ptr > ()); }
#line 3089 "parser.cpp"
    break;

  case 132: // expr_primitive: expr_method
#line 633 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_method::ptr > ()); }
#line 3095 "parser.cpp"
    break;

  case 133: // expr_primitive: expr_getnextarraykey
#line 634 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_getnextarraykey::ptr > ()); }
#line 3101 "parser.cpp"
    break;

  case 134: // expr_primitive: expr_getfirstarraykey
#line 635 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_getfirstarraykey::ptr > ()); }
#line 3107 "parser.cpp"
    break;

  case 135: // expr_primitive: expr_getdvarcoloralpha
#line 636 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_getdvarcoloralpha::ptr > ()); }
#line 3113 "parser.cpp"
    break;

  case 136: // expr_primitive: expr_getdvarcolorblue
#line 637 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_getdvarcolorblue::ptr > ()); }
#line 3119 "parser.cpp"
    break;

  case 137: // expr_primitive: expr_getdvarcolorgreen
#line 638 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_getdvarcolorgreen::ptr > ()); }
#line 3125 "parser.cpp"
    break;

  case 138: // expr_primitive: expr_getdvarcolorred
#line 639 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_getdvarcolorred::ptr > ()); }
#line 3131 "parser.cpp"
    break;

  case 139: // expr_primitive: expr_getdvarvector
#line 640 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_getdvarvector::ptr > ()); }
#line 3137 "parser.cpp"
    break;

  case 140: // expr_primitive: expr_getdvarfloat
#line 641 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_getdvarfloat::ptr > ()); }
#line 3143 "parser.cpp"
    break;

  case 141: // expr_primitive: expr_getdvarint
#line 642 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_getdvarint::ptr > ()); }
#line 3149 "parser.cpp"
    break;

  case 142: // expr_primitive: expr_getdvar
#line 643 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_getdvar::ptr > ()); }
#line 3155 "parser.cpp"
    break;

  case 143: // expr_primitive: expr_gettime
#line 644 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_gettime::ptr > ()); }
#line 3161 "parser.cpp"
    break;

  case 144: // expr_primitive: expr_abs
#line 645 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_abs::ptr > ()); }
#line 3167 "parser.cpp"
    break;

  case 145: // expr_primitive: expr_vectortoangles
#line 646 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_vectortoangles::ptr > ()); }
#line 3173 "parser.cpp"
    break;

  case 146: // expr_primitive: expr_angleclamp180
#line 647 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_angleclamp180::ptr > ()); }
#line 3179 "parser.cpp"
    break;

  case 147: // expr_primitive: expr_anglestoforward
#line 648 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_anglestoforward::ptr > ()); }
#line 3185 "parser.cpp"
    break;

  case 148: // expr_primitive: expr_anglestoright
#line 649 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_anglestoright::ptr > ()); }
#line 3191 "parser.cpp"
    break;

  case 149: // expr_primitive: expr_anglestoup
#line 650 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_anglestoup::ptr > ()); }
#line 3197 "parser.cpp"
    break;

  case 150: // expr_primitive: expr_vectorscale
#line 651 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_vectorscale::ptr > ()); }
#line 3203 "parser.cpp"
    break;

  case 151: // expr_primitive: expr_isdefined
#line 652 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_isdefined::ptr > ()); }
#line 3209 "parser.cpp"
    break;

  case 152: // expr_primitive: expr_reference
#line 653 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_reference::ptr > ()); }
#line 3215 "parser.cpp"
    break;

  case 153: // expr_primitive: expr_array
#line 654 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_array::ptr > ()); }
#line 3221 "parser.cpp"
    break;

  case 154: // expr_primitive: expr_field
#line 655 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_field::ptr > ()); }
#line 3227 "parser.cpp"
    break;

  case 155: // expr_primitive: expr_size
#line 656 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_size::ptr > ()); }
#line 3233 "parser.cpp"
    break;

  case 156: // expr_primitive: expr_paren
#line 657 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_paren::ptr > ()); }
#line 3239 "parser.cpp"
    break;

  case 157: // expr_primitive: expr_empty_array
#line 658 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_empty_array::ptr > ()); }
#line 3245 "parser.cpp"
    break;

  case 158: // expr_primitive: expr_undefined
#line 659 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_undefined::ptr > ()); }
#line 3251 "parser.cpp"
    break;

  case 159: // expr_primitive: expr_game
#line 660 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_game::ptr > ()); }
#line 3257 "parser.cpp"
    break;

  case 160: // expr_primitive: expr_self
#line 661 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_self::ptr > ()); }
#line 3263 "parser.cpp"
    break;

  case 161: // expr_primitive: expr_anim
#line 662 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_anim::ptr > ()); }
#line 3269 "parser.cpp"
    break;

  case 162: // expr_primitive: expr_level
#line 663 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_level::ptr > ()); }
#line 3275 "parser.cpp"
    break;

  case 163: // expr_primitive: expr_animation
#line 664 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_animation::ptr > ()); }
#line 3281 "parser.cpp"
    break;

  case 164: // expr_primitive: expr_identifier
#line 665 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_identifier::ptr > ()); }
#line 3287 "parser.cpp"
    break;

  case 165: // expr_primitive: expr_istring
#line 666 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_istring::ptr > ()); }
#line 3293 "parser.cpp"
    break;

  case 166: // expr_primitive: expr_string
#line 667 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_string::ptr > ()); }
#line 3299 "parser.cpp"
    break;

  case 167: // expr_primitive: expr_vector
#line 668 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_vector::ptr > ()); }
#line 3305 "parser.cpp"
    break;

  case 168: // expr_primitive: expr_hash
#line 669 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_hash::ptr > ()); }
#line 3311 "parser.cpp"
    break;

  case 169: // expr_primitive: expr_float
#line 670 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_float::ptr > ()); }
#line 3317 "parser.cpp"
    break;

  case 170: // expr_primitive: expr_integer
#line 671 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_integer::ptr > ()); }
#line 3323 "parser.cpp"
    break;

  case 171: // expr_primitive: expr_false
#line 672 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_false::ptr > ()); }
#line 3329 "parser.cpp"
    break;

  case 172: // expr_primitive: expr_true
#line 673 "parser.ypp"
                             { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_true::ptr > ()); }
#line 3335 "parser.cpp"
    break;

  case 173: // expr_complement: "~" expr
#line 678 "parser.ypp"
        { yylhs.value.as < ast::expr_complement::ptr > () = std::make_unique<ast::expr_complement>(yylhs.location, std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3341 "parser.cpp"
    break;

  case 174: // expr_not: "!" expr
#line 683 "parser.ypp"
        { yylhs.value.as < ast::expr_not::ptr > () = std::make_unique<ast::expr_not>(yylhs.location, std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3347 "parser.cpp"
    break;

  case 175: // expr_call: expr_function
#line 687 "parser.ypp"
                                   { yylhs.value.as < ast::expr_call::ptr > () = std::make_unique<ast::expr_call>(yylhs.location, std::move(yystack_[0].value.as < ast::call > ())); }
#line 3353 "parser.cpp"
    break;

  case 176: // expr_call: expr_pointer
#line 688 "parser.ypp"
                                   { yylhs.value.as < ast::expr_call::ptr > () = std::make_unique<ast::expr_call>(yylhs.location, std::move(yystack_[0].value.as < ast::call > ())); }
#line 3359 "parser.cpp"
    break;

  case 177: // expr_method: expr_object expr_function
#line 691 "parser.ypp"
                                   { yylhs.value.as < ast::expr_method::ptr > () = std::make_unique<ast::expr_method>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::call > ())); }
#line 3365 "parser.cpp"
    break;

  case 178: // expr_method: expr_object expr_pointer
#line 692 "parser.ypp"
                                   { yylhs.value.as < ast::expr_method::ptr > () = std::make_unique<ast::expr_method>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::call > ())); }
#line 3371 "parser.cpp"
    break;

  case 179: // expr_function: expr_identifier "(" expr_arguments ")"
#line 697 "parser.ypp"
        { yylhs.value.as < ast::call > ().as_function = std::make_unique<ast::expr_function>(yylhs.location, std::make_unique<ast::expr_path>(yylhs.location), std::move(yystack_[3].value.as < ast::expr_identifier::ptr > ()), std::move(yystack_[1].value.as < ast::expr_arguments::ptr > ()), ast::call::mode::normal); }
#line 3377 "parser.cpp"
    break;

  case 180: // expr_function: expr_path "::" expr_identifier "(" expr_arguments ")"
#line 699 "parser.ypp"
        { yylhs.value.as < ast::call > ().as_function = std::make_unique<ast::expr_function>(yylhs.location, std::move(yystack_[5].value.as < ast::expr_path::ptr > ()), std::move(yystack_[3].value.as < ast::expr_identifier::ptr > ()), std::move(yystack_[1].value.as < ast::expr_arguments::ptr > ()), ast::call::mode::normal); }
#line 3383 "parser.cpp"
    break;

  case 181: // expr_function: "thread" expr_identifier "(" expr_arguments ")"
#line 701 "parser.ypp"
        { yylhs.value.as < ast::call > ().as_function = std::make_unique<ast::expr_function>(yylhs.location, std::make_unique<ast::expr_path>(yylhs.location), std::move(yystack_[3].value.as < ast::expr_identifier::ptr > ()), std::move(yystack_[1].value.as < ast::expr_arguments::ptr > ()), ast::call::mode::thread); }
#line 3389 "parser.cpp"
    break;

  case 182: // expr_function: "thread" expr_path "::" expr_identifier "(" expr_arguments ")"
#line 703 "parser.ypp"
        { yylhs.value.as < ast::call > ().as_function = std::make_unique<ast::expr_function>(yylhs.location, std::move(yystack_[5].value.as < ast::expr_path::ptr > ()), std::move(yystack_[3].value.as < ast::expr_identifier::ptr > ()), std::move(yystack_[1].value.as < ast::expr_arguments::ptr > ()), ast::call::mode::thread); }
#line 3395 "parser.cpp"
    break;

  case 183: // expr_pointer: "[" "[" expr "]" "]" "(" expr_arguments ")"
#line 708 "parser.ypp"
        { yylhs.value.as < ast::call > ().as_pointer = std::make_unique<ast::expr_pointer>(yylhs.location, std::move(yystack_[5].value.as < ast::expr > ()), std::move(yystack_[1].value.as < ast::expr_arguments::ptr > ()), ast::call::mode::normal); }
#line 3401 "parser.cpp"
    break;

  case 184: // expr_pointer: "thread" "[" "[" expr "]" "]" "(" expr_arguments ")"
#line 710 "parser.ypp"
        { yylhs.value.as < ast::call > ().as_pointer = std::make_unique<ast::expr_pointer>(yylhs.location, std::move(yystack_[5].value.as < ast::expr > ()), std::move(yystack_[1].value.as < ast::expr_arguments::ptr > ()), ast::call::mode::thread); }
#line 3407 "parser.cpp"
    break;

  case 185: // expr_parameters: expr_parameters "," expr_identifier
#line 715 "parser.ypp"
        { yylhs.value.as < ast::expr_parameters::ptr > () = std::move(yystack_[2].value.as < ast::expr_parameters::ptr > ()); yylhs.value.as < ast::expr_parameters::ptr > ()->list.push_back(std::move(yystack_[0].value.as < ast::expr_identifier::ptr > ())); }
#line 3413 "parser.cpp"
    break;

  case 186: // expr_parameters: expr_identifier
#line 717 "parser.ypp"
        { yylhs.value.as < ast::expr_parameters::ptr > () = std::make_unique<ast::expr_parameters>(yylhs.location); yylhs.value.as < ast::expr_parameters::ptr > ()->list.push_back(std::move(yystack_[0].value.as < ast::expr_identifier::ptr > ())); }
#line 3419 "parser.cpp"
    break;

  case 187: // expr_parameters: %empty
#line 719 "parser.ypp"
        { yylhs.value.as < ast::expr_parameters::ptr > () = std::make_unique<ast::expr_parameters>(yylhs.location); }
#line 3425 "parser.cpp"
    break;

  case 188: // expr_arguments: expr_arguments_no_empty
#line 724 "parser.ypp"
        { yylhs.value.as < ast::expr_arguments::ptr > () = std::move(yystack_[0].value.as < ast::expr_arguments::ptr > ()); }
#line 3431 "parser.cpp"
    break;

  case 189: // expr_arguments: %empty
#line 726 "parser.ypp"
        { yylhs.value.as < ast::expr_arguments::ptr > () = std::make_unique<ast::expr_arguments>(yylhs.location); }
#line 3437 "parser.cpp"
    break;

  case 190: // expr_arguments_no_empty: expr_arguments "," expr
#line 731 "parser.ypp"
        { yylhs.value.as < ast::expr_arguments::ptr > () = std::move(yystack_[2].value.as < ast::expr_arguments::ptr > ()); yylhs.value.as < ast::expr_arguments::ptr > ()->list.push_back(std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3443 "parser.cpp"
    break;

  case 191: // expr_arguments_no_empty: expr
#line 733 "parser.ypp"
        { yylhs.value.as < ast::expr_arguments::ptr > () = std::make_unique<ast::expr_arguments>(yylhs.location); yylhs.value.as < ast::expr_arguments::ptr > ()->list.push_back(std::move(yystack_[0].value.as < ast::expr > ())); }
#line 3449 "parser.cpp"
    break;

  case 192: // expr_getnextarraykey: "getnextarraykey" "(" expr "," expr ")"
#line 738 "parser.ypp"
        { yylhs.value.as < ast::expr_getnextarraykey::ptr > () = std::make_unique<ast::expr_getnextarraykey>(yylhs.location, std::move(yystack_[3].value.as < ast::expr > ()), std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3455 "parser.cpp"
    break;

  case 193: // expr_getfirstarraykey: "getfirstarraykey" "(" expr ")"
#line 743 "parser.ypp"
        { yylhs.value.as < ast::expr_getfirstarraykey::ptr > () = std::make_unique<ast::expr_getfirstarraykey>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3461 "parser.cpp"
    break;

  case 194: // expr_getdvarcoloralpha: "getdvarcoloralpha" "(" expr ")"
#line 748 "parser.ypp"
        { yylhs.value.as < ast::expr_getdvarcoloralpha::ptr > () = std::make_unique<ast::expr_getdvarcoloralpha>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3467 "parser.cpp"
    break;

  case 195: // expr_getdvarcolorblue: "getdvarcolorblue" "(" expr ")"
#line 753 "parser.ypp"
        { yylhs.value.as < ast::expr_getdvarcolorblue::ptr > () = std::make_unique<ast::expr_getdvarcolorblue>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3473 "parser.cpp"
    break;

  case 196: // expr_getdvarcolorgreen: "getdvarcolorgreen" "(" expr ")"
#line 758 "parser.ypp"
        { yylhs.value.as < ast::expr_getdvarcolorgreen::ptr > () = std::make_unique<ast::expr_getdvarcolorgreen>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3479 "parser.cpp"
    break;

  case 197: // expr_getdvarcolorred: "getdvarcolorred" "(" expr ")"
#line 763 "parser.ypp"
        { yylhs.value.as < ast::expr_getdvarcolorred::ptr > () = std::make_unique<ast::expr_getdvarcolorred>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3485 "parser.cpp"
    break;

  case 198: // expr_getdvarvector: "getdvarvector" "(" expr ")"
#line 768 "parser.ypp"
        { yylhs.value.as < ast::expr_getdvarvector::ptr > () = std::make_unique<ast::expr_getdvarvector>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3491 "parser.cpp"
    break;

  case 199: // expr_getdvarfloat: "getdvarfloat" "(" expr ")"
#line 773 "parser.ypp"
        { yylhs.value.as < ast::expr_getdvarfloat::ptr > () = std::make_unique<ast::expr_getdvarfloat>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3497 "parser.cpp"
    break;

  case 200: // expr_getdvarint: "getdvarint" "(" expr ")"
#line 778 "parser.ypp"
        { yylhs.value.as < ast::expr_getdvarint::ptr > () = std::make_unique<ast::expr_getdvarint>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3503 "parser.cpp"
    break;

  case 201: // expr_getdvar: "getdvar" "(" expr ")"
#line 783 "parser.ypp"
        { yylhs.value.as < ast::expr_getdvar::ptr > () = std::make_unique<ast::expr_getdvar>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3509 "parser.cpp"
    break;

  case 202: // expr_gettime: "gettime" "(" ")"
#line 788 "parser.ypp"
        { yylhs.value.as < ast::expr_gettime::ptr > () = std::make_unique<ast::expr_gettime>(yylhs.location); }
#line 3515 "parser.cpp"
    break;

  case 203: // expr_abs: "abs" "(" expr ")"
#line 793 "parser.ypp"
        { yylhs.value.as < ast::expr_abs::ptr > () = std::make_unique<ast::expr_abs>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3521 "parser.cpp"
    break;

  case 204: // expr_vectortoangles: "vectortoangles" "(" expr ")"
#line 798 "parser.ypp"
        { yylhs.value.as < ast::expr_vectortoangles::ptr > () = std::make_unique<ast::expr_vectortoangles>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3527 "parser.cpp"
    break;

  case 205: // expr_angleclamp180: "angleclamp180" "(" expr ")"
#line 803 "parser.ypp"
        { yylhs.value.as < ast::expr_angleclamp180::ptr > () = std::make_unique<ast::expr_angleclamp180>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3533 "parser.cpp"
    break;

  case 206: // expr_anglestoforward: "anglestoforward" "(" expr ")"
#line 808 "parser.ypp"
        { yylhs.value.as < ast::expr_anglestoforward::ptr > () = std::make_unique<ast::expr_anglestoforward>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3539 "parser.cpp"
    break;

  case 207: // expr_anglestoright: "anglestoright" "(" expr ")"
#line 813 "parser.ypp"
        { yylhs.value.as < ast::expr_anglestoright::ptr > () = std::make_unique<ast::expr_anglestoright>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3545 "parser.cpp"
    break;

  case 208: // expr_anglestoup: "anglestoup" "(" expr ")"
#line 818 "parser.ypp"
        { yylhs.value.as < ast::expr_anglestoup::ptr > () = std::make_unique<ast::expr_anglestoup>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3551 "parser.cpp"
    break;

  case 209: // expr_vectorscale: "vectorscale" "(" expr "," expr ")"
#line 823 "parser.ypp"
        { yylhs.value.as < ast::expr_vectorscale::ptr > () = std::make_unique<ast::expr_vectorscale>(yylhs.location, std::move(yystack_[3].value.as < ast::expr > ()), std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3557 "parser.cpp"
    break;

  case 210: // expr_isdefined: "isdefined" "(" expr ")"
#line 828 "parser.ypp"
        { yylhs.value.as < ast::expr_isdefined::ptr > () = std::make_unique<ast::expr_isdefined>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3563 "parser.cpp"
    break;

  case 211: // expr_reference: "::" expr_identifier
#line 833 "parser.ypp"
        { yylhs.value.as < ast::expr_reference::ptr > () = std::make_unique<ast::expr_reference>(yylhs.location, std::make_unique<ast::expr_path>(yylhs.location), std::move(yystack_[0].value.as < ast::expr_identifier::ptr > ())); }
#line 3569 "parser.cpp"
    break;

  case 212: // expr_reference: expr_path "::" expr_identifier
#line 835 "parser.ypp"
        { yylhs.value.as < ast::expr_reference::ptr > () = std::make_unique<ast::expr_reference>(yylhs.location, std::move(yystack_[2].value.as < ast::expr_path::ptr > ()), std::move(yystack_[0].value.as < ast::expr_identifier::ptr > ())); }
#line 3575 "parser.cpp"
    break;

  case 213: // expr_array: expr_object "[" expr "]"
#line 840 "parser.ypp"
        { yylhs.value.as < ast::expr_array::ptr > () = std::make_unique<ast::expr_array>(yylhs.location, std::move(yystack_[3].value.as < ast::expr > ()), std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3581 "parser.cpp"
    break;

  case 214: // expr_field: expr_object "." expr_identifier
#line 845 "parser.ypp"
        { yylhs.value.as < ast::expr_field::ptr > () = std::make_unique<ast::expr_field>(yylhs.location, std::move(yystack_[2].value.as < ast::expr > ()), std::move(yystack_[0].value.as < ast::expr_identifier::ptr > ())); }
#line 3587 "parser.cpp"
    break;

  case 215: // expr_field: expr_object "field"
#line 847 "parser.ypp"
        { yylhs.value.as < ast::expr_field::ptr > () = std::make_unique<ast::expr_field>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ()), std::make_unique<ast::expr_identifier>(yylhs.location, yystack_[0].value.as < std::string > ())); }
#line 3593 "parser.cpp"
    break;

  case 216: // expr_size: expr_object ".size"
#line 852 "parser.ypp"
        { yylhs.value.as < ast::expr_size::ptr > () = std::make_unique<ast::expr_size>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3599 "parser.cpp"
    break;

  case 217: // expr_paren: "(" expr ")"
#line 857 "parser.ypp"
        { yylhs.value.as < ast::expr_paren::ptr > () = std::make_unique<ast::expr_paren>(yylhs.location, std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3605 "parser.cpp"
    break;

  case 218: // expr_object: expr_call
#line 861 "parser.ypp"
                      { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_call::ptr > ()); }
#line 3611 "parser.cpp"
    break;

  case 219: // expr_object: expr_method
#line 862 "parser.ypp"
                      { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_method::ptr > ()); }
#line 3617 "parser.cpp"
    break;

  case 220: // expr_object: expr_array
#line 863 "parser.ypp"
                      { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_array::ptr > ()); }
#line 3623 "parser.cpp"
    break;

  case 221: // expr_object: expr_field
#line 864 "parser.ypp"
                      { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_field::ptr > ()); }
#line 3629 "parser.cpp"
    break;

  case 222: // expr_object: expr_game
#line 865 "parser.ypp"
                      { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_game::ptr > ()); }
#line 3635 "parser.cpp"
    break;

  case 223: // expr_object: expr_self
#line 866 "parser.ypp"
                      { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_self::ptr > ()); }
#line 3641 "parser.cpp"
    break;

  case 224: // expr_object: expr_anim
#line 867 "parser.ypp"
                      { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_anim::ptr > ()); }
#line 3647 "parser.cpp"
    break;

  case 225: // expr_object: expr_level
#line 868 "parser.ypp"
                      { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_level::ptr > ()); }
#line 3653 "parser.cpp"
    break;

  case 226: // expr_object: expr_identifier
#line 869 "parser.ypp"
                      { yylhs.value.as < ast::expr > ().as_node = std::move(yystack_[0].value.as < ast::expr_identifier::ptr > ()); }
#line 3659 "parser.cpp"
    break;

  case 227: // expr_empty_array: "[" "]"
#line 874 "parser.ypp"
        { yylhs.value.as < ast::expr_empty_array::ptr > () = std::make_unique<ast::expr_empty_array>(yylhs.location); }
#line 3665 "parser.cpp"
    break;

  case 228: // expr_undefined: "undefined"
#line 879 "parser.ypp"
        { yylhs.value.as < ast::expr_undefined::ptr > () = std::make_unique<ast::expr_undefined>(yylhs.location); }
#line 3671 "parser.cpp"
    break;

  case 229: // expr_game: "game"
#line 884 "parser.ypp"
        { yylhs.value.as < ast::expr_game::ptr > () = std::make_unique<ast::expr_game>(yylhs.location); }
#line 3677 "parser.cpp"
    break;

  case 230: // expr_self: "self"
#line 889 "parser.ypp"
        { yylhs.value.as < ast::expr_self::ptr > () = std::make_unique<ast::expr_self>(yylhs.location); }
#line 3683 "parser.cpp"
    break;

  case 231: // expr_anim: "anim"
#line 894 "parser.ypp"
        { yylhs.value.as < ast::expr_anim::ptr > () = std::make_unique<ast::expr_anim>(yylhs.location); }
#line 3689 "parser.cpp"
    break;

  case 232: // expr_level: "level"
#line 899 "parser.ypp"
        { yylhs.value.as < ast::expr_level::ptr > () = std::make_unique<ast::expr_level>(yylhs.location); }
#line 3695 "parser.cpp"
    break;

  case 233: // expr_animation: "%" "identifier"
#line 904 "parser.ypp"
        { yylhs.value.as < ast::expr_animation::ptr > () = std::make_unique<ast::expr_animation>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3701 "parser.cpp"
    break;

  case 234: // expr_identifier: "identifier"
#line 909 "parser.ypp"
        { yylhs.value.as < ast::expr_identifier::ptr > () = std::make_unique<ast::expr_identifier>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3707 "parser.cpp"
    break;

  case 235: // expr_path: "path"
#line 914 "parser.ypp"
        { yylhs.value.as < ast::expr_path::ptr > () = std::make_unique<ast::expr_path>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3713 "parser.cpp"
    break;

  case 236: // expr_path: expr_identifier
#line 916 "parser.ypp"
        { yylhs.value.as < ast::expr_path::ptr > () = std::make_unique<ast::expr_path>(yylhs.location, yystack_[0].value.as < ast::expr_identifier::ptr > ()->value); }
#line 3719 "parser.cpp"
    break;

  case 237: // expr_istring: "localized string"
#line 921 "parser.ypp"
        { yylhs.value.as < ast::expr_istring::ptr > () = std::make_unique<ast::expr_istring>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3725 "parser.cpp"
    break;

  case 238: // expr_string: "string literal"
#line 926 "parser.ypp"
        { yylhs.value.as < ast::expr_string::ptr > () = std::make_unique<ast::expr_string>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3731 "parser.cpp"
    break;

  case 239: // expr_vector: "(" expr "," expr "," expr ")"
#line 931 "parser.ypp"
        { yylhs.value.as < ast::expr_vector::ptr > () = std::make_unique<ast::expr_vector>(yylhs.location, std::move(yystack_[5].value.as < ast::expr > ()), std::move(yystack_[3].value.as < ast::expr > ()), std::move(yystack_[1].value.as < ast::expr > ())); }
#line 3737 "parser.cpp"
    break;

  case 240: // expr_hash: "hash"
#line 936 "parser.ypp"
        { yylhs.value.as < ast::expr_hash::ptr > () = std::make_unique<ast::expr_hash>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3743 "parser.cpp"
    break;

  case 241: // expr_float: "-" "float"
#line 941 "parser.ypp"
        { yylhs.value.as < ast::expr_float::ptr > () = std::make_unique<ast::expr_float>(yylhs.location, "-" + yystack_[0].value.as < std::string > ()); }
#line 3749 "parser.cpp"
    break;

  case 242: // expr_float: "float"
#line 943 "parser.ypp"
        { yylhs.value.as < ast::expr_float::ptr > () = std::make_unique<ast::expr_float>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3755 "parser.cpp"
    break;

  case 243: // expr_integer: "-" "integer"
#line 948 "parser.ypp"
        { yylhs.value.as < ast::expr_integer::ptr > () = std::make_unique<ast::expr_integer>(yylhs.location, "-" + yystack_[0].value.as < std::string > ()); }
#line 3761 "parser.cpp"
    break;

  case 244: // expr_integer: "integer"
#line 950 "parser.ypp"
        { yylhs.value.as < ast::expr_integer::ptr > () = std::make_unique<ast::expr_integer>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3767 "parser.cpp"
    break;

  case 245: // expr_false: "false"
#line 955 "parser.ypp"
        { yylhs.value.as < ast::expr_false::ptr > () = std::make_unique<ast::expr_false>(yylhs.location); }
#line 3773 "parser.cpp"
    break;

  case 246: // expr_true: "true"
#line 960 "parser.ypp"
        { yylhs.value.as < ast::expr_true::ptr > () = std::make_unique<ast::expr_true>(yylhs.location); }
#line 3779 "parser.cpp"
    break;


#line 3783 "parser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      yy_lac_discard_ ("error recovery");
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  const char *
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    static const char *const yy_sname[] =
    {
    "end of file", "error", "invalid token", "#define", "#undef", "#ifdef",
  "#ifndef", "#if", "#elif", "#else", "#endif", "/#", "#/", "#inline",
  "#include", "#using_animtree", "endon", "notify", "wait", "waittill",
  "waittillmatch", "waittillframeend", "if", "else", "do", "while", "for",
  "foreach", "in", "switch", "case", "default", "break", "continue",
  "return", "breakpoint", "prof_begin", "prof_end", "thread", "true",
  "false", "undefined", ".size", "game", "self", "anim", "level",
  "getnextarraykey", "getfirstarraykey", "getdvarcoloralpha",
  "getdvarcolorblue", "getdvarcolorgreen", "getdvarcolorred",
  "getdvarvector", "getdvarfloat", "getdvarint", "getdvar", "gettime",
  "abs", "vectortoangles", "angleclamp180", "anglestoforward",
  "anglestoright", "anglestoup", "vectorscale", "isdefined", "(", ")", "{",
  "}", "[", "]", ",", ".", "::", ":", ";", "?", "++", "--", "<<", ">>",
  "||", "&&", "==", "!=", "<=", ">=", "<", ">", "!", "~", "=", "+=", "-=",
  "*=", "/=", "%=", "|=", "&=", "^=", ">>=", "<<=", "|", "&", "^", "+",
  "-", "*", "/", "%", "field", "path", "identifier", "string literal",
  "localized string", "hash", "float", "integer", "THEN", "TERN", "NEG",
  "ANIMREF", "PREINC", "PREDEC", "POSTINC", "POSTDEC", "$accept", "root",
  "program", "inline", "include", "declaration", "decl_usingtree",
  "decl_constant", "decl_thread", "stmt", "stmt_or_dev", "stmt_list",
  "stmt_or_dev_list", "stmt_dev", "stmt_block", "stmt_expr", "stmt_call",
  "stmt_assign", "stmt_endon", "stmt_notify", "stmt_wait", "stmt_waittill",
  "stmt_waittillmatch", "stmt_waittillframeend", "stmt_if", "stmt_ifelse",
  "stmt_while", "stmt_dowhile", "stmt_for", "stmt_foreach", "stmt_switch",
  "stmt_case", "stmt_default", "stmt_break", "stmt_continue",
  "stmt_return", "stmt_breakpoint", "stmt_prof_begin", "stmt_prof_end",
  "expr", "expr_or_empty", "expr_assign", "expr_increment",
  "expr_decrement", "expr_ternary", "expr_binary", "expr_primitive",
  "expr_complement", "expr_not", "expr_call", "expr_method",
  "expr_function", "expr_pointer", "expr_parameters", "expr_arguments",
  "expr_arguments_no_empty", "expr_getnextarraykey",
  "expr_getfirstarraykey", "expr_getdvarcoloralpha",
  "expr_getdvarcolorblue", "expr_getdvarcolorgreen",
  "expr_getdvarcolorred", "expr_getdvarvector", "expr_getdvarfloat",
  "expr_getdvarint", "expr_getdvar", "expr_gettime", "expr_abs",
  "expr_vectortoangles", "expr_angleclamp180", "expr_anglestoforward",
  "expr_anglestoright", "expr_anglestoup", "expr_vectorscale",
  "expr_isdefined", "expr_reference", "expr_array", "expr_field",
  "expr_size", "expr_paren", "expr_object", "expr_empty_array",
  "expr_undefined", "expr_game", "expr_self", "expr_anim", "expr_level",
  "expr_animation", "expr_identifier", "expr_path", "expr_istring",
  "expr_string", "expr_vector", "expr_hash", "expr_float", "expr_integer",
  "expr_false", "expr_true", YY_NULLPTR
    };
    return yy_sname[yysymbol];
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

#if T6DEBUG
    // Execute LAC once. We don't care if it is successful, we
    // only do it for the sake of debugging output.
    if (!yyparser_.yy_lac_established_)
      yyparser_.yy_lac_check_ (yyla_.kind ());
#endif

    for (int yyx = 0; yyx < YYNTOKENS; ++yyx)
      {
        symbol_kind_type yysym = YY_CAST (symbol_kind_type, yyx);
        if (yysym != symbol_kind::S_YYerror
            && yysym != symbol_kind::S_YYUNDEF
            && yyparser_.yy_lac_check_ (yysym))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
      }
    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }


  bool
  parser::yy_lac_check_ (symbol_kind_type yytoken) const
  {
    // Logically, the yylac_stack's lifetime is confined to this function.
    // Clear it, to get rid of potential left-overs from previous call.
    yylac_stack_.clear ();
    // Reduce until we encounter a shift and thereby accept the token.
#if T6DEBUG
    YYCDEBUG << "LAC: checking lookahead " << symbol_name (yytoken) << ':';
#endif
    std::ptrdiff_t lac_top = 0;
    while (true)
      {
        state_type top_state = (yylac_stack_.empty ()
                                ? yystack_[lac_top].state
                                : yylac_stack_.back ());
        int yyrule = yypact_[+top_state];
        if (yy_pact_value_is_default_ (yyrule)
            || (yyrule += yytoken) < 0 || yylast_ < yyrule
            || yycheck_[yyrule] != yytoken)
          {
            // Use the default action.
            yyrule = yydefact_[+top_state];
            if (yyrule == 0)
              {
                YYCDEBUG << " Err\n";
                return false;
              }
          }
        else
          {
            // Use the action from yytable.
            yyrule = yytable_[yyrule];
            if (yy_table_value_is_error_ (yyrule))
              {
                YYCDEBUG << " Err\n";
                return false;
              }
            if (0 < yyrule)
              {
                YYCDEBUG << " S" << yyrule << '\n';
                return true;
              }
            yyrule = -yyrule;
          }
        // By now we know we have to simulate a reduce.
        YYCDEBUG << " R" << yyrule - 1;
        // Pop the corresponding number of values from the stack.
        {
          std::ptrdiff_t yylen = yyr2_[yyrule];
          // First pop from the LAC stack as many tokens as possible.
          std::ptrdiff_t lac_size = std::ptrdiff_t (yylac_stack_.size ());
          if (yylen < lac_size)
            {
              yylac_stack_.resize (std::size_t (lac_size - yylen));
              yylen = 0;
            }
          else if (lac_size)
            {
              yylac_stack_.clear ();
              yylen -= lac_size;
            }
          // Only afterwards look at the main stack.
          // We simulate popping elements by incrementing lac_top.
          lac_top += yylen;
        }
        // Keep top_state in sync with the updated stack.
        top_state = (yylac_stack_.empty ()
                     ? yystack_[lac_top].state
                     : yylac_stack_.back ());
        // Push the resulting state of the reduction.
        state_type state = yy_lr_goto_state_ (top_state, yyr1_[yyrule]);
        YYCDEBUG << " G" << int (state);
        yylac_stack_.push_back (state);
      }
  }

  // Establish the initial context if no initial context currently exists.
  bool
  parser::yy_lac_establish_ (symbol_kind_type yytoken)
  {
    /* Establish the initial context for the current lookahead if no initial
       context is currently established.

       We define a context as a snapshot of the parser stacks.  We define
       the initial context for a lookahead as the context in which the
       parser initially examines that lookahead in order to select a
       syntactic action.  Thus, if the lookahead eventually proves
       syntactically unacceptable (possibly in a later context reached via a
       series of reductions), the initial context can be used to determine
       the exact set of tokens that would be syntactically acceptable in the
       lookahead's place.  Moreover, it is the context after which any
       further semantic actions would be erroneous because they would be
       determined by a syntactically unacceptable token.

       yy_lac_establish_ should be invoked when a reduction is about to be
       performed in an inconsistent state (which, for the purposes of LAC,
       includes consistent states that don't know they're consistent because
       their default reductions have been disabled).

       For parse.lac=full, the implementation of yy_lac_establish_ is as
       follows.  If no initial context is currently established for the
       current lookahead, then check if that lookahead can eventually be
       shifted if syntactic actions continue from the current context.  */
    if (!yy_lac_established_)
      {
#if T6DEBUG
        YYCDEBUG << "LAC: initial context established for "
                 << symbol_name (yytoken) << '\n';
#endif
        yy_lac_established_ = true;
        return yy_lac_check_ (yytoken);
      }
    return true;
  }

  // Discard any previous initial lookahead context.
  void
  parser::yy_lac_discard_ (const char* evt)
  {
   /* Discard any previous initial lookahead context because of Event,
      which may be a lookahead change or an invalidation of the currently
      established initial context for the current lookahead.

      The most common example of a lookahead change is a shift.  An example
      of both cases is syntax error recovery.  That is, a syntax error
      occurs when the lookahead is syntactically erroneous for the
      currently established initial context, so error recovery manipulates
      the parser stacks to try to find a new initial context in which the
      current lookahead is syntactically acceptable.  If it fails to find
      such a context, it discards the lookahead.  */
    if (yy_lac_established_)
      {
        YYCDEBUG << "LAC: initial context discarded due to "
                 << evt << '\n';
        yy_lac_established_ = false;
      }
  }

  int
  parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
         In the first two cases, it might appear that the current syntax
         error should have been detected in the previous state when
         yy_lac_check was invoked.  However, at that time, there might
         have been a different syntax error that discarded a different
         initial context during error recovery, leaving behind the
         current lookahead.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short parser::yypact_ninf_ = -446;

  const short parser::yytable_ninf_ = -237;

  const short
  parser::yypact_[] =
  {
      15,  -446,  -446,   -65,   -65,   -49,  -446,    21,    15,  -446,
    -446,  -446,  -446,  -446,  -446,   -50,  -446,  -446,   -42,   -32,
     -58,  -446,  -446,  -446,  -446,   -37,  1203,  -446,  -446,  -446,
      12,   -12,  -446,   -27,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,    16,    22,    24,    33,    34,    43,    51,    70,    73,
      80,    81,    87,    89,    93,    96,   100,   104,   106,   114,
    1203,    -2,   -37,  1203,  1203,    46,    69,  -446,  -446,  -446,
    -446,  2544,  -446,  -446,  -446,  -446,  -446,    45,   167,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,   336,   384,  -446,  -446,   391,  -446,  -446,   531,   537,
     731,   905,  -446,    95,    38,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,   105,   115,   -37,   117,   119,   118,  1203,
    1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,   122,
    1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1300,  1203,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  1203,  1203,
    1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,
    1203,  1203,  1203,  1203,  1203,  1203,  1203,  -446,  1284,   -37,
    -446,  -446,  -446,   125,   120,  1203,   -37,  -446,   750,  -446,
    -446,  1203,  1203,   -37,  2395,  1466,  1500,  1534,  1568,  1602,
    1636,  1670,  1704,  1738,  -446,  1772,  1806,  1840,  1874,  1908,
    1942,  2434,  1976,  -446,  1203,  1037,  2509,   220,   220,  2658,
     966,   950,   950,    68,    68,    68,    68,  2668,  2709,  2699,
      42,    42,  -446,  -446,  -446,  1041,  1199,  -446,   -37,  2627,
      -9,  -446,   129,   872,  1203,   123,   132,   965,   138,   144,
     145,   147,   -83,   139,   140,   142,  1122,   146,   154,   157,
    -446,   155,     7,     7,  -446,  -446,   843,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,   148,   151,   152,   153,   156,  -446,  -446,   567,
    -446,  -446,  -446,  -446,   -20,  2356,    -1,   165,  1203,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  1203,  -446,  2473,   162,  1203,  -446,
     129,  -446,  1203,  1203,  -446,  -446,   936,  2579,  -446,  1203,
     210,  1203,    -6,   -37,  1203,   124,   166,   169,  -446,  -446,
    -446,  -446,  2614,  -446,  1203,  1203,  -446,  -446,    19,    19,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,   182,   184,   187,
     190,  -446,  -446,  1203,  1203,  1203,  1203,  1203,  1203,  1203,
    1203,  1203,  1203,  1203,   186,  -446,  1203,  2010,  2044,  1203,
     198,  2627,  2627,     3,  -446,  -446,  -446,  2078,   202,  2112,
     193,  -446,  -446,  -446,   633,   -13,  2146,  -446,  -446,  -446,
      29,    31,  1203,  1203,  1203,  1203,  2627,  2627,  2627,  2627,
    2627,  2627,  2627,  2627,  2627,  2627,  2627,   206,    49,  -446,
    -446,  2180,  1203,  -446,   965,  1203,   965,  1203,  1203,   -37,
     115,   197,   199,  2214,  1344,  1388,  1432,  1203,  -446,  -446,
      62,   258,  2248,  -446,  2627,   207,  2282,   257,  -446,  -446,
    -446,   211,   213,  1203,   216,  1203,   217,  1203,    71,  -446,
     965,   218,    -6,   965,  1203,  -446,  -446,   214,   229,  -446,
     231,  -446,   233,  -446,  -446,  -446,   235,  -446,  2316,   232,
     236,   240,   965,   965,  -446,  -446,  -446,  -446,  -446
  };

  const unsigned char
  parser::yydefact_[] =
  {
       3,    12,    13,     0,     0,     0,   234,     0,     2,     7,
       8,     9,    14,    15,    16,     0,   235,   236,     0,     0,
       0,     1,     4,     5,     6,   187,     0,    10,    11,   238,
       0,     0,   186,     0,   246,   245,   228,   229,   230,   231,
     232,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   240,   242,
     244,     0,    90,    91,    92,   129,   130,   131,   132,   175,
     176,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,   157,   158,   159,   160,
     161,   162,   163,   164,     0,   165,   166,   167,   168,   169,
     170,   171,   172,     0,     0,     0,     0,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,   211,   174,   173,   241,   243,   233,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,     0,     0,
     215,   177,   178,   236,     0,   189,     0,    17,     0,    19,
     185,     0,   189,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   202,     0,     0,     0,     0,     0,
       0,     0,     0,   217,     0,     0,     0,   122,   123,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     124,   125,   126,   127,   128,     0,     0,   214,     0,   191,
       0,   188,   212,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,     0,    44,    49,     0,    45,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,     0,     0,     0,   218,   219,   220,   221,     0,
     222,   223,   224,   225,   226,     0,     0,     0,     0,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   203,   204,
     205,   206,   207,   208,     0,   210,     0,     0,     0,   213,
       0,   179,     0,   189,    51,    47,     0,     0,    71,     0,
       0,     0,    57,     0,     0,     0,     0,     0,    82,    83,
      84,    86,     0,    87,   189,   189,   218,   219,   106,   108,
      52,    48,    60,    61,    62,    58,    59,     0,     0,     0,
       0,   107,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   189,     0,     0,     0,
       0,   110,   190,     0,    50,    46,    66,     0,     0,     0,
       0,    54,    55,    56,     0,     0,     0,    81,    80,    85,
       0,     0,     0,     0,     0,     0,    95,   101,   102,   103,
     104,   105,    96,    97,    98,   100,    99,     0,     0,   192,
     209,     0,   189,   180,     0,     0,     0,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,   182,   239,
       0,    72,     0,    74,    93,     0,     0,     0,    79,    88,
      89,     0,     0,   189,     0,   189,     0,   189,     0,   183,
       0,     0,    57,     0,     0,    63,    65,     0,   188,    68,
     188,    70,   188,   184,    73,    75,     0,    77,     0,     0,
       0,     0,     0,     0,    64,    67,    69,    76,    78
  };

  const short
  parser::yypgoto_[] =
  {
    -446,  -446,  -446,   297,   301,   324,  -446,  -446,  -446,  -234,
      72,  -446,  -446,  -446,  -123,  -137,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,   377,
    -446,  -337,  -332,  -328,  -446,  -446,  -446,  -446,  -446,  -182,
    -169,   -98,   -82,  -446,    27,  -445,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -152,  -139,  -446,  -446,
    -121,  -446,  -446,   -17,   126,   222,   366,  -446,     0,     8,
    -446,   -18,  -446,  -446,  -446,    85,  -446,  -446
  };

  const short
  parser::yydefgoto_[] =
  {
       0,     7,     8,     9,    10,    11,    12,    13,    14,   264,
     265,   336,   266,   267,   268,   400,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   239,
     455,   292,   293,   294,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    31,   477,   241,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122
  };

  const short
  parser::yytable_[] =
  {
      15,   189,    30,    17,    17,   401,   295,   181,    15,   335,
     402,    18,    19,   340,   403,   438,    25,    20,   478,   296,
     480,    21,   482,   182,   345,    32,     1,     2,     3,     4,
       5,    29,    33,   127,    27,    70,   297,    37,    38,    39,
      40,   128,    26,   126,    28,    33,   185,    16,     6,   298,
      37,    38,    39,    40,  -236,   124,    29,    33,   331,   439,
     125,   295,   151,   332,   261,   295,   385,   299,   149,   150,
     433,   332,   262,   263,   296,   332,     6,   261,   296,   123,
     356,   356,   129,  -218,   295,    16,     6,  -218,   130,   178,
     131,   297,   179,   357,   357,   297,   441,   296,   442,   132,
     133,   332,   395,   332,   298,   183,    16,     6,   298,   134,
     297,   297,   186,   184,   297,  -218,   448,   135,  -218,    16,
       6,   332,   299,   298,   298,   190,   299,   298,     6,   469,
     180,    16,     6,  -226,   332,   401,   136,  -226,   483,   137,
     402,   358,   359,   332,   403,   299,   138,   139,   159,   160,
     174,   175,   176,   140,   295,   141,  -218,  -218,  -218,   142,
     356,   185,   143,   154,   155,  -226,   144,   296,  -226,  -236,
     145,   300,   146,   357,   172,   173,   174,   175,   176,   237,
     147,   187,   156,   188,   297,   192,   242,   191,   304,   204,
     297,   185,   193,   307,   238,   333,   184,   298,   339,   338,
     451,   181,   453,   298,   341,  -219,  -226,  -226,  -226,  -219,
     342,   343,   240,   344,   348,   299,   349,   182,   350,   306,
     354,   404,   353,   355,   362,   149,   300,   363,   364,   365,
     300,   386,   366,   390,   346,   398,   484,  -219,   330,   487,
    -219,   407,   155,   304,   408,   300,   300,   304,   412,   300,
     413,   184,   295,   414,   295,   184,   415,   427,   497,   498,
     181,   181,   304,   304,   432,   296,   304,   296,   435,   437,
     184,   184,   447,   459,   184,   460,   182,   182,  -219,  -219,
    -219,   470,   297,   472,   297,   474,   332,   475,   295,   476,
     356,   295,   479,   481,   485,   298,   489,   298,   490,   183,
     491,   296,   492,   357,   296,    22,   181,   184,   494,    23,
     295,   295,   495,   299,   301,   299,   496,   458,   297,   300,
     297,   297,   182,   296,   296,   300,   172,   173,   174,   175,
     176,   298,    24,   298,   298,   486,   304,   347,   361,     0,
     297,   297,   304,   405,   184,     0,     0,     0,     0,   299,
     184,   404,   299,   298,   298,     0,     0,     0,   183,   183,
     393,     0,     0,     0,     0,     0,   184,   184,     0,   301,
       0,   299,   299,   301,  -220,     0,     0,     0,  -220,     0,
       0,   410,   411,     0,     0,     0,     0,     0,   301,   301,
       0,     0,   301,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,   183,     0,  -220,     0,     0,  -220,
     302,     0,   184,   428,     0,     0,     0,   300,     0,   300,
       0,     0,  -221,     0,     0,     0,  -221,     0,     0,    33,
       0,     0,     0,   177,   304,     0,   304,   148,     0,   457,
     152,   153,   184,     0,   184,     0,     0,  -220,  -220,  -220,
       0,     0,     0,   300,  -221,   300,   300,  -221,     0,   450,
       0,   178,   301,     0,   179,   302,     0,     0,   301,   302,
     304,     0,   304,   304,   468,   300,   300,     0,   184,     0,
     184,   184,     0,     0,   302,   302,     0,     0,   302,     0,
       0,     0,   304,   304,     0,  -221,  -221,  -221,     0,     0,
     184,   184,   180,    16,     6,     0,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,   205,   206,   207,
     208,   209,   210,   211,   212,     0,   215,     0,     0,     0,
       0,     0,     0,     0,     0,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   303,   236,     0,     0,   302,     0,
     301,     0,   301,     0,   302,     0,     0,     0,   305,  -222,
       0,     0,     0,  -222,     0,  -223,     0,     0,     0,  -223,
       0,     0,     0,   367,   368,     0,   369,   370,     0,     0,
       0,   326,     0,     0,     0,     0,   301,     0,   301,   301,
       0,  -222,     0,     0,  -222,    33,     0,  -223,     0,   303,
    -223,     0,   215,   303,     0,     0,     0,     0,   301,   301,
       0,   337,     0,     0,     0,     0,     0,     0,   303,   303,
       0,     0,   303,   352,     0,     0,     0,   178,     0,     0,
     179,     0,  -222,  -222,  -222,   371,   372,     0,  -223,  -223,
    -223,     0,     0,     0,     0,     0,   302,     0,   302,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
       0,    33,     0,     0,     0,     0,     0,     0,   180,    16,
       6,     0,     0,     0,     0,   387,     0,     0,     0,     0,
       0,     0,   302,     0,   302,   302,     0,     0,     0,     0,
       0,   388,   303,   178,     0,   391,   179,     0,   303,   392,
       0,   371,   372,     0,   302,   302,   397,     0,   399,     0,
       0,   406,     0,     0,     0,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,     0,     0,     0,     0,
       0,     0,     0,     0,   180,    16,     6,     0,     0,     0,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   243,     0,     0,     0,     0,   431,     0,   244,  -224,
       0,   245,   246,  -224,   247,   248,   249,   250,     0,   251,
     252,   253,   254,   255,   256,   257,   258,   259,    33,   443,
     444,   445,   446,    37,    38,    39,    40,     0,     0,     0,
     303,  -224,   303,     0,  -224,     0,     0,     0,     0,     0,
       0,     0,   452,     0,   454,   456,     0,     0,   188,   260,
     261,     0,     0,     0,     0,     0,     0,     0,   262,   263,
       0,     0,     0,     0,     0,     0,   303,     0,   303,   303,
       0,     0,  -224,  -224,  -224,     0,     0,     0,     0,     0,
       0,   488,     0,     0,   243,     0,     0,     0,   303,   303,
       0,   244,    16,     6,   245,   246,     0,   247,   248,   249,
     250,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,    33,     0,     0,   334,     0,    37,    38,    39,    40,
     244,     0,     0,   245,   246,     0,   247,   248,   249,   250,
       0,   251,   252,   253,   254,   255,   256,   257,   258,   259,
      33,   188,   360,   261,     0,    37,    38,    39,    40,     0,
       0,   262,   263,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     188,     0,   261,  -225,     0,     0,     0,  -225,   394,     0,
     262,   263,     0,     0,   244,    16,     6,   245,   246,     0,
     247,   248,   249,   250,     0,   251,   252,   253,   254,   255,
     256,   257,   258,   259,    33,  -225,     0,     0,  -225,    37,
      38,    39,    40,   244,    16,     6,   245,   246,     0,   247,
     248,   249,   250,     0,   251,   252,   253,   254,   255,   256,
     257,   258,   259,    33,   188,     0,   261,     0,    37,    38,
      39,    40,     0,     0,   262,   263,  -225,  -225,  -225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     159,   160,     0,   188,     0,   261,   165,   166,   167,   168,
       0,     0,     0,   262,   263,     0,   159,   160,    16,     6,
     163,   164,   165,   166,   167,   168,   172,   173,   174,   175,
     176,     0,     0,     0,     0,     0,     0,     0,     0,   169,
     170,   171,   172,   173,   174,   175,   176,    16,     6,    33,
      34,    35,    36,     0,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,   327,     0,
       0,   235,   150,     0,   158,    62,     0,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,     0,
       0,    63,    64,     0,     0,     0,     0,     0,     0,     0,
     169,   170,   171,   172,   173,   174,   175,   176,    65,     0,
       0,    66,     0,    16,     6,    29,    67,    68,    69,    70,
      33,    34,    35,    36,     0,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     0,
       0,     0,    61,     0,     0,     0,    62,     0,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
       0,     0,    66,     0,    16,     6,    29,    67,    68,    69,
      70,    33,    34,    35,    36,     0,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
     329,     0,     0,    61,     0,     0,   158,    62,     0,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,     0,     0,    63,    64,     0,     0,     0,     0,     0,
       0,     0,   169,   170,   171,   172,   173,   174,   175,   176,
      65,     0,     0,    66,     0,    16,     6,    29,    67,    68,
      69,    70,    33,    34,    35,    36,     0,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,   235,     0,     0,     0,    62,     0,
       0,     0,     0,     0,     0,     0,     0,   213,     0,     0,
       0,     0,   214,     0,    63,    64,     0,   158,     0,     0,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
       0,    65,     0,     0,    66,     0,    16,     6,    29,    67,
      68,    69,    70,   169,   170,   171,   172,   173,   174,   175,
     176,   462,     0,     0,     0,     0,   463,     0,     0,     0,
       0,   158,     0,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   170,   171,
     172,   173,   174,   175,   176,   464,     0,     0,     0,     0,
     465,     0,     0,     0,     0,   158,     0,     0,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,   170,   171,   172,   173,   174,   175,   176,   466,
       0,     0,     0,     0,   467,     0,     0,     0,     0,   158,
       0,     0,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   309,     0,   169,   170,   171,   172,   173,
     174,   175,   176,   158,     0,     0,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   310,     0,   169,
     170,   171,   172,   173,   174,   175,   176,   158,     0,     0,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   311,     0,   169,   170,   171,   172,   173,   174,   175,
     176,   158,     0,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   312,     0,   169,   170,   171,
     172,   173,   174,   175,   176,   158,     0,     0,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   313,
       0,   169,   170,   171,   172,   173,   174,   175,   176,   158,
       0,     0,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   314,     0,   169,   170,   171,   172,   173,
     174,   175,   176,   158,     0,     0,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   315,     0,   169,
     170,   171,   172,   173,   174,   175,   176,   158,     0,     0,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   316,     0,   169,   170,   171,   172,   173,   174,   175,
     176,   158,     0,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   317,     0,   169,   170,   171,
     172,   173,   174,   175,   176,   158,     0,     0,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   318,
       0,   169,   170,   171,   172,   173,   174,   175,   176,   158,
       0,     0,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   319,     0,   169,   170,   171,   172,   173,
     174,   175,   176,   158,     0,     0,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   320,     0,   169,
     170,   171,   172,   173,   174,   175,   176,   158,     0,     0,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   321,     0,   169,   170,   171,   172,   173,   174,   175,
     176,   158,     0,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   322,     0,   169,   170,   171,
     172,   173,   174,   175,   176,   158,     0,     0,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   323,
       0,   169,   170,   171,   172,   173,   174,   175,   176,   158,
       0,     0,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   325,     0,   169,   170,   171,   172,   173,
     174,   175,   176,   158,     0,     0,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   429,     0,   169,
     170,   171,   172,   173,   174,   175,   176,   158,     0,     0,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   430,     0,   169,   170,   171,   172,   173,   174,   175,
     176,   158,     0,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   434,     0,   169,   170,   171,
     172,   173,   174,   175,   176,   158,     0,     0,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   436,
       0,   169,   170,   171,   172,   173,   174,   175,   176,   158,
       0,     0,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   440,     0,   169,   170,   171,   172,   173,
     174,   175,   176,   158,     0,     0,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   449,     0,   169,
     170,   171,   172,   173,   174,   175,   176,   158,     0,     0,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   461,     0,   169,   170,   171,   172,   173,   174,   175,
     176,   158,     0,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   471,     0,   169,   170,   171,
     172,   173,   174,   175,   176,   158,     0,     0,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   473,
       0,   169,   170,   171,   172,   173,   174,   175,   176,   158,
       0,     0,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   493,     0,   169,   170,   171,   172,   173,
     174,   175,   176,   158,     0,     0,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   169,
     170,   171,   172,   173,   174,   175,   176,   384,     0,     0,
       0,     0,     0,   158,     0,     0,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   169,
     170,   171,   172,   173,   174,   175,   176,   308,     0,     0,
       0,     0,   158,     0,     0,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   324,     0,     0,     0,
       0,   158,     0,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   170,   171,
     172,   173,   174,   175,   176,   389,     0,     0,     0,     0,
     158,     0,     0,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   169,   170,   171,   172,
     173,   174,   175,   176,   328,     0,   158,     0,     0,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   169,   170,   171,   172,   173,   174,   175,   176,
     157,   158,     0,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   170,   171,
     172,   173,   174,   175,   176,   396,   158,     0,     0,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   169,   170,   171,   172,   173,   174,   175,   176,
     409,   158,     0,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   158,     0,     0,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,     0,     0,     0,     0,     0,
     169,   170,   171,   172,   173,   174,   175,   176,   159,   160,
       0,   162,   163,   164,   165,   166,   167,   168,   159,   160,
       0,     0,   163,   164,   165,   166,   167,   168,     0,     0,
       0,   169,   170,   171,   172,   173,   174,   175,   176,     0,
       0,     0,   170,   171,   172,   173,   174,   175,   176,   159,
     160,     0,     0,   163,   164,   165,   166,   167,   168,   159,
     160,     0,     0,   163,   164,   165,   166,   167,   168,     0,
       0,     0,     0,   170,     0,   172,   173,   174,   175,   176,
       0,     0,     0,     0,     0,   172,   173,   174,   175,   176
  };

  const short
  parser::yycheck_[] =
  {
       0,   124,    20,     3,     4,   342,   188,   105,     8,   243,
     342,     3,     4,   247,   342,    28,    66,    66,   463,   188,
     465,     0,   467,   105,   107,    25,    11,    12,    13,    14,
      15,   114,    38,    33,    76,   118,   188,    43,    44,    45,
      46,    33,    92,    70,    76,    38,    66,   112,   113,   188,
      43,    44,    45,    46,    74,    67,   114,    38,    67,    72,
      72,   243,    62,    72,    70,   247,    67,   188,    70,    71,
      67,    72,    78,    79,   243,    72,   113,    70,   247,    67,
     262,   263,    66,    38,   266,   112,   113,    42,    66,    70,
      66,   243,    73,   262,   263,   247,    67,   266,    67,    66,
      66,    72,   336,    72,   243,   105,   112,   113,   247,    66,
     262,   263,    74,   105,   266,    70,    67,    66,    73,   112,
     113,    72,   243,   262,   263,   125,   247,   266,   113,    67,
     111,   112,   113,    38,    72,   472,    66,    42,    67,    66,
     472,   262,   263,    72,   472,   266,    66,    66,    80,    81,
     108,   109,   110,    66,   336,    66,   111,   112,   113,    66,
     342,    66,    66,   117,   118,    70,    66,   336,    73,    74,
      66,   188,    66,   342,   106,   107,   108,   109,   110,   179,
      66,    76,   113,    68,   336,    66,   186,    70,   188,    67,
     342,    66,    74,   193,    74,    66,   188,   336,    66,    76,
     434,   299,   436,   342,    66,    38,   111,   112,   113,    42,
      66,    66,   185,    66,    75,   336,    76,   299,    76,   192,
      66,   342,    76,    66,    76,    70,   243,    76,    76,    76,
     247,    66,    76,    71,   252,    25,   470,    70,   238,   473,
      73,    75,   118,   243,    75,   262,   263,   247,    66,   266,
      66,   243,   434,    66,   436,   247,    66,    71,   492,   493,
     358,   359,   262,   263,    66,   434,   266,   436,    66,    76,
     262,   263,    66,    76,   266,    76,   358,   359,   111,   112,
     113,    23,   434,    76,   436,    28,    72,    76,   470,    76,
     472,   473,    76,    76,    76,   434,    67,   436,    67,   299,
      67,   470,    67,   472,   473,     8,   404,   299,    76,     8,
     492,   493,    76,   434,   188,   436,    76,   440,   470,   336,
     472,   473,   404,   492,   493,   342,   106,   107,   108,   109,
     110,   470,     8,   472,   473,   472,   336,   252,   266,    -1,
     492,   493,   342,   343,   336,    -1,    -1,    -1,    -1,   470,
     342,   472,   473,   492,   493,    -1,    -1,    -1,   358,   359,
     333,    -1,    -1,    -1,    -1,    -1,   358,   359,    -1,   243,
      -1,   492,   493,   247,    38,    -1,    -1,    -1,    42,    -1,
      -1,   354,   355,    -1,    -1,    -1,    -1,    -1,   262,   263,
      -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,   404,    -1,    70,    -1,    -1,    73,
     188,    -1,   404,   386,    -1,    -1,    -1,   434,    -1,   436,
      -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    38,
      -1,    -1,    -1,    42,   434,    -1,   436,    60,    -1,   439,
      63,    64,   434,    -1,   436,    -1,    -1,   111,   112,   113,
      -1,    -1,    -1,   470,    70,   472,   473,    73,    -1,   432,
      -1,    70,   336,    -1,    73,   243,    -1,    -1,   342,   247,
     470,    -1,   472,   473,   447,   492,   493,    -1,   470,    -1,
     472,   473,    -1,    -1,   262,   263,    -1,    -1,   266,    -1,
      -1,    -1,   492,   493,    -1,   111,   112,   113,    -1,    -1,
     492,   493,   111,   112,   113,    -1,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   188,   178,    -1,    -1,   336,    -1,
     434,    -1,   436,    -1,   342,    -1,    -1,    -1,   191,    38,
      -1,    -1,    -1,    42,    -1,    38,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    16,    17,    -1,    19,    20,    -1,    -1,
      -1,   214,    -1,    -1,    -1,    -1,   470,    -1,   472,   473,
      -1,    70,    -1,    -1,    73,    38,    -1,    70,    -1,   243,
      73,    -1,   235,   247,    -1,    -1,    -1,    -1,   492,   493,
      -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,   262,   263,
      -1,    -1,   266,   256,    -1,    -1,    -1,    70,    -1,    -1,
      73,    -1,   111,   112,   113,    78,    79,    -1,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,   434,    -1,   436,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
     113,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,   470,    -1,   472,   473,    -1,    -1,    -1,    -1,
      -1,   324,   336,    70,    -1,   328,    73,    -1,   342,   332,
      -1,    78,    79,    -1,   492,   493,   339,    -1,   341,    -1,
      -1,   344,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,   112,   113,    -1,    -1,    -1,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    11,    -1,    -1,    -1,    -1,   389,    -1,    18,    38,
      -1,    21,    22,    42,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   412,
     413,   414,   415,    43,    44,    45,    46,    -1,    -1,    -1,
     434,    70,   436,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,    -1,   437,   438,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,   472,   473,
      -1,    -1,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,   474,    -1,    -1,    11,    -1,    -1,    -1,   492,   493,
      -1,    18,   112,   113,    21,    22,    -1,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    12,    -1,    43,    44,    45,    46,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    68,    69,    70,    -1,    43,    44,    45,    46,    -1,
      -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    38,    -1,    -1,    -1,    42,    12,    -1,
      78,    79,    -1,    -1,    18,   112,   113,    21,    22,    -1,
      24,    25,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    70,    -1,    -1,    73,    43,
      44,    45,    46,    18,   112,   113,    21,    22,    -1,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    68,    -1,    70,    -1,    43,    44,
      45,    46,    -1,    -1,    78,    79,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    68,    -1,    70,    86,    87,    88,    89,
      -1,    -1,    -1,    78,    79,    -1,    80,    81,   112,   113,
      84,    85,    86,    87,    88,    89,   106,   107,   108,   109,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,   112,   113,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    71,    -1,
      -1,    70,    71,    -1,    77,    74,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,   107,    -1,
      -1,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      71,    -1,    -1,    70,    -1,    -1,    77,    74,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
     107,    -1,    -1,   110,    -1,   112,   113,   114,   115,   116,
     117,   118,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    72,    -1,    90,    91,    -1,    77,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,   107,    -1,    -1,   110,    -1,   112,   113,   114,   115,
     116,   117,   118,   103,   104,   105,   106,   107,   108,   109,
     110,    67,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,    67,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,    67,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,    77,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,    77,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,    77,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,    77,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,    77,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,    77,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,    77,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,    77,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,    77,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,    77,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,    77,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,    77,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,    77,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,    77,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,    77,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,    77,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,    77,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,    77,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,    77,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,    77,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,    77,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,    71,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,
     105,   106,   107,   108,   109,   110,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,    75,    -1,    77,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
      76,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,    76,    77,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
      76,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    77,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,    -1,    -1,    -1,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,    80,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    80,    81,
      -1,    -1,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
      -1,    -1,   104,   105,   106,   107,   108,   109,   110,    80,
      81,    -1,    -1,    84,    85,    86,    87,    88,    89,    80,
      81,    -1,    -1,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,   104,    -1,   106,   107,   108,   109,   110,
      -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,   110
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    11,    12,    13,    14,    15,   113,   128,   129,   130,
     131,   132,   133,   134,   135,   215,   112,   215,   216,   216,
      66,     0,   130,   131,   132,    66,    92,    76,    76,   114,
     218,   180,   215,    38,    39,    40,    41,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    70,    74,    90,    91,   107,   110,   115,   116,   117,
     118,   166,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,    67,    67,    72,    70,   215,   216,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,   166,    70,
      71,   215,   166,   166,   117,   118,   113,    76,    77,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,   103,
     104,   105,   106,   107,   108,   109,   110,    42,    70,    73,
     111,   178,   179,   215,   216,    66,    74,    76,    68,   141,
     215,    70,    66,    74,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,    67,   166,   166,   166,   166,   166,
     166,   166,   166,    67,    72,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,    70,   166,   215,    74,   166,
     181,   182,   215,    11,    18,    21,    22,    24,    25,    26,
      27,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      69,    70,    78,    79,   136,   137,   139,   140,   141,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   168,   169,   170,   176,   177,   203,   204,   207,
     210,   211,   212,   213,   215,   166,   181,   215,    72,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    72,    67,   166,    71,    75,    71,
     215,    67,    72,    66,    12,   136,   138,   166,    76,    66,
     136,    66,    66,    66,    66,   107,   218,   222,    75,    76,
      76,    76,   166,    76,    66,    66,   176,   177,   207,   207,
      69,   137,    76,    76,    76,    76,    76,    16,    17,    19,
      20,    78,    79,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    71,    67,    66,   166,   166,    72,
      71,   166,   166,   181,    12,   136,    76,   166,    25,   166,
     142,   168,   169,   170,   207,   215,   166,    75,    75,    76,
     181,   181,    66,    66,    66,    66,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,    71,   181,    67,
      67,   166,    66,    67,    67,    66,    67,    76,    28,    72,
      67,    67,    67,   166,   166,   166,   166,    66,    67,    67,
     181,   136,   166,   136,   166,   167,   166,   215,   141,    76,
      76,    67,    67,    72,    67,    72,    67,    72,   181,    67,
      23,    67,    76,    67,    28,    76,    76,   181,   182,    76,
     182,    76,   182,    67,   136,    76,   142,   136,   166,    67,
      67,    67,    67,    67,    76,    76,    76,   136,   136
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,   127,   128,   128,   129,   129,   129,   129,   129,   129,
     130,   131,   132,   132,   132,   132,   132,   133,   134,   135,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   142,   142,   143,   143,
     144,   144,   144,   145,   146,   146,   147,   148,   148,   149,
     149,   150,   151,   152,   153,   154,   155,   156,   156,   157,
     158,   158,   159,   160,   161,   162,   162,   163,   164,   165,
     166,   166,   166,   167,   167,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   169,   169,   170,   170,
     171,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   174,   175,   176,   176,   177,   177,   178,
     178,   178,   178,   179,   179,   180,   180,   180,   181,   181,
     182,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   202,   203,   204,   204,   205,   206,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   216,   217,   218,   219,
     220,   221,   221,   222,   222,   223,   224
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,     2,     2,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     5,     4,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       3,     2,     3,     2,     1,     1,     1,     0,     2,     2,
       2,     2,     2,     6,     8,     6,     3,     8,     6,     8,
       6,     2,     5,     7,     5,     7,     9,     7,     9,     5,
       3,     3,     2,     2,     2,     3,     2,     2,     5,     5,
       1,     1,     1,     1,     0,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     2,     2,     4,
       6,     5,     7,     8,     9,     3,     1,     0,     1,     0,
       3,     1,     6,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     3,     4,     4,     4,     4,     4,     4,     6,
       4,     2,     3,     4,     3,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     7,
       1,     2,     1,     2,     1,     1,     1
  };




#if T6DEBUG
  const short
  parser::yyrline_[] =
  {
       0,   284,   284,   285,   289,   291,   293,   295,   297,   299,
     304,   308,   313,   314,   315,   316,   317,   321,   326,   331,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   363,   364,   368,   370,   375,   377,
     382,   383,   387,   388,   392,   394,   396,   399,   403,   405,
     410,   412,   414,   419,   424,   426,   431,   436,   438,   443,
     445,   450,   455,   460,   465,   470,   475,   480,   482,   487,
     492,   494,   499,   504,   509,   514,   516,   521,   526,   531,
     536,   537,   538,   542,   543,   547,   549,   551,   553,   555,
     557,   559,   561,   563,   565,   567,   572,   574,   579,   581,
     586,   591,   593,   595,   597,   599,   601,   603,   605,   607,
     609,   611,   613,   615,   617,   619,   621,   623,   625,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   677,   682,   687,   688,   691,   692,   696,
     698,   700,   702,   707,   709,   714,   716,   719,   723,   726,
     730,   732,   737,   742,   747,   752,   757,   762,   767,   772,
     777,   782,   787,   792,   797,   802,   807,   812,   817,   822,
     827,   832,   834,   839,   844,   846,   851,   856,   861,   862,
     863,   864,   865,   866,   867,   868,   869,   873,   878,   883,
     888,   893,   898,   903,   908,   913,   915,   920,   925,   930,
     935,   940,   942,   947,   949,   954,   959
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // T6DEBUG


#line 13 "parser.ypp"
} } } // xsk::arc::t6
#line 5171 "parser.cpp"

#line 963 "parser.ypp"


void xsk::arc::t6::parser::error(const xsk::arc::location& loc, const std::string& msg)
{
    throw xsk::arc::comp_error(loc, msg);
}