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
            print_letter(lib, 'a'+i)
        }
    }
}

void print_letter(library lib, char category) {
    printf("%c: ",'a'+i);
    print_list(lib[i]);
}

void print_artist(library lib, char* artist) {
    struct song* current = find_artist_lib(lib, artist);

    while (!(current == NULL || strcmp(current->artist, artist)) {
        printf("%s, by %s | ");
        current = current->next;
    }
    printf("\n");
}

void add_song(library lib, char* name, char* artist) {
    lib[artist[0]-'a'] = insert_ordered(lib[artist[0]-'a'], name, artist);
}
