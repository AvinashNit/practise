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
Node* ReversePair(Node *root)
{
    if(root==NULL)
    return NULL;
    if(root->next==NULL)
    return NULL;
    Node *temp=root->next->next;
    root->next->next=root;
    root=root->next;
    root->next->next=ReversePair(temp);
    return root;

}
int main()
{
    Node *root=Insert();
    print(root);
    print(ReversePair(root));
}