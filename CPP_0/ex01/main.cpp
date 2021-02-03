#include "phonebook1.hpp"

int main(void)
{
    std::string input;
    Book user[8];
    
    init_user(user);
    while (1)
    {
        std::cout<<"\n>";
        std::cin >> input;
        if (input == "EXIT")
            exit(0);
        else if (input == "SEARCH")
        {
            for(int i=0;i<8;i++)
            {
                if (user[i].exist == true)
                {
                    printf("user access\n");
                    std::cout<<std::setw(10)<<std::right<<i<<"|";
                    if (user[i].get_first_name().length() >= 10)
                        user[i].get_first_name()[10] = '.';
                    std::cout<<"user"<<user[i].get_first_name()<<"\n";
                    std::cout<<std::setw(10)<<std::right<<user[i].get_first_name()<<"|";
                    if (user[i].get_last_name().length() >= 10)
                        user[i].get_last_name()[10] = '.';
                    std::cout<<std::setw(10)<<std::right<<user[i].get_last_name()<<"|";
                    if (user[i].get_nickname().length() >= 10)
                        user[i].get_nickname()[10] = '.';
                    std::cout<<std::setw(10)<<std::right<<user[i].get_nickname();
                }
            }
        }
        else if (input == "ADD")
        {
            for(int i=0;i<8;i++)
            {
                if (user[i].exist == false)
                {
                    printf("index : %d\n",i);
                    set_add(user[i]);
                    break;
                }
            }
        }
    }
    return (0);
}
