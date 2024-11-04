#include <math.h>
#include <stdio.h>

float calc_info_rectangle(float length, float width, float *perimeter, float *area, float *diagonal) { // Since it receives the memory addresses of the last three variables, it needs to include "*" in the parameter list because it’s a pointer.
  // processing
  *perimeter = 2 * (length + width); // The pointer already performs the calculation and points to the memory address of the variable that is being passed as a parameter.

  *area = length * width; // The pointer already performs the calculation and points to the memory address of the variable that is being passed as a parameter.

  *diagonal = sqrt(pow(length, 2) + pow(width, 2)); // The pointer already performs the calculation and points to the memory address of the variable that is being passed as a parameter.
}

int main() {
  // variable declaration
  float length, width, perimeter, area, diagonal;
  // data input
  printf("Enter the length of the rectangle: ");
  scanf("%f", &length);

  printf("Enter the width of the rectangle: ");
  scanf("%f", &width);
  // processing
  calc_info_rectangle(length, width, &perimeter, &area, &diagonal); // calls the function and passes the memory addresses of the variables that will be modified by the function.

  printf("Perimeter: %.2f\n", perimeter);
  printf("Area: %.2f\n", area);
  printf("Diagonal: %.2f\n", diagonal);

  return 0;
}