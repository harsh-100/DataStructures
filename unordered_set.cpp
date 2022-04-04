#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std ; 

int main()
{
  //set is a collection of keys 
  //each insertion is of o(1)

   unordered_set <int >s {1,2,3,4,11,15,0};
  //let's insert the element 
   s.insert(111);

   //erase also takes 0(1);
   s.erase(11);

   int key ;
   cout<<"Enter the Key:=";
   cin>>key;

   if (s.find(key)!=s.end()){
       cout<<"Key is Present"<<endl;
   }
   else{
       cout<<"Key is not present"<<endl;
   }

   for (auto x : s)
   {
       cout<<x<<","<<endl;
   }
    return 0 ;
}