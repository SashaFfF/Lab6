#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[] = "Ut enim ad minim veniam, quisnostrudexercitationullamcolaborisnisiutaliquipexeacommodoconsequat.";
	char* strP = str;
	char unique[100];
	char* uniqP = unique;

	int i;
	int j;
	for (i = 0, j = 0; strP[i]; i++) {
		if (!strchr(uniqP, strP[i])) {
			uniqP[j++] = strP[i];
		}
	}
	uniqP[j] = '\0';

	int uniqLength = strlen(uniqP);

	int* arr_unique = new int[uniqLength];
	//counting the number of repetitions of each letter
	for (i = 0; i < uniqLength; i++) {
		int amount = 0;
		for (j = 0; j < strlen(strP); j++) {
			if (strP[j] == uniqP[i]) {
				amount++;
			}
		}
		arr_unique[i] = amount;
	}

	int maxAmount = 0;
	for (i = 0; i < uniqLength; i++) {
		if (arr_unique[i] > maxAmount) {
			maxAmount = arr_unique[i];
		}
	}
	for (i = 0; i < uniqLength; i++) {
		if (arr_unique[i] == maxAmount) {
			cout << uniqP[i] << "\t";
		}
	}

	delete[] arr_unique;
	return 0;
}