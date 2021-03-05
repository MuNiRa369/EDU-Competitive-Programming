#include <stdio.h>
char *s[] = {"one","two","three","four","five","six","seven","eight","nine"};
int main()
{
    int n = 0;
    scanf("%d",&n);
    if (n < 1)
        return 1;
    if (n >= 1 && n <= 9)
        printf("%s",s[n-1]);
    else
        printf("Greater than 9");
    return 0;
}
