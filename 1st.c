#include <stdio.h>
//bit reversal function.
int reverse_bits(int n){
  return n^(~0);
}
//function to print bits.
void print_bits(int x) {
  int wl = sizeof(int)*2-1;
  unsigned mask;
  for (mask = 1<<wl; mask; mask >>= 1)
    putchar(x&mask ? '1' : '0');
  putchar('\n');
}

int main(){
  
  
  
  int n, m;
  printf("Enter a Number:\n");
  //Read a number from user
  scanf("%d",&n);
  //call the function to print bits before reverse
  print_bits(n);
// call the funtion to reverse bits and store it into m
  m= reverse_bits(n);
  //call the function to print reversed bits.
  print_bits(m);

  return 0;
}
