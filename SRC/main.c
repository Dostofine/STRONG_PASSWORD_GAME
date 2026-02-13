#include <stdio.h>
#include <stdlib.h>
#include "program_infos.h"
#include "menu.h"
#include <time.h>
#include "clear.h"
int main(){
    srand(time(NULL));
    the_program_name_and_version();
    program_infos();
    start:
    menu();
    clear();
    goto start;
    return 0;
}