#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if('A'<=x && x<='Z'){
        printf("Uppercase");
    }else if('a'<=x && x<='z'){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}