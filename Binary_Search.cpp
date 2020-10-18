// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

// Stores the frequency of
// each type of chocolate
map<int, int> mp;

int N, P;

// Function to check if chocolates
// can be eaten for 'mid' no. of days
bool helper(int mid)
{

	int cnt = 0;
	for (auto i : mp) {
		int temp = i.second;

		while (temp >= mid) {
			temp -= mid;
			cnt++;
		}
	}

	// If cnt exceeds N,
	// return true
	return cnt >= N;
}

// Function to find the maximum
// number of days for which
// chocolates can be eaten
int findMaximumDays(int arr[])
{

	// Store the frequency
	// of each type of chocolate
	for (int i = 0; i < P; i++) {
		mp[arr[i]]++;
	}

	// Initialize start and end
	// with 0 and P respectively
	int start = 0, end = P, ans = 0;
	while (start <= end) {

		// Calculate mid
		int mid = start
				+ ((end - start) / 2);

		// Check if chocolates can be
		// distributed for mid days
		if (mid != 0 and helper(mid)) {

			ans = mid;

			// Check if chocolates can
			// be distributed for more
			// than mid consecutive days
			start = mid + 1;
		}
		else if (mid == 0) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	return ans;
}

// Driver code
int main()
{

	N = 3, P = 10;
	int arr[] = { 1, 2, 2, 1, 1,
				3, 3, 3, 2, 4 };

	// Function call
	cout << findMaximumDays(arr);

	return 0;
}
