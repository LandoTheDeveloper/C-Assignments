//
//  main.c
//  Lab 2
//
//  Created by Landon Craft on 1/17/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int userNum;
    int secondUserNum;
    printf("Enter integer:\n");
    scanf("%d", &userNum);
    printf("You enetered: %d\n", userNum);
    printf("%d squared is %d\n", userNum, userNum * userNum);
    printf("Enter another integer:\n");
    scanf("%d", &secondUserNum);
    printf("%d + %d is %d\n", userNum, secondUserNum, userNum + secondUserNum);
    printf("%d * %d is %d\n", userNum, secondUserNum, userNum * secondUserNum);
    return 0;
}

