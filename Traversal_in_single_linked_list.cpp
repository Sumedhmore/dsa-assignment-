#include <iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int data){
        val = data;
        next = NULL;

    }

};

void insertAtHead(node* &head,int val)
{
    node* new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(node* &head,int val)
{
    node* new_node = new node(val);

    node* temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    //temp has reached last node
    temp->next = new_node;
}

void insertAtPosition(node* &head, int val,int pos)
{
    if(pos==0){
       insertAtHead(head,val);
        return;
    }

    node* temp = head;
    int current_pos =
}
void display(node* head){
    node* temp=head;
    while(temp!= NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head = NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,3);
    display(head);




    return 0;
}
