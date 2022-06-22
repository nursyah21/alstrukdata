// https://isocpp.org/wiki/faq/templates#templates-defn-vs-decl

#include <iostream>
#include "custom_stack.h"
using namespace std;

// not yet implement
void balancedBrackets(string s){

}

//not yet implement
void infixtopostfix(string s){

}

void reverseString(string s){
  string res = "";
  stack<char> st = stack<char>();
  int length = s.length();

  for(int i=0; i < length; i++) st.push(s[i]);

  for(int i=0; i < length; i++){
    res += st.peek();
    st.pop();
  }


  cout << res << "\n";
}

int main(){
  balancedBrackets("(nkas)as{as}");

  return 0;
}
