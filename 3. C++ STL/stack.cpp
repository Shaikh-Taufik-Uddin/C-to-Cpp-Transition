#include <bits/stdc++.h>
using namespace std;
int main()
{
    // stack follows LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.emplace(4);
    // we have push/emplace() for storing data in stack
    cout << st.top(); // prints the last element inserted (that will be on top)
    st.pop();         // top element is removed
    cout << st.top();
    cout << st.empty(); // tells if the stack is empty or not
    cout << st.size();  // tells the size of the stack
    stack<int> stk;     // another stack is declared
    stk.push(5);
    stk.push(8);
    stk.push(9);
    st.swap(stk); // stack st is swapped with stack stk ;
    // printing a stack
    while (!st.empty())
    {
        cout << st.top();
        st.pop(); // makes the stack obsolete too !
    }
    while (!stk.empty())
    {
        cout << stk.top();
        stk.pop();
    }
    return 0;
}