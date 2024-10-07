#include<iostream>

using namespace std;

struct Node{
    double rate;
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
            Node *temp = new Node;
            temp->rate = rate;
            temp->comment = comment;
            head = temp;
            tail = temp;
        }
        while(head){
            if(choice==1){
                Node *temp = new Node;
                temp->rate = rate;
                temp->comment = comment;
                temp->next = head;
                head = temp;
            }
            else{
                Node *temp = new Node;
                temp->rate = rate;
                temp->comment = comment;
                temp->previous = tail;
                tail = temp;
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