#include<iostream>
using namespace std;
struct Node 
{
    int data;
    Node *link;
};
Node *head =NULL;

//For inserting the value in linked list at the beginning 
void insertBeg(int d)
{
    Node *ptr2 = new Node();
    ptr2 ->data = d;
    ptr2->link = head;  // link will point to the address of earlier first node 
    head = ptr2;
}

//For insertin the value in linked list at the end 
void insertEnd(int d)
{
    Node *ptr = new Node();
    ptr ->data = d;
    ptr ->link = NULL;

    if (head ==NULL)    //list is empty 
    {
        head = ptr ;
    }
    else 
    {
        Node *temp = head ;  //we have taken a temp to check for the null adress node  and we have initialize it with head 
        while(temp->link !=NULL)
        {
            temp = temp->link;
        }
        temp->link = ptr ; 
    }
}

int main(){

  Node *ptr = new Node();
  ptr ->data =2;
  ptr ->link = NULL;
  head = ptr;

//   entering the new node 
  insertBeg(4);
//   insertBeg(3);


  while(ptr != NULL) {  
        //Prints each node by incrementing pointer  
        printf("%d ", ptr->data);  
        ptr = ptr->link;  
    }  
  return 0 ;

}