#include <stdio.h>
#include <stdbool.h>

int first()
{
  int n, c, k;

  printf("Enter an integer in decimal number system:");
  scanf("%d", &n);

  printf("%d in binary number system is:\n", n);

  for (c = 7; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}

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

void second(){
  
  
  
  int n, m;
  printf("Enter a Number:\n");
  //Read a number from user
  scanf("%d",&n);
  printf(" Binary Form of %d Before Reverse: \n",n);
  //call the function to print bits before reverse
  print_bits(n);
// call the funtion to reverse bits and store it into m
  m= reverse_bits(n);
    printf(" Binary Form of %d After Reverse: \n",n);
  //call the function to print reversed bits.
  print_bits(m);

  //return 0;
}


//function to check
void CheckTurnedOnorNot(int n, int k) 
{ 

    if (n & (1 << (k - 1))) 

       printf("true\n The number %d has a 1 bit on %d -th position:",n,k);

    else

        printf("false\n The number %d has a 0 bit on %d -th position:",n,k);
} 

  
// main function .start from main function.

int third() 
{ 

    int n ,k; 
    //read both number and bit from user
    printf("Enter number :");
        scanf("%d",&n);
    printf("Enter number to position:");
        scanf("%d",&k);
    
    
//call to check k th bit is on or off.
    CheckTurnedOnorNot(n, k); 

    return 0; 
}
 

 

  
// Function to toggle the kth bit of n 

int toggleBit(int n, int k) 
{ 

    return (n ^ (1 << (k - 1))); 
} 

  


int fourth() 
{ 

    int n , k ;
    printf("Enter the Number to Toggle :\t") ;
    //read the number from user
    scanf("%d",&n);

     printf("\nEnter the Number to  Bit:\t") ;
     //read the bit from user
    scanf("%d",&k);


//call the funtion then print the returned value.
    printf("%d with %d-th bit Toggled: %d\n", 

           n, k, toggleBit(n, k)); 

    return 0; 
}

  
// Function to extract k bits from p position 
// and returns the extracted value as integer 

int bitExtracted(int number, int k, int p) 
{ 

    return (((1 << k) - 1) & (number >> (p - 1))); 
} 

  
// Driver code 

int fifth() 
{ 

    int number = 231, k = 2, p = 3; 
    printf("Enter a Number to Extract :");
    scanf("%d",&number);
    printf("Enter a to bit:");
    scanf("%d",&k);
    printf("Enter a to Position:");
    scanf("%d",&p);
    
//call the function to extract then print tge extracted value.
    printf("The extracted number is %d",  

               bitExtracted(number, k, p)); 

    return 0; 
}
 
 
int main () {

   /* local variable definition */
   bool quit = false;
   printf("1.To print value in Binary\n");
    printf("2.To Reverse tge bits in a bytes\n");
     printf("3.To Check if a bit is turned on \n");
      printf("4.To Toggle a bit value \n");
       printf("5.To Extract the subsets of a bits from a value \n");
       printf("6.To Exit");
      do{
       printf(" \n\nWhat action do you perform?\n Enter corresponding number (1-6):\t");
   int number;
  
   scanf("%d",&number);
       
   switch(number) {
      case 1 :
         first();
         break;
      case 2:
      second();
   break;
      case 3:
         third();
      break;
      case 4:
         fourth();
        break;
      case 5:
         fifth();
        break;
         
      case 6:
   quit = true; break;
      default :
         printf("Invalid input. Please choose number in (1-6):\n" );
   }
       
   
  
   
}while(!quit);

}
