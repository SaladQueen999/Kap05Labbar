#include "functions.h"

void kylskapMedWhileTrue(){
    cout << "Kylskåp med while true" << endl;
    while(true){
        double num; 
        double temp = -273;
        cout << "Enter a tmep: "; 
        cin >> num; 
        if (num >= temp){
            if (num <=2)
                cout << "För Kallt!" << endl; 
            else if (num >= 8) 
                cout << "För varmt!" << endl;
            else if (num > 2 && num < 8)
                cout << "Lagom" << endl; 
         } 
         if (num < temp)
                break;

    }
    cout << "Lämnar kylskåsloop." << endl;
}

void kylskapMedWhileVillkor(){
    cout << "Kylskåp med While villkor" << endl;
    double temp = 0; 
    while (temp>-273){
        cout << "Enter temp: "; 
        cin >> temp;
        if (temp <= 2 && temp>-273)
        cout << "För kallt!" << endl; 
        if (temp >= 8) 
        cout << "För varmt" << endl;
    }
    cout << "Lämnar loopen nu ..." << endl; 
 }
void ingangTill_funkltion(){
    kylskapMedWhileTrue();

}
int main(){
kylskapMedWhileVillkor();
}