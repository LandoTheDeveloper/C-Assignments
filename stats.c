//
//  main.c
//  Assignment 8
//
//  Created by Landon Craft on 3/8/23.
//

#include <stdio.h>
#include <math.h>

// Declaring variables
int i, num, min_val, max_val;
double grade_book[100];

/* This function reads an unknown number of grades (maximum
of 100) into the array grades and counts the data items
that have been read. You are not supposed to prompt the
user to enter the grades. Just use scanf to read in the
grades. The end of the input is represented by a negative
number –999 */
int readGrades(double grades[], int *n){
    // Takes the grade input
    for (i = 0; i < 100; i++){
        scanf("%lf", &grades[i]);
        if (grades[i] == -999){
            *n = i + 1;
            break;
        }
    }
    return 0;
}

/* Given an array of real numbers and the effective size of
the array (i.e. count of the numbers in the array), this
function returns the location of the lowest number in the
array */
int minimum(double grades[], int n){
    int location;
    // Finds the minimum value
    for (i = 0; i < num; i++){
        if (i == 0)
            min_val = grade_book[i];
        else if ((grade_book[i] < min_val) && grade_book[i] != -999){
            min_val = grade_book[i];
            location = i;
        }
    }
    return location;
}

/* Given an array of real numbers and the effective size of
the array (i.e. count of the numbers in the array), this
function returns the location of the highest number in the
array */
int maximum(double grades[], int n){
    int location;
    // Finds the maximum value
    for (i = 0; i < num; i++){
        if (i == 0)
            max_val = grade_book[i];
        else if ((grade_book[i] > max_val) && grade_book[i] != -999){
            max_val = grade_book[i];
            location = i;
        }
    }
    return location;
}

/* Given an array of real numbers, this function finds out
frequency (number of students) for  each interval 0-4, 5-
9,.....,95 – 99, 100 prints out the frequency values and
plots the histogram */
int case_number;
int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0, c10 = 0, c11 = 0, c12 = 0, c13 = 0, c14 = 0, c15 = 0, c16 = 0, c17 = 0, c18 = 0, c19 = 0, c20 = 0;
void frequency(double grades[], int n){
    for (i = 0; i < n - 1; i++){
        case_number = grades[i] / 5;
        switch (case_number){
            case 0:
                c0++;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                c5++;
                break;
            case 6:
                c6++;
                break;
            case 7:
                c7++;
                break;
            case 8:
                c8++;
                break;
            case 9:
                c9++;
                break;
            case 10:
                c10++;
                break;
            case 11:
                c11++;
                break;
            case 12:
                c12++;
                break;
            case 13:
                c13++;
                break;
            case 14:
                c14++;
                break;
            case 15:
                c15++;
                break;
            case 16:
                c16++;
                break;
            case 17:
                c17++;
                break;
            case 18:
                c18++;
                break;
            case 19:
                c19++;
                break;
            case 20:
                c20++;
                break;
        }
    }
    // 
    printf("0 - 4 | ");
    for (int i = 0; i < c0; i++){
        printf("*");
    }
    printf("\n");
    printf("5 - 9 | ");
    for (int i = 0; i < c1; i++){
        printf("*");
    }
    printf("\n");
    printf("10-14 | ");
    for (int i = 0; i < c2; i++){
        printf("*");
    }
    printf("\n");
    printf("15-19 | ");
    for (int i = 0; i < c3; i++){
        printf("*");
    }
    printf("\n");
    printf("20-24 | ");
    for (int i = 0; i < c4; i++){
        printf("*");
    }
    printf("\n");
    printf("25-29 | ");
    for (int i = 0; i < c5; i++){
        printf("*");
    }
    printf("\n");
    printf("30-34 | ");
    for (int i = 0; i < c6; i++){
        printf("*");
    }
    printf("\n");
    printf("35-39 | ");
    for (int i = 0; i < c7; i++){
        printf("*");
    }
    printf("\n");
    printf("40-44 | ");
    for (int i = 0; i < c8; i++){
        printf("*");
    }
    printf("\n");
    printf("45-49 | ");
    for (int i = 0; i < c9; i++){
        printf("*");
    }
    printf("\n");
    printf("50-54 | ");
    for (int i = 0; i < c10; i++){
        printf("*");
    }
    printf("\n");
    printf("55-59 | ");
    for (int i = 0; i < c11; i++){
        printf("*");
    }
    printf("\n");
    printf("60-64 | ");
    for (int i = 0; i < c12; i++){
        printf("*");
    }
    printf("\n");
    printf("65-69 | ");
    for (int i = 0; i < c13; i++){
        printf("*");
    }
    printf("\n");
    printf("70-74 | ");
    for (int i = 0; i < c14; i++){
        printf("*");
    }
    printf("\n");
    printf("75-79 | ");
    for (int i = 0; i < c15; i++){
        printf("*");
    }
    printf("\n");
    printf("80-84 | ");
    for (int i = 0; i < c16; i++){
        printf("*");
    }
    printf("\n");
    printf("85-89 | ");
    for (int i = 0; i < c17; i++){
        printf("*");
    }
    printf("\n");
    printf("90-94 | ");
    for (int i = 0; i < c18; i++){
        printf("*");
    }
    printf("\n");
    printf("95-99 | ");
    for (int i = 0; i < c19; i++){
        printf("*");
    }
    printf("\n");
    printf(" 100  | ");
    for (int i = 0; i < c20; i++){
        printf("*");
    }
    printf("\n");
}


/* Given an array of real numbers, the effective size of
the array and the location of the element to be deleted,
this function deletes that element from the array and
decrements the effective size, n, by one */
void deleteElement(double grades[], int *n, int loc){
    // Shift all elements after loc one position to the left
    for(i = loc; i < *n - 1; i++){
        grades[i] = grades[i+1];
    }
    // Decrement the effective size of the array by one
    (*n)--;
    
}


/* Given an array of numbers and the effective size of the
array this function computes and returns the mean */
double mean(double grades[], int n){
    double total_sum = 0, counter = 0;
    for (i = 0; i < n-1; i++){
        total_sum += grades[i];
        counter++;
    }
    double mean = total_sum / counter;
    return mean;
}

/* Given an array of numbers and the effective size of the
array, this function computes and returns the standard
deviation as described in the previous section */
double StandardDeviation(double grades[], int n){
    double total_sum = 0, sd;
    double means = mean(grade_book, num);
    for (i = 0; i < n - 1; i++){
        total_sum += pow((grades[i] - means), 2);
    }
    sd = sqrt(total_sum / (n - 1));
    return sd;
}


int main(int argc, const char * argv[]) {
    // Function Calling :)
    readGrades(grade_book, &num);
    minimum(grade_book, num);
    maximum(grade_book, num);
    deleteElement(grade_book, &num, maximum(grade_book, num));
    printf("The data has been adjusted by removing the maximum %d\n", max_val);
    deleteElement(grade_book, &num, minimum(grade_book, num));
    printf("The data has been adjusted by removing the minimum %d\n", min_val);
    printf("The mean of the adjusted data is %.2lf\n", mean(grade_book, num));
    printf("The adjusted standard deviation is %.2lf\n", StandardDeviation(grade_book, num));
    printf("Here is a histogram of the adjusted data: \n");
    frequency(grade_book, num);
    return 0;
}
