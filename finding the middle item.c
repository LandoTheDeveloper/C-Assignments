//
//  main.c
//  Lab 7-1 Finding the middle item
//
//  Created by Landon Craft on 2/27/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int count = 0;
    int arr[9], middle_item;
    printf("Enter your numbers seperated by a space, enter a negative to stop. \n");
    
    for (int i = 0; i < 9; i++){
        scanf("%d", &arr[i]);
        count++;
        
        if (arr[i] < 0){
            i = 9;
            count--;
            break;
        }
    }
    int size = count;
    middle_item = arr[size/2];
    printf("\nMiddle item: %d\n", middle_item);
    
}
