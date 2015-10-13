#include <iostream>
#include <fstream>
#include <string>

class UserLogin
{
  public:
    UserLogin();  // default  Constructor
    ~UserLogin(); // de-constructor
    
    void usernamePrompt();
    void passwordPrompt();
    void openUsernameLog();
    void openPasswordLog();
    void loginResponse();
    void login();
    bool usernameValidation();
    bool passwordValidation();
   
  
  private:  // class  variable
    std::string username_;
    std::string password_;
    std::string usernameCheck_;
    std::string passwordCheck_;
};