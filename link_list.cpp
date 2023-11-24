#include<iostream>
using namespace std;


//creating node
class Node
{
public:
    int val;
    Node*next;

    Node(int data) //constructor
    {
        val = data;
        next = NULL;
    }
};

// Time Complexity O(1)
void insertAtHead(Node* &head,int val)
{
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}


// Time complexity O(n)
void insertAtTail(Node* &head, int val)
{
    Node* new_node = new Node(val);
    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

// Time complexity O(n)
void insertAtAnyPosition(Node* &head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head,val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;

    while(current_pos != pos -1)
    {
        temp = temp->next;
        current_pos++;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

// Time complexity O(n)
void updateAtposition(Node* &head, int val, int pos)
{
    Node* temp = head;
    int current_pos = 0;

    while(current_pos != pos)
    {
        temp = temp->next;
        current_pos++;
    }
    temp->val = val;
}

// Time complexity O(1)
void deleteAtHead(Node* &head)
{
    Node* temp = head;
    head = head->next;

    free(temp);
}

// Time complexity O(n)
void deleteAtTail(Node* &head)
{
    Node* second_last = head;

    while(second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
    Node* temp = second_last->next;
    second_last->next = NULL;

    free(temp);
}

// Time complexity O(n)
void deleteAtAnyPosition(Node* &head, int pos)
{
    if(pos == 0)
    {
        deleteAtHead(head);
    }

    int current_pos = 0;
    Node* prev = head;

    while(current_pos != pos-1)
    {
        prev = prev->next;
        current_pos++;
    }

    Node* temp = prev->next;

    prev->next = prev->next->next;
    free(temp);
}


//print list
void display(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int main()
{
    Node* head = NULL;
    insertAtHead(head,4);
    //display(head);
    insertAtTail(head,8);
    //display(head);
    insertAtAnyPosition(head,10,1);
    display(head);
    //updateAtposition(head, 99, 0);
    //display(head);
    //deleteAtHead(head);
    //display(head);
    //deleteAtTail(head);
deleteAtAnyPosition(head, 1);
    display(head);


}
