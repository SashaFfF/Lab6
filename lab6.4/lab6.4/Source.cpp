#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Please enter text:";
	string str;
	getline(cin, str);
	int pos = -1;
	int pos_to_find = 0;
	while (str.find('c') != -1) {
		pos = str.find('c');
		if (pos+1< str.length() && (str[pos + 1]=='e' || str[pos + 1] == 'i' || str[pos + 1] == 'y')) {
			str.replace(pos, 1, "s");
		}
		else {
			str.replace(pos, 1, "k");
		}
	}
	pos = -1;
	while (str.find('C') != -1) {
		pos = str.find('C');
		if (pos + 1 < str.length() && (str[pos + 1] == 'e' || str[pos + 1] == 'i' || str[pos + 1] == 'y')) {
			str.replace(pos, 1, "S");
		}
		else {
			str.replace(pos, 1, "K");
		}
	}
	pos = -1;
	while (str.find('q') != -1) {
		pos = str.find('q');
		if (pos + 1< str.length() && str[pos + 1] == 'u') {
			str.replace(pos, 2, "kv");
		}
		else {
			str.replace(pos, 1, "k");
		}
	}
	pos = -1;
	while (str.find('Q') != -1) {
		pos = str.find('Q');
		if (pos + 1 < str.length() && str[pos + 1] == 'u') {
			str.replace(pos, 2, "Kv");
		}
		else {
			str.replace(pos, 1, "K");
		}
	}
	pos = -1;
	while (str.find('x') != -1) {
		pos = str.find('x');
		str.replace(pos, 1, "ks");
	}
	pos = -1;
	while (str.find('X') != -1) {
		pos = str.find('X');
		str.replace(pos, 1, "Ks");
	}
	pos = -1;
	while (str.find('w') != -1) {
		pos = str.find('w');
		str.replace(pos, 1, "v");
	}
	pos = -1;
	while (str.find('W') != -1) {
		pos = str.find('W');
		str.replace(pos, 1, "V");
	}
	pos = -1;
	while (str.find('p', pos_to_find) != -1) {
		pos = str.find('p', pos_to_find);
		if (pos + 1 < str.length() && str[pos + 1] == 'h') {
			str.replace(pos, 2, "f");
		}
			pos_to_find = pos + 1;
	}
	pos_to_find = 0;
	pos = -1;
	while (str.find('P', pos_to_find) != -1) {
		pos = str.find('P', pos_to_find);
		if (pos + 1 < str.length() && str[pos + 1] == 'h') {
			str.replace(pos, 2, "F");
		}
		pos_to_find = pos + 1;
	}
	pos_to_find = 0;
	pos = -1;
	while (str.find('y', pos_to_find) != -1) {
		pos = str.find('y', pos_to_find);
		if (pos + 2 < str.length() && str[pos + 1] == 'o' && str[pos + 2] == 'u') {
			str.replace(pos, 3, "u");
		}
		pos_to_find = pos + 1;
	}
	pos_to_find = 0;
	pos = -1;
	while (str.find('Y', pos_to_find) != -1) {
		pos = str.find('Y', pos_to_find);
		if (pos + 2 < str.length() && str[pos + 1] == 'o' && str[pos + 2] == 'u') {
			str.replace(pos, 3, "U");
		}
		pos_to_find = pos + 1;
	}
	pos_to_find = 0;
	pos = -1;
	while (str.find('o', pos_to_find) != -1) {
		pos = str.find('o', pos_to_find);
		if (pos + 1 < str.length() && str[pos + 1] == 'o') {
			str.replace(pos, 2, "u");
		}
		pos_to_find = pos + 1;
	}
	pos_to_find = 0;
	pos = -1;
	while (str.find('O', pos_to_find) != -1) {
		pos = str.find('O', pos_to_find);
		if (pos + 1 < str.length() && str[pos + 1] == 'o') {
			str.replace(pos, 2, "U");
		}
		pos_to_find = pos + 1;
	}
	pos_to_find = 0;
	pos = -1;
	while (str.find('e', pos_to_find) != -1) {
		pos = str.find('e', pos_to_find);
		if (pos + 1 < str.length() && str[pos + 1] == 'e') {
			str.replace(pos, 2, "i");
		}
		pos_to_find = pos + 1;
	}
	pos_to_find = 0;
	pos = -1;
	while (str.find('E', pos_to_find) != -1) {
		pos = str.find('E', pos_to_find);
		if (pos + 1 < str.length() && str[pos + 1] == 'e') {
			str.replace(pos, 2, "I");
		}
		pos_to_find = pos + 1;
	}
	pos_to_find = 0;
	pos = -1;
	while (str.find('t', pos_to_find) != -1) {
		pos = str.find('t', pos_to_find);
		if (pos + 1 < str.length() && str[pos + 1] == 'h') {
			str.replace(pos, 2, "z");
		}
		pos_to_find = pos + 1;
	}
	pos_to_find = 0;
	pos = -1;
	while (str.find('T', pos_to_find) != -1) {
		pos = str.find('T', pos_to_find);
		if (pos + 1 < str.length() && str[pos + 1] == 'h') {
			str.replace(pos, 2, "Z");
		}
		pos_to_find = pos + 1;
	}
	for (int i = 0; i < str.length()-1; i++) {
		if(str[i]==str[i+1]){
			string s(1, str[i]);
			str.replace(i, 2, s);
		}
	}
	cout << str;
	return 0;
}
