#include <stdio.h> 

 

  
// Function to toggle the kth bit of n 

int toggleBit(int n, int k) 
{ 

    return (n ^ (1 << (k - 1))); 
} 

  


int main() 
{ 

    int n , k ;
    printf("Enter the Number:\t") ;
    //read the number from user
    scanf("%d",&n);

     printf("\nEnter the Bit:\t") ;
     //read the bit from user
    scanf("%d",&k);


//call the funtion then print the returned value.
    printf("%d with %d-th bit Toggled: %d\n", 

           n, k, toggleBit(n, k)); 

    return 0; 
}
