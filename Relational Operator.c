#include<stdio.h>
#include<string.h>
int main()
{
    int num;
    scanf("%d",&num);

    int arr[num][2];
    int i;
    for(i=0; i<num; i++)
    {
        scanf("%d %d",&arr[i][0],&arr[i][1]);
    }

    for(i=0; i<num; i++)
    {
        int a,b;
        a=arr[i][0];
        b=arr[i][1];
        if(a==b)
            printf("=\n");
        else if(a<b)
            printf("<\n");
        else
            printf(">\n");
        }
    return 0;
}
