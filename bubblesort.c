#include <stdio.h>

const int MAX=9;

//declaring function prototypes
void printValues(int *parray);
void swap(int *a, int *b);
void sort(int *arrayval);


void printValues(int *parray)
{
	printf("[");
	for(int i =0; i< MAX; i++)
	{	
		printf("%d ", parray[i]);
	}//printing values loop block ends
	printf("]\n");
}//print function ends


// *variable means that our variable is a pointer to the integer
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}//swap function using a temporary variable ends


void sort(int *arrayval)
{
	for(int i=0; i<MAX-1; i++) //outer loop to control each number and pair comparison
	{
		for(int j=0; j< MAX-i-1;j++ ) //inneer loop to pick one number and keep on comparing, till it moves to the end
		{
			if(arrayval[j] > arrayval[j+1]) //if the number in i position is larger than number at i+one position
			{
				swap(&arrayval[j], &arrayval[j+1]);//passing by reference
				printValues(arrayval);
			}//if block ends, after bubbling the heavier number, in the bottom, based on ascending order
			
		}//inner loop ends	
	} //outer loop ends
} //sort method ends


int main()
{
	int values[]= {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("Before:\n");
	printValues(values);

	//test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d\n ", x, y);
	swap(&x, &y);//passing the address
	printf("x: %d, y: %d\n", x, y);

	sort(values);
	printf("After: \n");
	printValues(values);

	return 0;
} //main ends

