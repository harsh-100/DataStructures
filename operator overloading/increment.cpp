//understanding the pre-increment and post increment

#include<iostream>
using namespace std;
class Complex{
  private:
    int a , b;
   public:
      void setData(int x,int y){
          a = x;
          b = y;
      }
      void showData(){
          cout<<"\na:"<<a<<"\nb:"<<b<<endl;
      }
      Complex operator ++(){        //funciton for the pre-increment
          Complex i;
          i.a = ++a;
          i.b = ++b;
          return i;
      }
      Complex operator ++(int){             //pass just the integer for post (c1++) increment not to do anything but just so that compiler can differntiate
          Complex i;                   
          i.a = ++a;
          i.b = ++b;
          return i;
      }

};
int main(){

Complex c1, c2;
c1.setData(3,4);
c2 = ++c1;
cout<<"This is the pre-increment order"<<endl;
c2.showData();
cout<<"The c1 is :-";
c1.showData();

//this is for the post increment 
c2 = c1 ++;
cout<<"This is the post-increment order"<<endl;
c2.showData();
cout<<"The c1 is :-";
c1.showData();

}