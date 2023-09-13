/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include<stdio.h>
int main(){
    float item1, item2, weight1, weight2;
    printf(" Weight - Item1: ");
    scanf("%f",&weight1);
    printf(" No - Item1: ");
    scanf("%f",&item1);
    printf(" Weight - item2: ");
    scanf("%f",&weight2);
    printf(" Weight - Item2: ");
    scanf("%f",&item2);
    float weight =( weight1 * item1 + weight2 * item2 ),item = item1+item2;
    float average = weight/item;

    printf("Average Value = %f",average);
}

