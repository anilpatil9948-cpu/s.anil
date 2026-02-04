// Online C compiler to run C program online
#include <stdio.h>
void main()
{
int big;
int small;
int chocolate;
printf("enter the amount small bars\n");
scanf("%d",&small);
printf("enter the big bars\n");
scanf("%d",&big);
printf("enter the cake wieght\n");
scanf("%d",&chocolate);
int required=chocolate/5;
if(required<=big)
{
    int rem=chocolate-(required*5);
    if(rem<=small)
    {
        printf("%d",rem);
    }
    else
    {
        printf("-1");
    }
}
  else 
  {
      int rem1=chocolate-(big*5);
      if(rem1<=small)
      {
      printf("%d",rem1);
      }
  else
 {
     printf("-1");
 }
  }
}
  
  
  
 


