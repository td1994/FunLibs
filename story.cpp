#include "story.h"

story::story(string filetype)
{
	ifstream in2(filetype);
	in = in2;
	getline(in, the_story, '(');
}

string story::getWordType()
{
	getline(in, word_type, ')');
	in.ignore(200, ' ');
	getline(in, the_story, '(');
	return word_type;
}

void story::addWord(string word)
{
	the_story += word;
}

bool story::storyContinues()
{
	return !in.fail();
}

void story::printStory()
{
	cout << the_story << endl;
}