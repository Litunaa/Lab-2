#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
    int heightOfPyramid;
    short unsigned currentStarCount;
    short unsigned currentSpaceCount;
    short unsigned iterationsRequired;

    while (true){
        printf("How high shall the pyramid be? (5-20): ");
        scanf("%d", &heightOfPyramid);

        if (heightOfPyramid < 5 || heightOfPyramid > 20){
            printf("\nOnly values between 5-20 are allowed!\n");
        }

        else{
            break;
        }
    }

    iterationsRequired = (heightOfPyramid * 2) - 1;

    for (int i = 1; i <= iterationsRequired; i++){
        currentSpaceCount = abs(heightOfPyramid - i);
        currentStarCount = heightOfPyramid - currentSpaceCount;
        
        for (int j = 1; j <= currentSpaceCount; j++){
            printf(" ");
        }

        for (int k = 1; k <= (currentStarCount); k++){
            printf("*");
        } 
        printf("\n");
    }
    return 0;
}