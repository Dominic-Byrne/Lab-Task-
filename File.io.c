#include <stdio.h>
void zeroInt(int *x);

int main(void)
{
    int testInt = 100;
    printf("%d\n", testInt);
    zeroInt( &testInt);
    printf("%d\n", testInt);
}
void zeroInt(int *x){
        *x = 0;
    }