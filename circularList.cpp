#include <iostream>

struct Node{
    int data;
    Node *next;
};

Node *createList(int x, Node *addr = NULL){
    Node *temp = new Node();
    temp->data = x;
    temp->next = addr;

    return temp;
}

void printAll(Node *list1){
    std::cout << "print all linked list data:\n";
    while(list1 != NULL){
        std::cout << list1->data << " ";
        list1 = list1->next;
    }
    std::cout << "\n";
}

void createList(Node **output){
    *output = NULL;
}

bool isEmpty(Node *list1){
    if(list1 == NULL) return true;
    return false;
}

void insertFirst(Node **list1, int x){
    Node *temp = createList(x, *list1);

    *list1 = temp;
}

void insertAfter(Node *oldlist, Node *newlist){
    newlist->next = oldlist->next; //assign next newlist to next oldlist
    oldlist->next = newlist;
}

void insertLast(Node **list1, int x){
    if(*list1 == NULL){
        insertFirst(list1, 10);
    }
    else{
        Node *list1_temp = *list1; //copy data from list1 to list1_temp
        while(list1_temp->next != NULL){   //iterate list1_temp to last
            list1_temp = list1_temp->next;
        }

        Node *temp = createList(x); //create new node to assign data x

        list1_temp->next = temp; //assign temp node to next list1_temp
    }
}

void deleteFirst(Node **list1){
    if(*list1 != NULL){
        *list1 = (*list1)->next;
    }
}

void deleteAfter(Node *list1, Node *list_to_remove){
    if(list1 != list_to_remove){
        Node *temp = list1;

        while(temp->next != list_to_remove){
            temp = temp->next;
        }


        temp->next = list_to_remove->next;
        delete list_to_remove;

    }
}

void deleteLast(Node **list1){
    if(*list1 != NULL){

        if((*list1)->next == NULL){
            deleteFirst(list1);
        }

        Node *list1_temp = *list1;
        while(list1_temp->next->next != NULL){
            list1_temp = list1_temp->next;
        }

        list1_temp->next = NULL;

    }

}

void concat(Node *list1, Node *list2){
    if(list1 != list2){
        Node *list1_temp = list1; //copy data from list1 to list1_temp

        while(list1_temp->next != NULL){   //iterate list1_temp to last
            list1_temp = list1_temp->next;
        }

        Node *temp = list2; //create new node to assign data x

        list1_temp->next = temp;
    }
}

void test_circular(){

}

int main(){
    test_circular();

    return 0;
}
