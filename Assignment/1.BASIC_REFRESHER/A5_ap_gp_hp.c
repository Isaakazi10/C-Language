/*
Name        : ISAA KAZI
Date        : 13/01/2023
Description : A5 - WAP to generate AP, GP, HP series.
Sample O/P  : Enter the First Number 'A': 2
              Enter the Common Difference / Ratio 'R': 3
              Enter the number of terms 'N': 5
Sample I/O  : AP = 2, 5, 8, 11, 14
              GP = 2, 6, 18, 54, 162
              HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

#include <stdio.h>

int main()
{
    // Declaration of datatypes used in this program.
    int A, R, N;

    // Printf and scanf are used to take an integer inputs form the user.
    printf("Enter the First Number 'A': ");
    scanf("%d", &A);

    printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d", &R);

    printf("Enter the number of terms 'N': ");
    scanf("%d", &N);

    // If First Number 'A' and Common Diffrence 'R' and Number of terms 'N' are greater than zero then excecute the if-statement else print Invalid statement.
    if ((N > 0) && (A > 0) && (R > 0))
    {
        // Taking a temp variable of A for upcoming use and also declaring a flaot variable.
        int sum = A, AP = A, GP = A;
        float HP;

        // Printing AP by using below algorithum.
        printf("AP =");
        for (int i = 1; i <= N; i++)
        {
            printf(" %d,", AP);
            AP = AP + R;
        }
        printf("\n");

        // Printing GP by using below algorithum.
        printf("GP =");
        for (int i = 1; i <= N; i++)
        {
            printf(" %d,", GP);
            GP = GP * R;
        }
        printf("\n");

        // Printing HP by using below algorithum.
        printf("HP =");
        for (int i = 1; i <= N; i++)
        {
            HP = ((float)1 / sum);
            printf(" %f,", HP);
            sum = sum + R;
        }
    }
    else
    {
        printf("Invalid input");
    }
}