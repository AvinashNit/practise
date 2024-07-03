#include<iostream>
#include "stdlib.h"
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void insert(Node *root)
{
    Node *temp1=root;
    char y='y';
    Node *temp;
    while(y=='y')
    {
        cout<<"Give the data field  ";
        int data;
        cin>>data;
        temp=(Node*)malloc(sizeof(Node));
        temp->data=data;
        temp->next=NULL;
        temp1->next=temp;
        temp1=temp1->next;
        cout<<"WAnt to add more  (y/n)? ";
        cin>>y;
    }
    // cout<<"address corresponding to values "<<temp->data<<temp;
}
void print(Node *root)
{
    Node *temp=root;
    while(temp){
        cout<<temp->data<<" \t";
        temp=temp->next;
    }
}
Node* Reverse(Node *root,Node *pprev=NULL)
{
    Node *main=root,*next=root->next;
    if(next==NULL)
    {
         main->next=pprev;
         return main;
    }
    Node *final1=Reverse(root->next,root);
    root->next=pprev;
    return final1;
}
    int main()
{
    Node *root=(Node*)malloc(sizeof(Node));
    root->data=90;
    root->next=NULL;
    insert(root);print(root);
    Node * x=Reverse(root);
    // cout<<"after reversing the linked list we have "<<x;
    print(x);

}
