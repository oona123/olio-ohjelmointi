/*Tee tehtävän 1 ohjelma oman funktion sisälle niin, että sitä kutsutaan main-funktiosta.
Muuta toteuttamaasi funktiota siten, että funktiolle annetaan parametriksi korkein etsittävä luku,
 josta funktio arpoo satunnaisluvun. Esimerkiksi, jos tämä luku on 40, niin funktio arpoo luvun väliltä 1-40.
Laske myös montako arvausta pelaajalla meni ja palauta tämä tieto funktiosta paluuarvona.
Pelin loputtua tulosta arvausten määrä ruudulle main funktiosta paluuarvoa hyödyntäen.
 Käytä funktion nimenä ja prototyyppinä: int game(int maxnum);*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum)
{
    srand(time(NULL));
    int satluku = rand() % maxnum;
    int arvaus;
    int montakoarvausta = 1;
    cout << "Arvaa luku"<< endl;
    cin >> arvaus;
    while (satluku != arvaus)
    {
        if (arvaus<satluku) cout << "luku on suurempi kuin antamasi luku" << endl;
        if (arvaus>satluku) cout << "luku on pienempi kuin antamasi luku" << endl;
        cout << "Arvaa uudestaan"<< endl;
        cin >> arvaus;
        montakoarvausta = montakoarvausta+1;
    }
    if (arvaus==satluku) cout << "oikea vastaus!" << endl;
    return montakoarvausta;
}

int main()
{
    int montakoarvausta = game(10);
    cout << "arvaustesi määrä :" << montakoarvausta << endl;
    return 0;
}
