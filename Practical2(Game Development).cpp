#include <stdio.h>

int main() {
    int n = 5; 
    int array1[5], array2[5]; 
    int temp;
    int i, j;
    int sum1 = 0, sum2 = 0;

   
    printf("Welcome to the Bubble Sort Game!\n");
    printf("Enter player 1's score\n");
    printf("Enter %d scores to level up!\n", n);

    for(i = 0; i < n; i++) {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(array1[j] > array1[j + 1]) {
                temp = array1[j];
                array1[j] = array1[j + 1];
                array1[j + 1] = temp;
            }
        }
    }

    printf("\nLevel Up! Player 1's sorted scores are:\n");
    for(i = 0; i < n; i++) {
        printf("Score %d: %d\n", i + 1, array1[i]);
        sum1 += array1[i]; 
    }

    
    printf("\nEnter player 2's score\n");
    printf("Enter %d scores to level up!\n", n);

    for(i = 0; i < n; i++) {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(array2[j] > array2[j + 1]) {
                temp = array2[j];
                array2[j] = array2[j + 1];
                array2[j + 1] = temp;
            }
        }
    }

    printf("\nLevel Up! Player 2's sorted scores are:\n");
    for(i = 0; i < n; i++) {
        printf("Score %d: %d\n", i + 1, array2[i]);
        sum2 += array2[i]; 
    }

  
    printf("\nPlayer 1's total score: %d\n", sum1);
    printf("Player 2's total score: %d\n", sum2);

    if(sum1 > sum2) {
        printf("Player 1 wins!\n");
    } else if(sum2 > sum1) {
        printf("Player 2 wins!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}

