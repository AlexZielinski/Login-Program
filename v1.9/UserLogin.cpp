#include "UserLogin.h"

// default constructor
UserLogin::UserLogin()
{
  
}

// de-constructor
UserLogin::~UserLogin()
{
  
}

// prompts user for username
void UserLogin::usernamePrompt()
{
 std::cout << "Enter username:   ";
 std::cin >> username_;
}

// prompts user for password
void UserLogin::passwordPrompt()
{
  std::cout << "Enter password:   ";
  std::cin >> password_;
  std::cout << "\n";
}

// reads username log for username
void UserLogin::openUsernameLog()
{
  std::ifstream usernameLog("usernameLog.txt"); // opens txt file
  if(usernameLog.is_open())
  {
    while(usernameLog.good())
    {
      getline(usernameLog,usernameCheck_); // reads line, assigns to variable
    }
    usernameLog.close();  // closes file
  }
  else
  {
    std::cout << "** Error: unable to read file." << "\n";
    std::cout << "-----------------------------------" << "\n";
  }
}

// reads password log for password
void UserLogin::openPasswordLog()
{
  std::ifstream passwordLog("passwordLog.txt");
  if(passwordLog.is_open())
  {
    while(passwordLog.good())
    {
      getline(passwordLog, passwordCheck_);
    }
    passwordLog.close();
  }
  else
  {
    std::cout << "** Error: unable to read file" << "\n";
    std::cout << "-----------------------------------" << "\n";
  }
}

// checks username
bool UserLogin::usernameValidation()
{
  bool temp;
  if(username_ == usernameCheck_)
  {
    temp = true;
    std::cout << "--- Username correct." << "\n";
    std::cout << "-----------------------------------" << "\n";
  }
  else
  {
    temp = false;
    std::cout << "*** Username incorrect." << "\n";
    std::cout << "-----------------------------------" << "\n";
  }
  return temp;
}

// checks password
bool UserLogin::passwordValidation()
{
  bool temp;
  if(password_ == passwordCheck_)
  {
    temp = true;
    std::cout << "--- Password correct." << "\n";
    std::cout << "-----------------------------------" << "\n";
  }
  else
  {
    temp = false;
    std::cout << "*** Password incorrect." << "\n";
    std::cout << "-----------------------------------" << "\n";
  }
  return temp;
}

// prints if login is valid based on usernameCheck() and passwordCheck()
void UserLogin::loginResponse()
{
  if(username_ == usernameCheck_ && password_ == passwordCheck_)
  {
    std::cout << "--- Login successful ---" << "\n";
    std::cout << "-----------------------------------" << "\n";
  }
  else
  {
    std::cout << "*** Login failed ***" << "\n";
    std::cout << "-----------------------------------" << "\n";
  }
}

// login prompt
void UserLogin::login()
{
  bool temp1 = false;
  bool temp2 = false;
  
  while(temp1 == 0 || temp2 == 0)
  {
    usernamePrompt();
    passwordPrompt();
    openUsernameLog();
    openPasswordLog();
    temp1 = usernameValidation();
    temp2 = passwordValidation();
    loginResponse();
  }
}