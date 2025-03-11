// Your code here...
#include<stdio.h>
int main(){
    char a[10];
    scanf("%s",&a);
    if(a[0]=='A'){
        printf("Excellent");
    }else if(a[0]=='B'){
        printf("Good");
    }else if(a[0]=='C'){
        printf("Average");
    }else if(a[0]=='D'){
        printf("Below Average");
    }else if(a[0]=='F'){
        printf("Fail");
    }else{
        printf("Invalid grade");
    }
}