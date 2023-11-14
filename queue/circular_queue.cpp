#include<iostream>
#include<queue>
using namespace std;

class circularQueue{
    int *arr;
    int front;
    int rear;
    int size;

    circularQueue(int n){
        size = 100001;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int values){
        // condition for full
        if((front == 0 && rear == size-1) || (rear == ((front-1)%size-1))){
            cout<<"full";
            return false;
        }
        // condition for first element
        else if (front == -1){
            front = rear=0;
            arr[rear] = values;
        }
        // condition where rear is at last but the front is in the middle
        else if (front!=0 && rear == size-1){
            rear =0;
            arr[rear] = values;
            return true;
        }
        else{
            rear++;
            arr[rear] = values;
            return true;
        }
    }
    int dequeue(){
        if(front ==-1){
            cout<<"empty";
            return -1;
        }
        int ans = arr[front];
        arr[front]=-1;
        // if only one element is present
        if(front==rear){
            front = rear = -1;
        }
        // fro mainting the cyclic nature
        else if (front == size -1 ){
            front =0;
        }
        // else
        else{
            front++;
        }
        return ans;
    }
};

int main(){

}