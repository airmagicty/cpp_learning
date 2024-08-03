#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, s1, s2;
	char stop_getline = 124;
	int begin_getline = 0;
	
	getline(cin, s);
//	cout << "s1";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == char(124)) begin_getline = i+1;
	}
	
//	cout << " " << begin_getline << " ";
//	cout << "s2";
	for (int i = 0; i < begin_getline; i++) {
		s1[i] = s[i];
	}
//	for (int i = begin_getline; i < s.size(); i++) {
//		s2[i] = s[i];
//	}

//	cout << "s3" << endl;
	cout << s << "+" << s1;
	return 0;
}
