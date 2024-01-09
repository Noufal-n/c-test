#include<stdio.h>
#include<conio.h>

int add(int a,int b){
int res;
res=a+b;
return res;
}
int main(){
int a,b;
printf("enter two numbers to add\n");
scanf("%d",&a);
scanf("%d",&b);
printf("the  result =%d",add(a,b));
return 0;
}