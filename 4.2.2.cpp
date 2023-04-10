#include<vector>
#include<map>
#include<iostream>
#include<string>

using namespace std;

template <typename T>
ostream& operator<<(ostream& stream, const vector<T>& tvect) {
	stream << "[" << tvect[0];
	for (int i = 1; i < tvect.size(); i++) {
		stream << ", " << tvect[i];
	}
	stream << "]";
	return stream;
}

template <typename First, typename Second>
ostream& operator<<(ostream& stream, const map<First, Second>& tmap) {
	stream << "{ ";
	for (const auto elem : tmap) {
		stream << "{" << elem.first << ", " << elem.second << "} ";
	}
	stream << "}";
	return stream;
}


int main() {
	vector<int> vint = {1, 2, 3, 4, 5};
	vector<char> vchar = {'a', '#', 'T', '_', '+'};
	vector<string> vstr = {"One", "Two", "Three", "Four", "Five"};
	map<int, char>  mintchar = {{1, 'a'}, {2, '#'}, {3, 'T'}, {4, '_'}, {5, '+'}};
	map<char, string> mcharstr = {{'a', "One"}, {'#', "Two"}, {'T', "Three"}, {'_', "Four"}, {'+', "Five"}};
	map<string, int> mstrint = {{"One", 1}, {"Two", 2}, {"Three", 3}, {"Four", 4}, {"Five", 5}};

	cout << vint << endl << vchar << endl << vstr << endl << endl;
	cout << mintchar << endl << mcharstr << endl << mstrint << endl;
	return 0;
}
