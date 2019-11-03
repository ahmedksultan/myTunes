#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#include "list.h"

/* --- INSTRUCTIONS
DO NOT WORK ON THIS PART UNTIL YOUR LINKED LIST IS COMPLETE
Then create your array of linked lists for the full program to have the following functions:
Add song nodes.
Search for a song given song and artist name (return a pointer).
Search for an artist.
Print out all the entries under a certain letter.
Print out all the songs of a certain artist
Print out the entire library.
Shuffle - print out a series of randomly chosen songs.
Delete a song
Clear the library.
--- */

void init_library(library lib) {
    int i;
    for (i = 0; i < 27; i++) {
        lib[i] = NULL;
    }
}

void print_library(library lib) {
    int i;
    for (i = 0; i < 27; i++) {
        if (lib[i] != NULL) {
            print_letter(lib, 'a'+i);
        }
    }
    printf("\n");
}

void print_letter(library lib, char category) {
    int ind = category - 'a';
    if (ind < 0 || ind > 25) {
        ind = 26;
        category = '%';
    }
    printf("%c: ",category);
    print_list(lib[ind]);
}

void print_artist(library lib, char* artist) {
    struct song* current = find_artist_lib(lib, artist);

    printf("songs by %s:\n", artist);

    while (!(current == NULL || strcmp(current->artist, artist))) {
        printf("\t%s\n", current->name);
        current = current->next;
    }
    printf("\n");
}

void add_song(library lib, char* name, char* artist) {
    int ind = artist[0] - 'a';
    if (ind < 0 || ind > 25) ind = 26;
    lib[ind] = insert_ordered(lib[ind], name, artist);
}

struct song * find_song_lib(library lib, char* name, char* artist) {
    int ind = artist[0] - 'a';
    if (ind < 0 || ind > 25) ind = 26;
    struct song * current = lib[ind];
    return find_song(current, name, artist);
}

struct song * find_artist_lib(library lib, char* artist) {
    int ind = artist[0] - 'a';
    if (ind < 0 || ind > 25) ind = 26;
    struct song * current = lib[ind];
    return find_artist(current, artist);
}
