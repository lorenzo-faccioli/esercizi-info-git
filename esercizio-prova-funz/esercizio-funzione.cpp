#include <iostream>
using namespace std;


int powint(int x,int y){
    int result=1;
    for(int X=0;x<y;x++){
        result *=x;
        }
    return result;
}

int main (){
    int Num, Num2;
    cout<<"dimmi il primo numero";
    cin>>Num;
    cout<<"dimmi il secondo numero";
    cin>>Num2;

    cout<<powint(Num,Num2);

}

