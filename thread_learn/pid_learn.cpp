#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main(void){
    pid_t pid,ppid;

    pid = fork();
    if(-1 == pid){
        printf("进程创建失败！\n");
        return -1;
    }else if(pid == 0){
        printf("子进程，fork返回值：%d, ID: %d， 父进程ID:%d\n", pid, getpid(), getppid());
    }else{
        printf("父进程，fork返回值：%d, ID: %d， 父进程ID:%d\n", pid, getpid(), getppid());
    }

    // pid = getpid();
    // ppid = getppid();

    // printf("当前进程的ID号为： %d\n", pid);
    // printf("当前进程的父进村ID号为：%d\n", ppid);

    return 0;
}