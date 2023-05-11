/*
 Landon Craft
 Movie Time Lab
 4/11/23
 Intro to C
 */

#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 100
#define MAX_NAME_LENGTH 44
#define MAX_SHOWTIME_LENGTH 100

typedef struct {
    char title[MAX_NAME_LENGTH + 1];
    char rating[6];
    char showtime[MAX_SHOWTIME_LENGTH + 1];
} Movie;

int main() {
    FILE *fp;
    char str[100];
    
    Movie movies[MAX_MOVIES];
    int n_movies = 0;
    
    // Opening file for reading
    fp = fopen("/Users/landoncraft/Downloads/movies.csv", "r");
    if (fp == NULL){
        perror("Error opening file");
        return(-1);
    }
    while(fgets(str, sizeof(str), fp) != NULL){
        char title[MAX_NAME_LENGTH + 1] = "";
        char rating[6] = "";
        char showtimes[MAX_SHOWTIME_LENGTH + 1] = "";
        sscanf(str, "%[^,],%[^,],%s", showtimes, title, rating);
        strncpy(movies[n_movies].title, title, MAX_NAME_LENGTH);
        strncpy(movies[n_movies].rating, rating, 5);
        movies[n_movies].rating[5] = '\0';
        strncpy(movies[n_movies].showtime, showtimes, MAX_SHOWTIME_LENGTH);
        n_movies++;
    }
    
    fclose(fp);
    
    printf("%-44s | %5s | %-20s\n", "Title", "Rating", "Showtimes");
    printf("---------------------------------------------+--------+--------------------\n");
    
    // Shortens to 44 characters if longer
    for (int i = 1; i < n_movies; i++){
        if (strlen(movies[i].title) > MAX_NAME_LENGTH){
            movies[i].title[MAX_NAME_LENGTH] = '\0';
        }
        if (i > 0 && strcmp(movies[i].title, movies[i-1].title) == 0) {
                    printf("%s ", movies[i].showtime);
        } else {
                    printf("\n%-44s | %6s | %s ", movies[i].title, movies[i].rating, movies[i].showtime);
                }
    }
    printf("\n");
    
    return 0;
}
