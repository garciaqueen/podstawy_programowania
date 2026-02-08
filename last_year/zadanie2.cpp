#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

void print(Date ob) {
    printf("%i.%i.%i", ob.day, ob.month, ob.year);
}

Date* date_from_string(char s_date[]) {
    const char* str = s_date;
    const char* sep = ".";
    const char* pos = strpbrk(str, sep);
    int len = pos - str;

    char day_s[10];

    strncpy(day_s, str, len);
    day_s[len] = '\0';
    int day = atoi(day_s);

    str = pos + 1;

    pos = strpbrk(str, sep);
    len = pos - str;
    char month_s[10];
    strncpy(month_s, str, len);
    month_s[len] = '\0';
    int month = atoi(month_s);

    str = pos + 1;

    char year_s[10];
    strcpy(year_s, str);
    int year = atoi(year_s);
    Date* date = new Date;
    date->day = day;
    date->month = month;
    date->year = year;

    return date;

}

int main()
{
    const char* str = "8.12.2025";
    Date* date[3];

    date[0] = new Date;
    date[1] = new Date;
    date[2] = new Date;
    char date1[10];
    scanf("%s", date1);
    char date2[10];
    scanf("%s", date2);
    char date3[10];
    scanf("%s", date3);


    date[0] = date_from_string(date1);
    date[1] = date_from_string(date2);
    date[2] = date_from_string(date3);

    cout << date[2]->month;
    return 0;

}
