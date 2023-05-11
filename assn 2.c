//
//  main.c
//  Assignment 2
//
//  Created by Landon Craft on 1/17/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double firstUserNum;
    double secondUserNum;
    
    printf("Enter the first number: ");
    scanf("%lf", &firstUserNum);
    printf("\nYou entered %lf \n", firstUserNum);
    
    printf("\nEnter the second number: ");
    scanf("%lf", &secondUserNum);
    printf("\nYou entered %lf \n \n \n", secondUserNum);
    
    printf("\nThe difference is %lf\n", firstUserNum - secondUserNum);
    printf("\nThe product is %lf\n", firstUserNum * secondUserNum);
    printf("\nSquare of %lf is %lf\n", firstUserNum, firstUserNum * firstUserNum);
    printf("\nSquare of %lf is %lf\n", secondUserNum, secondUserNum * secondUserNum);
    
    return 0;
}
