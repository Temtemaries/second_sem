#include <stdio.h>
int main(void) {
    int n, i, chislo;
    for(n=1; n<=10; ++n) {
        chislo=1;
        for(i=1; i<=n; ++i) {
            chislo*=i;
        }
        printf("%i! = %i\n", n, chislo);
    }
    return 0;
    }
