#include<iostream>
using namespace std ;

struct Node
{
    int data;
    Node *link;
};
Node *head = NULL;

void deleteBeg()   //deletion from the beginning 
{
    if(head==NULL)
    {
        cout<<"List is Empty";
   }
    else 
    {
        Node *ptr = head;
        head =  head->link;
        free(ptr);


    }
}

 void deleteEnd()   //deletion from the end of the linked list 
 {
     Node *prev , *ptr; 
     if (head ==NULL)
     {
         cout<<"List is empty";
     }
     else 
     {
         if(head->link==NULL)
         {
             ptr = head ; 
             head = NULL;
             free(ptr);
         }

         else 
         {
             ptr = head;
             while(ptr!=NULL)
             {
                 prev = ptr;
                 ptr= ptr->link;
               }
               prev->link = NULL;
               free(ptr); 

         }
     }

 }

int main()
{
    Node *ptr;
    ptr ->data=2 ;
    ptr ->link =NULL;
    head = ptr;
   
    deleteBeg();

    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr = ptr->link;
    }
    return 0 ;
}