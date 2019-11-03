#ifndef LIBRARY_H
#define LIBRARY_H
#include "list.h"

typedef struct song* library[27];

struct song** add_song(library lib, char* name, char* artist);

#endif
