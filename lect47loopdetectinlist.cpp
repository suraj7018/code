#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // constructor
    node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};

bool detectloop(node* head){
    if(head == NULL){
        return false;
    }

    map<node*, bool> visited;
    node* temp = head;
    while(temp != NULL){
        // cycle is present
        if(visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp = temp ->next;
    }
    return false;

}

int main(){
node* node1 = new node(10);
node* head = node1;

if(detectloop(head)){
    cout<<"the linked list is circular"<<endl;
}
else{
    cout<<"not circular"<<endl;
}

    return 0;
}