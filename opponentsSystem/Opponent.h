#ifndef OPPONENT_H
#define OPPONENT_H
#include <iostream>
#include <string>
using namespace std;

class Opponent
{
    public:
        Opponent(string n, int a, int h);

    protected:

    private:
        string name;
        int attack;
        int health;
};

#endif // OPPONENT_H
