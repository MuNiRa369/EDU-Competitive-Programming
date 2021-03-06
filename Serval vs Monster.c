#include <stdio.h>
main()
{
    int H,A,count;
    scanf("%d %d",&H, &A);
    for(count=0; H>0; count++)
    {
        H = H-A;
    }
    printf("%d\n",count);
}
