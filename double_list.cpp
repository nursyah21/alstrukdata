/** 
 * Circular linked list
*/

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;

    node (int data, node *prev, node *next){ //constructor
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};
struct doubleList{
    node *start;
    doubleList(){
        start= NULL;
    }
    void insertFirst(int data);
    void printAll();
};

void doubleList::printAll(){
    node *temp = start;
    while(temp != NULL){
        cout << temp->data << "\n";
        temp = temp->next;
    }
}
void doubleList::insertFirst(int data){
    node *temp = new node(data, start, NULL);
    if(start == NULL){
        start = temp;
    }else{
        temp->next = start;
        start = temp;
    }
}

int main(){
    doubleList *head = new doubleList();
    head->insertFirst(10);
    cout << "printall: \n"; head->printAll();

    head->insertFirst(11);
    cout << "printall: \n"; head->printAll();
    

    return 0;
}
