#include <iostream>
#include <vector>

using namespace std;

class Node{

public:
    int data; // the data part

    Node * next; // ptr to link to the next node

    Node(int new_data){
        this->data= new_data; //cont that'll initialize the node with data
        this->next= nullptr;
    }
};

//traversal

void traverse(Node * head){
    while(head!= nullptr){
        cout<<head->data<<" ";

        head= head->next;

    }

    cout<<endl;

}




//searching

void search_in_linked_list(Node * head, int n){
    while(head!= nullptr){
        if(head->data==n){
            cout<<"The element is present"<<endl;

            return;
        }
        head = head->next; 
    }

    cout<<"element not found"<<endl;
}


int main(){
    Node* head= new Node(1);
    head->next= new Node(2);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);

    traverse(head);
    search_in_linked_list(head, 10);

    return 0;
}
