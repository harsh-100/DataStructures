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
       Complex operator - (){
            Complex temp;
            temp.a = -a ;
            temp.b = -b ;
            return temp;
       }
};
int main(){
  //create the object for the class complex
   Complex c1, c2,c3;
   c1.setData(3,4);
   c2.setData(2,2);
   c3 =-c1;             //;
   c3.showData(); 
   c3 = -c2;            //it is a case of the unary operator so it is same as c2.operator-();  >> don't write it as c3 = c2 - ; no , never....
   c3.showData();

}