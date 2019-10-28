#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

int main() {
    struct song* song_list = NULL;
    printf("\nAdding items to list...\n");
    song_list = insert_front(song_list, "Runaway", "Kanye West");
    song_list = insert_front(song_list, "Mr. Brightside", "The Killers");
    printf("Result: ");
    print_list(song_list);
}
