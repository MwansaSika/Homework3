#include <stdio.h>

void showRevTheValues(int[], int);

int main() //Beginning of program
{
const int sizze = 7;
int numbers [sizze] = {1,4,8,15,65,77,94};

// Output the array values.
for (int count = 0; count < sizze; count++)

{

printf("The elements of the original array are: ");
printf("%i", numbers[count]);

}
showRevTheValues(numbers, sizze);
return 0;
}
void showRevTheValues(int values[ ], int sizze)
{
int *numPtr; // This is a pointer
for (int count = 0; count < sizze; count++)
{
numPtr--;
printf("%i", *numPtr);
}
}

