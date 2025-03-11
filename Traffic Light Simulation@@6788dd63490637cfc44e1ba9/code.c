// Your code here...
#include<stdio.h>
int main(){
    char a[10];
    scanf("%s",&a);
    if(a[0]=='R'){
        printf("Stop");
    }else if(a[0]=='G'){
        printf("Go");
    }else if(a[0]=='Y'){
        printf("Slow Down");
    }else{
        printf("Invalid input");
    }
}