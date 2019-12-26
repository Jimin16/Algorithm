#include<iostream>

using namespace std;

int main() {
	int n, m;
	int card[100];
	int max = 0;
	
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> card[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			for (int k = 0; k < n; k++) {
				if (i == k || j == k)
					continue;
				if (card[i] + card[j] + card[k] <= m && max < card[i] + card[j] + card[k])
					max = card[i] + card[j] + card[k];
			}
		}
	}
	cout << max;

	return 0;
}