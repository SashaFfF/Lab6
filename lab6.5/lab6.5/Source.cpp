#include <iostream>
#include <string>
using namespace std;
int Pow(int x, int y) {
	int p = 1;
	for (int i = 0; i < y; i++){
		p *= x;
	}
	return p;
}

int main() {
	int t, L, m;
	cout << "Please enter t:";
	cin >> t;
	int* arr_result = new int[t];
	string s1, s2;
	const int x = 26;
	for (int i = 0; i < t; i++) {
		cout << "Please enter L, m, s1, s2" << endl;
		cin >> L >> m;
		cin >> s1 >> s2;
		//check if it's possible to insert letters between S1 and S2
		if (L > s1.length() + s2.length()) {
			arr_result[i] = 2 * (Pow(x, L - s1.length() - s2.length()) % m);
		}
		else {
			//check if it's possible to compose a word by superimposing S1 on S2 or vice versa
			if ((L > s1.length()) && (L > s2.length())) {
				arr_result[i] = 0;
				string substr2 = s2.substr(0, s2.length() - (L - s1.length()));
				int index2 = s1.rfind(substr2);
				if (index2 == s1.length() - substr2.length()) {
					arr_result[i] = 1;
				}
				string substr1 = s1.substr(0, s1.length() - (L - s2.length()));
				int index1 = s2.rfind(substr1);
				if (index1 == s2.length() - substr1.length()) {
					arr_result[i] = 1;
				}
			}
			else {
				arr_result[i] = 0;
			}
		}
	}
	for (int i = 0; i < t; i++) {
		cout << arr_result[i] << endl;
	}
	delete[] arr_result;
	return 0;
}