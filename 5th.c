#include <stdio.h> 

  
// Function to extract k bits from p position 
// and returns the extracted value as integer 

int bitExtracted(int number, int k, int p) 
{ 

    return (((1 << k) - 1) & (number >> (p - 1))); 
} 

  
// Driver code 

int main() 
{ 

    int number = 231, k = 2, p = 3; 
//call the function to extract then print tge extracted value.
    printf("The extracted number is %d",  

               bitExtracted(number, k, p)); 

    return 0; 
}
