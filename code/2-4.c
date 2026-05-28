#include <stdio.h>

int main(int argc, const char* argv[]) {

    if (argc < 2)
        return 0;

    FILE* fp = fopen(argv[1], "r");

if (fp == NULL)
        return 0;

    int num[32] = {0};
    char ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            num[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, num[i]);
    }

    fclose(fp);

    return 0;
}
