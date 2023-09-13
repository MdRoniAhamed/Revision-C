#include<stdio.h>
int main(){
   float n;
   scanf("%f",&n) ;
   int i = n;
   float r = n - i;
   printf("Integer part: %d\n",i);
   printf("Real part:  %.3f",r);
   return 0;
}

