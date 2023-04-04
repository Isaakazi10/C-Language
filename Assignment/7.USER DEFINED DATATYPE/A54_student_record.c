/*
Name        : ISAA KAZI
Date        : 17/03/2023
Description : A54 - WAP to Implement the student record using array of structures
Sample I/O  : Enter no.of students : 2
              Enter no.of subjects : 2
              Enter the name of subject 1 : Maths
              Enter the name of subject 2 : Science
              ----------Enter the student datails-------------
              Enter the student Roll no. : 1
              Enter the student 1 name : Nandhu
              Enter Maths mark : 99
              Enter Science mark : 91
              ----------Enter the student datails-------------
              Enter the student Roll no. : 2
              Enter the student 2 name : Bindhu
              Enter Maths mark : 88
              Enter Science mark : 78
              ----Display Menu----
              1. All student details
              2. Particular student details
              Enter your choice : 2

              ----Menu for Particular student----
              1. Name.
              2. Roll no.
              Enter you choice : 1
              Enter the name of the student : Nandhu
              Roll No.   Name           Maths         Science       Average       Grade
              1          Nandhu         99            91            95            A
              Do you want to continue to display(Y/y) : n
Sample O/P  :
*/

// Libaries used in this assignment.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// MACROS used in this assignment.
#define MAXLEN 20

// Defination of structure and member used.
struct Student
{
    int Roll;
    char Name[MAXLEN];
    float Ave;
    char Grade;
};

// Declaration of the function used.
void ave_gra(int nstudent, int nsub, struct Student *ptr, int marks[][nsub]);
void display(int choice, char cont, char sub[][MAXLEN], int nstudent, int nsub, struct Student *ptr, int marks[][nsub]);
void print(char sub[][MAXLEN], int nsub);
void print_stud(int i, struct Student *ptr, char sub[][MAXLEN], int nsub, int marks[][nsub]);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int nstudent, nsub, choice;
    char cont;

    // Geting inputs from the user.
    printf("Enter no.of students : ");
    scanf("%d", &nstudent);

    // Declaration of struct datatype variable.
    struct Student stud_info[nstudent];

    printf("\nEnter no.of subjects : ");
    scanf("%d", &nsub);

    // Creating 2D array for storing subject names.
    char sub[nsub][MAXLEN];

    // Taking input form user for subject name.
    for (int i = 0; i < nsub; i++)
    {
        printf("Enter the name of subject %d (First 3 Words): ", (i + 1));
        scanf(" %3s", sub[i]);
    }

    // Making 2D array for storing marks of the students.
    int marks[nstudent][nsub];

    // Taking the Input from the user.
    for (int i = 0; i < nstudent; i++)
    {
        printf("\n----------Enter the student datails-------------\n");
        printf("Enter the student Roll no. : ");
        scanf("%d", &stud_info[i].Roll);
        printf("Enter the student %d name : ", (i + 1));
        scanf(" %s", stud_info[i].Name);

        for (int j = 0; j < nsub; j++)
        {
            printf("Enter %s mark : ", sub[j]);
            scanf("%d", &marks[i][j]);
        }
    }
    // Calling ave_gra function
    ave_gra(nstudent, nsub, stud_info, marks);

    // Calling displat function
    display(choice, cont, sub, nstudent, nsub, stud_info, marks);
}

// Defination of ave_gra function (For calcuating the average of the students marks and giving grades)
void ave_gra(int nstudent, int nsub, struct Student *ptr, int marks[][nsub])
{
    for (int i = 0; i < nstudent; i++)
    {
        ptr->Ave = 0;

        for (int j = 0; j < nsub; j++)
        {
            ptr[i].Ave += marks[i][j];
        }
        ptr[i].Ave /= nsub;

        if ((ptr[i].Ave > 90) && (ptr[i].Ave <= 100))
        {
            ptr[i].Grade = 'A';
        }
        else if ((ptr[i].Ave > 80) && (ptr[i].Ave <= 90))
        {
            ptr[i].Grade = 'B';
        }
        else if ((ptr[i].Ave > 70) && (ptr[i].Ave <= 80))
        {
            ptr[i].Grade = 'C';
        }
        else if ((ptr[i].Ave > 60) && (ptr[i].Ave <= 70))
        {
            ptr[i].Grade = 'D';
        }
        else if ((ptr[i].Ave > 50) && (ptr[i].Ave <= 60))
        {
            ptr[i].Grade = 'E';
        }
        else
        {
            ptr[i].Grade = 'F';
        }
    }
}

// Defination of display function.
void display(int choice, char cont, char sub[][MAXLEN], int nstudent, int nsub, struct Student *ptr, int marks[][nsub])
{
    while (1)
    {
        char tem_str[20];
        int tem_int, count = 0;

        printf("\n----Display Menu----\n1. All student details\n2. Particular student details\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (int i = 0; i < nstudent; i++)
            {
                if (i == 0)
                {
                    print(sub, nsub);
                }

                print_stud(i, ptr, sub, nsub, marks);
            }
            break;

        case 2:
            printf("\n----Menu for Particular student----\n1. Name.\n2. Roll no.\nEnter you choice : ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("\nEnter the name of the student : ");
                scanf(" %s", tem_str);

                print(sub, nsub);
                for (int i = 0; i < nstudent; i++)
                {
                    if ((strcmp(ptr[i].Name, tem_str)) == 0)
                    {
                        print_stud(i, ptr, sub, nsub, marks);
                        count++;
                    }
                }
                if (count == 0)
                {
                    printf("\nNO STUDENT WITH NAME \"%s\" FOUND\n", tem_str);
                }
                break;

            case 2:
                printf("\nEnter the Roll no. of the student : ");
                scanf(" %d", &tem_int);

                print(sub, nsub);
                for (int i = 0; i < nstudent; i++)
                {
                    int temp = ptr[i].Roll;
                    if (ptr[i].Roll == tem_int)
                    {
                        print_stud(i, ptr, sub, nsub, marks);
                        count++;
                    }
                }
                if (count == 0)
                {
                    printf("\nNO STUDENT WITH ROLL no. \"%d\" FOUND\n", tem_int);
                }
                break;

            default:
                printf("\nEnter 1 or 2\n");
                break;
            }
            break;

        default:
            printf("\nChoice is Only (1 or 2)\n");
            break;
        }

        printf("\nDo you want to continue to display(Y/y) : ");
        scanf(" %c", &cont);
        if (!((cont == 'Y') || (cont == 'y')))
        {
            exit(0);
        }
    }
}

void print(char sub[][MAXLEN], int nsub)
{
    printf("\n%s %s\t", "Roll No.", "Name");
    for (int i = 0; i < nsub; i++)
    {
        printf("%s\t", sub[i]);
    }
    printf("%s\t%s\n", "Average", "Grade");
}

void print_stud(int i, struct Student *ptr, char sub[][MAXLEN], int nsub, int marks[][nsub])
{
    printf("\n%d\t %s\t", ptr[i].Roll, ptr[i].Name);
    for (int j = 0; j < nsub; j++)
    {
        printf("%d\t", marks[i][j]);
    }
    printf("%g\t%c\n", ptr[i].Ave, ptr[i].Grade);
}