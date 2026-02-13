#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "generate_random_word.h"
#include "play_window.h"
#include <string.h>
int random_nomber;
int generate_random_nomber(){
    random_nomber=rand() % 1000 + 1;
    return 0;
}
int get_the_word_from_the_wordlist(){
    char word[100];
    int line_number=random_nomber;
    int current_line=1;
    FILE *file=fopen("DATA/word_listes/wordlist1.txt","r");
    while (fgets(word, sizeof(word), file)) {
        word[strcspn(word, "\n")] = '\0';
        if (current_line == line_number) {
            break;
        }
        current_line++;
    }
    fclose(file);
    play_window(word);
    return 0;
}