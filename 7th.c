#include<stdint.h>

#include<stdio.h>

#include"bits.h"

int main(int ac, char **av)

{
	
	  uint8_t val=0; 
	  uint8_t rev =0;
	  
	  for(val =0 ; val<256;val++){
	  printf("val:%u\n",val);
	  
	  print_bits(val);
	  putchar(’\n’); 
	  
	  rev = reverse_bits(val);
	  print_bits(rev);
	  putchar(’\n’); 
	  }
	  
	    return 0;

}
