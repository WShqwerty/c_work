#include "test1.h"
#include <csignal>
#include <unistd.h>

int main(void){
    signal(SIGINT, signalHandler);

    while(1){
        cout<<"Going to Sleep...."<<endl;
        sleep(1);
    }
    return 0;
}

void signalHandler(int signum){
    cout<<"Interrupt signal ("<<signum<<") received.\n"<<endl;
    exit(signum);
}
