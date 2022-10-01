#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class queue
{
    public:
        int size;
        int f;
        int r;
        int *arr;
};
int isFull(queue *q)
{
    if (q->r==q->size-1)
    {
        return 1;
    }
    return 0;
    
}
int isEmpty(queue *q)
{
    if (q->r==q->f)
    {
        return 1;
    }
    return 0;
    
}
void enqueue(queue *q,int val)
{
    if (isFull(q))
    {
        cout<<"this q id full"<<endl;
    }
    else
    {
        q->arr[++q->r]=val;
    }
    
}
int dequeue(queue *q)
{
    int a=-1;
    if (isEmpty(q))
    {
        cout<<"this queue is full"<<endl;
    }
    else
    {
        return q->arr[++q->f];
    }
    return a;
}
int main()
{
    queue q;
    q.size=100;
    q.f=q.r=-1;
    q.arr=new int(q.size);


    enqueue(&q,12);
    enqueue(&q,25);
    enqueue(&q,56);
    cout<<"dequeue element "<<dequeue(&q)<<endl;
    cout<<"dequeue element "<<dequeue(&q)<<endl;

if (isEmpty(&q))
{
    cout<<"q is Empty "<<endl;
}
if (isFull(&q))
{
    cout<<"q is Full "<<endl;
}
    return 0;
}