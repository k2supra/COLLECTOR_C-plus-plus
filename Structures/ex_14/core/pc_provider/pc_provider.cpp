#include "pc_provider.h"

void PCProvider::printPC(PC const* pc) const
{
	cout << "Brand            : " << pc->getBrand() << '\n';
	cout << "Model            : " << pc->getModel() << '\n';
	cout << "Processor        : " << pc->getProcessor() << '\n';
	cout << "RAM              : " << pc->getRam() << '\n';
	cout << "Storage          : " << pc->getStorage() << '\n';
	cout << "Graphics card    : " << pc->getGraphicsCard() << '\n';
	cout << "Operating system : " << pc->getOperatingSystem() << '\n';
	cout << "Price            : " << pc->getPrice() << "$\n\n";
}

void PCProvider::printComment(PC const* pc) const
{
	string comments_str = pc->getComments();
	vector<string> comments;
	size_t pos = 0;
	char delimiter = ';';
	while ((pos = comments_str.find(delimiter)) != string::npos)
	{
		string comment = comments_str.substr(0, pos);
		comments.push_back(comment);
		comments_str.erase(0, pos + 1);
	}

	cout << "\n<-------------- COMMENTS ---------------->\n";
	for (size_t i = 0; i < comments.size(); i++)
	{
		size_t colon_pos = comments[i].find(":");
		string username = comments[i].substr(0, colon_pos);
		string text = comments[i].substr(colon_pos + 1);
		cout << "Comment " << i + 1 << '\n';
		cout << "\t" << username << " : " << text << '\n';
	}
	cout << "<---------------------------------------->\n";
}

void PCProvider::printMenuPC(PC const* pc) const
{
	cout << '#' << pc->getId() << ' ' << pc->getBrand() << ' ' << pc->getModel() << '\n'; // add index
	cout << "\tCPU: " << pc->getProcessor() << '\n';
	cout << "\tGPU: " << pc->getGraphicsCard() << '\n';
	cout << "\tRAM: " << pc->getRam() << '\n';
	cout << pc->getPrice() << "$\n";
}

void PCProvider::readPCData(vector<PC>& pcdata, const string& filename) const
{
	std::ifstream file(filename);
	if (file.is_open())
	{
		string line;
		int i = 1;
		while (getline(file, line))
		{
			std::stringstream ss(line);
			string brand, model, processor, graphicsCard, operatingSystem, comments;
			int ram, storage, price;
			getline(ss, brand, ',');
			getline(ss, model, ',');
			getline(ss, processor, ',');
			ss >> ram;
			ss.ignore();
			ss >> storage;
			ss.ignore();
			getline(ss, graphicsCard, ',');
			getline(ss, operatingSystem, ',');
			ss >> price;
			ss.ignore();
			getline(ss, comments, ',');
			pcdata.emplace_back(i, brand, model, processor, ram, storage, graphicsCard, operatingSystem, price, comments);
			i++;
		}
		file.close();
	}
}

void PCProvider::updatePC(PC* pc, const string& filename) const
{
	std::ifstream file(filename);
	uint64_t search_id = pc->getId();

	if (file.is_open())
	{
		uint64_t i = 1;
		string line;
		while (getline(file, line))
		{
			if (i == search_id)
			{
				std::stringstream ss(line);
				string brand, model, processor, graphicsCard, operatingSystem, comments;
				int ram, storage, price;
				getline(ss, brand, ',');
				getline(ss, model, ',');
				getline(ss, processor, ',');
				ss >> ram;
				ss.ignore();
				ss >> storage;
				ss.ignore();
				getline(ss, graphicsCard, ',');
				getline(ss, operatingSystem, ',');
				ss >> price;
				ss.ignore();
				getline(ss, comments, ',');
				auto const* updatedPC = new PC(i, brand, model, processor, ram, storage, graphicsCard, operatingSystem, price, comments);
				*pc = *updatedPC;

				delete updatedPC;
				break;
			}
			i++;
		}
	}

}

