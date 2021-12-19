#include <iostream>
#include <string>

using namespace std;
int main() {
	string str;
	cout << "Please enter text:";
	cin >> str;
	int N = str.length();
	int sum = 0;
	for (int i = 0; i < N; i++) {
		int number = 0;
		if (isdigit(str[i])) {
			int amount = 0;
			for (int j = i; j < N; j++) {
				if (isdigit(str[j])) {
					amount++;
				}
				else {
					break;
				}
			}
			int index = pow(10, amount - 1);
			for (int k = i; k < i + amount; k++) {
				number += (str[k] - '0') * index;
				index /= 10;
			}
			sum += number;
			i += amount - 1;
		}

	}
	cout << "sum:" << sum;
	return 0;
}
  
