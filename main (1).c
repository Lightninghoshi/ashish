/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    double x1,x2;
    printf("Input your numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    
    
    
    x1=(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
    x2=(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
     printf("%.1f,%.1f",x1,x2);

    return 0;
}
