#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

class HangmanGame
{
public:
	HangmanGame(const string& file_name)
	{
		this->attempt_counter = 1;
		this->word = getRandomWord(file_name);
		this->game_time = time(0);
	};

	void gameProccess()
	{
		while (!hasWon() && !isAttemptLose())
		{
			displayMaskedWord();
			cout << "Enter a letter: ";
			char guessing_letter;
			cin >> guessing_letter;
			letters.push_back(guessing_letter);
			checkLetter(guessing_letter);
		}
		displayResult();
	}

	void displayMaskedWord()
	{
		for (char ch : word)
		{
			if (find(letters.begin(), letters.end(), ch) == letters.end())
			{
				cout << "_ ";
			}
			else
			{
				cout << ch << " ";
			}
		}
		cout << endl;
	}

	void displayResult()
	{
		system("cls");
		cout << "<------------------------------------->" << endl;
		if (hasWon())
		{
			cout << "\t\tVICTORY" << endl;
		}
		else
		{
			cout << "\t\tDEFEAT" << endl;
		}
		cout << endl;
		cout << "The word: " << getWord() << endl;
		cout << "Letters: "; getLetters(); cout << endl;
		cout << "Attempts: " << getAttemptCounter() << endl;
		cout << "Time: " << getGameTime() << endl;
		cout << "<------------------------------------->" << endl;
	}

	bool hasWon()
	{
		for (char letter : word)
		{
			if (find(letters.begin(), letters.end(), letter) == letters.end())
			{
				return false;
			}
		}
		return true;
	}

	bool isAttemptLose()
	{
		return this->attempt_counter > 6;
	}

	void checkLetter(const char& letter)
	{
		if (find(word.begin(), word.end(), letter) == word.end())
		{
			addAttempt();
		}
	}

	void addAttempt() { this->attempt_counter++; };

	int getGameTime() const { return difftime(time(0), this->game_time); };
	int getAttemptCounter() const { return this->attempt_counter; };
	string getWord() const { return this->word; };
	void getLetters() const { for (char data : letters) { cout << data << " "; } };

	~HangmanGame()
	{
		this->attempt_counter = 0;
		this->game_time = 0;
		this->letters.clear();
		this->word = "";
	};

private:
	int attempt_counter;
	vector<char> letters;
	time_t game_time;
	string word;

	string getRandomWord(const string& file_name)
	{
		ifstream open_file(file_name);
		vector<string> words;
		string word;
		while (open_file >> word)
		{
			words.push_back(word);
		}
		open_file.close();
		srand(time(0));
		return words[rand() % words.size()];
	}
};

int main()
{
	HangmanGame game1("game.txt");
	game1.gameProccess();
}