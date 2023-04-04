#include<string>
#include<vector>
#include<map>
#include<iostream>

using namespace std;

template <typename First, typename Second>
ostream& operator<<(ostream& stream, map<First, Second>& tmap) {
	stream << "{ ";
	for (pair<First, Second> elem : tmap) {
		stream << "{" << elem.first << ", " << elem.second << "} ";
	}
	stream << "}";
	return stream;
}

int main() {
	vector<string> vstr = {"blast", "house", "stamp", "list", "apperture"};
	map<string, string> dict = {};
	for (string elem : vstr) {
		string tmp = elem;
		dict.insert({elem.erase(1), tmp});	
	}
	
	cout << dict << endl;

	return 0;
}
