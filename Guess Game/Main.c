#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Author: Vishal Verma | Enhanced to handle invalid input inspired from @CodewithHarry

int main() {
    srand(time(0)); // Seed the random number generator

    int randomnumber = (rand() % 100) + 1;
    int guessed_num;
    int number_of_guess = 0;

    printf("=== Welcome to the Number Guessing Game ===\n");
    printf("Guess the number between 1 and 100\n");

    while (1) {
        printf("Guess a number: ");

        // Check if input is a valid integer
        if (scanf("%d", &guessed_num) != 1) {
            printf("Invalid input! Please enter a valid number.\n");

            // Clear invalid input from the buffer
            while (getchar() != '\n');
            continue;
        }

        number_of_guess++;

        if (guessed_num > randomnumber) {
            printf("Think of a lower number.\n");
        } else if (guessed_num < randomnumber) {
            printf("Think of a higher number.\n");
        } else {
            printf("You guessed the number in %d guesses!\n", number_of_guess);
            break;
        }
    }

    return 0;
}