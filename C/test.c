#include <stdio.h>
#include <string.h>

int main(){
    char word[10000];
    char temp[10000];
    gets(word);

    for (int i=0; i<4; i++){
        gets(temp);
        strcat(word, temp);
    }

    puts(word);
    return 0;
}