#include<stdio.h>
int main(){
    int scores[5]={90,80,70,60,50};
    for(int i = 0; i <= 4; i++){
        printf("得点はscores[%d]点です。\n",scores[i]);
    }
    return 0;
}