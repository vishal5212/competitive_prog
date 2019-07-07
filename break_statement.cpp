/* SOURCE:https://www.geeksforgeeks.org/break-statement-cc/*/

//SIMPLE LOOP


// CPP program to illustrate 
// using break statement 
// in Linear Search 
#include <iostream> 
using namespace std; 

void findElement(int arr[], int size, int key) 
{ 
	// loop to traverse array and search for key 
	for (int i = 0; i < size; i++) { 
		if (arr[i] == key) { 
			cout << "Element found at position: " << (i + 1); 

			// using break to terminate loop execution 
			break; 
		} 
	} 
} 

// Driver program to test above function 
int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5, 6 }; 
	int n = 6; // no of elements 
	int key = 3; // key to be searched 

	// Calling function to find the key 
	findElement(arr, n, key); 

	return 0; 
} 



//NESTED LOOPS

//Nested Loops: We can also use break statement while working with nested loops. If the break statement is used in the innermost loop. The
//control will come out only from the innermost loop. Below is the example of using break with nested loops:

// CPP program to illustrate 
// using break statement 
// in Nested loops 
#include <iostream> 
using namespace std; 

int main() 
{ 

	// nested for loops with break statement 
	// at inner loop 
	for (int i = 0; i < 5; i++) { 
		for (int j = 1; j <= 10; j++) { 
			if (j > 3) 
				break; 
			else
				cout << "*"; 
		} 
		cout << endl; 
	} 

	return 0; 
} 
//FOR MORE VISIT THE FUCKING LINK
