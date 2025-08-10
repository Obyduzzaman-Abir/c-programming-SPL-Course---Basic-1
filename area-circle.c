#include<stdio.h>
int main()
{
    float radius;
    printf("Enter the radius : ");
    scanf("%f",&radius);
    float pi =3.1416;
    float area = pi*radius*radius;
    printf("The area is : %.2f", area);
    return 0;
}