//長方形の面積を求める関数を作りなさい
//２つの値を受け取り、その値を掛け算した値を返す関数
#include<stdio.h>

//関数のプロトタイプ宣言

//main関数
float chohokei(float tate,float yoko/*引数*/);
int main(void){
    float menseki = chohokei(5.0,4.0);//関数を呼び出すことができる
    printf("%f\n",menseki);
    return 0;
}



//chohokei関数

float chohokei(float tate,float yoko/*引数*/){
    //長方形の面積を求める内容->縦と横の掛け算
    float menseki;
    menseki = tate * yoko;
    return menseki;
}



