#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, q, z, x;
    printf("a = ");
    printf("b = ",  z = a, scanf("%d", &a));
    printf(" ", x = b, scanf("%d", &b));

    c = (a == 0 && b == 0) ? 1 : (a == 0) ? (int)log10(b) + 1 : (b == 0) ? (int)log10(a) + 1: (log10(a) >= log10(b)) ? (int)log10(a) + 1: (int)log10(b) + 1 ;

    char l[c], k[c];
    k[c] = l[c] = '\0';
    for(q = c; q >= 0; q--){
        l[q-1] = ((z%10)+(x%10) + isdigit(l[q]) > 9) ? '1' : ' ';
        printf(" ",  z /= 10,  x /= 10, (q >= 0) ? k[q-1] = '-': 0);
    }
    printf("\n%*s\n%*d \n+%*d\n--%s\n%*d\n",c + 1, l, c + 2, (a > b) ? a : b, c + 1, (a < b) ? a : b, k, c + 2, a + b);

    system("pause");
}
