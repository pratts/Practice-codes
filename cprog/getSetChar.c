#include<stdio.h>

int main(int argc, char **argv) {
    int c = getchar();
    while(c != '\n') {
        printf("%d\t%c\n", c, (char)c);
        c = getchar();
    }

    return 0;
}
