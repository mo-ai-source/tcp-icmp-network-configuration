// include C++ IO and windows socket library

#include <iostream>
#include <winsock2.h>

// declared namespaces for print

using namespace std;

//declare main methods

int main()
{
    // initializing the winsocket with socket and it's ip address

    WSADATA WSAData;
    SOCKET serverSock;
    SOCKADDR_IN addr;

    WSAStartup(MAKEWORD(2,0), &WSAData); // WSAStartup function initiates use of the Winsock DLL by a process, it is version 2
    
    serverSock = socket(AF_INET, SOCK_STREAM, 0); // This establishes a socket and connection oriented, SOCK_STREAM that is for TCP

    //addr.sin_addr.s_addr = inet_addr("192.168.0.8"); // replace the ip with your future server ip address. If server AND client are running on the same computer, you can use the local ip 127.0.0.1
    
    addr.sin_addr.s_addr = inet_addr("127.0.0.1"); // it is a loopback ip as server and client are running in the same machine
    addr.sin_family = AF_INET; // AF_INET is an address family in internet domain that is used to designate IPv4 that your socket can communicate
    addr.sin_port = htons(5555); // Port is declared

    connect(serverSock, (SOCKADDR *)&addr, sizeof(addr)); // connect server socket
    cout << "Connected to server!" << endl; // printing the message

    char buffer[1024]={'h', 'e', 'l', 'l', 'o', '.'}; // allocates the memory space for buffer which is a temporary storage
    send(serverSock, buffer, sizeof(buffer), 0); // send message
    cout << "Message sent!" << endl; // printing the message

    closesocket(serverSock); // close the socket
    WSACleanup(); // cleaning if anything exists previously
    cout << "Socket closed." << endl << endl; // printing the message
}
