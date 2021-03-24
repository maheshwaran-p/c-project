#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
//function to print bits.
void print_bits(uint8_t a)
{
    uint8_t i;

    for(i=0x80;i!=0;i>>=1)
        printf("%c",(a&i)?'1':'0'); 
}


int main(void)
{
    uint32_t k=0xDEADBEEF;

    uint8_t *x;

    int n,i;

    printf("Enter a Number:\t");
    //read input from user
    scanf("%d",&n);
    //call the function to print in bits.
    print_bits(n);
    return 0;
}
