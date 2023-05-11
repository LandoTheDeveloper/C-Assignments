//
//  main.c
//  TicTacToe
//
//  Created by Landon Craft on 3/17/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf(" 1| 2 | 3\n");
    printf("----------\n");
    printf(" 4| 5 | 6\n");
    printf("----------\n");
    printf(" 7| 8 | 9\n\n");
    char spot1 = ' ', spot2 = ' ', spot3 = ' ', spot4 = ' ', spot5 = ' ', spot6 = ' ', spot7 = ' ', spot8 = ' ', spot9 = ' ';
    char value;
    int player_pos = 1;
    for (int i = 0; i < 9; i++){
        int player_choice;
        printf(" %c | %c | %c\n", spot1, spot2, spot3);
        printf("------------\n");
        printf(" %c | %c | %c\n", spot4, spot5, spot6);
        printf("------------\n");
        printf(" %c | %c | %c\n", spot7, spot8, spot9);
        
        if (player_pos == 1){
            printf("\nPlayer 1: ");
            scanf("%d", &player_choice);
            value = 'x';
            switch (player_choice){
                case 1:
                    spot1 = value;
                    break;
                case 2:
                    spot2 = value;
                    break;
                case 3:
                    spot3 = value;
                    break;
                case 4:
                    spot4 = value;
                    break;
                case 5:
                    spot5 = value;
                    break;
                case 6:
                    spot6 = value;
                    break;
                case 7:
                    spot7 = value;
                    break;
                case 8:
                    spot8 = value;
                    break;
                case 9:
                    spot9 = value;
                    break;
            }
            player_pos = 2;
        }
        else{
            printf("\nPlayer 2: ");
            scanf("%d", &player_choice);
            value = 'o';
            switch (player_choice){
                case 1:
                    spot1 = value;
                    break;
                case 2:
                    spot2 = value;
                    break;
                case 3:
                    spot3 = value;
                    break;
                case 4:
                    spot4 = value;
                    break;
                case 5:
                    spot5 = value;
                    break;
                case 6:
                    spot6 = value;
                    break;
                case 7:
                    spot7 = value;
                    break;
                case 8:
                    spot8 = value;
                    break;
                case 9:
                    spot9 = value;
                    break;
            }
            player_pos = 1;
        }
    }
    printf(" %c | %c | %c\n", spot1, spot2, spot3);
    printf("------------\n");
    printf(" %c | %c | %c\n", spot4, spot5, spot6);
    printf("------------\n");
    printf(" %c | %c | %c\n", spot7, spot8, spot9);
    return 0;
}
