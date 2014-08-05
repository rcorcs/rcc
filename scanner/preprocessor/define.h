#ifndef RCC_DEFINE_H
#define RCC_DEFINE_H

#include <cstring>
#include <cstdio>

#include "deftab.h"
#include "def.h"
#include "defvar.h"
#include "deffunc.h"

extern def *define;
extern char *defid;
extern char *defval;
extern deftab deftable;
extern deffunc *deff;
extern deftab *deffunctable;
extern int defactpidx;
extern int definb;

void startdef();
void finishdef();

void setdefid(const char *id);
void appenddefval(const char *val);
void insertdef();

void printdef();

#endif
