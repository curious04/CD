#include <bits/stdc++.h>
 using namespace std;

  bool isOperator(char x)
   { if(x=='+'||x=='-'||x=='/'||x=='*') 
   return true;
    return false;
     } 

 string postToPre(string post_exp) 
 { stack<string> s;
   int lengthofstring = post_exp.size();
    for (int p = 0; p < lengthofstring; p++) {
     // check if symbol is operator
     if (isOperator(post_exp[p])) {
     // pop two operands from stack 
     string op1 = s.top();
    s.pop();
    string op2 = s.top();
     s.pop();
     // concat the operands and operator
    string temp = post_exp[p] + op2 + op1;
     // Push string temp back to stack
     s.push(temp); }
     // if symbol is an operand
     else { 
          // push the operand to the stack 
     s.push(string(1, post_exp[p])); } } //stack[0] contains the Prefix expression 
     return s.top(); 
} 

int main() 
{ string post_exp = "ABC/-AK/L-*"; 
cout << "Prefix : " << postToPre(post_exp); 
return 0;
 }

