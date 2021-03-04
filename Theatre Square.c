#include <stdio.h>
int main()
{
    long long int n,m,a,l,b,f;
    scanf("%lld%lld%lld",&n,&m,&a);
    if(n%a!=0)
        l=n/a+1;
    else
        l=n/a;
    if(m%a!=0)
        b=m/a+1;
    else
        b=m/a;
    f=l*b;
    printf("%lld",f);
    return 0;
}
