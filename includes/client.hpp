#ifndef CLIENT_HPP
# define CLIENT_HPP

# include "irc.hpp"

class client
{
    private :
        int     c_socket; //client socket
        string  nickname;
        string  username;
        string  c_state; // client connection state

    public :
        Client();

};

#endif