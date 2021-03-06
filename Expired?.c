#include <stdio.h>
int main()
{
    int X,A,B;
    scanf("%d %d %d",&X,&A,&B);
    if(B<=X)
    printf("delicious\n");
    else if (X>=(B-A))
    printf("safe\n");
    else
    printf("dangerous");
    return 0;
}
