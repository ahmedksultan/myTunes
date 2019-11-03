#ifndef LIBRARY_H
#define LIBRARY_H
#include "list.h"

typedef struct song* library[27];

void init_library(library lib);
void add_song(library lib, char* name, char* artist);

#endif
