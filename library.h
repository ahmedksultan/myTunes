#ifndef LIBRARY_H
#define LIBRARY_H
#include "list.h"

typedef struct song* library[27];

void init_library(library lib);
void print_library(library lib);
void add_song(library lib, char* name, char* artist);
void clear(library lib);
struct song* find_artist_lib(library lib, char* artist);
struct song* find_song_lib(library lib, char* name, char* artist);
void delete_song(library lib, char* name, char* artist);
void shuffle(library lib, int num);
void print_artist(library lib, char* artist);
void print_letter(library lib, char category);

#endif
