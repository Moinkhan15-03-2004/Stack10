#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    cout<<st.size()<<endl;//0
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // // printing in reverse order
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //    st.pop();
    // }
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
        // int x = st.top();
        // st.pop();
        // temp.push(x); instead of this we use 
        // putting element back from temp to st
    }
    while(temp.size()>0){
        
       st.push(temp.top());
       temp.pop();

    }
    cout<<endl<<st.top();
}