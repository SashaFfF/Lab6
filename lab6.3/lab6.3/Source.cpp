#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Please enter text:";
	string line;
	getline(cin, line);
	int N = line.length(); 
	char* str = new char[N];
	for (int i = 0; i < N; i++) {
		str[i] = line[i];
	}
	int MaxNum = 0;
	for (int i = 0; i < N; i++) {
		if (str[i] == '.') {
			int index = i-1;
			int number = 0;
			int rank = 1;
			for (int j = index; j >= 0; j--) {
				if (isdigit(str[j])) {
					number += (str[j]-'0') * rank;
					rank *= 10;
				}
				else {
					break;
				}
			}
			if (number > MaxNum) {
				MaxNum = number;
			}

		}

	}
	cout << "MaxNum:" << MaxNum;
	delete[] str;
	return 0;
}