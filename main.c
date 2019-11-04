#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "list.h"
#include "library.h"

int main() {

    srand(time(NULL));
    /*

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

    */

    printf("_____________________________________________\n\nLIBRARY TESTS\n_____________________________________________\n\n");

    library playlist;
    init_library(playlist);

    add_song(playlist, "raised by wolves", "u2");
    add_song(playlist, "505", "arctic monkeys");
    add_song(playlist, "creep", "radiohead");
    add_song(playlist, "heartless", "kanye west");
    add_song(playlist, "do i wanna know?", "arctic monkeys");
    add_song(playlist, "the middle", "jimmy eat world");
    add_song(playlist, "mr. brightside", "the killers");
    add_song(playlist, "amarillion", "datarock");
    add_song(playlist, "somebody told me", "the killers");
    add_song(playlist, "street lights", "kanye west");
    add_song(playlist, "nine in the afternoon", "panic! at the disco");
    add_song(playlist, "this love", "maroon 5");
    add_song(playlist, "the sailor", "rich brian");
    add_song(playlist, "old town road", "lil nas x");
    add_song(playlist, "blame it on my youth", "blink-182");
    add_song(playlist, "history", "88rising");
    add_song(playlist, "wolves", "kanye west");
    add_song(playlist, "wolves", "selena gomez");


    print_library(playlist);

    struct song * test2 = find_song_lib(playlist, "wolves", "kanye west");
    print_list(test2);

    test2 = find_song_lib(playlist, "wolves", "selena gomez");
    print_list(test2);

    test2 = find_song_lib(playlist, "devil in a new dress", "kanye west");
    print_list(test2);

    print_artist(playlist, "kanye west");

    print_artist(playlist, "radiohead");

    print_artist(playlist, "rich brian");

    print_artist(playlist, "dolly parton");

    printf("Removing 'this love' and '505'...\n\n");
    delete_song(playlist, "this love", "maroon 5");
    delete_song(playlist, "505", "arctic monkeys");
    print_library(playlist);

    printf("Clearing library...\n");
    clear(playlist);
    printf("Library:\n");
    print_library(playlist);

    printf("Adding songs...\n");
    add_song(playlist, "raised by wolves", "u2");
    add_song(playlist, "505", "arctic monkeys");
    add_song(playlist, "creep", "radiohead");
    add_song(playlist, "heartless", "kanye west");
    add_song(playlist, "do i wanna know?", "arctic monkeys");
    add_song(playlist, "the middle", "jimmy eat world");
    add_song(playlist, "mr. brightside", "the killers");
    add_song(playlist, "amarillion", "datarock");
    add_song(playlist, "somebody told me", "the killers");
    add_song(playlist, "street lights", "kanye west");
    add_song(playlist, "nine in the afternoon", "panic! at the disco");
    add_song(playlist, "this love", "maroon 5");
    add_song(playlist, "the sailor", "rich brian");
    add_song(playlist, "old town road", "lil nas x");
    add_song(playlist, "blame it on my youth", "blink-182");
    add_song(playlist, "history", "88rising");
    add_song(playlist, "wolves", "kanye west");
    add_song(playlist, "wolves", "selena gomez");

    printf("Shuffling... returning playlist of 9 songs\n");
    shuffle(playlist, 9);
}
