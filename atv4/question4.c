/* 
Qual o valor das variáveis x, y e z após o seguinte  trecho de código:
 */

#include <stdio.h>

int main()
{
    int x, y, z;
    x = y = 10;
    z = ++x;
    x = -x;
    y++;
    x = x + y - (z--);

    printf("X = %d \n", x);
    printf("Y = %d \n", y);
    printf("Z = %d \n", z);
    return 0;
}
