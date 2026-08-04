#include <stdio.h>
struct Student{int roll;char name[50];float marks;};
int main(){struct Student s[5];int i,max=0;for(i=0;i<5;i++){scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);if(s[i].marks>s[max].marks)max=i;}printf("%d %s %.2f",s[max].roll,s[max].name,s[max].marks);return 0;}