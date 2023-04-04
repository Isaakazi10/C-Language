/*
Name        : ISAA KAZI
Date        : 22/02/2023
Description : A33 - WAP to count no. of characters, words and lines, entered through stdin
Sample I/O  : Hello world
              Dennis Ritchie
              Linux
Sample O/P  : Character count : 33
              Line count : 3
              Word count : 5
*/

#include <stdio.h>

int main()
{
    // Declaration of datatypes and variables used in this main function.
    char ch, temp;
    int all_char = 0, all_word = 0, all_lines = 0;

    // While variable ch is not equal to EOF.
    while ((ch = getchar()) != EOF)
    {
        // For counting characters.
        all_char++;

        // If the ch is equal to spaces character and newline character then variable all_word++.
        if (ch == ' ' || ch == '\n')
        {
            // If there are multiple spaces then contonue.
            if (temp == ch)
            {
                continue;
            }
            all_word++;
        }

        // If the ch is equal to newline character then variable all_line++.
        if (ch == '\n')
        {
            // If there are multiple newline then contonue.
            if (temp == ch)
            {
                continue;
            }

            all_lines++;
        }
        temp = ch;
    }

    printf("\nCharacter count : %d\n", all_char);
    printf("Line count : %d\n", all_lines);
    printf("Word count : %d\n", all_word);
}