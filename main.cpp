#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Nincs alulvonás
    int *b = new int[N_ELEMENTS];
    //nincs pontosvessző sor végén, nem jó az aposztrof
    std::cout << "1-100 ertekek duplazasa"<<std::endl;
    //hiányzik a léptetés
    for (int i = 0; i < N_ELEMENTS;i++)
    {
        // 0-99-ig dupláz, nem pedig 100-ig
        b[i] = (i+1) * 2;
    }
    // ciklusvezérlő hibás, hamis lesz és nemlép be a ciklusba
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //magát az értéket nem írja ki, nincs pontosvessző sor végén
        std::cout << "Ertek:"<<b[i]<<std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // változónak nincs alap értéke
    int atlag=0;
    //hiányzik a pontosvessző
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //nincs pontosvessző
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "sussy sussy amogussy" << std::endl;
    return 0;
}
