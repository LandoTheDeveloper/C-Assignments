//
//  main.c
//  Assignment 7
//
//  Created by Landon Craft on 2/16/23.
//

/*
 TO DO LIST
 - Make a menu
 - Arithmetic Game
    | Addition Game /
    | Multiplication Game /
    L   - Prompt for max value of numbers /
        - Prompt for number of questions /
        - Plays game /
        - Track amount of time it takes for each problem /
            - 5 penalty seconds for each incorrect response /
        - Total time determines score /
 - Guessing Game
    - Prompt for max int /
    - Generate random number between 1 and n /
    - Prompt for first guess /
    - Respond guess higher/lower depending on value input /
    - Continue until correct /
    - Track how much time the game takes to play /
        - SCORING: total amount of time it took to guess the secret number, divided by 2 time the number of digits in the max number /
            - EX: max number was 1000, 15 seconds, score is 15/(2*4) = 1.875
            - Convert time to score using chart
 - Print Score
    - Report total score, sum of scores from each round /
 - Quit
 
 Required:
    Write four functions with the prototypes given
    srand(time(0)); at beginning of program // Generates random number seed
        - needs <stdlib.h> and <time.h>
    #define ADD 1
    #define MULT 2
  
 To Track Time:
    int start - time(0);
        // Code
    int end = time(0);
    int time_spent = end - start;
 */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define ADD 1
#define MULT 2

int add_mult_choice, max, quantity, menu_choice, random_value1, random_value2, user_answer, incorrect_answers, total_score, random_number;
int running = 1, guess_count = 0;

// This function gives the user quantity arithmetic
// questions, where each operand ranges from 1 to max,
// inclusive. The value of operator dictates whether
// the problems are addition or multiplication problems.
// Namely, if op is 1, they are addition problems,
// otherwise, they are multiplication problems.
// The function returns the number of seconds the user took
// to play the entire game, divided by the number of
// problems they solved.
double arithGame(int max, int quantity, int op){
    if (op == ADD){
        for (int i = 0; i < quantity; i++){
            random_value1 = rand() % max + 1;
            random_value2 = rand() % max +  1;
            printf("What is %d + %d? \n", random_value1, random_value2);
            scanf("%d", &user_answer);
            
            if (user_answer == random_value1 + random_value2){
                printf("Correct!\n");
            }
            else{
                printf("Incorrect...\n");
                incorrect_answers++;
            }
        }
    }
    else{
        for (int i = 0; i < quantity; i++){
            random_value1 = rand() % max + 1;
            random_value2 = rand() % max +  1;
            printf("What is %d * %d? \n", random_value1, random_value2);
            scanf("%d", &user_answer);
            
            if (user_answer == random_value1 * random_value2){
                printf("Correct!\n");
            }
            else{
                printf("Incorrect...\n");
                incorrect_answers++;
            }
        }
    }
    return 1;
}

// This function allows the user to play the guessing game
// where the randomly generated number lies in between 1
// and max, inclusive. The value returned is the number of
// seconds the user took to finish the game divided by the
// 2 times the number of digits in the number max.
double guessGame(int max){
    random_number = rand() % max + 1;
    
    printf("What is your first number?\n");
    scanf("%d", &user_answer);
    while (user_answer != random_number){
        if(user_answer > random_number){
            printf("Guess lower\n");
            guess_count++;
        }
        else{
            printf("Guess higher\n");
            guess_count++;
        }
        printf("What is your next guess?\n");
        scanf("%d", &user_answer);
    }
    printf("You got it!\n");
    return 1;
}


// Returns the number of digits in number.
double numDigits(int number){
    int count = 0;
    while(number > 0)
    {
        number /= 10;
        count++;
    }
    return count;
}


// Returns the number of points the user has earned based
// on time. In particular, if time is less than 1, 10 is
// returned. Otherwise, if it is less than 2, 9 is
// returned, etc. If time is greater than or equal to 10,
// then 0 is returned.
int numPoints(double timesec){
    if (timesec < 1){
        return 10;
    }
    else if (timesec < 2 ){
        return 9;
    }
    else if (timesec < 3 ){
        return 8;
    }
    else if (timesec < 4 ){
        return 7;
    }
    else if (timesec < 5 ){
        return 6;
    }
    else if (timesec < 6 ){
        return 5;
    }
    else if (timesec < 7 ){
        return 4;
    }
    else if (timesec < 8 ){
        return 3;
    }
    else if (timesec < 9 ){
        return 2;
    }
    else if (timesec < 10 ){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    
    // Instantializes random seed
    srand(time(0));
    
    // Menu
    while (running){
        
        printf("Please make a selection from the following:\n");
        printf("1. Play Arithmetic Game.\n");
        printf("2. Play Guessing Game. \n");
        printf("3. Print Score.\n");
        printf("4. Quit.\n");
        scanf("%d", &menu_choice);
        
        switch (menu_choice){
            case 1:
                printf("Would you like 1) Addition or 2) Multiplication?\n");
                scanf("%d", &add_mult_choice);
                printf("What is the maximum number you want?\n");
                scanf("%d", &max);
                printf("How many problems do you want?\n");
                scanf("%d", &quantity);
                
                // Tracks time
                int start = time(0);
                arithGame(max, quantity, add_mult_choice);
                int end = time(0);
                int time_spent = ((end - start) + (incorrect_answers * 5));
                
                // Calculates Score
                printf("You took an average of %d second(s) per question\n", time_spent / quantity);
                total_score += numPoints(time_spent / quantity);
                printf("Score for this game: %d\n\n", numPoints(time_spent / quantity));
                break;
            case 2:
                printf("What is the maximum integer?\n");
                scanf("%d", &max);
                
                // Tracks time
                start = time(0);
                guessGame(max);
                end = time(0);
                time_spent = end - start;
                
                printf("You guessed the correct number %d in %d guesses, in %d seconds.\n", random_number, guess_count, time_spent);
                
                total_score += numPoints((time_spent)/(2 * numDigits(max)));
                
                printf("Score for this game: %d\n\n", numPoints((time_spent)/(2 * numDigits(max))));
                break;
            case 3:
                printf("Total Score: %d\n", total_score);
                break;
            default:
                running = 0;
                printf("Thank you for playing!");
                return 0;
                break;
        }
    }
}
