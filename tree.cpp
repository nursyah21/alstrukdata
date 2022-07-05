#include <iostream>
using namespace std;

/* structure data */
struct node{
  int data;
  node *left;
  node *right;

  node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

struct tree{
  node *root;

  void display();
  void display(node *root);

  void insert(int data);

  void search(int data);
  void search(int data, node *root);
  void deleteAt(int data);
};


/* implementation method */
void tree::display(){
  display(root);
  cout << "\n";
}

void tree::display(node *root){
  if(root == NULL)return;
  cout << root->data << " ";

  if(root->left != NULL) display(root->left);
  if(root->right != NULL) display(root->right);
}

// log(n)
void tree::insert(int data){
  if(root == NULL){
    root = new node(data);
    return;
  }
  node *temp = root;

  while(true){
    if(data > temp->data){
      if (temp->right != NULL) {
        temp = temp->right;
        continue;
      }
      temp->right = new node(data);
    }
    else if(data < temp->data){
      if (temp->left != NULL) {
        temp = temp->left;
        continue;
      }
      temp->left = new node(data);
    }

    break;
  }


}

void tree::search(int data){
  search(data, root);
}

void tree::search(int data, node *root){
  if(root == NULL) {
    cout << "not found\n";
    return;
  }
  if(root->data == data){
    cout << "found\n";
    return;
  }

  if(data > root->data)search(data, root->right);
  if(data < root->data)search(data, root->left);
}

void tree::deleteAt(int data){
  // find last elm, and elm want to delete
  node *temp = root;
  while(true){
    if(temp == NULL){
      cout << "element not found!";
      return;
    }
    if(data == temp->data){
      break;
    }
  }

  // copy last elm to elm want to delete
  // delete last elm
}


int main(){
  tree tr = tree();

  tr.insert(10);
  tr.insert(12);
  tr.insert(8);
  tr.insert(16);
  tr.insert(20);
  tr.insert(8);

  tr.display();

  tr.search(8);

  tr.display();

  

  return 0;
}