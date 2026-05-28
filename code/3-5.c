#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    int sum = 0;
    char str[64];
    int num;

     while (fscanf(fp, "%s", str) == 1) {

        if (sscanf(str, "%d", &num) == 1) {
            sum += num;
        }
        else {
            fprintf(stderr, "invalid: %s\n", str);
        }
    }

    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}
