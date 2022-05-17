#include<iostream>
using namespace std;

class Box{
    private :
      int l,b,h;
    public:
        void setDimension(int l,int b,int h){
            this->l=l;
            this->b=b;
            this->h=h;
        }
        void showDimension(){
            cout<<"\nl="<<l<<"\nb="<<b<<"\nh="<<h;
        }
};

int main(){
    Box *p,smallBox ;
    smallBox.setDimension(12,13,14);
    smallBox.showDimension();

    cout<<"\n checking with pointer p"<<endl;
    // p= &smallBox;
    // p->setDimension(10,12,13);
    // p->showDimension();

 
    return 0;
}