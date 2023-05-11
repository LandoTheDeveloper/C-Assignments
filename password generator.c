//
//  main.c
//  Password Generator
//
//  Created by Landon Craft on 3/17/23.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void random_generator(length){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    char symbols[] = {'!', '@', '#', '$', '%', '^', '&', '*'};
    char letters[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t',
                      'u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N',
                      'O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int choice, rand_num, rand_sym, rand_let;
    srand(time(NULL));
    for (int i = 0; i < length; i++){
        choice = rand() % 3;
        switch (choice){
            case 0:
                rand_num = rand() % 10;
                printf("%d", numbers[rand_num]);
                break;
            case 1:
                rand_sym = rand() % 8;
                printf("%c", symbols[rand_sym]);
                break;
            case 2:
                rand_let = rand() % 52;
                printf("%c", letters[rand_let]);
                break;
                
        }
    }
}

int main(int argc, const char * argv[]) {
    int pass_length;
    printf("Password Length: ");
    scanf("%d", &pass_length);
    printf("Your password is: ");
    random_generator(pass_length);
    printf("\n");
    return 0;
}
