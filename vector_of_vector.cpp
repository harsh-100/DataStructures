#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<vector<int>> arr={
      {1,2,3},
      {4,5,6},
      {7,8,9,10},
      {11,12}};


      arr[0][1]+=10;  //we can also update the value in 2d vector

   for (int i=0 ; i<arr.size();i++){
        for (int j :arr[i])
        {
            cout <<j<<",";
        }
        cout<<endl;
   }

      return 0;
}