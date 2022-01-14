class MyCircularQueue {
private:
    int sz;
    int *que;
    int front; //   队列非空时，指向队列头
    int rear;  //   队列非空时，指向队列尾元素后边的位置
public:
    MyCircularQueue(int k) {
        sz = k + 1;
        que = new  int[sz]; // 不考虑内存不够的情况
        front = rear = 0;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        que[rear] = value;
        rear = (rear + 1) % sz;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        front = (front + 1) % sz;
        return true;
    }

    int Front() {
        if (!isEmpty()) {
            return que[front];
        }
        return -1;
    }

    int Rear() {
        if (!isEmpty()) {
            return que[(rear + sz - 1) % sz];
        }
        return -1;
    }

    bool isEmpty() {
        return 0 == (rear + sz - front) % sz;
    }

    bool isFull() {
        return front == (rear + 1) % sz; // rear + 1是下一个可以插入的位置， 和 头比较
    }
    ~MyCircularQueue() {
        if (que) {
            delete []  que;
        }
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
int main()
{
    MyCircularQueue *q = new MyCircularQueue(20);
    return 0;
}
