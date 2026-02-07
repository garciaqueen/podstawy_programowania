#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
// int 3 {5,10,29} int 2 {18, 22}
short* get_group(const char* path, int group_num) {
     FILE* f = fopen(path, "rb");
     short* tab_pointer = nullptr;
     int counter = 0;
     for (int i = 0; i < group_num; i++) {
         int n;
         fread(&n, sizeof(int), 1, f);
         short* tab = new short[n];
         fread(tab, sizeof(short), n, f);
         tab_pointer = tab;
     }
     return tab_pointer;
}

int main()
{
    //FILE* f = fopen("data.bin", "wb+");
    //int n = 3;
    //fwrite(&n, sizeof(int), 1, f);
    //short tab[3] = { 5, 10, 29 };
    //fwrite(tab, sizeof(short), n, f);
    //int n1 = 2;
    //fwrite(&n1, sizeof(int), 1, f);
    //short tab1[2] = { 18, 22 };
    //fwrite(tab1, sizeof(short), n1, f);
    //fclose(f);
    short* tab = get_group("data.bin", 1);

    cout << tab[1];
    return 0;

}
