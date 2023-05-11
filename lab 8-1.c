//
//  main.c
//  Lab 8-1
//
//  Created by Landon Craft on 3/7/23.
//

#include <stdio.h>

// Swaps two variables
void swap(int* pX, int* pY) {
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
}

// Doubles the value of a variable
void double_value(double* value){
    *value *= 2;
}

// Declaration of Variables
int a = 5; b = 10;
int* pA = &a;
int* pB = &b;
double c = 3.140000;
double* pC = &c;

int main(int argc, const char * argv[]) {
    printf("a = %d, b = %d\n", a, b);
    printf("pA = %p, pB = %p\n", pA, pB);
    printf("&a = %p, &b = %p\n", &a, &b);
    swap(pA, pB);
    printf("a = %d, b = %d\n", a, b);
    printf("c = %lf\n", c);
    printf("pC = %p\n", pC);
    double_value(&c);
    printf("c = %lf\n", c);
    return 0;
}
