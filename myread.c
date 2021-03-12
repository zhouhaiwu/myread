#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BKSize 10

int main(int argc, char **argv)
{
    int i = 0;
    int fd = 0, size = BKSize;
    //分配内存空间
    char *buffer = (char *)malloc(sizeof(char) * BKSize);
    
    //打开目标文件
    fd = open("/root/C/NetWork/1.log", O_RDONLY); // O_RDONLY

    //循环读取文件所有数据
    while (size == Size) {
        size = read(fd, buffer, Size);
        
        //输出读到的数据
        for (i=0; i<BKSize;i++)
            printf("%c", buffer[i]);
    }
    //输出读到的最后一个块
    if (size>0 && size<BKSize)
        for (i=0; i<BKSize;i++)
            printf("%c", buffer[i]);
    //关闭文件
    close(fd);
    free(buffer);
    return 0;
}
