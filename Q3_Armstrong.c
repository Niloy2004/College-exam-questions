#include <stdio.h>
int armstrong(int n){int t=n,r,s=0;while(t){r=t%10;s+=r*r*r;t/=10;}return s;}
int main(){int n;scanf("%d",&n);if(armstrong(n)==n)printf("Armstrong");else printf("Not Armstrong");return 0;}