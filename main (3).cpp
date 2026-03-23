
#include <iostream>
using namespace std;
class circularqueue{
      int arr[6];
      int front;
      int rear;
public:
     circularqueue(){
         front=-1;
         rear=-1;
     }
     void enqueue(int x){
         if((rear+1)%6==front){
             cout<<"queue overflown"<<endl;
             return ;
         }
         if(front==-1){
             rear=front=0; }
             else{
                 rear=(rear+1)%6;
             }
             arr[rear]=x;
             cout<<x<<" - "<<"inserted"<<endl;
     }
     void dequeue(){
         if(front==-1){
             cout<<"queue is underflown"<<endl;
             return ;
         }
         cout<<arr[front]<<" - "<<"deleted\n"<<endl;                             
         if(front==rear){
             front=rear=-1;
         }else{
             front=(front+1)%6;
         }
     }
     void display(){
         if(front==-1){
             cout<<"queue is empty"<<endl;
             return ;
         }
         cout<<"queue elements\n";
         int i=front;
         while(true){
             cout<<arr[i]<<" ";
             if(i==rear)
                break;
             i=(i+1)%6;
         }
         cout<<endl;
     }
};
  int main(){
      circularqueue cq;
      cq.enqueue(14);
      cq.enqueue(35);
      cq.enqueue(25);
      cq.enqueue(45);
      cq.display();
      cq.dequeue();
      cq.display();
      cq.dequeue();
      cq.display();
      return 0;
      
  }






