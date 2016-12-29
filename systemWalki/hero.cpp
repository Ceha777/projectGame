#include "hero.h"
#include <iostream>
using namespace std;
hero::hero(int x)
{
    hp = x;
}

void hero::restoreHp(int x){
    if (potions > 0){
        hp += x;
        cout << endl << "uleczenie za " << x << " punktow" << endl;
        potions--;
        cout << "liczba potionow: " << potions << endl;
    }
    else
        cout << "nie masz potionow" << endl;
}
void hero::damage(int x){
    hp = hp - x;
}
void hero::attack(){

}
int hero::viewHp(){
    return hp;
}


