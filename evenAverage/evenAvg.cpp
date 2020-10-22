#include <iostream>
using namespace std;

int main (){
    int in;
    int sum=0;
    int n=0;
    cout<<"Inserisci  numero ";
    cin>> in;
    while(in !=0){
        if(in%2==0){
            sum += in;
            n++;
        }
    cout<<"Inserisci numero: ";
    cin>> in;
    }
cout<<"risultato:"<< sum/n;
return 0 ;
}
