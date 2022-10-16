//Sarthaknerd
#include<bits/stdc++.h>
using namespace std;


class vechile{
    public:
     string brand ="tata";
     void honk(){
        cout<<"single honk"<<endl;
     }


};

class car:public vechile{
    public:
    string model = "harrier";
};
int main()
{
  car mycar;
  mycar.honk();
  cout<<mycar.model<<endl;
  cout<<mycar.brand<<endl;
 
}
