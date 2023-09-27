#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <conio.h>

#define COLOR_RED "\x1b[31m"

char key[25];
 

int main()
{

    salut();

    printf(COLOR_RED"oooooooooo.            oooo                                  .oooooo.    oooooooooooo ooooo      ooo\n");
    printf(COLOR_RED"`888'   `Y8b           `888                                 d8P'  `Y8b   `888'     `8 `888b.     `8'\n");
    printf(COLOR_RED" 888     888  .oooo.    888  oooo   .ooooo.  oooo d8b      888            888          8 `88b.    8\n");
    printf(COLOR_RED" 888oooo888' `P  )88b   888 .8P'   d88' `88b `888""8P        888            888oooo8     8   `88b.  8\n");
    printf(COLOR_RED" 888    `88b  .oP'888   888888.    888ooo888  888          888     ooooo  888    '     8     '88. 8\n");
    printf(COLOR_RED" 888     88.  d8  888   888  88.   888    .o  888          `88.     .88   888       o  8       `888\n");
    printf(COLOR_RED"o888bood8P'  `Y888""8o  o888o o888o  `Y8bod8P' d888b          `Y8bood8P'   o888ooooood8 o8o        `8\n");

    printf("\n");
    printf("\n");

    printf("Press ENTER to generate a Windows Key...\n");
    getch();
        srand(time(NULL));
    printf("Key: ");
    for (int i = 0; i < 25; i++) {

        //if (i == 5 || i == 10 || i == 15 || i == 20)
        if (i % 5 == 0 && i != 0)
        {
             printf("-");
        }


            int lorn = (rand() % 2) + 1;

                if (lorn == 1)
                {


                    char letter[27] = "ABCDEFGHIGKLMNOPQRSTUVWXYZ";
                    int temp1 = (rand() % 26) + 'A';
                    key[i] = temp1;

                }
                
                else
                {
                    int temp2 = (rand() % 9) + 1;
                    key[i] = '0' + temp2;
                }

                sleep(1);
                printf("%c", key[i]);
                
    }

    printf("\n");

    printf("Press ENTER to leave...\n");
    getch(); 

    return 0;
}
