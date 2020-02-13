#include<iostream>

using namespace std;

int main() {
	int num=50;
	int w, h;
	int men[50][2];
	int rank[50];
	fill_n(rank, 50, 1);

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> w >> h;
		men[i][0] = w;
		men[i][1] = h;
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (men[i][0] < men[j][0])
				if (men[i][1] < men[j][1])
					rank[i]++;
		}
	}

	for (int i = 0; i < num; i++)
		cout << rank[i] << " ";

	return 0;
}