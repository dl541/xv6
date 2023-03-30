#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{

    if (argc != 2) {
        printf(1, "Sleep only takes one argument");
        exit();
    }
    int sec = atoi(argv[1]);
    printf(1, "sleep for %d seconds", sec);
    sleep(sec);
    printf(1, "End sleep");
  exit();
}