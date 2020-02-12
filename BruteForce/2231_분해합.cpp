#include<iostream>

using namespace std;

int getConstructor(int num) {
	int sum;
	int tmp;
	for (int i = 1; i < num; i++) {
		sum = i;
		tmp = i;
		while (true) {
			if (tmp == 0)
				break;
			sum += tmp % 10;
			tmp /= 10;
		}
		if (num == sum)
			return i;
	}
	return 0;
}

int main() {
	int num;
	
	cin >> num;
	cout << getConstructor(num);

	return 0;
}