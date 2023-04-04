#include <stdio.h>

float celsius(float fah)
{
    return ((5 / (float)9) * (fah - 32));
}

int main()
{
    float fah, cel;

    printf("Enter the Temp in F: ");
    scanf("%f", &fah);

    printf("Celsius: %g\n", celsius(fah));
}