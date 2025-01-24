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
Node * head ;
Node * Tail;

public:


LinkledList(){


    head = nullptr;
    Tail = nullptr;
}


void insert(int data){

Node * NewNode = new Node(data);


if(head == nullptr){

    head = NewNode;
}
else{
Node * temp = head;

while(temp->next != nullptr){

    temp = temp->next;
}

temp->next = NewNode;
Tail = NewNode;
}




}


void display(){
Node * temp = head ;

while(temp !=  nullptr){

   
 
     cout<<temp->data<<"-> ";
        temp = temp->next;
}

cout<<endl;


}

void insertAtpos(int pos , int data){

Node * prev = head ;
Node * prev1 = nullptr;
while(pos != 1){
prev1 = prev;

prev = prev->next;


pos--;


}

Node * NewNode = new Node(data);


prev1->next = NewNode;
NewNode->next = prev;

}


void deleteatpos(int pos){

Node * prev = head ;
Node * prev1 = nullptr;
while(pos != 1){
prev1 = prev;

prev = prev->next;


pos--;


}

Node * temp = prev;

prev1->next = prev->next;

delete temp;
}





};



int main(){


LinkledList L ;

L.insert(10);

L.insert(20);
L.insert(30);
L.insert(40);



L.display();
L.deleteatpos(3);
L.display();
}