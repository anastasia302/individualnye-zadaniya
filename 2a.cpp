#include <iostream>
using namespace std;
int main() {
	int a[20];
	int i, p = 1, d, n;
	cin >> n;
	for (i = 0;i < n;i++)
		cin >> a[i];
	for (i = 0;i < n;i++) {
		int nch = 0;
		for (d = 1;d <= abs(a[i]);d++)
			if (a[i] % d == 0 && d % 2 != 0) nch++;
		if (nch > 2) p = p * a[i];
	}
	cout << p;
	return 0;
}
