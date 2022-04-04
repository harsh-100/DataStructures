#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;

int main()
{
  //Run time of a Sorting program

  int n ;
  cin>>n;

  vector<int>arr(n,0);

  for (int i =0; i<n;i++)
  {
      arr[i]=n-i;
  }

  //sort this array
  auto start_time = clock();
  sort(arr.begin(),arr.end());
  auto end_time = clock();

  cout<<"For N elements , sorting time "<<end_time-start_time;

}