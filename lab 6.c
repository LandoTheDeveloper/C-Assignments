//
//  main.c
//  Lab 6
//
//  Created by Landon Craft on 2/22/23.
//

#include <stdio.h>

double starting_temperature, final_temperature;

// Takes user input and converts it into celsius
double fahrenheit_to_celsius(){
    printf("What is your temperature in Fahrenheit?\n");
    scanf("%lf", &starting_temperature);
    final_temperature = (5.0 / 9.0) * (starting_temperature - 32);
    printf("%.2lf degree F = %.2lf degree C\n", starting_temperature, final_temperature);
    return 1;
}

// Takes user input and converts it to fahrenheit
int celsius_to_fahrenheit(){
    printf("What is your temperature in Celsius?\n");
    scanf("%lf", &starting_temperature);
    final_temperature = (9.0 / 5.0) * starting_temperature + 32;
    printf("%.2lfC degree C = %.2lf degree F\n", starting_temperature, final_temperature);
    return 2;
}

int menu_choice;

// Prints the menu and takes a user's input
int menu_list(){
    printf("What would you like to do?\n");
    printf("1. Convert from Fahrenheit to Celsius\n");
    printf("2. Convert from Celsius to Fahrenheit\n");
    printf("3. Quit.\n");
    scanf("%d", &menu_choice);
    return 3;
}

int running = 1;

// Takes user input from menu_list() and chooses an appropraite switch case.
int menu_switch(){
    switch (menu_choice){
        case 1:
            fahrenheit_to_celsius();
            break;
        case 2:
            celsius_to_fahrenheit();
            break;
        case 3:
            
        default:
            running = 0;
            break;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    while(running){
        menu_list();
        menu_switch();
    }
    return 0;
}

