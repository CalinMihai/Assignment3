#include <stdio.h>
#include <stdlib.h>
int n, i, j, a, ok;
int v[]={2,3,5,7};
int main ()
{
   scanf("%d", &n);
    for (i=1;i<=n;i++) {
        ok=0;
        for (j=0;j<=3;j++)
            if (i==v[j])
                ok=1;
        if (ok==1)
            for (a=1;a<=i;a++)
                printf("%d ", a);
        else
            for (a=1;a<=i;a++)
               printf("%d ", i);
    }
    return 0;
}
