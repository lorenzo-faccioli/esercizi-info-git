#include <iostream>

using namespace std;
int main (){
    int prodotto=1;
    int i=1, n;
    cout<<"quanti numeri vuoi moltiplicare?"<<endl;
    cin>>n;
    while(i<=n){
	    int num;
	    cout<<"dimmi il numero";
	    cin>>num;
	    prodotto= prodotto*num;
        i++;
    }
 
    cout<< "prodotto ="<< prodotto;

    return 0;
}