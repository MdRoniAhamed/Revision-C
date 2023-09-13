#include<stdio.h>
int main(){
    printf("Enter radius:");
    double radius;
    scanf("%lf",&radius);
    const double PI = 3.1416 ;
    double perimeter, area;
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Perimeter = %lf\n",perimeter);
    printf("Area = %lf\n",area);

    return 0;
}
