#include <stdio.h> 

//function to check
void CheckTurnedOnorNot(int n, int k) 
{ 

    if (n & (1 << (k - 1))) 

       printf("true");

    else

        printf("false");
} 

  
// main function .start from main function.

int main() 
{ 

    int n ,k; 
    //read both number and bit from user
    printf("Enter number ");
        scanf("%d",&n);
    printf("Enter number ");
        scanf("%d",&k);
    
    
//call to check k th bit is on or off.
    CheckTurnedOnorNot(n, k); 

    return 0; 
}
