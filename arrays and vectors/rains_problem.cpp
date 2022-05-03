#include<iostream>
#include<vector>
using namespace std ;

int trappedWater(vector<int>heights)
{

    int n = heights.size();
    if(n<=2){
        return 0 ;
    }

    //left array and right array 
    

}
int main()
{
    vector<int> water={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trappedWater(water)<<endl;
    return 0 ;

}