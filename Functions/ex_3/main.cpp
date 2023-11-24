#include <iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(2000) {}

    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void nextDay() {
        day++;
        if (day > 31) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    Date operator++() {
        nextDay();
        return *this;
    }

    Date operator++(int) {
        Date temp = *this;
        nextDay();
        return temp;
    }

    bool operator!=(const Date& other) const {
        return (day != other.day) || (month != other.month) || (year != other.year);
    }

    bool operator==(const Date& other) const {
        return (day == other.day) && (month == other.month) && (year == other.year);
    }

    bool operator<(const Date& other) const {
        if (year != other.year) return year < other.year;
        if (month != other.month) return month < other.month;
        return day < other.day;
    }

    bool operator>(const Date& other) const {
        if (year != other.year) return year > other.year;
        if (month != other.month) return month > other.month;
        return day > other.day;
    }

    friend  ostream& operator<<( ostream& os, const Date& dt);
    friend  istream& operator>>( istream& is, Date& dt);

    Date& operator=(const Date& other) {
        if (this != &other) {
            day = other.day;
            month = other.month;
            year = other.year;
        }
        return *this;
    }

    Date operator+(int days) const {
        Date result = *this;
        for (int i = 0; i < days; ++i) {
            result.nextDay();
        }
        return result;
    }

    Date operator-(int days) const {
        Date result = *this;
        for (int i = 0; i < days; ++i) {
            result.day--;
            if (result.day < 1) {
                result.month--;
                if (result.month < 1) {
                    result.month = 12;
                    result.year--;
                }
                result.day = 31;
            }
        }
        return result;
    }

    Date& operator+=(int days) {
        for (int i = 0; i < days; ++i) {
            nextDay();
        }
        return *this;
    }

    Date& operator-=(int days) {
        for (int i = 0; i < days; ++i) {
            day--;
            if (day < 1) {
                month--;
                if (month < 1) {
                    month = 12;
                    year--;
                }
                day = 31;
            }
        }
        return *this;
    }
};

 ostream& operator<<( ostream& os, const Date& dt) {
    os << dt.day << '/' << dt.month << '/' << dt.year;
    return os;
}

 istream& operator>>( istream& is, Date& dt) {
    is >> dt.day >> dt.month >> dt.year;
    return is;
}

int main() {
    Date myDate(31, 12, 2022);

     cout << "The date of start: " << myDate << endl;

    ++myDate;
     cout << "The date after +1 day: " << myDate <<  endl;

    Date newDate = myDate + 7;
     cout << "The date after -7 days: " << newDate <<  endl;

    Date oldDate = myDate - 10;
     cout << "The date after -10 days: " << oldDate <<  endl;

    if (myDate != newDate) {
         cout << "myDate & newDate different" <<  endl;
    }

    if (myDate == oldDate) {
         cout << "myDate & oldDate same" <<  endl;
    }

    if (myDate > oldDate) {
         cout << "myDate > oldDate" <<  endl;
    }

    if (newDate < myDate) {
         cout << "newDate < myDate" <<  endl;
    }

    return 0;
}
