#include <stdio.h>
#include "colores.h"
#include "text_styles.h"
#include <ctype.h>
#include "play_window.h"
#include "generate_random_word.h"
#include <stdlib.h>
char user_choice;
int menu(){
    printf(
    STYLE_BOLD GREEN ">>>>>>>>>Menu<<<<<<<<<\n"RESET
    YELLOW      "|  [S] Start Game  |\n"RESET
    YELLOW      "|  [Q] Quit        |\n"RESET
    );
    do{
        printf(STYLE_BOLD GREEN "\nEnter your choice: " RESET);
        scanf(" %c",&user_choice);
        if(toupper(user_choice)=='S'){
            generate_random_nomber();
            get_the_word_from_the_wordlist();
        }
        else if(toupper(user_choice)=='Q'){
            exit(0);
        }
    }while(toupper(user_choice)!='S' && toupper(user_choice)!='Q');
    return 0;
}