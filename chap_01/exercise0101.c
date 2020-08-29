#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int omikuji, sw;
    srand(time(NULL));
    do{
    omikuji = rand() % 7;
    char *kuji;
    switch (omikuji)
    {
    case 0:
        kuji = "大吉";
        break;
    case 1:
        kuji = "中吉";
        break;
    case 2:
        kuji = "小吉";
        break;
    case 3:
        kuji = "吉";
        break;
    case 4:
        kuji = "末吉";
        break;
    case 5:
        kuji = "凶";
        break;
    case 6:
        kuji = "大凶";
        break;
    }
    printf("%s\n", kuji);
    printf("もう一回？　はい（１）いいえ（０）: "); scanf("%d", &sw);
    }while(sw != 0);

    return 0;
}