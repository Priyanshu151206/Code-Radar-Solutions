#include <stdio.h>
int main(){
    char x;
    scanf("%d",&x);
    if('a<=x && x<='z){
        if(x=='a'=='e'=='i'=='o'=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else if('0'<=x && x<='9'){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}