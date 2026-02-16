#include <stdio.h>
#include "colores.h"
#include "text_styles.h"
#include "straight_checker.h"
#include "play_window.h"
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "menu.h"
#include "clear.h"
int checker(char check_password[1024]){
    bool win=false,length_test=false, uppercase_letters_test=false, lowercase_letters_test=false, numbers_test=false, special_symbols_test=false;
    int length,points=0;
    length=strlen(check_password);
    if(length>=12){
        length_test=true;
    }
    for(int i=0;i<length;i++)
    {
        if((check_password[i]>='A') && (check_password[i]<='Z'))
        {
            uppercase_letters_test=true;
        }
        if((check_password[i]>='a') && (check_password[i]<='z'))
        {
            lowercase_letters_test=true;
        }
        if((check_password[i]>='0') && (check_password[i]<='9'))
        {
            numbers_test=true;
        }   
        if ((check_password[i]>= 33 && check_password[i]<= 47) ||   // ! " # $ % & ' ( ) * + , - . /
            (check_password[i]>= 58 && check_password[i]<= 64) ||   // : ; < = > ? @
            (check_password[i]>= 91 && check_password[i]<= 96) ||   // [ \ ] ^ _ `
            (check_password[i]>= 123 && check_password[i]<= 126))  // { | } ~
        { 
                special_symbols_test=true;
        }
    }
    if(length_test==true)
        points++;
    if(uppercase_letters_test==true)
        points++;
    if(lowercase_letters_test==true)
        points++;
    if(numbers_test==true)
        points++;
    if(special_symbols_test==true)
        points++;
    if(points==5)
        win=true;

    if(win==true){
        clear();
        printf(STYLE_BOLD GREEN"\n      ╔════════════════════════════════╗\n" RESET);
        printf(STYLE_BOLD GREEN  "      ║       CONGRATULATIONS!         ║\n" RESET);
        printf(STYLE_BOLD CYAN   "      ║         YOU WIN!               ║\n" RESET);
        printf(STYLE_BOLD GREEN  "      ║    ✓ Strong Password ✓         ║\n" RESET);
        printf(STYLE_BOLD GREEN  "      ╚════════════════════════════════╝\n\n" RESET);
        int c;
        while((c = getchar()) != '\n' && c != EOF);
        menu();
    }
    else{
        printf(STYLE_BOLD RED  "\n      ╔════════════════════════════════╗\n" RESET);
        printf(STYLE_BOLD YELLOW "      ║        TRY AGAIN               ║\n" RESET);
        printf(STYLE_BOLD RED    "      ║     ✗ Weak Password ✗          ║\n" RESET);
        printf(STYLE_BOLD YELLOW "      ║   You can do better!           ║\n" RESET);
        printf(STYLE_BOLD RED    "      ╚════════════════════════════════╝\n\n" RESET);
        //print the hints
        printf(STYLE_BOLD YELLOW "      ║                            HINTS                      ║\n" RESET);
        if(length_test==false)
            printf(STYLE_BOLD YELLOW "      ║   +Make it longer!                                    ║\n" RESET);
        if(lowercase_letters_test==false)
            printf(STYLE_BOLD YELLOW "      ║   +Try adding some small letters                      ║\n" RESET);
        if(uppercase_letters_test==false)
            printf(STYLE_BOLD YELLOW "      ║   +Don't forget a BIG letter!                         ║\n" RESET);
        if(numbers_test==false)
            printf(STYLE_BOLD YELLOW "      ║   +Add some numbers to mix it up!                     ║\n" RESET);
        if(special_symbols_test==false)
            printf(STYLE_BOLD YELLOW "      ║   +Spice it up with a special character like !@#      ║\n" RESET);
    }
    return 0;
}
