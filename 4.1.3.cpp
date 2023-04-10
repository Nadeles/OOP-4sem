#include<string>
#include<iostream>
#include<vector>

using namespace std;

ostream& operator<<(ostream& stream, const vector<string>& vstring) {
	stream << "[" << vstring[0];
	for (int i = 1; i < vstring.size(); i++) {
		stream << ", " << vstring[i];
	}
	stream << "]";
	return stream;
}

int main() {
	vector<string> vstring = {"One", "two", "three", "hi"};
   	cout << vstring << endl;
	return 0;
}	
