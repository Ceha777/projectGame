#include <iostream>
#include <string>
#include "hero.h"
#include "potion.h"
#include "opponent.h"

using namespace std;

int main()
{
    hero player(100);
    potion minorHealth(100);
    opponent goblin(20, "goblin");
    int wybor;
    for (int i = 0; i<100; i++){
        wybor = 0;
        while(wybor != 2){
            cout << "twoj bohater ma " << player.viewHp() << " hp" << endl;
            cout << "Podejmij krok: \n 1.Wypij magiczny eliksir \n 2.Idz dalej \n ";
            cin >> wybor;

            switch (wybor){
                case 1:
                    player.restoreHp(minorHealth.add());
                break;
                case 2:

                break;
                default:
                break;
            }
        }
        player.damage(goblin.attack());
        goblin.message();

        if(player.viewHp() <= 0){
            cout << "Game Over";
            break;
        }

    }
    return 0;
}
