这个程序应该是达到极致了；

真实的磁盘位置应该是{盘片编号、磁道号、扇区号} 因为一块硬盘中会有多个盘片 每个盘片有多个磁道 每个磁盘有多个扇区 但磁盘驱动把这些细节隐藏了 我们可以用一个长整数，代表整块磁盘的某一个位置。

这个长整数，你也可以认为，就是指向磁盘的指针 本质上和内存一样 内存也分某一根内存的某一个模块中的某一个字节。 驱动将内存也虚拟为一整块连续的空间
