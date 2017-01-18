//enter the necessary includes - hint 3 different includes needed - google for which includes need to be added for the C functions used
#include <stdio>
#include <math.h>
#include <stdlib> //includes absolute value for normalize
//do i need to add a .h to the above files?

typedef struct {
 //enter definition for float fields for x,y,z,length
 float x;
 float y;
 float z;
} vector;

//header for vector_init fucniton
vector vector_init(float x, float y, float z);

//header for vector_add function, vector_dot function, vector_normalize function and vector_print function
vector vector_add(vector vectorArg1, vector vectorArg2);
vector vector_dot(vector vectorArg1, vector vectorArg2);
//vector vector_normalize(
vector vector_print(vector vectorArg1);

