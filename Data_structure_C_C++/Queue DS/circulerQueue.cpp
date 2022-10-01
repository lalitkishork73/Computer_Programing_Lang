#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class circularQ
{
    public:
        int size;
        int r;
        int f;
        int *arr;
};
int isEmpty(circularQ *q)
{
    if (q->r==q->f)
    {
        return 1;
    }
    return 0;
}
int isFull(circularQ *q)
{
    if (((q->r+1)%q->size)==q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(circularQ *q,int val)
{
    if (isFull(q))
    {
        cout<<"your queue is full it can not take any values "<<endl;
    }
    else
    {
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        cout<<"Enqued val :"<<val<<endl;
    }
}
int dequeue(circularQ *q)
{
    int a=0; 
    if (isEmpty(q))
    {
        cout<<"your queue is empty"<<endl;
    }
    else
    {
        q->f=(q->f+1)%q->size;
        return q->arr[q->f];
    } 
    return a;
}
int main()
{
    circularQ q;
    q.size=4;
    q.f=q.r=0;
    q.arr=new int(q.size);
    enqueue(&q,12);
    enqueue(&q,25);
    enqueue(&q,36);
    enqueue(&q,45);
    enqueue(&q,45);
    enqueue(&q,45);
    enqueue(&q,45);
        if (isFull(&q))
        {
            cout<<"q is Full "<<endl;
        }
    cout<<"dequeue: "<<dequeue(&q)<<endl;
    cout<<"dequeue: "<<dequeue(&q)<<endl;
    cout<<"dequeue: "<<dequeue(&q)<<endl;
    cout<<"dequeue: "<<dequeue(&q)<<endl;
        if (isEmpty(&q))
        {
            cout<<"q is Empty "<<endl;
        }
    return 0;
}