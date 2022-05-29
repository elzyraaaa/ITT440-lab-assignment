#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

void error(const char *msg){

	perror(msg);
	exit(1);
}

int main(int argc, char *argv[]){

	if(argc < 2)
	{
		fprintf(stderr, "Port No. not provided. Program terminated\n");
		exit(1);
	}
	int sockfd, newsockfd, portno, n;
	char buffer[255];
	
	struct sockaddr_in serv_addr, cli_addr;
	socklen_t clilen;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);	
	if(sockfd <0)
	{
		error("Error opening socket.");
	}
		
	bzero((char *) &serv_addr, sizeof(serv_addr));
	portno = atoi(argv[1]);

	serv_addr.sin_family = AF_INET;
	server_address.sin_port = htons( server_address.sin_port = htons(8001);
8001);
        server_address.sin_addr.s_addr = INADDR_ANY;

}
