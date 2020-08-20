#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
    int retry;
    
    srand(time(NULL));

    printf("この処理形は0~%dの乱数を生成できます。\n", RAND_MAX);

    do{
        printf("\n乱数%dを生成できました。\n", rand());

        printf("もう一度？ •••(0)いいえ (1)はい : ");
        scanf("%d", &retry);
    }while(retry == 1);

    return 0;
}