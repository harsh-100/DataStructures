#include<iostream>
using namespace std;
class Complex
{
    private:
    int a ,b ;    //data members
    public:
        void setData(int x, int y){      //member function 
            a=x;
            b=y;
        }
        void showData(){
            cout<<"\na :"<<a<<" \nb :"<<b;
        }
        Complex operator +(Complex c){
            Complex temp;
            temp.a = a +c.a;
            temp.b = b +c.b;
            return temp;

        }
};
int main(){
  //create the object for the class complex
   Complex c1, c2,c3;
   c1.setData(3,4);
   c2.setData(4,5);
   c3 = c1+c2;             // this line means c1.operator+(c2);
   c3.showData(); 

}