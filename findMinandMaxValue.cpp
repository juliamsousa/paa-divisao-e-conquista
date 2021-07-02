#include <algorithm>
#include "implementations.hpp"
using namespace std;

// extraido de https://www.programmersought.com/article/19535290136/
void findMinMax (int A[], int low, int high, int* x, int* y)
{
	if (high - low <= 1) {
		*x = min(A[low], A[high]);
		*y = max(A[low], A[high]);
	}
	else {
		int x1, y1, x2, y2;
		findMinMax(A, low, (high+low) / 2, &x1, &y1);
		findMinMax(A, (high+low) / 2 + 1, high, &x2, &y2);
		*x = min(x1, x2);
		*y = max(y1, y2);
		//Compare the maximum and minimum values ​​of the two paragraphs before and after
	}
}
