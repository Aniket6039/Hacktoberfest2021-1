/* A Naive recursive implementation of
0-1 Knapsack problem */
#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{

	// Base Case
	if (n == 0 || W == 0)
		return 0;

	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);
	else
		return max(
			val[n - 1]
				+ knapSack(W - wt[n - 1],
						wt, val, n - 1),
			knapSack(W, wt, val, n - 1));
}

// Driver code
int main()
{
	int val[] = { 50, 90, 100 };
	int wt[] = { 15, 25, 35 };
	int W = 65;
	int n = sizeof(val) / sizeof(val[0]);
	cout << knapSack(W, wt, val, n);
	return 0;
}

