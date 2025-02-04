#include <stdio.h>

void printValues(int*);
void sort(int*);
void Swap(int*, int*);

const int MAX= 9;

void printValues(int *arrayval)
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



