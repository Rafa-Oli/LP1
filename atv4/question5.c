/* 
Qual o valor das variáveis a, b, c, d, e, f após a execução do seguinte trecho de código: 
 */

#include <stdio.h>

int main()
{
    int x = 2, y = 4;
    int a, b, c, d, e, f;
    a = x & y;
    b = x | y;
    c = x ^ y;
    d = ~x;
    e = x << 3;
    f = x >> 1;

    printf("a = %d \n", a);
    printf("b = %d \n", b);
    printf("c = %d \n", c);
    printf("d = %d \n", d);
    printf("e = %d \n", e);
    printf("f = %d \n", f);
    return 0;
}
