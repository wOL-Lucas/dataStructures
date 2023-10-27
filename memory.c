#include <stdio.h>

int main(){
    int a = 10;
    int b;

    //The computer allocates a 4 byte space for the variable a. In this case, the value 10 that we have passed.
    printf("&a = %p\n", &a);

    /*As we have not assigned any value to the variable b, the computer allocates a 4 byte space for the variable b. In this case, the value that we have passed is the garbage value, that seems to be 
    whatever happened to be in that memory location at that point in time.*/
    
    printf("&b = %p\nThe value of b is the garbage = %d", &b, b);

    return 0;
}