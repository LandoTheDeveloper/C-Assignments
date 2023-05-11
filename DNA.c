//
//  main.c
//  Assignment 12
//
//  Created by Landon Craft on 4/9/23.

#include <stdio.h>
#include <string.h>

#define MAX_DNA_LENGTH 1000
#define MAX_CANDIDATES 100

/* Returns the score of the match between two DNA sequences */
int scoreMatch(char *seq1, char *seq2) {
    int score = 0;
    int len = strlen(seq1);
    if (strlen(seq2) < len){
        len = strlen(seq2);
    }
    for (int i = 0; i < len; i++) {
        if (seq1[i] == seq2[i]) {
            score += 3;
        } else if ((seq1[i] == 'A' && seq2[i] == 'T') ||
                   (seq1[i] == 'T' && seq2[i] == 'A') ||
                   (seq1[i] == 'C' && seq2[i] == 'G') ||
                   (seq1[i] == 'G' && seq2[i] == 'C')) {
            score += 1;
        }
    }
    return score * 100 / (3 * len);
}

int main() {
    // Opens the text file in read mode
    char filename[256];
    printf("What file stores the DNA test cases? ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    // If file is not found, return error
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }
    
    // Set sample DNA
    char sample[MAX_DNA_LENGTH];
    fscanf(fp, "%s", sample);

    // Set number of people
    int num_candidates;
    fscanf(fp, "%d", &num_candidates);

    // Set candidates DNA
    char candidates[MAX_CANDIDATES][MAX_DNA_LENGTH];
    for (int i = 0; i < num_candidates; i++) {
        fscanf(fp, "%s", candidates[i]);
    }

    fclose(fp);

    int perfect_match = -1;  // index of perfect match candidate, -1 if none
    int best_match = -1;     // index of best match candidate
    int best_score = 0;      // score of best match so far

    // If two DNA strands are identical, set that to perfect match
    for (int i = 0; i < num_candidates; i++) {
        if (strcmp(sample, candidates[i]) == 0) {
            perfect_match = i;
            break;
        }
        int score = scoreMatch(sample, candidates[i]);
        if (score > best_score) {
            best_match = i;
            best_score = score;
        }
    }

    if (perfect_match != -1) {
        printf("Candidate %d is a perfect match.\n", perfect_match + 1);
    } else {
        printf("The best match is Candidate %d, with a score of %d.\n",
               best_match + 1, best_score);
    }

    return 0;
}

