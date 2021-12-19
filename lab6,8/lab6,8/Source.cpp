#include <iostream>
#include <string>
using namespace std;

int main() {
	int q;
	cout << "Please enter q:";
	cin >> q;
	string s, t;
	for (int i = 0; i < q; i++) {
		cout << "Please enter s, t" << endl;
		cin >> s >> t;
		bool isComposedTotal = false;
		int initialIndex = 0;
		int currentIndex = 0;
		//check all occurrences of the first character of t in s
		while (initialIndex < s.length() && s.find(t[0], initialIndex) != -1) {
			currentIndex = s.find(t[0], initialIndex);
			initialIndex = currentIndex + 1;
			bool isComposed = true;
			//check if it's possible to get the character of the string t with the index i by shifting element of s to the right or left
			for (int i = 1; i < t.length(); i++) {
				if ((currentIndex + 1 < s.length()) && (s[currentIndex + 1] == t[i])) {
					currentIndex = currentIndex + 1;
					isComposed = isComposed && true;
				}
				else if ((currentIndex - 1 > 0) && (s[currentIndex - 1] == t[i])) {
					currentIndex = currentIndex - 1;
					isComposed = isComposed && true;
				}
				else {
					isComposed = false;
				}

			}
			isComposedTotal = isComposedTotal || isComposed;
		}
		if (isComposedTotal) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}

	return 0;
}
