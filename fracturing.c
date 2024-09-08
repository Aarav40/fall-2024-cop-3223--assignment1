// Header file
#include <stdio.h>
#include <math.h>

#define PI 3.14159

// function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double distanceFormula(double x1, double x2, double y1, double y2);

// main function
int main(int argc, char **argv)
{
    // calls each function to get user input and calculate
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

return 0;
}

// calculates distance
double calculateDistance()
{
    double x1, x2, y1, y2;

    // asks for user input
    printf("What is the x value of the first point? ");
    scanf("%lf", &x1);
    printf("What is the x value of the second point? ");
    scanf("%lf", &x2);
    printf("What is the y value of the first point? ");
    scanf("%lf", &y1);
    printf("What is the y value of the second point? ");
    scanf("%lf", &y2);

    // runs distance formula
    double distance = distanceFormula(x1, x2, y1, y2);

    // prints distance
    printf("Point #1 entered: x1 = %lf; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf \n", x2, y2);
    printf("The distance between the two points is %f \n", distance);

return distance;
}

// helper function for distance formula
double distanceFormula(double x1, double x2, double y1, double y2)
{
    double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

return distance;
}

// calculates perimeter
double calculatePerimeter()
{
    double x1, x2, y1, y2;

    // asks for user input
    printf("What is the x value of the first point? ");
    scanf("%lf", &x1);
    printf("What is the x value of the second point? ");
    scanf("%lf", &x2);
    printf("What is the y value of the first point? ");
    scanf("%lf", &y1);
    printf("What is the y value of the second point? ");
    scanf("%lf", &y2);

    // runs distance formula
    double distance = distanceFormula(x1, x2, y1, y2);

    // calculates perimeter
    double perimeter = distance * PI;

    // prints perimeter
    printf("Point #1 entered: x1 = %lf; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf \n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

return 2.5;
}

// calculates area
double calculateArea()
{
    double x1, x2, y1, y2;

    // asks for user input
    printf("What is the x value of the first point? ");
    scanf("%lf", &x1);
    printf("What is the x value of the second point? ");
    scanf("%lf", &x2);
    printf("What is the y value of the first point? ");
    scanf("%lf", &y1);
    printf("What is the y value of the second point? ");
    scanf("%lf", &y2);

    // runs distance formula
    double distance = distanceFormula(x1, x2, y1, y2);

    // calculates area
    double area = pow(distance / 2, 2) * PI;

    printf("Point #1 entered: x1 = %lf; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf \n", x2, y2);
    printf("The area of the city encompassed by your request is %lf \n", area);

return 2.5;
}

// calculates width
double calculateWidth()
{
    double x1, x2, y1, y2;

    // asks for user input
    printf("What is the x value of the first point? ");
    scanf("%lf", &x1);
    printf("What is the x value of the second point? ");
    scanf("%lf", &x2);
    printf("What is the y value of the first point? ");
    scanf("%lf", &y1);
    printf("What is the y value of the second point? ");
    scanf("%lf", &y2);

    // calculates width using distance formula
    double width = distanceFormula(x1, x2, y1, y2);

    // prints width
    printf("Point #1 entered: x1 = %lf; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf \n", x2, y2);
    printf("The width of the city encompassed by your request is %lf \n", width);

return 1;
}

// calculates height
double calculateHeight()
{
    double x1, x2, y1, y2;

    // asks for user input
    printf("What is the x value of the first point? ");
    scanf("%lf", &x1);
    printf("What is the x value of the second point? ");
    scanf("%lf", &x2);
    printf("What is the y value of the first point? ");
    scanf("%lf", &y1);
    printf("What is the y value of the second point? ");
    scanf("%lf", &y2);

    // calculates height using distance formula
    double height = distanceFormula(x1, x2, y1, y2);

    // prints height
    printf("Point #1 entered: x1 = %lf; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf \n", x2, y2);
    printf("The height of the city encompassed by your request is %lf \n", height);

return 1;
}