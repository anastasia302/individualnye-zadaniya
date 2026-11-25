#include <iostream>
using namespace std;
int main() {
	double y, s = 0.0, p = 1.0, a, b, faci = 1, facj = 1, c = 5, sta = 1;
	int i, m, j;
	cin >> a >> b >> m;
	for (i = 1;i <= m;i++) {
		faci = faci * i;
		sta = sta * a * a;
		s = s + (faci + sta);
	}
	for (j = 1;j <= m;j++) {
		facj = facj * j;
		c = c * 25;
		p = p * (facj + c);
	}
	y = (1.0 / (b * p)) + (s / (a * a));
	cout << y;
	return 0;
}
