#include "Ui.h"
#include "UserInfo.h"
#include "Userlogin.h"

Ui::Ui()
{
    create_acc_ = "1";
    login_acc_ = "2";
    main_menu_ = "1";
    user_menu_input_ = "";
}

Ui::~Ui()
{
 
}

void Ui::menuWelcome()
{ 
    std::cout << "==============================================" << std::endl;
    std::cout << "            WELCOME TO LOGIN v1.9" << std::endl;
    std::cout << "==============================================" << std::endl;
    std::cout << std::endl;
}

void Ui::firstOption()
{
    UserInfo u;
    UserLogin l;
    bool is_good = false;
    
    std::cout << "To create an account press 1 and click enter." << std::endl << std::endl;
    std::cout << "To login to an account press 2 and click enter." << std::endl << std::endl;
  
    while (!is_good)
    {
        std::cout << ": ";
        std::cin >> user_menu_input_;
        std::cout << std::endl;
    
        if (create_acc_.compare(user_menu_input_) == 0)
        {
            std::cout << "-- create account selected." << std::endl << std::endl << std::endl;
            is_good = true;
            u.createAccount();
        } 
        else if (login_acc_.compare(user_menu_input_) == 0)
        {
            std::cout << "-- login into account selected" << std::endl << std::endl << std::endl;
            is_good = true;
            l.login();
        }
        else
        {
            std::cout << "    Error: invalid key pressed, choose either 1 or 2" << std::endl;
            is_good = false;
        }
    }
    std::cout << std::endl;
}

void Ui::secondOption()
{
    UserLogin l;
    bool is_good = false;
    
    std::cout << "To return to main menu press 1." << std::endl;
    std::cout << "To login into your account press 2." << std::endl;
    
    while(!is_good)
    {
        std::cout << ": ";
        std::cin >> user_menu_input_;
        std::cout << std::endl;
    
        if (main_menu_.compare(user_menu_input_) == 0)
        {
            std::cout << "-- main menu selected" << std::endl << std::endl << std::endl;
            is_good = true;
            menuWelcome();
            firstOption();
        } 
        else if (login_acc_.compare(user_menu_input_) == 0)
        {
            std::cout << "-- login into account selected" << std::endl << std::endl << std::endl;
            is_good = true;
            l.login();
        }
        else
        {
            std::cout << "    Error: invalid key pressed, choose either 1 or 2" << std::endl;
            is_good = false;
        }
    }
}