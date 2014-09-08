//Fork's example
//Source : man fork , http://stackoverflow.com/questions/1653340/differences-between-exec-and-fork
//Zombie process : http://www.howtogeek.com/119815/htg-explains-what-is-a-zombie-process-on-linux/,http://askubuntu.com/questions/48624/what-are-zombie-processes
#include <unistd.h>
#include <stdio.h>

int main(void) {
    int i;
    for (i= 0; i < 3; ++i) {
        int f = fork();
        printf("%i\tspawns\t%i\ti=%i\n", getpid(), f, i);
        if (f && (i == 1))
            break;
    }
    return 0;
}
