#include<iostream>
#include<unordered_map>
using namespace std ; 

int main()
{
    unordered_map<string,int> menu;   // key = string , and value = int 
    
    //insert the value in the key- value pair in hashtable
    menu["maggi"] = 15;
    menu["colddrink"] = 20;
    menu["pizza"] = 99;
     menu["Roti"] = 150;
    menu["CHatni"] = 20;
    menu["Burger"] = 199;

   // update the price of the menu 
   menu["pizza"] = (1+0.2)*menu["pizza"];
   menu.erase("pizza");

    string item;
    cout<<"Enter the string :";
    cin>>item;

    if(menu.count(item)==0)
    {
        cout<<item<<" is not present"<<endl;
    }
    else 
    {
        cout<<item<<" is present in the menu and its price is "<<menu[item]<<endl;
    }

    //Iterate over the key-value pair by using the pair class (this is the inbuild class in )
    
    for (pair<string, int >check :menu)
    {
        cout<<check.first<<"-"<<check.second<<endl;
    }

    return 0;
}
