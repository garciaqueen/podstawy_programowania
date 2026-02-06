#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <cstring>

using namespace std;

struct Task {
    char name[30];
    int prior;
    void (*run)(const char*, int);

};


void print(const char* name, int prior) {
    cout << name << " " << prior << '\n';
}

bool sort_prior(Task *a, Task *b) {
    return a->prior < b->prior;
}

bool sort_char(Task * a, Task * b) {
    return strcmp(a->name, b->name) > 0;
}

void plus_prior(Task *a) {
    a->prior += 1;
}

void print_r(const Task* a) {
    a->run(a->name, a->prior);
}

int main()
{
    Task** tab = new Task * [3];
    tab[0] = new Task;
    tab[0]->name[0] = 'T';
    tab[0]->name[1] = 'a';
    tab[0]->name[2] = 's';
    tab[0]->name[3] = 'k';
    tab[0]->name[4] = '1';
    tab[0]->name[5] = '\0';
    tab[0]->prior = 3;
    tab[0]->run = print;
    tab[1] = new Task;
    tab[1]->name[0] = 'T';
    tab[1]->name[1] = 'a';
    tab[1]->name[2] = 's';
    tab[1]->name[3] = 'k';
    tab[1]->name[4] = '2';
    tab[1]->name[5] = '\0';
    tab[1]->prior = 1;
    tab[1]->run = print;
    tab[2] = new Task;
    tab[2]->name[0] = 'T';
    tab[2]->name[1] = 'a';
    tab[2]->name[2] = 's';
    tab[2]->name[3] = 'k';
    tab[2]->name[4] = '3';
    tab[2]->name[5] = '\0';
    tab[2]->prior = 2;
    tab[2]->run = print;

    cout << "Sort prior: ";
    std::sort(tab, tab + 3, sort_prior);
    cout << "Sort char: ";
    std::sort(tab, tab + 3, sort_char);
    cout << "Plus prior: ";
    std::for_each(tab, tab + 3, plus_prior);
    cout << "Print r: ";
    std::for_each(tab, tab + 3, print_r);


    return 0;

}

}
