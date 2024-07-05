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
int sumOfNodes(Node *root,int k)//function to add last n nodes of linked list
{
    while(true)
    {
        int sum=0;
        int n=k+1;
        Node *temp=root;
        while(n)
        {
                if(temp==NULL)//if iterating nodes comes to an end
                return sum;
            sum=sum+temp->data;
            temp=temp->next;
            n=n-1;
        }
        root=root->next;//next iteration after found that the iteration has not ended 
    }
}
int main()
{
    Node *root=Insert();
    print(root);
    cout<<sumOfNodes(root,2);
}