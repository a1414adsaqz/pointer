#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class Queue{
    public:
    Node *front;
      Node *rear;
      Queue(){
        front=rear=NULL;
      }
      void enqueue(int newValue){
        Node *newNode = new Node();
        newNode->data = newValue;
        newNode ->next =NULL;
        if(is_empty()){
            front = rear=newNode;
        
           
        }
        else{
             rear->next = newNode;
            rear = newNode;
        }
      }
      void Deqeuue(){
        if(isEmpty()){
            cout << "Empty Queue.. no items todelete"<< endl;
        }
        else if (front == rear)
                {
                    delete front;
                    front = rear = NULL;
                }
                else{
                    Node *delpointer =front;
                    front =front->next;
                    delete delpointer;

                }
                
      }
      void display(){
        if(isEmpty()){
            cout << "Empty Queue"<< endl;
        }
        else{
            Node *temp =front;
            while (temp != NULL)
            {
                
            }
            
        }
      }

};



int main(){
    cout <<"hallo";
    return 0;
}