#include<iostream>

using namespace std;

struct Node{
    double rate;
    string comment;
    Node * previous = nullptr;
    Node * next = nullptr;
};

int main(){
    int choice;
    bool loop;
    char again;
    Node *head = nullptr;
    Node *tail = nullptr;
    Node *current = nullptr;
    do{
        cout << "Which linked list method should we use?\n [1] New nodes are added at the head of the linked list\n[2] New nodes are added at the tail of the linked list\nChoice: ";
        cin >> choice;
        while((choice != 1)&&(choice!=2)){
            cout << "Which linked list method should we use?\n [1] New nodes are added at the head of the linked list\n[2] New nodes are added at the tail of the linked list\nChoice: ";
            cin >> choice;
        }
        Node *temp = new Node;
        cout << "Enter review rating 0-5: ";
        cin >> temp->rate;
        cout << "Enter review comments: ";
        cin >> temp->comment;
        if(head==nullptr){
            head = temp;
            tail = temp;
        }
        while(head){
            if(choice==1){

                temp->next = head;
                head = temp;
            }
            else{
                temp->previous = tail;
                tail = temp;
            }

        }

        cout << "Enter another review? Y/N: ";
        cin >>again;
        if ((again== 'Y')||(again== 'y')){
            loop = true;
        }
        else{
            loop = false;
        }

    }while(loop==true);
    current = head;
    cout << "Outputting all reviews: \n";
    int count = 1;
    int total = 0;
    while(current){
        cout << "> Review #" << count << ": " << current->rate << ": " << current->comment << endl;
        total += current->rate;
        current = current->next;
    }
    cout << "> Average: " << total/ count;

    return 0;
}
