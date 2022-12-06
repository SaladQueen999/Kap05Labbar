#include "functions.h"

// Returnerar tel mellan 0 och n (exklusive n) 
int gissning;
int nyttal (int n){
    return rand() % n;
}
int anvandarensGissning(){
    cin >> gissning; 
    cout << "Din gissning: " << gissning << endl; 
}

void utfortEnSpelomgang(){
    cout << "Utför en spelomgång." << endl;
    const int n = 100; 
    const int datornsTal = nyttal(n);
    int antalUtfardaGissnignar =0; 
    cout << "Datorn tänker på ett tal mellan noll och " << n << ". Gissa vilket!" << endl;
    anvandarensGissning(); 
    while (gissning != datornsTal){
        if (gissning > datornsTal)
            cout << "För stort" << endl;
            cout << "Försök igen: ";
            cin >> gissning; 
        if (gissning < datornsTal)
            cout << "För litet" << endl;
            cout << "Försök igen: ";
            cin >> gissning;
    }
    cout << "Rätt" << endl; 
    
}

int main(){
    utfortEnSpelomgang();
}