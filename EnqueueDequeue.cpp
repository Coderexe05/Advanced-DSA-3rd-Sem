#include <iostream>
using namespace std;

class LinearQueue {
private:
    int* queue_array;
    int capacity;
    int front;
    int rear;

public:
    LinearQueue(int size) {
        capacity = size;
        queue_array = new int[capacity];
        front = -1;
        rear = -1;
    }
    LinearQueue() {
        delete[] queue_array;
    }
    void enqueue(int element) {
        if (rear == capacity - 1) {    //Overflow Check
            cout << "Cannot enqueue " << element << ": Overflow Condition! Queue is full.\n";
            return;
        }
        if (front == -1) {   //Underflow Check
            front = 0;
        }
        rear++;
        queue_array[rear] = element;
        cout << "Enqueued: " << element << "\n";
    }
    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Cannot dequeue: Underflow Condition! Queue is empty.\n";
            return -1;
        }
        int removed_element = queue_array[front];
        cout << "Dequeued: " << removed_element << "\n";
        front++;
        if (front > rear) {
            front = -1;
            rear = -1;
        }

        return removed_element;
    }
    void display() {
        if (front == -1) {
            cout << "Final Queue State: [ Empty Queue ]\n";
            return;
        }
        cout << "Final Queue State: [ ";
        for (int i = front; i <= rear; i++) {
            cout << queue_array[i];
            if (i < rear) {
                cout << " <- ";
            }
        }
        cout << " ]\n";
    }
};

int main() {
    int N = 3;
    LinearQueue q(N);
    cout << "--- Executing Queue Operations ---\n";
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);  

    cout << "\n--- Dequeue Processing ---\n";
    q.dequeue();

    cout << "\n--- Final Results ---\n";
    q.display();

    return 0;
}