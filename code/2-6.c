#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[]) {
    if (argc < 3)
        return 0;

    FILE* fp = fopen(argv[1], "r");
    const char* target_str = argv[2];

    char s[256];
    
    while (fgets(s, sizeof(s), fp))
        if (strstr(s, target_str))
            printf("%s", s);
    
    fclose(fp);
}
