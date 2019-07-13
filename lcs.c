#include<stdio.h>
#include<string.h>

int max(int a,int b);
int lcs(char *A, char *B,int i,int j)
{
    if(i==0 || j==0)
    {
        return 0;
    }
    if(A[i-1]==B[j-1])
    {
        return 1+lcs(A,B,i-1,j-1);
    }
    else
    {
        return max(lcs(A,B,i-1,j),lcs(A,B,i,j-1));
    }
}
int max(int a,int b)
{
    return (a>b)? a:b;
}
int main()
{
    char A[200],B[200];
    int i,j;
    scanf("%s%s",A,B);
    i = strlen(A);
    j = strlen(B);
    printf("The length of LCS is %d",lcs(A,B,i,j));
    return 0;
    
}
