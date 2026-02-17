#include <stdio.h>
#include "colores.h"
#include "text_styles.h"
#include <ctype.h>
#include "play_window.h"
#include "generate_random_word.h"
#include <stdlib.h>
#include "clear.h"
int menu(){
    char user_choice;
    char buffer[1024];
    int c;
    while((c = getchar()) != '\n' && c != EOF);
    clear();
    printf(STYLE_BOLD GREEN "\n╔════════════════════════════════╗\n" RESET);
    printf(STYLE_BOLD YELLOW   "║             Menu               ║\n" RESET);
    printf(STYLE_BOLD YELLOW   "║       [S] Start Game           ║\n" RESET);
    printf(STYLE_BOLD YELLOW   "║       [Q] Quit                 ║\n" RESET);
    printf(STYLE_BOLD GREEN "╚════════════════════════════════╝\n\n" RESET);
    while(1){
        printf(STYLE_BOLD GREEN "\n Enter your choice: " RESET);
        fgets( buffer, sizeof(buffer), stdin);
        if((buffer[0] != '\0' && buffer[0] != '\n' && buffer[1] == '\n')){
            user_choice = toupper(buffer[0]);
            if(user_choice=='S'){
                clear();
                generate_random_nomber();
                get_the_word_from_the_wordlist();
                break;
                }
            else if(user_choice=='Q'){
                clear();
                printf(STYLE_BOLD GREEN "\n╔════════════════════════════════╗\n" RESET);
                printf(STYLE_BOLD CYAN   "║   Thanks for playing!          ║\n" RESET);
                printf(STYLE_BOLD CYAN   "║   See you next time!           ║\n" RESET);
                printf(STYLE_BOLD GREEN "╚════════════════════════════════╝\n\n" RESET);
                exit(0);
                }
            }
        }
    return 0;
}