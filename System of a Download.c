#include <stdio.h>
main()
{
    int N, i, a, b, sum;
    char *arr[11] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d %d",&a,&b);
        sum = a+b;
        printf("%s\n",arr[sum]);
    }
    return 0;
}
