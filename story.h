#include <fstream>
#include <string>
#include <iostream>

using std::ifstream;
using std::string;
using std::getline;
using std::cout;
using std::cin;
using std::endl;

class story
{
private:
	string the_story;
	string word_type;

	ifstream in;

public:
	story(string filetype);
	string getWordType();
	void addWord(string word);
	bool storyContinues();
	void printStory();
}