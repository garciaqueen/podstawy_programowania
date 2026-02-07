#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

unsigned short* fuse_on(unsigned short fuses[], unsigned short num) {
    if (num <= sizeof(unsigned short)) {
        fuses[(num / 8)] = fuses[(num / 8)] | (1 << (num));
    }
    else {
        fuses[(num / 8)] = fuses[(num / 8)] | (1 << (num%8));
    }
    
    return fuses;

}

void print_fuses(unsigned short fuses[], int arrsize) {
    for (int i = 0; i < arrsize; i++) {
        for (int b = 7; b >= 0; b--) {
            printf("%d", (fuses[i] >> b) & 1);
        }

        printf(" ");
    }
    printf("\n");
    
}

int main()
{
    int n;
    cin >> n;


    unsigned short* fuses = new unsigned short[(n / 8) + 1];

    for (int i = 0; i < (n / 8) + 1; i++) {
        fuses[i] = 0;
    }

    int arrsize = (n / 8) + 1;

    fuse_on(fuses, 4);
    fuse_on(fuses, 9);
    fuse_on(fuses, 7);

    print_fuses(fuses, arrsize);

    return 0;

}
