//
//  main.c
//  Assignment 9
//
//  Created by Landon Craft on 2/27/23.
//

#include <stdio.h>

int i, j;
int matrix[4][5];

// Assigns values to the array for future use
int enter_scores(){
    
    printf("Print all scores seperated by a space, and go by student\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    return 0;
}

// Finds the average for each student by running through all their quiz scores and dividing it by the number of quizzes taken
int student_average(){
    for (i = 0; i < 4; i++){
        double std_avg = 0;
        for (j = 0; j< 5; j++){
            std_avg += matrix[i][j];
        }
        std_avg /= 5.0;
        
        printf("The average for student %d is: %lf\n", i + 1, std_avg);
    }
    
    return 0;
}

// Finds the average for each quiz by running through all the students quiz score and combining the same quiz scores, then dividing by the number of students.
int quiz_average(){
    for (i = 0; i < 4; i++){
        double quiz_avg = 0;
        for (j = 0; j < 5; j++){
            quiz_avg += matrix[j][i];
        }
        quiz_avg /= 4.0;
        printf("The average for quiz %d is: %lf\n", i+1, quiz_avg);
    }
    
    return 0;
}

// Adds every score of the quiz and divides it by 20
int total_average(){
    double total_avg = 0;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 5; j++){
            total_avg += matrix[i][j];
        }
    }
    total_avg /= 20;
    printf("The total for all students is: %lf\n", total_avg);
    
    return 0;
}

int running = 1;
int user_choice;

int main(int argc, const char * argv[]) {
    // This is where the user enters scores.
    enter_scores();
    // Menu to ask user what they want to find
    while (running){
        printf("\nWhat would you like to do?\n");
        printf("1. Find the average score for each student.\n");
        printf("2. Find the average score for each quiz.\n");
        printf("3. Find the average score for all students in all quizes.\n");
        printf("4. Quit.\n");
        scanf("%d", &user_choice);
        switch (user_choice){
            case 1:
                printf("Student Average: \n");
                student_average();
                break;
            case 2:
                printf("Quiz Average: \n");
                quiz_average();
                break;
            case 3:
                printf("Total Average: \n");
                total_average();
                break;
            default:
                running = 0;
                break;
        }
    }
    printf("\n");
    return 0;
}
