#include<iostream>
using namespace std;

class queue
{
    public:
        int f;
        int r;
        int size;
        int *arr;
};
int isEmpty(queue *q)
{
    if (q->f==q->r)
    {
        return 1;
    }
    return 0;
    
}
int isFull(queue *q)
{
    if (q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}
void enqueue(queue *q,int val)
{
    if (isFull(q))
    {
        cout<<"the queue is full"<<endl;
    }
    else
    {
        q->arr[++q->r]=val;
        cout<<"Enqued : "<<val<<endl;
    }
}
int dequeue(queue *q)
{
    int a=-1;
    if (isEmpty(q))
    {
        cout<<"the queue is empty"<<endl;
    }
    else
    {
        return q->arr[++q->f];
    }
    return a;
    
}

int main()
{   queue q;
    q.f=q.r=-1;
    q.size=100;
    q.arr=new int(q.size);

    cout<<"enque opration :"<<endl;
    enqueue(&q,25);
    enqueue(&q,15);
    enqueue(&q,78);
    enqueue(&q,98);
    cout<<"deque opration :"<<endl;
    cout<<"Dequeued :"<<dequeue(&q)<<endl;
    cout<<"Dequeued :"<<dequeue(&q)<<endl;
    cout<<"Dequeued :"<<dequeue(&q)<<endl;
    cout<<"Dequeued :"<<dequeue(&q)<<endl;
    cout<<"Dequeued :"<<dequeue(&q)<<endl;
    return 0;
}