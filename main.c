#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahernheit, celsius;
    printf("Please type the temperature in fahernheit: ");
    scanf("%f",&fahernheit);
    celsius = (fahernheit-32)/1.8;
    printf("%f fahernheit is equal to %f celsius.",fahernheit,celsius);
    return 0;
