/**
From Beej's guide waits for packets from a corresponding talker that will send it user command line input. 
listenr.c
**/

#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <errno.h> 
#include <string.h> 
#include <sys/types.h> 
#include <sys/socket.h> 
#include <netinet/in.h> 
#include <arpa/inet.h> 
#include <netdb.h> 

#define MYPORT "4950" //the port users will be connecting to 
#define MAXBUFLEN 100 //The Buffersize 

//get sockaddr, IPv4 or IPv6: 
void *get_in_addr(struct sockaddr *sa){
  if(sa -> sa_family == AF_INET){
    return&( ((struct sockaddr_in*)sa)-> sin_addr); 
  }
  
  return &((struct sockaddr_in6)sa) -> sin6addr); 
}

int main(void)
{

}
