#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0;
printf("enter a number");
scanf("%d",&n);
while(n>0){
  if(n%2!=0)
   sum=sum+n;

  n-=1;
      }
        printf("sum of odd digits %d\n",sum);
return 0;
}
