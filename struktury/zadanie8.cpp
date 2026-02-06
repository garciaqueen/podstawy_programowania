#include <iostream>
#include <cmath>
#include <cstdlib>


using namespace std;


struct Person {
    int age;
    char name[10];
};

int main()
{
    Person Anna;
    Anna.age = 17;
    Anna.name[0] = 'A';
    Anna.name[1] = 'n';
    Anna.name[2] = 'n';
    Anna.name[3] = 'a';
    Anna.name[4] = '\0';

    Person Anna1;
    Anna1.age = Anna.age;
    Anna1.name[0] = Anna.name[0];
    Anna1.name[1] = Anna.name[1];
    Anna1.name[2] = Anna.name[2];
    Anna1.name[3] = Anna.name[3];
    Anna1.name[4] = Anna.name[4];

    Person* Oka = new Person;
    Oka->age = 18;
    Oka->name[0] = 'O';
    Oka->name[1] = 'k';
    Oka->name[2] = 'a';
    Oka->name[3] = '\0';

    Person* Oka1 = new Person;
    Oka1->age = Oka->age;
    Oka1->name[0] = Oka->name[0];
    Oka1->name[1] = Oka->name[1];
    Oka1->name[2] = Oka->name[2];
    Oka1->name[3] = Oka->name[3];

    return 0;

}
