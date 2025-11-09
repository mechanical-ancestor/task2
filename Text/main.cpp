#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a[9], b[9], m[3][3];
	for (int i = 0; i < 9; i++)cin >> a[i];
	copy(a, a + 9, b);
	sort(a, a + 9);
	sort(b, b + 9, greater<int>());
	for (int i = 0; i < 9; i++) {
		cout << a[i];
		if (i < 8)cout << " ";
		else cout << endl;
	}
	for (int i = 0; i < 9; i++) {
		cout << b[i];
		if (i < 8)cout << " ";
		else cout << endl;
	}
	for (int i = 0; i < 9; i++)m[i / 3][i % 3] = a[i];
	int Sum1[3] = { 0 };
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			Sum1[j] += m[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		int Sum2 = 0;
		for (int j = 0; j < 3; j++) {
			cout << m[i][j] << " ";
			Sum2 += m[i][j];
		}
		cout << Sum2 << endl;
	}
	for (int j = 0; j < 3; j++) {
		cout << Sum1[j];
		if (j < 2)cout << " ";
	}
	cout << endl;
	return 0;
}