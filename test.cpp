#include<iostream>
#include "stdlib.h"
using namespace std;
class Node{
    public:
    int data;
    Node *next=NULL;
};
Node* Insert()
{           /*this is not an usual insert function but it creates a linked list with the data prompted every time and returns head or root node of the linked list*/
    int n;  //it takes the no of nodes user wants to add
    cout<<"Give the number of data Nodes:  ";
    cin>>n;
    
    Node *root,*head=NULL;//here head keeps the starting node while root adds new item node to the list
    root=NULL;
    for(int k=0;k<n;k++)
    {
            cout<<"GIve the data no  "<<k<<"  ";//taking the data 
            Node *temp=(Node*)malloc(sizeof(Node));//tempoorary allocation of node memory
            cin>>temp->data;
            temp->next=NULL;
            if(head==NULL){
                root=temp;
                head=root;

            }
            root->next=temp;
            root=root->next;
    }
    return head;

}
void print(Node *root)
{//will print the data point of linked list associated with each node
    Node *temp=root;
    while(temp)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

Node * Merge(Node *root1,Node *root2)
{
    //will merge two sorted linked list recursively
    if(root1==NULL)
    return root2;
    else if(root2==NULL)
    return root1;
    else{
         Node *head=NULL;//head created to keep trak of what node to return 
        if(root1->data<=root2->data){
          head=root1;
         head->next=Merge(root1->next,root2);//adding next node as per the sorting value or appropriate position in linked list
         return head;
        }
        else{
            head=root2;
             head->next=Merge(root1,root2->next);//same above 
             return head;

        }
}
}
int main()
{
    Node *root=Insert();//creating first linked list
    print(root);//showing what data have been given
    Node *root1=Insert();
    print(root1);
    print(Merge(root,root1));//printing the merged linked list 
    //HORRAY IT HAS WORKED FINE

}