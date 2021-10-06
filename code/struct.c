#include<stdio.h>
#include<math.h>
typedef struct{
  int hour,min,sec;
}time;
/*void main()
{
int num,dup,rem;//number of digits base if 4-digit power is raised to 4; for 3-digit power is raised to 3
for(int i=9999;i>1000;i--)
{num=i;
dup=0;
while(num!=0)
{
  rem=num%10;
  dup=dup+pow(rem,4);
  num=num/10;
}
if(i==dup)
{
  printf("%d is amstrong",dup);
  break;
}

}*/
/*time t1={3,40,50},t2={4,30,55};
int t3;
t3=(t1.hour-t2.hour)*60*60+(t1.min-t2.min)*60+(t1.sec-t2.sec);
t3=t3*-1;
printf("%d",t3);*/
//palindrome
/*int num,dup,rem;
for(int i=9998;i>1000;i--)
{num=i;
  dup=0;
while(num!=0)
{
  rem=num%10;
  dup=dup*10+rem;
  num=num/10;
}
if(i==dup)
{
  printf("%d",dup);
  break;
}}*/

}
