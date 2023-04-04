#include<string>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

vector<string> split(string str) {
	auto iter_begin = begin(str);
	auto iter_end = end(str);
	
	vector<string> vstr = {};

	auto frst_space = find(iter_begin, iter_end, ' ');

	string first_word(iter_begin, frst_space);
	vstr.push_back(first_word);

	if (frst_space == iter_end) {return vstr;}

	auto scnd_space = find(frst_space + 1, iter_end, ' ');

	while(find(frst_space + 1, iter_end, ' ') != iter_end) {
		string word(frst_space + 1, scnd_space);
		vstr.push_back(word);
		frst_space = scnd_space;
		scnd_space = find(frst_space + 1, iter_end, ' ');
	}
	string word(frst_space + 1, iter_end);
	vstr.push_back(word);

	return vstr;
}

ostream& operator<<(ostream& stream, vector<string>& vstring) {
	stream << "[" << vstring[0];
	for (int i = 1; i < vstring.size(); i++) {
		stream << ", " << vstring[i];
	}
	stream << "]";
	return stream;
}

int main() {
	string sentence = "The work you've submitted resembles that of another student";
	vector<string> words = split(sentence);
	cout << words << endl;
	return 0; 
}
