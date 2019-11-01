#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

int main() {
    struct song* song_list = NULL;

    printf("\nAdding items to list...\n");
    song_list = insert_front(song_list, "Runaway", "Kanye West");
    song_list = insert_front(song_list, "Coldest Winter", "Kanye West");
    song_list = insert_front(song_list, "Saint Pablo", "Kanye West");
    song_list = insert_front(song_list, "Blood On The Leaves", "Kanye West");
    song_list = insert_front(song_list, "Fluorescent Adolescent", "Arctic Monkeys");
    song_list = insert_front(song_list, "Mr. Brightside", "The Killers");
    song_list = insert_front(song_list, "Lift", "Radiohead");
    song_list = insert_front(song_list, "Champagne Supernova", "Oasis");
    song_list = insert_front(song_list, "American Idiot", "Green Day");
    song_list = insert_front(song_list, "Lift", "Radiohead");
    song_list = insert_front(song_list, "Otherside", "Red Hot Chili Peppers");
    song_list = insert_front(song_list, "See You Again", "Tyler, The Creator");
    song_list = insert_front(song_list, "Basket Case", "Green Day");
    song_list = insert_front(song_list, "21 Guns", "Green Day");
    song_list = insert_front(song_list, "Somebody Told Me", "The Killers");
    song_list = insert_front(song_list, "Mr. Blue Sky", "Electric Light Orchestra");
    song_list = insert_front(song_list, "On Melancholy Hill", "Gorillaz");
    song_list = insert_front(song_list, "Snow (Hey Oh)", "Red Hot Chili Peppers");
    song_list = insert_front(song_list, "Clint Eastwood", "Gorillaz");
    printf("List: ");
    print_list(song_list);
    printf("___________________________\nFreeing list...\n");

    song_list = free_list(song_list);
    printf("List: ");
    print_list(song_list);

    printf("___________________________\nAdding items in order...\n");
    song_list = insert_ordered(song_list, "Runaway", "Kanye West");
    song_list = insert_ordered(song_list, "Coldest Winter", "Kanye West");
    song_list = insert_ordered(song_list, "Saint Pablo", "Kanye West");
    song_list = insert_ordered(song_list, "Blood On The Leaves", "Kanye West");
    song_list = insert_ordered(song_list, "Fluorescent Adolescent", "Arctic Monkeys");
    song_list = insert_ordered(song_list, "Mr. Brightside", "The Killers");
    song_list = insert_ordered(song_list, "Lift", "Radiohead");
    song_list = insert_ordered(song_list, "Champagne Supernova", "Oasis");
    song_list = insert_ordered(song_list, "American Idiot", "Green Day");
    song_list = insert_ordered(song_list, "Lift", "Radiohead");
    song_list = insert_ordered(song_list, "Otherside", "Red Hot Chili Peppers");
    song_list = insert_ordered(song_list, "See You Again", "Tyler, The Creator");
    song_list = insert_ordered(song_list, "Basket Case", "Green Day");
    song_list = insert_ordered(song_list, "21 Guns", "Green Day");
    song_list = insert_ordered(song_list, "Somebody Told Me", "The Killers");
    song_list = insert_ordered(song_list, "Mr. Blue Sky", "Electric Light Orchestra");
    song_list = insert_ordered(song_list, "On Melancholy Hill", "Gorillaz");
    song_list = insert_ordered(song_list, "Snow (Hey Oh)", "Red Hot Chili Peppers");
    song_list = insert_ordered(song_list, "Clint Eastwood", "Gorillaz");

    printf("List: ");
    print_list(song_list);

    printf("___________________________\nFreeing list...\n");

    song_list = free_list(song_list);
    printf("List: ");
    print_list(song_list);
}
