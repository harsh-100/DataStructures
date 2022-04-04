#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<list>
using namespace std ;
int main()
{
   map<string, list<string>>phonebook;    //created a list to store the multiple phone numbers and string because someone can add +91 or +44 etc.
   phonebook["Prateek"].push_back("1131111112");
   phonebook["Prateek"].push_back("1154111112");
   phonebook["Prateek"].push_back("1451111112");


   phonebook["Krishna"].push_back("121111112"); 
   phonebook["Krishna"].push_back("131111112");
   phonebook["Krishna"].push_back("141111112");

   for(pair<string,list<string>>check :phonebook){
        cout<<check.first<<endl;
            for (string i :check.second) {
              cout<<"-"<<i;
               cout<<endl;
            }
            
            
   }

   return 0 ;
}