#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string& s) {
	string cleanedString;


	for (char c : s) {
		if (isalpha(c)) {
			cleanedString += tolower(c);
		}
	}


	string reversedString = cleanedString;
	reverse(reversedString.begin(), reversedString.end());

	return cleanedString == reversedString;
}

int main() {
//	cout<<"hi shivam kashyap";
	string s1 = "My name is ,,.. shivam kashyap,, i am from himachal";
	string s2 = "No lemon, no melon";

	cout << isPalindrome(s1) << endl;
	cout << isPalindrome(s1) << endl;


	return 0;
}