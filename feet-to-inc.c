#include<stdio.h>
int main(){
    printf("Enter height is inches: ");
    int inc;
    scanf("%d",&inc);
    int feet = inc/12;
    int in = inc % 12;
    printf("Your height is %d feet %d inches",feet,in);
}

