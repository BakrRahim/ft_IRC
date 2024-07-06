#ifndef SERVER_HPP
# define SERVER_HPP

# include "irc.hpp"

struct Parse
{
    int     port;
    string  password;
    string  IPaddr;
};

class Server
{
    private :
        Parse           pars;
        int             socketfd;
        int             epollFd;
        bool            flag;
        epoll_event     events[1024];
        int             epollCounter;
        int             communicationFD;
        sockaddr_in     addr;
        epoll_event     newClient;
        socklen_t       socklen;
        map<int, Parse> clients;
        string          str;
        char            buffer[1024];
    
    public :
        Server(char **av);
        void    serverSockCreate();
        void    startCommunication();
        void    createNewConnection();
        ~Server();
};

#endif