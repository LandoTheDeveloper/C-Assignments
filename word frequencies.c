//
//  main.c
//  Lab 9-1 Word Frequencies
//
//  Created by Landon Craft on 3/22/23.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // Declaring variables
    char string[20][10];
    int num;
    // Sets how many words youre inputting
    scanf("%d", &num);
    // Adds all your words into an array
    for (int i = 0; i < num; i++){
        scanf("%s", string[i]);
    }
    // Scans your array
    for (int i = 0; i < num; i++){
        int count = 0;
        // Scans your array again, comparing your string[i] to every word in the array
        for (int j = 0; j < num; j++){
            // If two strings are the same, adds one to the count
            if (!(strcmp(string[i], string[j]))){
                count++;
            }
        }
        // Final output for each word
        printf("%s - %d \n", string[i], count);
    }
    
    return 0;
}
