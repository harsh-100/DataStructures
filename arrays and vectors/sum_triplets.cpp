#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector <vector<int>> triplets(vector<int>arr, int target_sum)
{
    // logic for sorting the array
    sort(arr.begin(),arr.end()); 
    vector<vector<int>> result;
    int n = arr.size();
  // Pick every element a[i] and check it pair with J and K (two pointer approach)
   
   for (int i=0 ; i<=n-3;i++)
   {
      int j = i+1; 
      int k = n-1;

      while (j<k)
      {
          int current_sum = arr[i];
          current_sum += arr[j];
          current_sum +=arr[k];

          if(current_sum == target_sum)
          {
              result.push_back({arr[i],arr[j],arr[k]});
              j++;
              k--;
             }

             else if (current_sum>target_sum){
                 k--;
                  
              }

              else if(current_sum<target_sum)
              {
                  j++;
              }


      }
   }
   return result ; 
} 



int main()
{


    vector<int>arr{1,2,3,4,5,6,7,8,9,15};
    int s =18;
    auto results = triplets(arr, s);

    for(auto v : results ){
        for (auto num : v)
        {
            cout << num<<", ";
        }
        cout<<endl;

    }

    return 0;

}
