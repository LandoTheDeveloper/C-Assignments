/*
 Landon Craft
 Profit Calculator
 01/12/2023
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double revenue;
    double cost;
    double profit;
    
    printf("Enter total revenue: ");
    scanf("%lf", &revenue);
    printf("\n");
    
    printf("Enter total cost: ");
    scanf("%lf", &cost);
    printf("\n");
    
    profit = revenue - cost;
    
    printf("Your profit is $%.2lf \n", profit);
    
    return 0;
}
