//
//  main.c
//  Lab 7-3
//
//  Created by Landon Craft on 2/26/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, n;
    int array[20];
    
    printf("Amount of numbers: ");
    scanf("%d", &n);
    
    printf("\nEnter the numbers seperated by a space: ");
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    
    for (i = n - 1; i >= 0; i--){
        printf("%d, ", array[i]);
    }
    
    printf("\n");
    
    return 0;
}
