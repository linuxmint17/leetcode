//design-circular-deque
#if 0
class MyCircularDeque {
public:
    MyCircularDeque(int k) {

    }

    bool insertFront(int value) {

    }

    bool insertLast(int value) {

    }

    bool deleteFront() {

    }

    bool deleteLast() {

    }

    int getFront() {

    }

    int getRear() {

    }

    bool isEmpty() {

    }

    bool isFull() {

    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */

#else 
class MyCircularDeque {
private:
    int sz;
    int front; //   队列非空时，指向队列头
    int rear;  //   队列非空时，指向队列尾元素后边的位置
    int *deque;
public:
    MyCircularDeque(int k) {
        sz = k + 1;
        deque = new int[sz];
        front = rear = 0;
    }

    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }
        front = (front - 1 + sz) % sz;
        deque[front] = value;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }
        deque[rear] = value;
        rear = (rear + 1) % sz;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }
        front = (front + 1) % sz;
        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }
        rear = (rear - 1 + sz) % sz;
        return true;
    }

    int getFront() {
        if (!isEmpty()) {
            return deque[front];
        }
        return -1;
    }

    int getRear() {
        if (!isEmpty()) {
            return deque[(rear - 1 + sz)% sz];
        }
        return -1;
    }

    bool isEmpty() {
        return front == rear;
    }

    bool isFull() {
        return front == (rear + 1 + sz) % sz;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
#endif
int main()
{
}
