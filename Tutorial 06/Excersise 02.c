#include <stdio.h>
#include <math.h>

// Function prototype declaration
float circleArea(float radius);

int main()
{
    float radius;

    // Prompt user to enter the radius
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Call the circleArea function and print the result
    float area = circleArea(radius);
    printf("Area of the circle with radius: %.2f\n", area);

    return 0;
}

// Function definition for calculating the area of a circle
float circleArea(float radius)
{
    // Calculate the area using the formula A = π * r^2
    float area = (float)22 / 7 * pow(radius, 2);
    return area; // Return the calculated area
}
