#include <stdio.h>
#include <stdlib.h>

int main(void){
    int omikuji, sw;
    char name[32];
    printf("名前を入力してください : ");
    scanf("%s", name);
    srand((unsigned)name);
    do{
    omikuji = rand() % 111;
    char *kuji;
    if(omikuji >= 0 && omikuji <= 20)
        kuji = "大吉";
    else if(omikuji <= 40)
        kuji = "中吉";
    else if(omikuji <= 60)
        kuji = "小吉";
    else if(omikuji <= 80)
        kuji = "吉";
    else if(omikuji <= 90)
        kuji = "末吉";
    else if(omikuji <= 100)
        kuji = "凶";
    else 
        kuji = "大凶";
    printf("%s\n", kuji);
    printf("もう一回？　はい（１）いいえ（０）: "); scanf("%d", &sw);
    }while(sw != 0);

    return 0;
}