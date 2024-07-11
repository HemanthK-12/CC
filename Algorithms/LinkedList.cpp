// #include <iostream>

// struct Node {
//     int data;
//     Node* next;
// };

// void traverseLinkedList(Node* head)
// {
//     Node* current = head;
//     while (current != nullptr) {
//         std::cout << current->data << " ";
//         current = current->next;
//     }
//     std::cout << std::endl;
// }

// int main()
// {
//     Node* head = new Node{ 1 };
//     Node* second = new Node{ 2 };
//     Node* third = new Node{ 3 };
//     head->next = second;
//     second->next = third;
//     traverseLinkedList(head);

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main()
{
    Node* head=new Node{0};
    Node* temp=new Node{1};
    Node* temp2=new Node{2};
    Node* temp3=new Node{3};
    head->next=temp;
    temp->next=temp2;
    temp2->next=temp3;

    Node* i=head;
    while(i!=nullptr)
    {

        cout<<i->data<<" ";
        i=i->next;
    }

    return 0;
}