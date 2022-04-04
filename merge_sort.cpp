#include<iostream>
#include<vector>
using namespace std;


//the merge function for the merging the two different arrays .(by using a temp dynamic array)
void merge(vector<int>&array,int s,int e)
{
  int i = s;
  int m = (s+e)/2;
  int j = m+1;

  vector<int>temp;
  while(i<=m and j<=e)
  {
      if(array[i]<array[j])
      {
          temp.push_back(array[i]);
          i++;
      }
      else{
          temp.push_back(array[j]);
          j++;
           }
  }
    while(i<=m){
        temp.push_back(array[i++]);
    }
    while(j<=e){
        temp.push_back(array[j++]);
    }
    int k=0;
    for (int idx=s;idx<=e;idx++){
        array[idx]=temp[k++];
    }
    return ; 
}

//the mergesort fucntion for recursion 
void mergeSort(vector<int>&arr , int s , int e)
{
  if (s>=e)
  {
      return;

  }

  int mid = (s+e)/2;
  mergeSort(arr,s,mid);
  mergeSort(arr,mid+1,e);
  return merge(arr,s,e);

}
int main(){
    vector<int>arr{10,5,2,7,6,4};
    int s= 0;
    int e =arr.size()-1;
    mergeSort(arr,s,e);
    for (int x:arr)
    {
        cout<<x<<",";
    }
}