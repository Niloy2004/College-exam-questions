#include <stdio.h>
#define MAX 5
int stack[MAX],top=-1;
void push(int v){if(top==MAX-1)printf("Overflow");else stack[++top]=v;}
void pop(){if(top==-1)printf("Underflow");else printf("%d",stack[top--]);}
int main(){push(10);push(20);push(30);pop();return 0;}