#include<bits/stdc++.h>
using namespace std;
class Node {
public:

int data ;
 Node * next ;


 Node(int d){
data = d ;
next = nullptr;


 }

};


class LinkledList{
private:
Node* head;

public:
LinkledList(){


 head = nullptr;

}


void insert(int data){

Node * newNode= new Node(data);

    if(head  == nullptr){



head = newNode;


    }
    else{

Node* temp = head;

while(temp->next != nullptr){


    temp = temp->next;
}

temp -> next = newNode;



    }
}

void display(){


    Node* temp = head ;


    while(temp->next != nullptr){


        cout<<temp->data<<" -> ";


        temp = temp->next;
    }
}










};



int main(){


LinkledList L ;

L.insert(10);

L.insert(20);
L.insert(30);
L.insert(40);
L.insert(50);


L.display();

}