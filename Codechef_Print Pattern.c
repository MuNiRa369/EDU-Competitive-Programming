#include <stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n][n];
        for(int k=0,count=0; k<2*n-1; k++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(i+j==k)
                        a[i][j]=++count;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }

}
