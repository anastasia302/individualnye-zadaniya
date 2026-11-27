#include <iostream>
using namespace std;
int main() {
	int a[10][10];
	int n, i, j, spol = 0, sotr = 0;
	cin >> n;
	for (i = 0;i < n;i++) {
		for (j = 0;j < n;j++) {
			cin >> a[i][j];
		}
	}
	for (i = 0;i < n;i++) {
		int fpol = 1, fotr = 1;
		for (j = 0;j < n && (fpol == 1 || fotr == 1);j++) {
			if (a[i][j] <= 0) fpol = 0;
			if (a[i][j] >= 0) fotr = 0;
		}
		if (fpol == 1)spol++;
		if (fotr == 1)sotr++;
	}
	if (spol > sotr) {
		for (i = 0;i < n;i++) {
			int fotr = 1;
			for (j = 0;j < n && fotr == 1;j++) 
				if (a[i][j] >= 0) fotr = 0;
			if (fotr == 1) {
				for (j = 0;j < n;j++)
					a[i][j] = 0;
			}
		}
	}
	for (i = 0;i < n;i++) {
		for (j = 0;j < n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
