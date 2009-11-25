/*********************                                           -*- C++ -*-  */
/** smt_engine.cpp
 ** This file is part of the CVC4 prototype.
 ** Copyright (c) 2009 The Analysis of Computer Systems Group (ACSys)
 ** Courant Institute of Mathematical Sciences
 ** New York University
 ** See the file COPYING in the top-level source directory for licensing
 ** information.
 **
 **/

#include "smt/smt_engine.h"
#include "util/exception.h"
#include "util/command.h"

namespace CVC4 {

void doCommand(Command* c) {
  if(c->getSmtEngine() != this)
    throw new IllegalArgumentException("SmtEngine does not match Command");

  c->invoke();
}


}/* CVC4 namespace */
