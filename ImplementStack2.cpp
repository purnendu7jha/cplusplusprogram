#include <bits/stdc++.h>
using namespace std;

struct Queue {
    stack<int> s1,s2;

    void enQueue(int x)
    {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x); 

        //Push everything back to s1
        while (!s2.empty())   
    }
}

//Dequeue an item from the queue
int deQueue()
{
    //if first stack is empty
    if (s1.empty()) {
        cout << "Q is empty";
        exit(0);    
    }

    // Return top of s1
    int x= s1.top();
    s1.pop();
    return x; 
}

int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';

    return 0; 
}