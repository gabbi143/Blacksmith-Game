#ifndef BLKCMITH_H_INCLUDED
#define BLKCMITH_H_INCLUDED

using namespace std;

class Inventory {
    public:
        int metals;
        int finishedSwords;
        int normal, rare, legendary;

    Inventory (int m, int fs, int n, int r, int l) {
        metals = m;
        finishedSwords = fs;
        normal = n;
        rare = r;
        legendary = l;
    }

    void showMenu();
    void addMetals();
    void subtractMetal();
    void findMetal();
    void forgeMetal();
};

void findingMetal();
void metalClang();



#endif // BLKCMITH_H_INCLUDED
