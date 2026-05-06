class Membership {
private:
string membershipId;
string userId;
string membershipType; // "Basic", "Premium", "VIP"
string startDate;
string endDate;
double price;
bool isActive;
int daysRemaining;
public:
// getter/setter
// Member Functions
void subscribe(string uid, string type, int durationMonths);
bool checkValidity() const;
void displayMembershipInfo() const;
double calculatePrice(string type, int months) const;
};
