#include "queueArrayBased.h"
#include "iostream"
using namespace std;



    Queue(int size = SIZE){ // constructor
        arr = new QueueEntry[size];
        capacity = size;
    }
    ~Queue(){
        delete[] arr;
    }
    int empty(){
        return !size() ;
    }
    int isfull(){
        return size()==capacity;
    }
    int size(){
        return count;
    }
    int enqueue(QueueEntry x){
        if (isfull()) {
            return 0;
        }
        rear = (rear+1)%capacity;
        arr[rear] = x;
        count++;
        return 1;
    }
    QueueEntry dequeue(){
        if (empty()) {
            return 0;
        }
        QueueEntry x = arr[front];
        front = (front+1)%capacity;
        count--;
        return x;
    }
    QueueEntry peek(){

        if (empty())
            return -1 ;

        return arr[front];
    }

};

int main(){
    Queue q;
    q.enqueue(32);
    q.enqueue(666);
    q.enqueue(3111);

    cout << q.peek() << '\n';
    q.dequeue();
    cout << q.peek() << '\n';
    q.dequeue();
    cout << q.peek() << '\n';
    q.dequeue();
}

