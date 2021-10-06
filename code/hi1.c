#include<stdio.h>
#include<string.h>
char* removevowels(char *str)
{  int i=0,j,chk;
  while(str[i]!='\0')
    {
        chk=0;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            j=i;
            while(str[j-1]!='\0')
            {
                str[j] = str[j+1];
                j++;
            }
            chk = 1;
        }
        if(chk==0)
            i++;
    }
  return str;
}
/*int main()
{
  char str[50],*s;
  printf("enter the sting:");
  gets(str);
  s=removevowels(str);
  printf("%s",s);
  return 0;
}*/
int x=5;
void main()
{        int  a=10,b=11;
	printf("%d %d %d",a&b,a|b,a^b);}
