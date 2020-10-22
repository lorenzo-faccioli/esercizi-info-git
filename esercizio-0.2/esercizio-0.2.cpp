using namespace std;
#include <iostream>

int main () {
    int somma, prodotto, differenza, resto;
    float divisione;
    int n1,n2;
    cout<<"dimmi il primo numero "<<endl;
    cin>>n1;
    cout<<"dimmi il secondo numero"<<endl;
    cin>>n2;

    somma=n1+n2;
    prodotto=n1*n2;
    differenza=n1-n2;
    divisione=n1/n2;
    resto=n1%n2;

    cout<< "somma="<<somma<<endl;
    cout<< "prodotto="<<prodotto<<endl;
    cout<< "differenza="<<differenza<<endl;
    cout<< "divisione="<<divisione<<endl;
    cout<< "resto="<<resto<<endl;

    return 0;
}