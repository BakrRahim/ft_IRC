#include "includes/irc.hpp"

int main(int ac, char **av)
{
    if (ac != 3)
    {
        cerr << "Usage : ./ircserv <port> <password>" << endl;
        return (1);
    }
    else
    {
        try
        {
            parse(av);
            multiplex multiplexing(av);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}