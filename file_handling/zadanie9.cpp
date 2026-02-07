#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>

using namespace std;


int main()
{

    FILE* f = fopen("napisy.txt", "r");
    char nap[10][300];

    int i = 0;
    int c1;
    int len = 0;
    while ((c1 = fgetc(f)) != EOF) {
        if (len == 0 && c1 == ' ') {
            continue;
        }

        nap[i][len] = (char)c1;
        len++;
        if (c1 == '.' || c1 == '!' || c1 == ';') {
            nap[i][len] = '\0';
            i++;
            len = 0;
        }
        if (len >= 299) {
            nap[i][len] = '\0';
            i++;
            len = 0;
        }
        
        
    }

    for (int l = 0; l < i; l++) {
        int len1 = 0;
        while (nap[l][len1] != '\0') {
            cout << nap[l][len1];
            len1++;
        }
        cout << '\n';
    }

    return 0;

}
