#include "story.h"

int main()
{
	story s("test.txt");
	string word;

	while(s.storyContinues())
	{
		cout << "Type a " << s.getWordType() << endl;
		cin >> word;
		s.addWord(word);
	}

	s.printStory();
}
