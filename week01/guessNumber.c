

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * getHint(char * secret, char * guess){
    int i;
    int Bulls = 0, Cows = 0, map[10] = {0};
    for (i = 0; secret[i]; i++) {
        if (guess[i] == secret[i]) {
            Bulls++;
        } else {
            map[secret[i] - '0']++;
        }
    }

    for (i = 0; guess[i]; i++) {
        if (guess[i] != secret[i] && map[guess[i] - '0']) {
            Cows++;
            map[guess[i] - '0']--;
        }
    }

    char *newArr = (char *)malloc(10 * sizeof(char));
    sprintf(newArr, "%dA%dB", Bulls, Cows);
    return newArr;
}

int main(void) {
    char *secret = "89009259456076083460691784986643116682104235230241";
    char *guess = "35556406839148013134190421922250988526865447359524";
    char *ret = getHint(secret, guess);
    if (ret) {
        printf("GetInt Result:%s\n", ret);
    }
    return 0;
}
