#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int A[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int in,val;
    scanf("%d %d",&in,&val);

    for (int i = n; i >= in+1; i--)
    {
        A[i] = A[i-1];
    }
    
    A[in] = val;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",A[i]);
    }
    

    return 0;
}