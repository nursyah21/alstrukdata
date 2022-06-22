#include <iostream>
#include "stack_custom.h"
using namespace std;

void reverseString(string s){
  stack<char> st = stack<char>();
  int length = s.length();

  for(int i=0; i < length; i++){
    st.push(s[i]);
  }

  for(int i=0; i < length; i++){
    char a = st.peek();
    cout << a;
    st.pop();
  }
  cout << "\n";
}

// https://www.free-online-calculator-use.com/infix-to-postfix-converter.html
void infixToPostfix(string s){}

// {[]} balanced
// {[] not balanced
// {] not balanced
void balancedBrackets(string s){

}

int main(){
  reverseString("ittelkom");

  return 0;
}
