#include "client_screen.h"
#include "../screen.h"

void ClientScreen::displayPage(vector<PC>& pcList, int startIndex, int endIndex)
{
	auto const* pc_provider = new PCProvider();
	for (int i = startIndex; i < endIndex && i < pcList.size(); i++) {
		pc_provider->printMenuPC(&pcList[i]);
	}
	delete pc_provider;
}

void ClientScreen::menu()
{
	auto const* pc_provider = new PCProvider();
	auto* cart = new Cart();

	vector<PC> pcdata;
	pc_provider->readPCData(pcdata);

	int pageNum = 0;
	int possiblePages = pcdata.size() / PAGE_SIZE;
	(pcdata.size() % PAGE_SIZE != 0) ? possiblePages++ : possiblePages = possiblePages;
	int startIndex = pageNum * PAGE_SIZE;
	int endIndex = (pageNum + 1) * PAGE_SIZE;
	while (true) {
		cout << "\n<-------------- PAGE " << pageNum + 1 << " ---------------->\n";
		displayPage(pcdata, startIndex, endIndex);
		cout << "<---                              --->\n  w                                 e  \nc - cart\nq - exit\n";
		cout << "Input action -> ";
		string action;
		cin >> action;
		std::stringstream ss1(action);
		std::stringstream ss2(action); // tried to do it with one ss, but it didn't work
		int num;
		char ch;
		ss1 >> num;
		ss2 >> ch;
		if (ch == 'e' && pageNum + 1 != possiblePages) {
			pageNum++;
		}
		else if (ch == 'w' && pageNum > 0) {
			pageNum--;
		}
		else if (ch == 'c')
		{
			system("cls");
			cart->cart();
		}
		else if (ch == 'q') {
			break;
		}
		if (num > 0 && num < pcdata.size() + 1)
		{
			system("cls");

			PC* curr_pc = &pcdata[num - 1];

			pc_provider->printPC(curr_pc);
			char input;
			cout << "c - add to cart\na - add new comment\nq - exit\n\nInput action -> ";
			cin >> input;
			if (input == 'c')
			{
				cart->addPC(curr_pc);
			}
			else if (input == 'a')
			{
				system("cls");
				string comment_nickname = current_user->getName();
				string comment_text;
				cout << "\n<-------------- CREATING NEW COMMENT ---------------->\n";
				cout << "Enter your comment -> ";
				cin.ignore();
				getline(cin, comment_text);

				std::ifstream rfile("data/pcdata.csv");
				std::vector<string> lines;
				string line;
				while (getline(rfile, line))
				{
					lines.push_back(line);
				}

				lines[num - 1] += comment_nickname + ':' + comment_text + ';';

				std::ofstream wfile("data/pcdata.csv");
				for (const auto& l : lines)
				{
					wfile << l << '\n';
				}
				wfile.close();

				cout << "\nYour comment is published\n";

				pc_provider->updatePC(curr_pc);  // updating PC

				system("pause>0");
			}
			else if (input != 'q')
			{
				cout << "Error: wrong input!\n";
				system("pause");
			}
		}
		system("cls");
		startIndex = pageNum * PAGE_SIZE;
		endIndex = (pageNum + 1) * PAGE_SIZE;
	}

	delete pc_provider;
	delete cart;
}


