#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x>='a' && x<='z'){
        if(x=='a'|| x=='e' || x=='i' || x=='o'|| x=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }

    }else if(x>=0 && x<=9){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}
