#include<iostream>
using namespace std ; 

int main() {
    int i,j,k,rows;
    cout<<"Enter the Number of rows";
    
     scanf("%d",&rows);       


    for (i=1;i<=rows;i++)
    {
        if(rows%2==0)
        {
            if(i<=rows/2)
            {
               k++;

            }                                   // this is done because it was printing 1 less row for even numbers , now i have kept "k"same for rows/2 and rows/2 +1 ..
            if(i>rows/2+1)
            {
                k--;
            }
        }
        else {i<=(rows+1)/2?k++:k--; }
        
        for(j=1;j<=rows/2 +1;j++)
        {
            if(j<=k)
            {
                printf("*");
            }   
            else {
                printf(" ");
               
            }
        }
        printf("\n");
    }
}