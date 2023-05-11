//
//  main.c
//  Assignment 10
//
//  Created by Landon Craft on 3/23/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char arr[100];
    int len;
    scanf("%d ", &len);
    // Assigns letters to array
    for (int i = 0; i < len; i++){
        scanf("%c", &arr[i]);
    }
    
    // Forward print
    for (int i = 0; i < len; i++){
        printf("%c", arr[i]);
    }
    
    printf("\n");
    
    // Reverse print
    for (int i = len - 1; i >= 0; i--){
        printf("%c", arr[i]);
    }
    
    printf("\n");
    
    // Vertical print
    for (int i = 0; i < len; i++){
        printf("%c\n", arr[i]);
    }
    
    printf("\n");
    
    // Triangle print
    int count = 0;
    for (int i = 0; i < len; i++){
        count++;
        for (int j = 0; j < count; j++){
            printf("%c", arr[j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    return 0;
    
}
