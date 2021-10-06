#include<iostream>

using namespace std;

// main function -
// where the execution of program begins
int main()
{
  int n=5,i=1;
    while(1)
    {
        if(n==0)
            break;
        else
        {
            if(i>n)
                printf("%d ",n--);
            else
                printf("%d ",i++);
        }
    }    return 0;
}
