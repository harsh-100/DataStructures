#include<iostream>
using namespace std ; 

int main() {
    int i,j,k=0,rows,n;

    cout<<"Enter the Number of Rows"<<endl;
    cin>>rows;
   
    n=(rows)/2;
    for (i=1;i<=rows;i++)
    {

        if(rows%2==0)    //checking if the rows are even or odd
        {
            if(i<=n) k++;
            if(i>=n+1)k--;
        }
        else{
            i<=n?k++:k--;
        }
    
        
        for(j=1;j<=rows;j++)
        {
            if(j>=n+1-k && j<=n-1+k)
            {
                printf("*");
               
            }
            else{
                printf(" ");
               
            }
        }
        printf("\n");
    }
}