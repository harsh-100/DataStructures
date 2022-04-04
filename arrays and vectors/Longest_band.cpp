#include<iostream>
#include <vector>
#include<unordered_set>
using namespace std ;
int largestBand(vector<int>arr)
{
    int n = arr.size();
    unordered_set<int>s;
    //to put the data inside the unordered_set
    for( int x : arr){
        s.insert(x);
    }
    int Largest_length = 1;
    //iterate over the element 
    for (auto element : s)
    {
        int parent = element-1;

        if(s.find(parent)==s.end())   //this means that earlier element is not available so we will form the band now
        {
                int next_num = element+1;
                int cnt =1;
                while(s.find(next_num)!=s.end())  //search for the next element until it reaches the end
                {
                    next_num++;
                    cnt++;  //this is the count of our band which is increasing with every number we find
                    
                }

                if(cnt>Largest_length)
                {
                    Largest_length = cnt;
                }

        }
    
    
    }
    return Largest_length;

}

int main()
{
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};   //largest band is 0-1-2-3-4-5-6-7
    cout<<largestBand(arr);
    return 0 ; 
}
