#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Nincs alulvonás
    int *b = new int[NELEMENTS];
    //nincs pontosvessző sor végén, nem jó az aposztrof
    std::cout << '1-100 ertekek duplazasa'
    //hiányzik a léptetés
    for (int i = 0;)
    {
        // 0-99-ig dupláz, nem pedig 100-ig
        b[i] = i * 2;
    }
    // ciklusvezérlő hibás, hamis lesz és nemlép be a ciklusba
    for (int i = 0; i; i++)
    {
        //magát az értéket nem írja ki, nincs pontosvessző sor végén
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // változónak nincs alap értéke
    int atlag;
    //hiányzik a pontosvessző
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //nincs pontosvessző
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
