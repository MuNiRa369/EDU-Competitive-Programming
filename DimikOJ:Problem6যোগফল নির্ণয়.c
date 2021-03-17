#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1; i<=n; i++)
    {
        int num;
        int sum=0;
        scanf("%d",&num);
        sum+=num%10;
        sum+=num/10000;
        printf("Sum = %d\n",sum);
    }
    return 0;
}
