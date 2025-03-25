// Week5proje3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

class MyDate {
public:            
    int day;        
    string month;  
    int year;
};

class MyTime {
public:
    int hour;
    int minute;
    int second;
};

void printDate(MyDate x, MyTime y) {
    cout << x.day << " " << x.month << " " << x.year << endl;
    cout << y.hour << " " << y.minute << " " << y.second << endl;
}

void printDate(MyDate x) {
    cout << x.day << " " << x.month << " " << x.year << endl;
}

void Sum(int x, int y) {
    cout << x + y << endl;
}

void Sum(double x, double y) {
    cout << x + y << endl;
}


int main()
{
    Sum(5, 4);
    Sum(5.4, 6.4);

    cout << "Seden Canpolat" << endl;
    cout << "20070001044" << endl;

    MyDate date;
    date.day = 10;
    date.month = "March";
    date.year = 2023;
    MyTime time;
    time.hour = 16;
    time.minute = 34;
    time.second = 20;

    printDate(date, time);
    printDate(date);




}

