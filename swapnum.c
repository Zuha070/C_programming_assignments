#include<stdio.h>
int main(){
    int m;
     int n;
    printf("enter ist number");
    scanf("%d",&m);
    printf("enter 2nd number");
    scanf("%d",&n);
    int temp = m;
    m = n;
    n = temp;
    
printf("swapped numbers\n");
printf("first number");
printf("%d\n",m);
printf("second number");
printf("%d ",n);
return 0;
}