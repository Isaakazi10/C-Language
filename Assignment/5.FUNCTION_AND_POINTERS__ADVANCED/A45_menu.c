/*
Name        : ISAA KAZI
Date        : 1/03/2023
Description : A45 - Provide a menu to manipulate or display the value of variable of type t
Sample I/O  :
Sample O/P  :
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototype for the written function.
int menu(char *str[]);
int datatype_menu(int choice, int *ptr);
void display(int ptr[]);

int f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
int *arr[6] = {&f0, &f1, &f2, &f3, &f4, &f5};

int main()
{
    // Declaration of datatypes and variables used in this main function.
    char *str[4] = {"Add Element", "Remove Element", "Display Element", "Exit from program"};
    void *ptr = malloc(8);

    while (1)
    {
        // Calling menu function
        datatype_menu(menu(str), ptr);
    }
}

// Defination and declaration of pangram function.
int menu(char *str[])
{
    // initializaion of the array
    int choice;
    do
    {
        printf("\n");

        for (int i = 1; i < 5; i++)
        {
            printf("%d.%s\n", i, str[i - 1]);
        }

        // Taking input from user
        printf("\nChoice ---> ");
        scanf("%d", &choice);

        if (choice == 4)
        {
            exit(0);
        }
        if ((choice <= 0) || (choice > 4))
        {
            printf("\nWithin Limited Range(1 to 4)\n\n");
        }
    } while (choice <= 0 && choice > 4);

    return choice;
}

int datatype_menu(int choice, int *ptr)
{
    int option = 0;
    switch (choice)
    {
    case 1:
        printf("\n1.char\n2.short\n3.int\n4.float\n5.double\n");
        printf("\nChoice ---> ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            if ((*arr[5] == 1) || (*arr[0] == 1) && (*arr[1] == 1))
            {
                printf("\nMEMORY IS FULL.\n");
            }
            else
            {
                printf("\nEnter the char: ");
                if (*arr[0] == 0)
                {
                    scanf(" %c", ((char *)ptr + 0));
                    *arr[0] = 1;
                    break;
                }
                else
                {
                    scanf(" %c", ((char *)ptr + 1));
                    *arr[1] = 1;
                    break;
                }
            }
            break;
        case 2:
            if ((*arr[5] == 1) || (*arr[2] == 1))
            {
                printf("\nMEMORY IS FULL.\n");
            }
            else
            {
                printf("\nEnter the num: ");
                scanf("%hd", ((short *)ptr + 2));
                *arr[2] = 1;
            }
            break;
        case 3:
            if ((*arr[5] == 1) || (*arr[3] == 1) || (*arr[4] == 1))
            {
                printf("\nMEMORY IS FULL.\n");
            }
            else
            {
                printf("Enter the num: ");
                scanf("%d", ((int *)ptr + 4));
                *arr[3] = 1;
            }
            break;
        case 4:
            if ((*arr[5] == 1) || (*arr[3] == 1) || (*arr[4] == 1))
            {
                printf("\nMEMORY IS FULL.\n");
            }
            else
            {
                printf("Enter the float num: ");
                scanf("%f", ((float *)ptr + 4));
                *arr[4] = 1;
            }
            break;
        case 5:
            if ((*arr[0] == 1) || (*arr[1] == 1) || (*arr[2] == 1) || (*arr[3] == 1) || (*arr[4] == 1))
            {
                printf("\nMEMORY IS FULL.\n");
            }
            else
            {
                printf("Enter the num: ");
                scanf("%lf", ((double *)ptr + 0));
                *arr[5] = 1;
                break;
            }
            break;

        default:
            printf("Enter number from 1 to 5");
            break;
        }
        break;

    case 2:
        display(ptr);
        int rem;
        printf("\nEnter the index value to be deleted : ");
        scanf("%d", &rem);
        *arr[rem] = 0;
        break;

    case 3:
        printf("\n------------\n");
        display(ptr);
        printf("\n------------\n");
        break;
    }
}

void display(int ptr[])
{
    for (int i = 0; i <= 5; i++)
    {
        if (*arr[i] == 1)
        {
            if (i == 0)
            {
                printf("\n[0] -> %c\n", *((char *)ptr + 0));
            }
            if (i == 1)
            {
                printf("\n[1] -> %c\n", *((char *)ptr + 1));
            }
            else if (i == 2)
            {
                printf("\n[2] -> %hd\n", *((short int *)ptr + 2));
            }
            else if (i == 3)
            {
                printf("\n[3] -> %d\n", *((int *)ptr + 4));
            }
            else if (i == 4)
            {
                printf("\n[4] -> %f\n", *((float *)ptr + 4));
            }
            else if (i == 5)
            {
                printf("\n[5] -> %lf\n", *((double *)ptr + 0));
            }
        }
    }
}