#include <stdio.h>

// above is the standard input output library

//new copy from memory
// 1st, I made the printValue function, taking the argument of an array
// 2nd i made the swap function, taking 2int*a,b
// 3rd i made the sort function, with a nested loop
// then main function
// then calling.


//declaring the protype of the functions we will be using

//no idea is we even need to declare the prototype? is it need in c?

/* void printValues(int*);
 * void sort(int*);
void Swap(int*, int*);
*/

// we will be passing the refernce as the address using &
// we will be receiving a poitner using* in the syntax int *variable name when functions are called.i believe?

//we have functions with void return type, because we will be manipulating/arranging the data using pointers

const int MAX= 9;

void printValues(int *arrayval[])
{
	printf("[");
	for(int i =0; i< MAX-1; i++)
	{	
		printf("%d ", arrayval[i] );
	}//printing values loop block ends
	printf("]");
}//print function ends


// *variable means that our variable is a pointer to the integer
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}//swap function using a temporary variable ends


void sort(int *arrval[])
{
	int i; //declaration
	int j;
	for(i=0; i<MAX; i++) //outer loop to control each number and pair comparison
	{
		for(int j=0; j< MAX-i;j++ ) //inneer loop to pick one number and keep on comparing, till it moves to the end
		{
			if(&arrval[i] > &arrval[i+1]) //if the number in i position is larger than number at i+one position
			{
				swap(&arrval[i], &arrval[i+1]); //passing by reference
			}//if block ends, after bubbling the heavier number, in the bottom, based on ascending order
		printValues(&arrval[]); //at the end of one iteration of outer loop
		} // inner loop ends
	} //outer loop ends
} //sort method ends


int main()
{
	int values[]= {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("Before:\n");
	printValues(&values[]);

	//test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d ", x, y);
	swap(&x, &y);
	printf("\n x: %d, y: %d", x, y);

	sort(&values[]);
	printf("After: \n");
	printValues(&values[]);

	return 0;
} //main ends



