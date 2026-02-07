#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;



int main()
{

    FILE* f = fopen("word.txt", "r");

    int c;
    int num_s = 1;
    while ((c = fgetc(f)) != EOF) {
        if (c == ' ' || c == '.') {
            num_s++;
        }
    }

    rewind(f);
    char words[num_s][99];
    int c1;
    for (int i = 0; i < num_s; i++) {
        int len = 0;
        while ((c1 = fgetc(f)) != EOF) { 
            if (c1 == ' ' || c1 == '.') {
                break;
            }
            else {
                words[i][len] = c1;
                len++;
            }

        }
        words[i][len] = '\0';

        if (c1 == EOF) {
            break;
        }
    }
    for (int i = 0; i < num_s; i++) {
        if (words[i][0] != '\0') {
            cout << words[i] << endl;
        }
    }


    return 0;

}
