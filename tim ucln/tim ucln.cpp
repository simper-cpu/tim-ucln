

#include <iostream>
using namespace std;


int main()
{
	int n;
	cout << "nhap so phan tu: ";
	cin >> n;
	int so[100];
	int uoc[2000];
	int uch[100];
	int l = 0;
	int w = 0;
	int x = 0;
	for (int i = 0; i < n; i++) {
		cout << "nhap phan tu " << i + 1 << ": ";
		cin >> so[i];
	}
	for (int j = 0; j < n; j++) {
		for (int k = 1; k <= so[j]; k++) {
			if (so[j] % k == 0) {
				uoc[l] = k;
				l++;
			}
		}
	}
	for (int m = 0; m <= l; m++) {
		for (int o = m; o <= l; o++) {
			if (uoc[m] == uoc[o]) {
				w++;
			}
		}
		if (w == n)
			uch[x] = uoc[m];
		x++;
		w = 0;
	}
	for (int y = 0; y <= x; y++) {
		if (uch[1] < uch[y])
			uch[1] = uch[y];
	}
	
	cout << "ucln la: " << uch[1];
}
	

