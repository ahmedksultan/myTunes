#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "list.h"
#include "library.h"

int main() {
    struct song* song_list = NULL;

    printf("\nAdding items to list... [insert_front]\n");
    song_list = insert_front(song_list, "runaway", "kanye west");
    song_list = insert_front(song_list, "coldest winter", "kanye west");
    song_list = insert_front(song_list, "saint pablo", "kanye west");
    song_list = insert_front(song_list, "blood on the leaves", "kanye west");
    song_list = insert_front(song_list, "basket case", "green day");
    song_list = insert_front(song_list, "fluorescent adolescent", "arctic monkeys");
    song_list = insert_front(song_list, "mr. brightside", "the killers");
    song_list = insert_front(song_list, "clint eastwood", "gorillaz");
    song_list = insert_front(song_list, "champagne supernova", "oasis");
    song_list = insert_front(song_list, "american idiot", "green day");
    song_list = insert_front(song_list, "lift", "radiohead");
    song_list = insert_front(song_list, "21 guns", "green day");
    song_list = insert_front(song_list, "on melancholy hill", "gorillaz");
    printf("List: ");
    print_list(song_list);

    printf("___________________________\n\nFreeing list... [free_list]\n");
    song_list = free_list(song_list);
    printf("List: ");
    print_list(song_list);

    printf("___________________________\n\nAdding items in order... [insert_ordered]\n");
    song_list = insert_ordered(song_list, "runaway", "kanye west");
    song_list = insert_ordered(song_list, "coldest winter", "kanye west");
    song_list = insert_ordered(song_list, "saint pablo", "kanye west");
    song_list = insert_ordered(song_list, "blood on the leaves", "kanye west");
    song_list = insert_ordered(song_list, "basket case", "green day");
    song_list = insert_ordered(song_list, "fluorescent adolescent", "arctic monkeys");
    song_list = insert_ordered(song_list, "mr. brightside", "the killers");
    song_list = insert_ordered(song_list, "clint eastwood", "gorillaz");
    song_list = insert_ordered(song_list, "champagne supernova", "oasis");
    song_list = insert_ordered(song_list, "american idiot", "green day");
    song_list = insert_ordered(song_list, "lift", "radiohead");
    song_list = insert_ordered(song_list, "21 guns", "green day");
    song_list = insert_ordered(song_list, "on melancholy hill", "gorillaz");
    printf("List: ");
    print_list(song_list);

    printf("___________________________\n\nFreeing list... [free_list]\n");
    song_list = free_list(song_list);
    printf("List: ");
    print_list(song_list);

    printf("___________________________\n\nAdding items in order... [insert_ordered]\n");
    song_list = insert_ordered(song_list, "runaway", "kanye west");
    song_list = insert_ordered(song_list, "coldest winter", "kanye west");
    song_list = insert_ordered(song_list, "saint pablo", "kanye west");
    song_list = insert_ordered(song_list, "blood on the leaves", "kanye west");
    song_list = insert_ordered(song_list, "basket case", "green day");
    song_list = insert_ordered(song_list, "fluorescent adolescent", "arctic monkeys");
    song_list = insert_ordered(song_list, "mr. brightside", "the killers");
    song_list = insert_ordered(song_list, "clint eastwood", "gorillaz");
    song_list = insert_ordered(song_list, "champagne supernova", "oasis");
    song_list = insert_ordered(song_list, "american idiot", "green day");
    song_list = insert_ordered(song_list, "lift", "radiohead");
    song_list = insert_ordered(song_list, "21 guns", "green day");
    song_list = insert_ordered(song_list, "on melancholy hill", "gorillaz");
    printf("List: ");
    print_list(song_list);

    printf("___________________________\n\nFinding song: 'lift', by radiohead [find_song]\n");
    struct song * test = find_song(song_list, "lift", "radiohead");
    printf("List: ");
    print_list(test);

    printf("\nFinding song: 'runaway', by kanye west [find_song]\n");
    test = find_song(song_list, "runaway", "kanye west");
    printf("List: ");
    print_list(test);

    printf("\nFinding song: 'devil in a new dress', by kanye west [find_song]\n");
    test = find_song(song_list, "devil in a new dress", "kanye west");
    printf("List: ");
    print_list(test);

    printf("___________________________\n\nFinding first song by artist: gorillaz [find_artist]\n");
    test = find_artist(song_list, "gorillaz");
    printf("List: ");
    print_list(test);

    printf("\nFinding first song by artist: kanye west [find_artist]\n");
    test = find_artist(song_list, "kanye west");
    printf("List: ");
    print_list(test);

    printf("\nFinding first song by artist: green day [find_artist]\n");
    test = find_artist(song_list, "green day");
    printf("List: ");
    print_list(test);

    printf("\nFinding first song by artist: abba [find_artist]\n");
    test = find_artist(song_list, "abba");
    printf("List: ");
    print_list(test);

    srand(time(NULL));
    printf("___________________________\n\nFinding random song... [random_song]\n");
    test = random_song(song_list);
    printf("List: ");
    print_list(test);

    printf("\nFinding random song... [random_song]\n");
    test = random_song(song_list);
    printf("List: ");
    print_list(test);

    printf("\nFinding random song... [random_song]\n");
    test = random_song(song_list);
    printf("List: ");
    print_list(test);

    song_list = free_list(song_list);

    printf("_____________________________________________\nLIBRARY TESTS\n_____________________________________________\n");

    library playlist;
    init_library(playlist);

    add_song(playlist, "raised by wolves", "u2");
    print_library(playlist);
}
