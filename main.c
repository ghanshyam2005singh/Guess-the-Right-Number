#include<stdio.h>

int main () {
    int secret_number;
    int guess_number;

    secret_number = 5;

    int i;
    int guess_limit;

    guess_limit = 3;


    for(i =1; i<=guess_limit; i++) {
        printf("Guess the Number : ",i);
        scanf("%d", &guess_number);

        if(guess_number == secret_number) {
            printf("You Won!");
            break;
        } else {
            printf("You Lost!");
        }
    }
    return 0;
}