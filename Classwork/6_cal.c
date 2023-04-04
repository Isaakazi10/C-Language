#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2;
    char op;
    printf("Enter the operator: ");
    scanf("%c",&op);
    printf("Enter the numbers: ");
    scanf("%f %f",&num1,&num2);
    
    switch(op)
    {
        case '+':
        printf("Addition: %0.6f\n",num1+num2);
        break;
        
        case '-':
        printf("Subtraction: %0.6f\n",num1-num2);
        break;
        
        case '*':
        printf("Multiplication: %0.6f\n",num1*num2);
        break;
        
        case '/':
        printf("Division: %0.6f\n",num1/num2);
        break;
        
        case '%':
        printf("Mod: %d\n",(int)num1%(int)num2);
        break;
        
        default:
        printf("No such operator.\n");
    }
}
