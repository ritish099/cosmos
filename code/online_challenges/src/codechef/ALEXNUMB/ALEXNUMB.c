#include <stdio.h>

int main(void) 
{
    long long int i, j, t, n, a;
    scanf("%lld", & t);
    for (i = 0; i < t; ++i) 
    {
        scanf("%lld", & n);
        for (j = 0; j < n; ++j)
            scanf("%lld", & a);
        a = (n * n) - n;
        a = a / 2;
        printf("%lld\n", a);
    }
    return 0;
}
