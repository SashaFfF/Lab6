#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Please enter text:";
	string line;
	getline(cin, line);
	int N=line.length();
	
	char* arr = new char[N];
	for (int i = 0; i < N; i++) {
		arr[i] = line[i];
	}
	int k;
	do {
		cout << "Please enter k:";
		cin >> k;
	} while (k<0 || k>N);
	if (arr[k] == ' ') {
		char* arr_1 = new char[k];
		char* arr_2 = new char[N - k];
		for (int i = 0; i < k; i++) {
			arr_1[i] = arr[i];
			cout << arr_1[i];
		}
		cout << endl;
		for (int i = k; i < N; i++) {
			arr_2[i-k] = arr[i];
			cout << arr_2[i-k];
		}
		delete[] arr_2;
		delete[] arr_1;


	}
	else {
		int x = 0;
		int y = k;
		while(arr[y] != ' ') {
			x++;
			y--;
		}
		char* arr_1 = new char[k - x + 1];
		char* arr_2 = new char[N - k + x -1 ];
		for (int i = 0; i < k - x+1; i++) {
			arr_1[i] = arr[i];
			cout << arr_1[i];
		}
		cout << endl;  
		int j = 0;
		for (int i = k - x + 1; i < N; i++) {
			arr_2[j] = arr[i];
			cout << arr_2[j];
			j++;
		}
		delete[] arr_2;
		delete[] arr_1;
		
	}

	delete[] arr;
	return 0;
}