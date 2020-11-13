
#include <stdio.h>
#include <string.h>
int getbits(char x, int p, int n);
void printbits(char * bits, int n);

int main()
{
    double  y = 1;
    char x[8];
    memcpy(x,&y,8);
    printbits(x , sizeof(double));    

    return 0;
}

int getbits(char x, int p, int n)
{
    return (x >> (p+1-n) & ~(~0 << n));
}

void printbits(char * bits, int n)
{
    for(int i =0; i < n ;++i)
    {
        for (int j =8 * sizeof(char); j ; --j)
        {   
            printf("%d",  (bits[i] >> j-1 ) % 2 ? 1 : 0);
        }
        printf(" ");
    }
    printf("\n");
}