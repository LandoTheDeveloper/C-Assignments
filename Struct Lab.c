//
//  main.c
//  Struct lab
//
//  Created by Landon Craft on 4/4/23.
//

#include <stdio.h>

typedef struct{
    int day;
    int month;
    int year;
} Birthday;

struct person{
    char name[50];
    char gender;
    float annualIncome;
};

int main(int argc, const char * argv[]) {
    struct Jaiden;
    struct Landon;
    struct Alex;
    Birthday Landon = {04, 06, 2004};
    printf("%d\n", Landon.year);
    return 0;
}
