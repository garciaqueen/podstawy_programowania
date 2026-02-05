#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cstring>


void replaceStars(const char* path, char* word) {
    FILE* f = fopen(path, "r");
    if (!f) return;

    char buffer[1000];
    int c, i = 0;

    while ((c = fgetc(f)) != EOF && i < 999) {
        buffer[i++] = c;
    }
    buffer[i] = '\0';
    fclose(f);

    char* pos = strstr(buffer, "*****");
    if (!pos) return;

    char result[1000];
    int before_len = pos - buffer;

    memcpy(result, buffer, before_len);
    memcpy(result + before_len, word, 5);
    strcpy(result + before_len + 5, pos + 5);

    FILE* out = fopen(path, "w");
    fputs(result, out);
    fclose(out);
}


int main()
{
    char v[] = "wings";
    replaceStars("gwiazdka.txt", v);
}
