#include "PhoneBook1.hpp"

int main(int argc, char **argv)
{
    std::string input;
    Book user[8];

    while (1)
    {
        std::cout<<"\n>";
        std::cin >> input;
        if (input == "EXIT")
            return (0);
        else if (input == "SEARCH")
        {
            for(int i=0;i<8;i++)
                if (user[i].exist)
                {
                    std::cout << i;
                    user[i].get_name();
                }
        }
        else if (input == "ADD")
        {
            for(int i=0;i<8;i++)
            {
                if (user[i].exist == false)
                {
                    
                }
            }
        }
    }
    return (0);
}