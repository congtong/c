#include<stdio.h>

int x;
int y;

int add() {
//这个声明式函数外部的
extern int x;
extern int y;
x = 1;
y = 2;
return x + y;
}

int main() {
int result;
result = add();
printf("result 为： %d", result);
return 0;
}

