#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));

    int randomnumber = (rand()%100)+1;
    int guessed_num;
    int number_of_guess = 0;
    do
    {
        printf("Guess a number ");
        scanf("%d",&guessed_num);
        if (guessed_num>randomnumber)
        {
            printf("Think of a lower number\n");
        }
        else if(guessed_num<randomnumber){
            printf("Think of a Higher number\n");
        }
        number_of_guess++;
    } while (guessed_num != randomnumber);
    printf("you guessed the number in %d guesses", number_of_guess);
    return 0;
}