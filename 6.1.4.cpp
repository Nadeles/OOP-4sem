#include<string>
#include<vector>
#include<map>
#include<set>
#include<iostream>

using namespace std;

template <typename T>
ostream& operator<<(ostream& stream, const set<T>& tset) {
	stream << "[ ";
	for (auto elem : tset) {
		stream << elem << " ";
	}
	stream << "]";
	return stream;
}

template <typename First, typename Second>
ostream& operator<<(ostream& stream, map<First, Second>& tmap) {
	for (pair<First, Second> elem : tmap) {
		stream << "{" << elem.first << ", " << elem.second << "}" << endl;
	}
	return stream;
}

int main() {
	vector<string> vstr = {"blast", "house", "stamp", "list", "apperture", "boom", "", "store", "prompt", "calendar", "list",
							 "hello", "water", "trombone", "door", "carpet", "song", "pancake", "steak", "door", "house"};
	
	map<char, set<string> > dict;
	for (string elem : vstr) {
		if (elem != "") {
			dict[elem[0]].insert(elem);
		}
	}
	
	cout << dict << endl;
	return 0;
}
