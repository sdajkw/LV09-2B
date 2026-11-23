
//Benjamin Jan Perhoč, 2B

#include <iostream>
#include <vector>
using namespace std;

int prolaz(int n, int p, vector<int> polje) {
    int prolaz = 0;

    for (int i = 0; i < n; i++) {
        if (polje[i] >= p)
            prolaz++;
    }

    return prolaz;
}

int poz(int n, vector<int> polje) {
    int naj = 0;

    for (int i = 0; i < n; i++) {
        if (polje[i] > polje[naj])
            naj = i;
    }
    return naj + 1;
}

int najveci(int n, vector<int> polje) {
    int naj1 = 0;

    for (int i = 0; i < n; i++) {
        if (polje[i] > polje[naj1]) {
            naj1 = i;
        }

    }
    return polje[naj1];
}

int main()
{
    int n, p;
    cin >> n >> p;

    vector<int> polje(n);

    for (int i = 0; i < n; i++) {
        cin >> polje[i];
    }

    cout << "\nNAJBOLJI " << najveci(n, polje);
    cout << "\nPOZICIJA " << poz(n, polje);
    cout << "\nPROLAZ " << prolaz(n, p, polje);

    // A: poz(polje) vraća prvu poziciju najboljeg rezultata jer uspoređujem s >, a sa >= bi dobio zadnju
    // prolaz(polje, p) broji koliko ih ima bar p bodova
 
    // B: test 5 60 | 10 90 30 90 20 DAJE 90, 2, 2
    // B: test 3 100 | 10 20 30 DAJE 30, 3, 0
}