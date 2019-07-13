
#include <stdio.h>

int fib(int n)
{
    int F[100];
   if(n<=1){
       return n;
   }
   F[0]=0;
   F[1]=1;
   for(int i=2;i<=n;i++)
   {
       F[i] = F[i-2] + F[i-1];
   }
   return F[n];
}
int main()
{
    int num;
    scanf("%d",&num);
    int x = fib(num);
    printf("%d",x);
    return 0;
}
