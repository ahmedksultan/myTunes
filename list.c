#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#include "list.h"

/* --- INSTRUCTIONS ---
insert nodes at the front [completed]
insert nodes in order [completed]
    alphabetical by Artist then by Song
print the entire list [completed]
find and return a pointer to a node based on artist and song name [completed]
find and return a pointer to the first song of an artist based on artist name [completed]
Return a pointer to random element in the list. [completed]
remove a single specified node from the list [completed]
free the entire list [completed]
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
    if (list == target) {
      struct song* start = list->next;
      free(list);
      return start;
    }
    struct song* current = list;
    while (current->next != NULL) {
        if (current->next == target) {
            current->next = target->next;
            free(target);
            return list;
        }
        current = current->next;
    }
    return NULL;
}

struct song* free_list(struct song* list) {
    while (list != NULL) {
        list = remove_song(list, list);
    }
    return list;
}

struct song * find_song(struct song * list, char * name, char * artist) {
    while (list != NULL) {
        if (!(strcmp(list->name, name) || strcmp(list->artist, artist))) {
            return list;
        }
        list = list->next;
    }
    return NULL;
}

struct song * find_artist(struct song * list, char * artist) {
    while(list != NULL) {
        if (strcmp(list->artist, artist) == 0) {
            return list;
        }
        list = list -> next;
    }
    return NULL;
}

struct song * random_song(struct song * list) {
    struct song * list2 = list;
    int track_count = 0;
    while(list != NULL) {
        track_count = track_count + 1;
        list = list->next;
    }
    int track_target = (rand() % track_count);
    int ctr = 0;
    while(list2 != NULL) {
        if (ctr == track_target) {
            return list2;
        }
        ctr++;
        list2 = list2->next;
    }
    return NULL;
}