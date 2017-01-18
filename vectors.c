#include "vectors.h"

//vector init function
vector vector_init(float x, float y, float z){
 vector v;
 v.x=x;
 v.y=y;
 v.z=z;
 v.length=sqrt(x*x+y*y+z*z);
	return v;
}

//write vector_add function that takes two vectors as parameters and returns a vector that is the sum of the two vectors
//<--- code goes here
vector vector_add(vector vectorArg1, vector vectorArg2){
	vector returnVector;
	
	returnVector.x=vectorArg1.x + vectorArg2.x;
	returnVector.y=vectorArg1.y + vectorArg2.y;
	returnVector.z=vectorArg1.z + vectorArg2.z;
	
	return returnVector;
}	

//write vector_dot function that takes two vectors as parameters and returns a float which is the dot product (look it up if you don't know what a dot product is)
//<--- code goes here
float vector_dot(vector vectorArg1, vector vectorArg2){
    float returnFloat;
    
    returnFloat = (vectorArg1.x * vectorArg2.x) + (vectorArg1.y * vectorArg2.y) + (vectorArg1.z * vectorArg2.z);
    
    return returnFloat;
}
//write vector_normalize function that takes a pointer to a vector as a parameter and modify the vector by dividing each of the x,y,z
// components by its length. 
//Check if the length is zero and return 1 if it is zero (unsuccessful normalization) , otherwise return 0 (successful normalization)
//<--- code goes here

int vector_normalize(vector *v) {
	    
    if(v.length == 0) {
		printf("The vector was not normalized!");
		return 1;
	} else {
    //getting the info out is the *, right?
    v.x = ((v.length*v.x) / abs(v.length));
    v.y = ((v.length*v.y) / abs(v.length));
    v.z = ((v.length*v.z) / abs(v.length));
    
    return 0;	
}

//write vector_print function that prints out the x,y,z and length of a vector on separate lines
//<--- code goes here
int vector_print(vector vectorArg1) {

printf("The x-value for this vector is: %d\n", vectorArg1.x);
printf("The y-value for this vector is: %d\n", vectorArg1.y);
printf("The z-value for this vector is: %d\n", vectorArg1.z);
printf("The length value for this vector is: %d\n", vectorArg1.length);
return 0;	

}
