#ifndef HERO_H
#define HERO_H


class hero
{
    public:
        hero(int x);
        void restoreHp(int x);
        void damage(int x);
        void attack();
        int viewHp();
    protected:
    private:
    int hp;
    int potions = 2;
};

#endif // HERO_H
