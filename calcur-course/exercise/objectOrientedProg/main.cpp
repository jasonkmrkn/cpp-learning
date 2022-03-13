#include <iostream>
#include <vector>

class User
{
    std::string status = "Online";
public :
    std::string firstName;
    std::string lastName;
    std::string get_status()
    {
        return status;
    }
};

int add_user_if_not_exists(std::vector<User>& users, User user)
{
    for(int i = 0; i < users.size(); i++)
    {
        if (users[i].firstName == user.firstName && users[i].lastName == user.lastName)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}


int main()
{
    std::vector<User> users;

    User user01;
    user01.firstName = "Fakhri";
    user01.lastName = "Kartiko";

    User user02;
    user02.firstName = "Jason";
    user02.lastName = "Kumarkono";

    User user03;
    user03.firstName = "Fadian";
    user03.lastName = "Ihsan";

    users.push_back(user01);
    users.push_back(user02);
    users.push_back(user03);

    User user04;
    user04.firstName = "Jacob";
    user04.lastName = "Kumarkono";

    std::cout << add_user_if_not_exists(users, user04) << std::endl;

    return 0;
}