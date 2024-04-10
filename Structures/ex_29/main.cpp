#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
	ifstream inputFile("input.txt");
	if (!inputFile)
	{
		cout << "Error" << endl;
	}

	string word;

	map<string, int> wordMap;
	while (inputFile >> word)
	{
		word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());
		wordMap[word]++;
	}

	cout << "Data" << endl;
	for (const auto& data : wordMap)
	{
		cout << data.first << " - " << data.second << endl;
	}

	auto mostWord = max_element(wordMap.begin(), wordMap.end(), [](const auto& data1, const auto& data2) {return data1.second < data2.second;});

	if (mostWord != wordMap.end())
	{
		cout << "The most popular world is " << mostWord->first << endl;
	}

	ofstream outputFile("output.txt");
	if (!outputFile)
	{
		cout << "Error" << endl;
	}

	for (const auto& data : wordMap)
	{
		outputFile << data.first << " - " << data.second << endl;
	}
}