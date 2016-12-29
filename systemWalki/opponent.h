#ifndef OPPONENT_H
#define OPPONENT_H
#include <string>
using namespace std;
class opponent
{
    public:
        opponent(int x, string y);
        int attack();
        void message();
    protected:

    private:
        int atk;
        int health;
        string name;
        int trueAtk;
};

#endif // OPPONENT_H
