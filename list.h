#ifndef LIST_H
#define LIST_H

struct song { char name[100]; char artist[100]; struct song* next; };
void print_list(struct song* list);
struct song* insert_front(struct song* list, char* name, char* artist);
struct song* insert_ordered(struct song* list, char* name, char* artist);
struct song* find_song(struct song* list, char* name, char* artist);
struct song* find_artist(struct song* list, char* artist);
struct song* remove_song(struct song* list, struct song* target);
struct song* random_song(struct song* list);
struct song* free_list(struct song* list);

#endif
