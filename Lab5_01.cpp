#include<iostream>
using namespace std;

int stack[10];
int top;

bool isEmpty(){
    if(top == -1)
        return true;
    else
        return false;
}

bool isFull(){
    if(top==top-1)
        return true;
    else
        return false;
}

void push(int a){
    if(isFull())
    {
        cout<<"Can't push! Stack is full"<<endl;
    }
    else{
        stack[top++] = a;
        cout<<"Value has been Pushed!"<<endl;
    }
}

void pop(){
    if(isEmpty())
    {
        cout<<"Can't pop! Stack is empty"<<endl;
    }
    else{
        top--;
        cout<<"Value has been Poped!"<<endl;
    }
}

int topElement(){
	cout<<"Top Element is: "<<stack[top - 1]<<endl;
}

void show(){
	if(isEmpty())
        {
            cout<<"Can't show any values! Stack is empty"<<endl;
            return;
    }
    else{
        cout<<"The Stack: ";
        for(int i=top-1;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    push(8);
    push(5);
    push(4);
    push(7);
    push(2);
    push(4);
    push(4);
     push(4);
    topElement();
    show();

    pop();
    pop();
    push(22);
    topElement();
    show();
}
