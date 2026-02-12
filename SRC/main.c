#include <stdio.h>
#include "program_infos.h"
#include "menu.h"
int main(){
    the_program_name_and_version();
    program_infos();
    start:
    menu();
    goto start;
    return 0;
}