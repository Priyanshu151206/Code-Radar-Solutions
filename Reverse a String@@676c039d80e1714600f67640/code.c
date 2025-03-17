// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",&str);
    char rev[100]=strsep(str);
    printf("%s",rev);
}