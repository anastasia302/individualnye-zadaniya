#include <iostream>
using namespace std;
int main() {	int a[20];
	int i, n, s = 0, iot = -1;
	cin >> n;
	for (i = 0;i < n;i++)
		cin >> a[i];
	for (i = 0;i < n && iot == -1;i++) {
		if (a[i] < 0) iot = i;
	}
	for (i = iot+1;i < n;i++) {
		s = s + abs(a[i]);
	}
	cout << s;
	return 0;
}
