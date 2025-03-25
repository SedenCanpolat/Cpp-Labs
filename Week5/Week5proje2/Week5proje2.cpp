// Week5proje2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;


double small_room_rate = 25;
double large_room_rate = 40;
double tax_rate = 0.18;

int main()
{
    cout << "Seden Canpolat" << endl;
    cout << "20070001044" << endl;
    int NumberOfSmallRooms, NumberOfLargeRooms;

    cout << "How many large and small rooms you want to have cleaned?" << endl;
    cin >> NumberOfSmallRooms;
    cin >> NumberOfLargeRooms;

    cout << "Estimate House Cleaning service:" << endl;
    cout << "Number of Small Rooms: " << NumberOfSmallRooms << endl;
    cout << "Number of Large Rooms: " << NumberOfLargeRooms << endl;
    cout << "Price per small Room: " << ::small_room_rate << endl;
    cout << "Price per large Room: " << ::large_room_rate << endl;

    double total = 0.00;
    double cost = NumberOfSmallRooms * small_room_rate + NumberOfLargeRooms * large_room_rate;
    double tax = cost * tax_rate;
    total = cost + tax;

    cout << "Cost: " << cost << endl;
    cout << "Tax: " << tax << endl;
    cout << "Total Cost: " << total << endl;

    cout << "Estimate House Cleaning service:" << endl;
    cout << "Number of Small Rooms: " << NumberOfSmallRooms << endl;
    cout << "Number of Large Rooms: " << NumberOfLargeRooms << endl;

   double small_room_rate = ::small_room_rate - (::small_room_rate / 100 * 20);
   double large_room_rate = ::large_room_rate - (::large_room_rate / 100 * 20);
   double tax_rate = 0.08;

    cout << "Price per small Room: " << small_room_rate << endl;
    cout << "Price per large Room: " << large_room_rate << endl;

    double total_cost = 0.00;
    int discount_cost = NumberOfSmallRooms * small_room_rate + NumberOfLargeRooms * large_room_rate;
    double tax_cost = discount_cost * tax_rate;
    total_cost = discount_cost + tax_cost;

    cout << "Cost: " << discount_cost << endl;
    cout << "Tax: " << tax_cost << endl;
    cout << "Total Cost: " << total_cost << endl;



}

