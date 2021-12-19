#include <iostream>
#include <string>
using namespace std;
bool isPolindrom(string str) {
	bool isPol = true;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == str[str.size() - i - 1]) {
			isPol = isPol && true;
		}
		else {
			isPol = false;
		}
		return isPol;
	}
}

int main() {
	string str;
	cout << "Please enter text:";
	cin >> str;
	int max = 0;
	for (int i = 0; i < str.size(); i++) {
		for (int j = i + 1; j <= str.size(); j++) {
			string substr = str.substr(i, j-i);
			if (!isPolindrom(substr)) {
				if (substr.size() > max) {
					max=substr.size();
				}

			}

		}
	}
	if (max == 0) {
		cout << -1;
	}
	else {
		cout << max;
	}
	return 0;
}