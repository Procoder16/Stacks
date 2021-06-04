#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

class stack{
    node* head;
    public:
    stack(){
        head = NULL;
    }

    void push(int x){
        node* temp =  new node();
        temp -> data = x;

        if(head == NULL){
            temp -> next = NULL;
        }
        else{
            temp -> next = head;
        }
        head = temp;
    }
    
    void pop(){
        if(head == NULL){
            cout<<"STACK UNDERFLOW";
            return;
        }
        else{
            node* todelete = head;
            head = head -> next;
            delete todelete;
        }
    }

    int Top(){
        if(head == NULL){
            cout<<"STACK UNDERFLOW";
            return -1;
        }
        else{
            return head -> data;
        }
    }
};

int main(){

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top();
    return 0;
}