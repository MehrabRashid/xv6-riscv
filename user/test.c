# include <stdio.h>
#include "sys/types.h"
#include "user/user.h"
int main(int argc, char *argv[])
{
    if (argc!=2) {
        printf("Usage: test_scheduler tickets\n");
        exit(1);
    }

    int tickets = atoi(argv[1]);
    if (settkts(tickets) < 0) {
        printf("settickets failed\n");
        exit(1);
    }
    while (1) {
    }
    exit(0);
}
