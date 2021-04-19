#include<stdio.h>
#include<math.h>

/// Sum i=1 to i=N, Determine: i*(n-i+1) = ....
int main()
{
    int n,i=1,j,sum=0;
    scanf("%d",&n);
    j=n;

    while(i<=n)
    {
        sum = sum + i*j;
        i++;
        j--;
    }
    printf("Res = %d\n",sum);

    return 0;
}

