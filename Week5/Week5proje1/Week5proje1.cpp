// Week5proje1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
#include <time.h>
#define SIZE 30

int *generate_values() {
    int *value = (int *)malloc(sizeof(int) * SIZE);

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        value[i] = rand() % 100 - 10;
    }
   
    return value;
}

int Cuboid(int x = 5, int y = 6, int z = 7) {
    return x * y * z;
}



int main()
{
    int index = rand() % 30;
    int *arr = generate_values();
    cout << "Seden Canpolat" << endl;
    cout << "20070001044" << endl;
    cout << Cuboid() << endl;
    cout << Cuboid(arr[index], 6, 7) << endl;
    cout << Cuboid(arr[index], arr[index], 7) << endl;
    cout << Cuboid(arr[index], arr[index], arr[index]) << endl;




}
