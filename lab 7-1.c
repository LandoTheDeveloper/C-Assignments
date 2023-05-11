//
//  main.c
//  Lab 7-1 output below
//
//  Created by Landon Craft on 3/7/23.
//

#include <stdio.h>

int quantity, i, max;
int array[20];

int main(int argc, const char * argv[]) {
    scanf("%d", &quantity);
    for (i = 0; i < quantity; i++){
        scanf("%d", &array[i]);
    }
    scanf("%d", &max);
    for (i = 0; i < quantity; i++){
        if (array[i] <= max){
            printf("%d, ", array[i]);
        }
    }
    return 0;
}
