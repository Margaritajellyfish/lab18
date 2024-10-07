#include<iostream>

using namespace std;

struct Node{
    int rate;
    string comment;
    Node * previous = nullptr;
    Node * next = nullptr;
};

int main(){
    double rate;
    int choice;
    bool loop;
    string comment;
    char again;
    Node *head = nullptr;
    Node *tail = nullptr;
    do{
    
        cout << "Which linked list method should we use?\n [1] New nodes are added at the head of the linked list\n
        [2] New nodes are added at the tail of the linked list\nChoice: ";
        cin >> choice;
        while((choice != 1)&&(choice!=2)){
            cout << "Which linked list method should we use?\n [1] New nodes are added at the head of the linked list\n
        [2] New nodes are added at the tail of the linked list\nChoice: ";
        cin >> choice;
        }
        cout << "Enter review rating 0-5: ";
        cin >> rate;
        cout << "Enter review comments: ";
        cin >> comment;
        if(head==nullptr){
            new Node 
        }
        while(head){
            if(choice==1){

            }

        }

        cout << "Enter another review? Y/N: ";
        cin >>again;
        if (again== Y or y){
            loop = true;
        }
        else{
            loop = false; 
        }

    }while(loop=true);

    return 0;
}