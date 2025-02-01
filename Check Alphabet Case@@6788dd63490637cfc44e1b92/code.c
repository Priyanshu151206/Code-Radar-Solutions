#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(A<=x<=Z){
        printf("Uppercase");
    }else if(a<=x<=z){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}