#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class String
{
public:
	String() { this->str = nullptr; };

	String(const char* new_str)
	{
		if (new_str != nullptr)
		{
			this->str = new char[strlen(new_str) + 1];
			strcpy(this->str, new_str);
		}
		else
		{
			this->str = new char[1];
			*str = '\0';
		}
	};

	String(const String& new_str)
	{
		this->str = new char[strlen(new_str.str) + 1];
		strcpy(this->str, new_str.str);
	}

	~String()
	{
		delete[] str;
	}

	String& operator=(const String& other)
	{
		str = new char[strlen(other.str) + 1];
		strcpy(str, other.str);
		return *this;
	}

	int length() const
	{
		return strlen(this->str);
	}

	void clear()
	{
		delete[] str;
		str = new char[1];
		*str = '\0';
	}

	String operator+(const String& other) const
	{
		char* temp = new char[length() + other.length() + 1];
		strcpy(temp, str);
		strcat(temp, other.str);
		String result(temp);
		delete[] temp;
		return result;
	}
	String operator+=(const String& other) const
	{
		char* temp = new char[length() + other.length() + 1];
		strcpy(temp, str);
		strcpy(temp, other.str);
		String result(temp);
		delete[] temp;
		return result;
	}

	bool operator==(const String& other)
	{
		return strcmp(str, other.str) == 0;
	}

	bool operator!=(const String& other)
	{
		return !(*this == other);
	}
	
	void display() const
	{
		cout << str << endl;
	}

	friend ostream& operator<<(ostream& out, const String& s) {
		out << s.str;
		return out;
	}

protected:
	char* str;
};

class BitString : public String
{
public:
	BitString() : String() {};

	BitString(const char* other) : String()
	{
		if (isBinary(other))
		{
			str = new char[strlen(other) + 1];
			strcpy(str, other);
		}
		else
		{
			str = new char[1];
			*str = '\0';
		}
	}

	BitString(const BitString& other) : String(other) {};

	void changeSign()
	{
		if (str[0] = '-')
		{
			for (size_t i = 1; str[i] != '\0'; i++)
			{
				if (str[i] == '0')
				{
					str[i] = '1';
				}
				else if (str[i] == '1')
				{
					str[i] == '0';
				}
				else
				{
					char* temp = new char[length() + 2];
					temp[0] = '-';
					strcpy(temp + 1, str);
					delete[] str;
					str = temp;
				}
			}
		}
	}

	BitString operator+(const BitString& other) const {
		char* temp = new char[length() + other.length() + 1];
		strcpy(temp, str);
		strcat(temp, other.str);
		BitString result(temp);
		delete[] temp;
		return result;
	}

	bool operator==(const BitString& other)
	{
		return String::operator==(other);
	}

	bool operator!=(const BitString& other) 
	{
		return String::operator!=(other);
	}

private:
	bool isBinary(const char* other)
	{
		for (size_t i = 0; other[i] != '\0'; i++)
		{
			if (other[i] != '0' && other[i] != '1')
			{
				return false;
			}
		}
		return true;
	}
};


int main()
{
	String str("qwerttyu");
	String str2("123456");
	cout << str + str2 << endl;
	str.display();
}