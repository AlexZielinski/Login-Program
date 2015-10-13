#include <iostream>
#include <string>
#include <windows.h>

class Ui
{
    public:
        Ui();
        ~Ui();
    
        void menuWelcome();
        void firstOption();
        void secondOption();
    
    private:
        std::string create_acc_;
        std::string login_acc_;
        std::string main_menu_;
        std::string user_menu_input_;
};