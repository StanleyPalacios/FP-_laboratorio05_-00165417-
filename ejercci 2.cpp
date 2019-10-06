
#include <iostream>
using namespace std;
int main (){
    int x,y,z,num,cont;
    x=0;
    y=1;
    z=0;
    cout<<"digite el numero de elementos de la serie";
    cin>>num;
    cout<<"1,";
    for(cont=1;cont<num;cont++){
    	z=x+y;
    	cout<<z<<",";
    	x=y;
    	y=z;
	}
	cin.get();
	return 0;
	}
