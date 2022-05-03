#include<iostream>
using namespace std ; 

int main() {
    int i,j,k;

        
    for (i=1;i<=7;i++)
    {
        k=8-i;
        
        for(j=1;j<=7;j++)
        {
           
               
            if(j<=8-i)                      //very interesting loagic ..i love it ..it took me 20 mins for this to think about :)
            {
                 k--;
                printf("%d",k);
            }
            else{
                printf(" ");
               
               
            }
        }
        printf("\n");
    }
}