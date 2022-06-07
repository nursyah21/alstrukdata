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
    node *start, *end;
    int size;
    doubleList(){
        start= NULL;
        end = NULL;
        size = 0;
    }
    void insertFirst(int data);
    void insertLast(int data);
    void deleteFirst();
    void deleteLast();
    void printAll();
    
};

void doubleList::printAll(){
    node *temp = start;
    while(temp != NULL){
        cout << temp->data;
        temp = temp->next;
        if(temp != NULL){cout <<"->";}
    }
    cout << "\n";
}

void doubleList::insertLast(int data){    
    node *last = new node(data, NULL, NULL);
    if(start == NULL) {
        start = last;
        end = last;
    }
    else{
        last->prev = end;
        end->next = last;
        end = last;
    }
    size++;
}

void doubleList::insertFirst(int data){
    node *first = new node(data, NULL, NULL);
    if(start == NULL) {
        start = first;
        end = first;
    }
    else{
        first->next = start;
        start->prev = first;
        start = first;
    }
    size++;
}

void doubleList::deleteFirst(){
    if(start == NULL) return;
    node *temp = start;
    start = start->next;
    delete temp;
    size--;

    if(size == 0){
        start = NULL;
        end = NULL;
    }
}

void doubleList::deleteLast(){
    if(end == NULL) return;
    if(size == 1) return deleteFirst(); 
    node *temp = end;
    end = end->prev;
    end->next = NULL;

    delete temp;
    size--;
}


int main(){
    doubleList *head = new doubleList();
    head->insertFirst(10);
    head->insertFirst(20);
    head->insertLast(30);
    head->insertLast(40);
    head->deleteLast();
    head->deleteLast();
    head->deleteLast();

    head->printAll();
    
    return 0;
}
