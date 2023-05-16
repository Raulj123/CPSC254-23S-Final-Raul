#include <string>
#include <vector>

class User {
public:
    User(const std::string& username, const std::string& password);

    std::string getUsername() const;
    std::string getPassword() const;
    double getBalance() const;
    void setBalance(double newBalance);
    void addToActivityHistory(const std::string& activity);

private:
    std::string username;
    std::string password;
    double balance;
    std::vector<std::string> activityHistory;
};

void displayRandomAd();
bool login(std::vector<User>& users);
void depositBalance(User& user, double amount);
void withdrawBalance(User& user, double amount);

