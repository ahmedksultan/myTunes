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

struct song* insert_ordered(struct song* list, char* name, char* artist) {
    struct song* current = list;
    struct song* prev = NULL;

    if (current == NULL) {
        return insert_front(list, name, artist);
    }

    int cmpArtist = strcmp(artist, current->artist);
    int cmpName = strcmp(name, current->name);

    if (cmpArtist < 0 || (cmpArtist == 0 && cmpName <= 0)) {
        return insert_front(list, name, artist);
    }

    while (current != NULL) {
        cmpArtist = strcmp(artist, current->artist);
        cmpName = strcmp(name, current->name);
        if (cmpArtist < 0 || (cmpArtist == 0 && cmpName < 0)) {
            prev->next = insert_front(current, name, artist);
            return list;
        }
        prev = current;
        current = current->next;
    }
    struct song* new = malloc(sizeof(struct song));
    strcpy(new->name, name);
    strcpy(new->artist, artist);
    new->next = NULL;
    prev->next = new;
    return list;
}

struct song* remove_song(struct song* list, struct song* target) {
    if (list == NULL) return list;
    struct song* current = list;
    while (current->next != NULL) {
        if (current->next == target) {
            current->next = target->next;
            free(target);
            return list;
        }
        current = current->next;
    }
    if (current == target) {
        free(current);
    }
    return NULL;
}
