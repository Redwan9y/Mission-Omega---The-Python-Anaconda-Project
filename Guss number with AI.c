#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("Guess the number between 1 and 100\n");
    do {
        scanf("%d", &guess);
        tries++;
        if (guess > num) {
            printf("Too high!\n");
        } else if (guess < num) {
            printf("Too low!\n");
        } else {
            printf("Congratulations, you guessed the number in %d tries!\n", tries);
        }
    } while (guess != num);
    return 0;
}