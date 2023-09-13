/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include<stdio.h>
int main(){
    int year, month, day,days;
    printf("Input no. of days: ");
    scanf("%d",&days);
    year = days/365;
    days %= 365;
    month = days/30;
    days %= 30;
    printf("\n%d Year(s)",year);
    printf("\n%d Month(s)",month);
    printf("\n%d Day(s)",days);

    return 0;

}
