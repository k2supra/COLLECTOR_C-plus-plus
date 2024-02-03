#ifndef SRP_H
#define SRP_H

#include <iostream>

using namespace std;

enum class SubscriptionType
{
    BASIC,
    PREMIUM
};

class User
{
public:
    User() : subscriptionType(SubscriptionType::BASIC) {}

    void setFullName(const string& fullName)
    {
        this->fullName = fullName;
    }

    void setGmail(const string& gmail)
    {
        this->gmail = gmail;
    }

    void setSubscriptionType(SubscriptionType subscriptionType)
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

    SubscriptionType getSubscriptionType()
    {
        return subscriptionType;
    }

    bool hasUnlimitedContentAccess() const
    {
        return subscriptionType == SubscriptionType::PREMIUM;
    }

private:
    string fullName;
    string gmail;
    SubscriptionType subscriptionType;
};

#endif
