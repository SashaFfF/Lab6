#include <iostream>
#include <string>
using namespace std;

unsigned long long fact(int N) {
	if (N < 0) {
		return 0;
	}
	if (N == 0) {
		return 1;
	}
	else {
		return N * fact(N - 1);
	}
}

int main() {
	string str;
	cout << "Please enter text:";
	cin >> str;
	string unique = "";
	//identify unique letters
	for (int i = 0; i < str.length(); i++) {
		if (unique.find(str[i]) == -1) {
			unique.append(1,str[i]);
		}

	}
	int* arr_unique = new int[unique.length()];
	//counting the number of repetitions of each letter
	for (int i = 0; i < unique.length(); i++) {
		int amount = 0;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == unique[i]){
				amount++;
				}
		}
		arr_unique[i] = amount;
	}
	int N = fact(str.length());

	for (int i = 0; i < unique.length(); i++) {
		N /= fact(arr_unique[i]);
	}
	cout << "N:" << N;
	delete[] arr_unique;
	return 0;
}

