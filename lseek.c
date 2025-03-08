#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
int 
main(int argc, char* argv[])
{
    int fd = open("./README", 0);

    if (fd < 0) exit();
    char buf[512];
    read(fd, buf, 5);
    printf(1, "%s", buf);
    lseek(fd, 9, SEEK_SET);
    read(fd, buf, 5);
    printf(1, "%s", buf);
    close(fd);

    exit();
}