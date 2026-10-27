#include <iostream>
#include<string>
using namespace std;
template <class T1 = int, class T2 = string, class T3 = float>
class HeroStats
{
    T1 level;
    T2 role;
    T3 health;

public:
    HeroStats(T1 a, T2 b, T3 c)
    {
        level = a;
        role = b;
        health = c;
    }
    void display()
    {
        cout << "Level :- " << level << endl
             << "Role :- " << role << endl
             << "Health :- " << health << endl;
    }
};
int main()
{
    HeroStats<> defaultHero(10, "Mage", 120.5);
    defaultHero.display();
    cout << endl;
    HeroStats<string, int, double> customHero("Max Level", 99, 9999.99);
    customHero.display();
    return 0;
}