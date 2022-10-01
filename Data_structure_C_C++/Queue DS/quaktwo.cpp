#include<iostream>
using namespace std;

// circular LL
class circularQ
{
    public:
        int f;
        int r;
        int size;
        int *arr;
};
int isEmpty(circularQ *q)
{
    if (q->f==q->r)
    {
        return 1;
    }
    return 0;
}
int isFull(circularQ *q)
{
    if ((q->r+1)%q->size==q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(circularQ *q,int val)
{
    if (isFull(q))
    {
        cout<<"queue is full "<<endl;
    }
    else
    {
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        cout<<"queueed :"<<val<<endl;
    }
}
int dequeue(circularQ *q)
{
    int a=0;
    if (isEmpty(q))
    {
        cout<<"queue is Full "<<endl;
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
    circularQ *q;
    q->size=6;
    q->f=q->r=0;
    q->arr=new int(q->size);

    cout<<"enque opration "<<endl;
    enqueue(q,25);
    enqueue(q,74);
    enqueue(q,14);
    enqueue(q,21);
    enqueue(q,36);
    enqueue(q,78);
    enqueue(q,98);
    cout<<"deque opration "<<endl;
    cout<<"dequed : "<<dequeue(q)<<endl;
    cout<<"dequed : "<<dequeue(q)<<endl;
    return 0;
}