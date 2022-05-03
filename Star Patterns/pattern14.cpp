#include<iostream>
using namespace std ; 

int main() {
    int i,j,k,p;

        k=6;
    for (i=1;i<=9;i++)
    {
        p=1;
        i<5?k--:k++;
        
        for(j=1;j<=5;j++)
        {
           
               
            if(j>=k)                      
            {
                 
                printf("%d",p);
                p++;
            }
            else{
                printf(" ");
               
               
            }
        }
        printf("\n");
    }
}