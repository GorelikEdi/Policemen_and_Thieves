#include <iostream>
using namespace std;
int copThief(char arr[], int n, int k);

void main() {
	int k, n;

	char arr1[] = { 'P', 'T', 'T', 'P', 'T' };
	k = 2;
	n = sizeof(arr1) / sizeof(arr1[0]);
	cout << "Maximum thieves caught: " << copThief(arr1, n, k) << endl;

	char arr2[] = { 'T', 'T', 'P', 'P', 'T', 'P' };
	k = 2;
	n = sizeof(arr2) / sizeof(arr2[0]);
	cout << "Maximum thieves caught: " << copThief(arr2, n, k) << endl;

	char arr3[] = { 'P', 'T', 'P', 'T', 'T', 'P' };
	k = 3;
	n = sizeof(arr3) / sizeof(arr3[0]);
	cout << "Maximum thieves caught: " << copThief(arr3, n, k) << endl;

	while (1);
}
int copThief(char arr[], int n, int k) {
	int countT = 0, countP = 0, countC = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 'T') {
			if (countP > 0) {
				countP--;
				countC++;
			}
			else {
				if (countT < k)
					countT++;
			}
		}
		else {
			if (countT > 0) {
				countT--;
				countC++;
			}
			else {
				if (countP < k)
					countP++;
			}
		}
	}
	return countC;
}

