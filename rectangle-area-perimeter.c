#include<stdio.h>
int main(){
    int h,w;
    printf("Enter height of rectangle: ");
    scanf("%d",&h);
    printf("Enter widthh of rectangle: ");
    scanf("%d",&w);

    int area = h * w;
    double perimeter = 2 *(h + w);

    printf("Area is %d",area);
    printf("Perimeter is %.0lf",perimeter);
}

