#include<stdio.h>
int main(){
        char s[5];
        int i,l;
        l=0;
        scanf("%c%c%c%c%c",&s[0],&s[1],&s[2],&s[3],&s[4]);
        for(i=0;i<3;i++){
                if('o'==s[i]&&'o'==s[i+1]&&'o'==s[i+2]){
                printf("o\n");
                i=i+3;
                l=1;
                }else if('x'==s[i]&&'x'==s[i+1]&&'x'==s[i+2]){
                printf("x\n");
                i=i+3;
                l=1;
                }
        }

        if(l==0){printf("draw\n");}

        return 0;
}