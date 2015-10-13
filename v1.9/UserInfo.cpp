#include "UserInfo.h"

UserInfo::UserInfo()
{
    username_ = "";
    password_ = "";
    username_length_ = 0;
    username_min_length_ = 6;
    username_space_count_ = 0;
    username_space_min_count_ = 0;
    password_length_ = 0;
    password_min_length_ = 8;
    password_dig_length_ = 0;
    password_dig_min_length_ = 2;
}

UserInfo::~UserInfo()
{
  
}

// checks length of username. 
int UserInfo::usernameLengthCheck(std::string a)
{
    int temp = 0;
    if (a.length() <= username_min_length_)
    {
        std::cout << "* Username must contain more than 6 characters. *" << std::endl;
        temp = 0;
    }
    else
        temp = a.length();
  
    return temp;
}

// Must fix
int UserInfo::usernameSpaceCheck(std::string b)
{
    int temp = 0;
  
    for (int i = 0; i < b.length(); i++)
    {
        if(b[i] == ' ')
            temp++;
        else
            temp = temp;
    }
    //std::cout << "* Username cannot contain any spaces. *" << std::endl;
  
    return temp;
}

// checks for digits. 
int UserInfo::passwordDigitCheck(std::string c)
{
    std::string digits[] = {"0","1","2","3","4","5","6","7","8","9"};
    std::string temp1;
    std::string temp2;
    int counter = 0;
  
    for (int i = 0; i < c.length(); i++) 
    {
        temp1 = c[i];
        for (int j = 0; j < 10; j++)
        {
        temp2 = digits[j];
        if (temp1 == temp2)
            counter++;
        else
            counter = counter;
        }
    }
  
    if (counter < password_dig_min_length_)
        std::cout << "* Password must contain 2 or more numbers. *" << std::endl;
  
    return counter;
}

// checks length of password including digits.
int UserInfo::passwordLengthCheck(std::string d)
{
    int temp = d.length();
    if (temp < password_min_length_)
    {
        std::cout << "* Password must contain 8 or more characters.* " << std::endl;
        temp = 0;
    }
    else
        temp = temp;
  
    return temp;
}

// prompts user to enter a username.
void UserInfo::usernameInput()
{
    while (username_length_ <= username_min_length_ || username_space_count_ > username_space_min_count_)
    {
        std::cout << "===================================================" << std::endl;
        std::cout << "Enter a username: ";
        std::cin >> username_;
        username_length_ = usernameLengthCheck(username_);
        username_space_count_ = usernameSpaceCheck(username_);
    }
}

// prompts user to enter a password.
void UserInfo::passwordInput()
{
    while (password_dig_length_ < password_dig_min_length_ || password_length_ < password_min_length_)
    {
        std::cout << "Enter a password: ";
        std::cin >> password_;
        std::cout << "===================================================" << std::endl << std::endl;
        password_dig_length_ = passwordDigitCheck(password_);
        password_length_ = passwordLengthCheck(password_);
    
        /*    error checking
        std::cout << "passlength: " << password_length_ << std::endl;
        std::cout << "passmin:    " << password_min_length_ << std::endl;
        std::cout << "passDiglength: "    << password_dig_length_ << std::endl;
        std::cout << "passdigminlength: " << password_dig_min_length_ << std::endl;
        */
    }
}

// calls for username and password prompt.
void UserInfo::createAccount()
{
    usernameInput();
    passwordInput();
    usernameLogger();
    passwordLogger();
}

// logs username.
void UserInfo::usernameLogger()
{
    username_log_.open("usernameLog.txt");  // creates txt file
    username_log_ << username_;  // writes username to file
    username_log_.close();  // closes file
    std::cout << "-- username log successful." << std::endl;
}

// logs password.
void UserInfo::passwordLogger()
{
    password_log_.open("passwordLog.txt");
    password_log_ << password_;
    password_log_.close();
    std::cout << "-- password log successful." << std::endl;
}

//--------
//setters
//--------
void UserInfo::setUsername(std::string a)
{
    username_ = a;
}

void UserInfo::setPassword(std::string b)
{
    password_ = b;
}

void UserInfo::setUsernameMinLength(int c)
{
    username_min_length_ = c;
}

//--------
//getters
//--------
std::string UserInfo::getUsername()
{
    return std::string(username_);
}

std::string UserInfo::getPassword()
{
    return std::string(password_);
}

int UserInfo::getUsernameLength()
{
    return username_length_; 
}