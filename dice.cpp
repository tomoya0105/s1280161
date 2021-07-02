#include <iostream>
#include <random>
using namespace std;

int main()
{
    cout << "Rolling the dice..." << endl;

    random_device rnd;
    mt19937 mt1(rnd());
    mt19937 mt2(rnd());
    uniform_int_distribution<> rand6(1, 6);

    int dice1 = rand6(mt1);
    int dice2 = rand6(mt2);

    cout << "Die 1: " << dice1 << endl;
    cout << "Die 2: " << dice2 << endl;
    cout << "Total value: " << dice1 + dice2 << endl;
}