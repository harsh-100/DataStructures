#include<iostream>
using namespace std ; 

int main() {
    int i,j,k;

        k=1;
    for (i=1;i<=3;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=4-i&&j<=2+i)
            {
                printf("%d",k);
                k++;
                // j<4?k++:k--;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
      
    }
}