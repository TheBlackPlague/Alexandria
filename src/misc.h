#pragma once

#include "Board.h"
#include "search.h"
#include "stdio.h"
#ifdef _WIN32
#include "windows.h"
#else
#include "string.h"
#include "sys/select.h"
#include "sys/time.h"
#include "unistd.h"
#endif

int GetTimeMs();

const char *getfield(char *line, int num);

void runtestpositions(FILE *file, int depth);

void GetNNUEPieceValues(S_Board* pos);