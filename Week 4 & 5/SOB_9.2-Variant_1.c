/******************************************************************************

   Welcome to GDB Online.
   GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
   C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
   Code, Compile, Run and Debug online from anywhere in world.

 *******************************************************************************/
#include <stdio.h>

int main()
{
        float a,b,temp;

        printf("Input First Variable: ");
        scanf("%f", &a);

        printf("Input Second Variable: ");
        scanf("%f", &b);

        temp=b;
        b=a;
        a=temp;

        printf("Answer: First: %f Second: %f", a, b);

        return 0;
}
