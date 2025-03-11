// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    char c[100];
    scanf("%d %d %s",&a,&b,&c);
    if(c[0] =='+'){
        printf("%d",a + b);
    }else if(c[0] =='-'){
        printf("%d",a - b);
    }else if(c[0] =='*'){
        printf("%d",a * b);
    }else if(c[0] =='/'){
        printf("%d",a / b);
    }else{
        printf("error");
    }
}