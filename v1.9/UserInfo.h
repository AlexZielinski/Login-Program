#include <iostream>   // std::cout
#include <string>     // std::string
#include <fstream>    // std::ofstream

class UserInfo
{
    public:
        UserInfo();
        ~UserInfo();
    
        int usernameLengthCheck(std::string a);
        int usernameSpaceCheck(std::string b);
        int passwordDigitCheck(std::string c);
        int passwordLengthCheck(std::string d);
        void usernameInput();
        void passwordInput();
        void createAccount();
        void usernameLogger();
        void passwordLogger();
    
        // setters
        void setUsername(std::string a);
        void setPassword(std::string b);
        void setUsernameMinLength(int c); 
    
            // getters
        std::string getUsername();
        std::string getPassword();
        int getUsernameLength();  
  
    private:
        std::string username_;
        std::string password_;
        std::ofstream username_log_;
        std::ofstream password_log_;
        int username_length_;
        int username_min_length_;       // make getter
        int username_space_count_;
        int username_space_min_count_;  // make getters and setters
        int password_length_;
        int password_min_length_;       // make getters and setters
        int password_dig_length_;
        int password_dig_min_length_;   // make getters and setters
};