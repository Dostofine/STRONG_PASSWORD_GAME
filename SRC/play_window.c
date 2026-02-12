#include <stdio.h>
#include "play_window.h"
#include "generate_random_word.h"
#include "colores.h"
#include "text_styles.h"
#include "straight_checker.h" 
char chances[3][8]={"first","second","third"};
char The_password[1024];
int play_window(char play_word[10]){
    printf(STYLE_BOLD GREEN "=============The word is %s=================" RESET,play_word);
    for(int i=0;i<3;i++){
        printf(STYLE_DIM GREEN "=>the %s chance: " RESET,chances[i]);
        scanf("%s",The_password);
        checker(The_password);
        checker_message();
    }
    return 0;
}