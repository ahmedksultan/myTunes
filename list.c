#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

/* --- INSTRUCTIONS ---
insert nodes at the front
insert nodes in order
alphabetical by Artist then by Song
print the entire list
find and return a pointer to a node based on artist and song name
find and return a pointer to the first song of an artist based on artist name
Return a pointer to random element in the list.
remove a single specified node from the list
free the entire list
--- INSTRUCTIONS --- */

void print_list(struct song* list) {
    while (list != NULL) {
        printf("%s, by %s | ", list->name, list->artist );
        list = list->next;
    }
    printf("\n");
}

struct song* insert_front(struct song* list, char* name, char* artist) {
    struct song* new = malloc(sizeof(struct song));
    strcpy(new->name, name);
    strcpy(new->artist, artist);
    new->next = list;
    return new;
}
