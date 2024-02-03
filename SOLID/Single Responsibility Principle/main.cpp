#include "srp.h"

int main()
{
	User user1;

	user1.setFullName("Bob Marley");
	user1.setGmail("1234@gmail.com");
	user1.setSubscriptionType(SubscriptionType::BASIC);

	cout << "User: " << user1.getFullName() << endl;
	cout << "Gmail: " << user1.getGmail() << endl;
	cout << "Subscription Type: " << (static_cast<int>(user1.getSubscriptionType()) ? "PREMIUM" : "BASIC") << endl;
	cout << "Subscription Type: " << (user1.hasUnlimitedContentAccess() ? "YES" : "NO") << endl;
}