#include<iostream>
#include<stack>
using namespace std;
void displayrev(stack<int>& st){
    if(st.size()==0) return ;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayrev(st);
    st.push(x);
}
void display(stack<int>& st){
    if(st.size()==0) return ;
    int x = st.top();
    st.pop();
    displayrev(st);
     cout<<x<<" ";
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st);
    cout<<endl;
    displayrev(st);

}
