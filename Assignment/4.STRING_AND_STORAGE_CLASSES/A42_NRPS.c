/*
Name        : ISAA KAZI
Date        : 21/02/2023
Description : A42 - Generate consecutive NRPS of length n using k distinct character
Sample I/O  : Enter the number characters C : 3
              Enter the Length of the string N : 6
              Enter 3 distinct characters : a b c
Sample O/P  :
*/

#include <stdio.h>

// Function prototype for the written function.
void nrps(char str[], int C, int N);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int C, N;

    // Taking input from user.
    printf("Enter the number characters C : ");
    scanf("%d", &C);

    // Initializaion of array
    char str[C];

    printf("Enter the Length of the string N : ");
    scanf("%d", &N);

    // Taking the characters from the user
    printf("Enter %d distinct characters : ", C);
    for (int i = 0; i < C; i++)
    {
        scanf(" %c", (str + i));
    }

    // If the user has give same characters then erroe.
    for (int i = 0; i < C; i++)
    {
        for (int j = (i + 1); j < C; j++)
        {
            if (str[i] == str[j])
            {
                printf("Error : Enter distinct characters");
                return 0;
            }
        }
    }

    // Function call.
    nrps(str, C, N);
}

// Defination and declaration of nrps function.
void nrps(char str[], int C, int N)
{
    // Declaration of the variable
    int k, count = C;
    char temp;

    printf("Possible NRPS is ");
    printf("%s", str);

    // Algorithum for finding NRPS
    for (int i = C; count != N; i++)
    {
        if (i >= C)
        {
            k = i % C;
        }

        if (k == (C - 1))
        {
            continue;
        }
        // Algorithum swaping the elements.
        temp = str[k];
        str[k] = str[k + 1];
        str[k + 1] = temp;

        // Printing modified array.
        for (int i = 0; i < C; i++)
        {
            count++;
            printf("%c", str[i]);
            if (count == N)
            {
                break;
            }
        }
    }
}