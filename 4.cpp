#include <iostream>
using namespace std;
bool sover(int a) {
	if (a <= 1) return false;
	int s = 0;
	for (int d = 1;d < a;d++)
		if (a % d == 0) s = s + d;
	return s == a;
}
bool f(int a[], int n) {
	int k = 0;
	for (int i = 0;i < n;i++)
		if (sover(a[i]) == 1)k++;
	return k > 2;
}
int main() {
	int a[10];
	int n, i;
	cin >> n;
	for (i = 0;i < n;i++)
		cin >> a[i];
	cout << ((f(a,n) == 1) ? "yes" : "no");
	return 0;
}
