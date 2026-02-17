#include <stdio.h>
#include "program_infos.h"
#include "colores.h"
#include "text_styles.h"
int the_program_name_and_version(){
    printf("\n");
    printf(
    GREEN"       #####  ####### ######   #####  #     #  #####  \n" RESET
    BLUE "      #     #    #    #     # #     # ##    # #     # \n" RESET
    GREEN"      #          #    #     # #     # # #   # #       \n" RESET
    BLUE "       #####     #    ######  #     # #  #  # #  #### \n" RESET
    GREEN"            #    #    #   #   #     # #   # # #     # \n" RESET
    BLUE "      #     #    #    #    #  #     # #    ## #     # \n" RESET
    GREEN"       #####     #    #     #  #####  #     #  #####\n" RESET
    );
    printf("\n");
    printf(
    BLUE "          ######     #     #####   #####  #     #  #####  ######  ######  \n" RESET
    GREEN"          #     #   # #   #     # #     # #     # #     # #     # #     # \n" RESET
    BLUE "          #     #  #   #  #       #       #     # #     # #     # #     # \n" RESET
    GREEN"          ######  #     #  #####   #####  #  #  # #     # ######  #     # \n" RESET
    BLUE "          #       #######       #       # #  #  # #     # #   #   #     # \n" RESET
    GREEN"          #       #     # #     # #     # #  #  # #     # #    #  #     # \n" RESET
    BLUE "          #       #     #  #####   #####   ## ##   #####  #     # ######\n" RESET
    );
    printf("\n");
    printf(
            GREEN"                                                          +-+ +-+-+-+ \n" RESET
            GREEN"                                                          |V| |0 . 1|\n" RESET
            GREEN"                                                          +-+ +-+-+-+ \n" RESET
        );
    return 0;
}
int program_infos(){
    printf("\n");
    printf(
        STYLE_BOLD GREEN"       Opening Paragraph:\n" RESET
        BLUE "----------------------------------------------------------------------------------------------------------"RESET
        BLUE "\nWelcome to the Password Challenge! Test your creativity and security skills in this fun game.\n"RESET
        BLUE "You'll receive a random word, and your mission is to transform it into a strong, secure password.\n" RESET
        BLUE "You have 3 chances to create a password that meets all security requirements.\n"RESET
        BLUE "Can you craft the perfect password using the word provided?\n"
        BLUE "Remember: a strong password combines uppercase and lowercase letters, numbers, and special characters.\n"RESET
        GREEN"Good luck!\n"RESET
        BLUE "-----------------------------------------------------------------------------------------------------------"RESET
    );
    printf("\n");
    printf(STYLE_BOLD GREEN "\n================================\n" RESET);
    printf(STYLE_BOLD CYAN "  Press any key to continue...  \n" RESET);
    printf(STYLE_BOLD GREEN "================================\n" RESET);
    printf("\n");
    return 0;
}