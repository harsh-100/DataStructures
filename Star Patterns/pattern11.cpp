#include<iostream>
using namespace std ; 

int main() {
    int i,j,k,rows;

 cout<<"Enter the values of Row:=";
 scanf("%d",&rows);
 k = 2*rows-1;
    for (i=1;i<=rows;i++)
    {
        
        for(j=1;j<=2*rows-1;j++)
        {
            if(j>=i&&j<=k)
            {
                printf("*");
                
            }
            else{
                printf(" ");
                
            }
        }
        printf("\n");
        k--;
    }
}