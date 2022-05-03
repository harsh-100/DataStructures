#include<iostream>
using namespace std ; 

int main() {
    int i,j,k=5,x=0;

        
    for (i=1;i<=7;i++)
    {
        i<=4?k--:k++;
        i<=4?x++:x--;
        
        for(j=1;j<=7;j++)
        {
           
               
            if(j<=4-k||j>=1+x&&j<=k+2||j>=k+4)                      //very interesting loagic ..i love it ..it took me 20 mins for this to think about :)
            {
                 
                printf("*");
            }
            if(j==i)
            {
                if(j==4)continue;
                printf("\\");
            }
            if(j==8-i){
                printf("/");
            }
            else{
                printf(" ");
               
               
            }
        }
        printf("\n");
    }
}