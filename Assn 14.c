#include <stdio.h>
#include <string.h>

typedef struct {
    int month;
    int day;
    int year;
} DATE;

typedef struct {
    char name[50];
    DATE birthdate;
    char gender;
    double annualIncome;
} PERSON;

// Function prototypes
void populatePerson(PERSON *person);
void printPerson(const PERSON *person);

int main() {
    PERSON person1, person2, person3;

    printf("Enter details for Person 1:\n");
    populatePerson(&person1);
    printf("\nEnter details for Person 2:\n");
    populatePerson(&person2);
    printf("\nEnter details for Person 3:\n");
    populatePerson(&person3);
    printf("\nDetails of the three people:\n");
    printf("---------------------------\n");
    printPerson(&person1);
    printPerson(&person2);
    printPerson(&person3);

    return 0;
}

void populatePerson(PERSON *person) {
    // Input name
    printf("Enter name: ");
    scanf("%s", &person->name);
    
    // Input birthdate
    do {
        printf("Enter birthdate (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &person->birthdate.month, &person->birthdate.day, &person->birthdate.year);
        
        // Validate month
        if (person->birthdate.month < 1 || person->birthdate.month > 12) {
            printf("Invalid month. Please enter a value between 1 and 12.\n");
            continue;
        }
        
        // Validate day
        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int isLeapYear = (person->birthdate.year % 4 == 0 && person->birthdate.year % 100 != 0) || person->birthdate.year % 400 == 0;
        if (person->birthdate.day < 1 || person->birthdate.day > daysInMonth[person->birthdate.month - 1] + (person->birthdate.month == 2 && isLeapYear)) {
            printf("Invalid day. Please enter a valid day for the given month and year.\n");
            continue;
        }
        
        // Validate year
        if (person->birthdate.year < 1900 || person->birthdate.year > 9999) {
            printf("Invalid year. Please enter a value between 1900 and 9999.\n");
            continue;
        }
        
        break;
    } while (1);
    
    // Input gender
    do {
        printf("Enter gender (M/F/O): ");
        getchar(); // Clear newline character from input buffer
        scanf("%c", &person->gender);
        
        // Validate gender
        if (person->gender != 'M' && person->gender != 'F' && person->gender != 'O') {
            printf("Invalid gender. Please enter 'M' for male, 'F' for female, or 'O' for other.\n");
            continue;
        }
        
        break;
    } while (1);
    
    // Input annual income
    do {
        printf("Enter annual income (in USD): ");
        scanf("%lf", &person->annualIncome);
        
        // Validate annual income
        if (person->annualIncome < 0 || person->annualIncome > 1000000){
            printf("Please input an income between 0 and 1 million.\n");
            continue;
        }
        
        break;
    } while (1);
}

void printPerson(const PERSON *person){
    printf("Name: %s\n", person->name);
    printf("Birthday: %d/%d/%d \n", person->birthdate.month, person->birthdate.day, person->birthdate.year);
    printf("Gender: %c\n", person->gender);
    printf("Income: %.2lf\n", person->annualIncome);
    printf("\n");
}
