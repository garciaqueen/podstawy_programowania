#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;




int main()
{
    //FILE* f = fopen("cats.txt", "wb");
    //int cats[] = {5, 6, 3, 5, 1, 8};
    //fwrite(cats, sizeof(int), 6, f);


    FILE* f = fopen("cats.txt", "rb");
    
    fseek(f, 0, SEEK_END);
    long file_size = ftell(f);
    rewind(f);
    int num_cats = file_size / sizeof(int);
    int* data = new int[num_cats];
    fread(data, sizeof(int), num_cats, f);
    printf("Ala ma %i kotow w nastepujacym wieku:\n", num_cats);
    for (int i = 0; i < num_cats; i++) {
        cout << data[i] << ' ';
    }

    fclose(f);
    delete[] data;

    return 0;

}
