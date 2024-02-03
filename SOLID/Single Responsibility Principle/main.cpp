#include "srp.h"

int main()
{
	User user1;

	user1.setFullName("Bob Marley");
	user1.setGmail("1234@gmail.com");
	user1.setSubscriptionType("BASIC");

	cout << "User: " << user1.getFullName() << endl;
	cout << "Gmail: " << user1.getGmail() << endl;
	cout << "Subscription type: " << ((user1.hasUnlimitedContentAccess()) ? "BASIC" : "PREMIUM") << endl;
	cout << "Unlimited access: " << ((user1.hasUnlimitedContentAccess()) ? "FALSE" : "TRUE") << endl;
}