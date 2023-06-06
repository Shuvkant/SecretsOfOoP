// C++ program to understand the use of getline() function

// #include <bits/stdc++.h>

#include<iostream>
using namespace std;

int main()
{
	string S, T;

	getline(cin, S);

	stringstream X(S);

	while (getline(X, T, ' ')) {
		cout << T << endl;
	}

	return 0;
}
