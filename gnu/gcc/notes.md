关于GNU中工具的使用的笔记

### GCC
gcc是编译工具，能够编译C, C++等语言

资源：
1. gcc官网上相应版本的Manual
2. LinuxC编程一站式学习

##### gcc的常用选项
* -c ： 编译生成目标文件
* -D<macroname>[=value] : 定义一个宏
* -E : 只做预处理而不编译，cpp的命令也可以达到同样的效果
* -g ： 在生成的目标文件中添加调试信息
* -I<dir> : dir是头文件所在的目录
* -L<dir> : dir是库文件所在的目录
* -M, -MM : 输出“.o文件: .c文件， .h文件”这种形式的Makefile规则
* -o outfile : outfile输出文件的文件名
* -O? : 各种编译优化选项
* -print-search-dirs : 打印库文件的默认搜索路径
* -S : 编译生成汇编代码
* -v : 打印详细的编译连接过程
* -Wall : 打印所有的警告信息
* -Wl,options : options是传递给链接器的选项