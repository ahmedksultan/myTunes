#ifndef LIST_H
#define LIST_H

struct song { char name[100]; char artist[100]; struct song * next; };
void print_list(struct song * list);
struct song * insert_front(struct song * list, char * name, char * artist);

#endif
