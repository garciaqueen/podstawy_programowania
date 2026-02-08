#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

struct Task {
    char task_name[50];
    int prior;
    void (*run)(const char*, int);
};

void print(const char* str, int num) {
    cout << str << ' ' << num << endl;
}

bool sort_p(Task* a1, Task* a2) {
    return a1->prior < a2->prior;
}

bool sort_name(Task* a1, Task* a2) {
    return strcmp(a1->task_name, a2->task_name) == 1;
}

void one_more(Task* a) {
    a->prior += 1;
}

int main()
{
    Task** tab = new Task * [3];
    tab[0] = new Task;
    strcpy(tab[0]->task_name, "Tasa1");
    tab[0]->prior = 4;
    tab[0]->run = print;
    tab[1] = new Task;
    strcpy(tab[1]->task_name, "Tasz2");
    tab[1]->prior = 7;
    tab[1]->run = print;
    tab[2] = new Task;
    strcpy(tab[2]->task_name, "Task3");
    tab[2]->prior = 2;
    tab[2]->run = print;

    sort(tab, tab + 3, sort_p);


    sort(tab, tab + 3, sort_name);

    for_each(tab, tab + 3, one_more);

    tab[0]->run(tab[0]->task_name, tab[0]->prior);

    return 0;

}
