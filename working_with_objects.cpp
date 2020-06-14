#include <iostream>
#include <vector>

class User // access modifier is "private" by default
{
  std::string status = "Gold";

  public: //set class's access modifier as public
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
      return status;
    }
};

int add_user_if_not_exist(std::vector<User> &users, User user) //search for correct first & last name
{
  for(int i = 0; i < users.size(); i++)
  {
    if(users[i].first_name == user.first_name && users[i].last_name == user.last_name)
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
  users.push_back(User());

  User user1, user2, user3;
  user1.first_name = "Anthony";
  user1.last_name = "Dao";

  user2.first_name = "Madeline";
  user2.last_name = "Nguyen";

  user3.first_name = "Adam";
  user3.last_name = "Le";

  users.push_back(user1);
  users.push_back(user2);
  users.push_back(user3);

  User user;
  user.first_name = "Anthony";
  user.last_name = "Dao";

  std::cout << add_user_if_not_exist(users, user) << std::endl;

  std::cout << users.size() << std::endl;
}
