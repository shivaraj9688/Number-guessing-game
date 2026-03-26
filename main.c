#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int number, guess, attempts = 0;
    // Generate random number (1 to 100)
    srand(time(0));
    number = rand() % 100 + 1;
    printf(" Number Guessing Game (1 to 100)\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > number) {
            printf("Too high! Try again.\n");
        } 
        else if (guess < number) {
            printf("Too low! Try again.\n");
        } 
        else {
            printf(" Correct! You guessed in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}