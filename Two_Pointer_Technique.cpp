// Naive solution to find if there is a
// pair in A[0..N-1] with given sum.
#include <iostream>
using namespace std;

bool isPairSum(int A[], int N, int X)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (A[i] + A[j] == X)
				return true; // pair exists

			if (A[i] + A[j] > X)
				break; // as the array is sorted
		}
	}

	// No pair found with given sum.
	return false;
}

// Driver code
int main()
{
	int arr[] = { 3, 5, 9, 2, 8, 10, 11 };
	int val = 17;
	int arrSize = *(&arr + 1) - arr;

	// Function call
	cout << isPairSum(arr, arrSize, val);

	return 0;
}
