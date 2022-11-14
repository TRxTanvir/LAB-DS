#include <iostream>

using namespace std;

class queuearr {
    int queue1[5];
    int rear, front;

public:
    queuearr()
    {
        rear = -1;
        front = -1;
    }
    void insert(int x)
    {
        if (rear > 4) {
            cout << "!! The  Queue Is Full !!";
            front = rear = -1;
            return;
        }
        queue1[++rear] = x;
        cout << "inserted " << x;
    }

    void Delete()
    {
        if (front == rear) {
            cout << "  !! The Queue Is Empty  !!";
            return;
        }
        cout << "deleted " << queue1[++front];
    }

    void display()
    {
        if (rear == front) {
            cout << "!! No Queue !!";
            return;
        }
        for (int i = front + 1; i <= rear; i++)
            cout << queue1[i] << " ";
    }
};

int main()
{
    int ch;
    queuearr qu;
    while (1) {
        cout << "\n1.insert 2.delete 3.display 4.exit\nEnter your choice: ";
        cin >> ch;
        switch (ch) {
        case 1:
            cout << "Enter the element: "; cin >> ch;
            qu.insert(ch);
            break;
        case 2:
            qu.Delete();
            break;
        case 3:
            qu.display();
            break;
        case 4:
            exit(0);
        }
    }
}