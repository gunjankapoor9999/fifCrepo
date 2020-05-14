#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0;
printf("enter a number");
scanf("%d",&n);
while(n>0){
   sum=sum+n;

  n-=1;
      }
        printf("sum is %d\n",sum);
return 0;
}
