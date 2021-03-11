#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define Size 10

int main(int argc, char **argv)
{
    int i = 0;
    int fd = 0, size = Size;
    //char buffer[11];
    //memset(buffer, 0, 11);
    //char *buffer;
    char *buffer = (char *)malloc(sizeof(char) * Size);
    fd = open("/root/C/NetWork/1.log", O_RDONLY); // O_RDONLY
    while (size == Size) {
        size = read(fd, buffer, Size);
        //printf("i:%d, buffer:%s\n", i,  buffer);
        //printf("size:%d\n", size);
        //i++;
    }
    //printf("i:%d, buffer:%s\n", i,  buffer);
    //printf("size:%d\n", size);
    close(fd);
    //printf("%s", buffer);
    free(buffer);
    return 0;
}