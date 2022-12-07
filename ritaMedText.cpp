#include "functions.h"

void skrivMu1tip1ikationsmatris(){
    cout << "Multiplikationsmatris" << endl; 
    for (int i=1; i <=10; i++){
        for (int j=1; j<=10; j++)
        cout << i << " * " << j << " = " << j*i << endl;
    }
    cout << endl; 
}

void fyllRektangel(int hojd, int bredd){
    cout << "Fylld rektangel" << endl; 
    for (int i=0; i<hojd; i++){
        for (int j=0; j<bredd; j++);
        cout << "#"; }
    cout << endl; 
}
void ritaRektangel(int hojd, int bredd){
    cout << "Rita rektangel" << endl; 
    for (int i; i<=hojd; hojd++){

        for (int j; j<=bredd; bredd++){
            if (i==1 ||i==5 ||j==1 || j==5)
            cout << "*";
            else 
            cout << " "; 
        }
    }

    cout << endl;
}
void fyllTriangel(int hojd){
    cout << "Fylld Triangel" << endl; 
    cout << "Number: ";
    cin >> hojd;
    for (int i = 0; i < hojd; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "#";
        }
        cout << endl;
    cout << endl;
}
}
void fyllCirkel(int radie){
    cout << "Fylld cirkel" << endl; 
    //TOOD
    cout << endl;
}
void ingangTillKap05RitaMedText(){
    cout << "Ingånmg till rita med text" << endl; 
    cout << endl;
    skrivMu1tip1ikationsmatris( ) ;
    fyllRektangel(4, 20) ;
    cout << endl;
    ritaRektangel(4, 20) ;
    cout << endl;
    fyllTriangel(5);
    cout << endl;
    fyllCirkel(5) ;
    cout << endl;
}

int main(){
    ritaRektangel(5,5);
}