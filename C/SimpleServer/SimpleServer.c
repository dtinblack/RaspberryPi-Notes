#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>


int main(void)
{

   printf("Server starting ...\n");

   int create_socket;
   int new_socket;

   socklen_t addrlen;

   int buffer_size = 1024;

   char  *buffer = malloc(buffer_size);

   struct sockaddr_in address;

   if ( ( create_socket = socket( AF_INET, SOCK_STREAM, 0 ) ) > 0) {
    
      printf("The socket was created \n"); 

   }  

   address.sin_family = AF_INET;
   address.sin_addr.s_addr = INADDR_ANY;
   address.sin_port = htons(5000);

    if (bind(create_socket, (struct sockaddr *) &address, sizeof(address)) == 0){    
       
        printf("Binding Socket\n");
    }

 
   while(1){

    if( listen( create_socket, 10 ) < 0 ){
    
     perror("server: listen");
     exit(1);

    }

    if( ( new_socket = accept(create_socket, ( struct sockaddr * ) &address, &addrlen)) < 0 ) {

      perror("server: accept");
      exit(1);

    }

    if( new_socket > 0 ) {

      printf("The Client is connected ... \n");

    } 

    recv(new_socket, buffer, buffer_size, 0 );

    printf("%s \n", buffer);

    write(new_socket, "HTTP/1.1 200 OK\n", 16);
    write(new_socket, "Content-length: 55\n", 19);
    write(new_socket, "Content-Type: text/html\n\n", 25);
    write(new_socket, "<html><body><H1>RPi Msg: Hello world</H1></body></html>", 55);
    
   }

   close(create_socket);

   return 0;

}

