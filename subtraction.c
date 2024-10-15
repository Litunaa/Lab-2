#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    short unsigned randomNumber1, randomNumber2;
    int studentAnswer;
    short unsigned higherNumber, lowerNumber;

    const short unsigned completionGoal = 3;
    short unsigned completedSubtractions = 0;

    srand(time(0));
    
    while (completedSubtractions < completionGoal){
        randomNumber1 = rand() % 101;
        randomNumber2 = rand() % 101;

        if (randomNumber1 > randomNumber2){
            higherNumber = randomNumber1;
            lowerNumber = randomNumber2;
        } else{
            higherNumber = randomNumber2;
            lowerNumber = randomNumber1;
        }
        

        while (true){
            printf("How much is %d minus %d Answer = ", higherNumber, lowerNumber);
            scanf("%d", &studentAnswer);
            
            if (studentAnswer == (higherNumber - lowerNumber)){
                printf("Good job!\n\n");
                completedSubtractions++;
                break;
            } else{
                printf("No. Please try again.\n");
            }
        }      
    }
    printf("You completed %d/%d tasks, good job!", completedSubtractions, completionGoal);

    return 0;
}