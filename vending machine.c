//
//  main.c
//  vending machine
//
//  Created by Landon Craft on 2/8/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double money = 5.00;
    int choice;
    int running = 1;
    printf("You have $%.2lf\n", money);
    while (running){
        if (money <= 0){
            printf("You have run out of money!\n");
            running = 0;
        }
        // Interface
        printf("------------------------------------\n");
        printf("Welcome! Please pick your selection.\n");
        printf("1. Water.......$1.00\n");
        printf("2. Coca-Cola...$2.50\n");
        printf("3. Sprite......$2.00\n");
        printf("4. Root Beer...$2.00\n");
        printf("5. Exit\n");
        printf("------------------------------------\n");
        scanf("%i", &choice);
        
        
        switch (choice){
            case 1:
                money -= 1;
                if (money < 0){
                    printf("You dont have enough!\n");
                    running = 0;
                }
                else
                    printf("Here's your water! You now have $%.2lf\n", money);
                break;
            case 2:
                money -= 2.5;
                if (money < 0){
                    printf("You dont have enough!\n");
                    running = 0;
                }
                else
                    printf("Here's your Coca-Cola! You now have $%.2lf\n", money);
                break;
            case 3:
                money -= 2;
                if (money < 0){
                    printf("You dont have enough!\n");
                    running = 0;
                }
                else
                    printf("Here's your Sprite! You now have $%.2lf\n", money);
                break;
            case 4:
                money -= 2;
                if (money < 0){
                    printf("You dont have enough!\n");
                    running = 0;
                }
                else
                    printf("Here's your Root beer! You now have $%.2lf\n", money);
                break;
            case 5:
                printf("Have a good day.\n");
                running = 0;
                break;
        }
    }
    return 0;
}
