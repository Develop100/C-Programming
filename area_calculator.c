#include <stdio.h>
#define PI 3.14159
int main(int argc, char const *argv[])
{
    float radius,area;
    printf("Please enter radius of circle: ");
    scanf("%f",&radius);
    area = PI*radius*radius;
    printf("The area of circle is %f ",area,radius);
    return 0;
}
