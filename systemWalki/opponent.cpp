#include "opponent.h"
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

opponent::opponent(int x, string y){
    atk = x;
    name = y;
}

int opponent::attack(){
    srand(time(0));
    trueAtk = 1 + (rand() % atk);
    return trueAtk;
}

void opponent::message(){
    cout << "zaatakowal cie " << name << endl;
    cout << "odniosles " << trueAtk << " pkt obrazen" << endl;
}
