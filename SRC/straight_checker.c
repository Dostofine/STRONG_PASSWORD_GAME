#include <stdio.h>
#include "colores.h"
#include "text_styles.h"
#include "straight_checker.h"
#include "play_window.h"
#include <stdbool.h>
#include <string.h>
bool win=false,length_test=false, uppercase_letters_test=false, lowercase_letters_test=false, numbers_test=false, special_symbols_test=false;
int length,points=0;
int checker(char check_password[1024]){
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
        if ((*check_password>= 33 && *check_password<= 47) ||   // ! " # $ % & ' ( ) * + , - . /
            (*check_password>= 58 && *check_password<= 64) ||   // : ; < = > ? @
            (*check_password>= 91 && *check_password<= 96) ||   // [ \ ] ^ _ `
            (*check_password>= 123 && *check_password<= 126))  // { | } ~
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
    return 0;
}
int checker_message(){
    if(win==true){
        printf(STYLE_BOLD GREEN">congratulations , you win.<\n" RESET);
    }
    else{
        printf(STYLE_BOLD RED">try again!<\n" RESET);
    }
    return 0;
}