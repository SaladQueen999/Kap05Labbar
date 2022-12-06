#include "functions.h"
int nyttTal (int n){
    return rand() % n;
}
int anvandarensGissning() {
    int gissning; 
    cin >> gissning; 
    return gissning;
}
void utforEnSpelomgang()
{
    cout << "Utför en spelomgång." << endl;
    const int n = 100;
    const int datornsTal = nyttTal(n);
    int antalUtfardaGissningar = 0;
    int gissning = 0; 
    cout << "Datorn tänker på ett tal mellan noll och "<< n << ". Gissa vilket!" << endl;// TODO
    cout << anvandarensGissning; 
    cin >> gissning;
    while (gissning!=datornsTal){
        if (gissning>datornsTal){
            cout << "För stor"; 
        }
        cout << "För lite" << endl; 
    }
    cout << "Korrekt"; 
    cout << endl;
}
void kap05IngangTillKap05GissaTal(){
cout << "kap 05 Ingång till gissa tal." << endl;
utforEnSpelomgang();
}
