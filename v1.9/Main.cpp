#include "Ui.h"
#include "UserInfo.h"

int main()
{
  Ui i;
  UserInfo u;
  
  i.menuWelcome();
  i.firstOption();
  i.secondOption();
  
  //u.usernameInput();
  //u.passwordInput();
  
  // tests getters
  //std::cout << u.getUsername() << std::endl;
  //std::cout << u.getPassword() << std::endl;
  
  // tests setters
  //u.setUsername("AlexZielinski");
  //u.setPassword("Warsawa93");
  //std::cout << u.getUsername() << std::endl;
  //std::cout << u.getPassword() << std::endl;
  
  
  std::cin.get();
  std::cin.get();
  return 0;
}