#include <stdio.h>
#include <math.h>

// Function prototypes
float add(float x, float y);       // Function prototype for addition
float multiply(float x, float y);  // Function prototype for multiplication
float square(float x, float y);    // Function prototype for calculating power

int main(void)
{
    char input;
    float x, y;
  
    // Calculate the square of the result of the sum of two products
    // First, multiply 3 and 4, then multiply 5 and 7, and finally add their results
    // The resulting sum is then raised to the power of 2 (squared)
    printf("%f", square((multiply(3, 4) + multiply(5, 7)), 2));
   
    return 0;
}

// Function to add two floating-point numbers
float add(float x, float y)
{
    return x + y;
}

// Function to multiply two floating-point numbers
float multiply(float x, float y)
{
    return x * y;
}

// Function to calculate the power of a number
float square(float x, float y)
{
    float calSq = pow(x, y); // Calculate x raised to the power of y
    return calSq;
}
