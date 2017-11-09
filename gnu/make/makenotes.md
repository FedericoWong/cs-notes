This is the notes of make

## 1. Overview of `make`
1. `make'的功能是自动的决定大型程序中哪些需要重编译，以及调用哪些命令重编译
2. 不仅用于C语言，对于那些可以在命令行下编译的语言均可，还可以用于任务
3. 存在makefile文件时，使用`make`命令即可

## 2. An introduction to Makefiles
1. Makefile tells make how to compile and link a program
2. 头文件变动，包含头文件的源文件都要重新编译
3. Makefile文件有rules组成，rules的规则如下：
```
target ...: <prerequisites ...>
        recipe ...
```
其中：targe为要生成的文件或要执行的动作的名称，prerequisites为创建target所需要的输入文件，recipe是要执行的动作，可以有多条，必须以tab开头（可以通过更改.RECIPEPREFIX变量修改）

4. make默认执行第一条rule
5. 使用变量，如objects, OBJECTS, obj等等
6. 对于target为.o文件的，recipe可以省略，.c的prerequisite也可以省略
7. Phony rule的使用及书写方式
```
.PHONY: clean
clean: rm ....
```
这个表达式更复杂，但是当有同名文件时，`make`能够处理，当rm错误时会忽略错误信息继续

## 3. Writing Makefiles

1. Makefile的组成部分：explicit rules, implicit rules, variable definitions, directives, comments
2. Makefile文件名：GNU make默认搜索的文件名为GNUmakefile, makefile, Makefile，如果不是以上名字,可用`-f name`或`--file=name`指定

## 4. Writing Rules





