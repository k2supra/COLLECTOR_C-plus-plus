#ifndef SRP_H
#define SRP_H

#include <iostream>
#include <string>

using namespace std;

enum class SubscriptionType
{
    BASIC,
    PREMIUM
};

class User
{
public:
    User(){}

    void setFullName(const string& fullName)
    {
        this->fullName = fullName;
    }

    void setGmail(const string& gmail)
    {
        this->gmail = gmail;
    }

    void setSubscriptionType(const string& subscriptionType)
    {
        this->subscriptionType = subscriptionType;
    }


    string getFullName() const
    {
        return fullName;
    }

    string getGmail() const
    {
        return gmail;
    }

    bool hasUnlimitedContentAccess() const
    {
        return subscriptionType == "BASIC";
    }

private:
    string fullName;
    string gmail;
    string subscriptionType;
};

#endif
