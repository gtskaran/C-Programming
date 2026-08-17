/**
//E02
Bitwise Operator Examples
*/

#include<stdio.h>

void main()
{
    int a, b, andop, orop;

    printf("\n Enter A Number");
    scanf("%d", &a);
	
    b = 1;
    andop = a & b;

    printf("\n The Result of AND Operation with 1");
    if(andop == 0)
        printf("\n Rightmost bit is OFF");
    else
        printf("\n Rightmost bit is ON");

    orop = a | b;
    if(orop == 0)
        printf("\n The Result of OR Operation with 1");
    else
        printf("\n Rightmost bit is ON and the result is %d", orop);

}
