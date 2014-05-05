#include <fstream>
#include <string>
#include <iostream>

using std::ifstream;
using std::string;
using std::getline;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	string the_story;
	string word_type;

	ifstream in("test.txt");
	getline(in, the_story, '(');
	string word;

	while(!in.fail())
	{
		getline(in, word_type, ')');
		if(word_type == "end")
			break;
		cout << "Type a " << word_type << endl;
		cin >> word;
		the_story.append(word);
		string appended;
		getline(in, appended, '(');
		the_story.append(appended);
	}

	cout << the_story << endl;
	return 0;
}
