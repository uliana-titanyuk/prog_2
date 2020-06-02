#include <stdio.h>
#include <stdlib.h>
#include "fun.h"

int main(void){
    int k;
    char max_word[512];

    k=autotest_1();
    if (k == 6){
        printf("Autotest 1 passed...\n");
    }
    else{
        printf("Autotest 1 failed...\n");
        return 1;
    }

    k=autotest_2();
    if (k == 0){
        printf("Autotest 2 passed...\n");
    }
    else{
        printf("Autotest 2 failed...\n");
        return 1;
    }


    k=search("text.txt", max_word);
    if(k == 0){
        return -1;
    }
    else{
            printf("the shortest word is <<");
            for (int i=0; i<k; i++){
                printf("%c", max_word[i]);
            }
            printf(">>\n");
    }
    return 0;
}
















