#include <stdio.h>
#include "clear.h"
#include <stdlib.h>
int clear(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    return 0;
}