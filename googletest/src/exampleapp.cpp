#include "addition.h"
#include "multiply.h"

#include <stdio.h>


int main()
{
    int x = 4;
    int y = 5;

    int z1 = addition::twovalues(x,y);
    printf("addition result: %d\n", z1);


    int z2 = multiply::twovalues(x,y);
    printf("multiply result: %d\n", z2);

    return 0;
}
