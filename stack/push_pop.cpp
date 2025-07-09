// Function to push an integer into the stack.

/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack ::push(int x) {
    
    // Your Code
    if(top== 999){
        cout<<"cant add, overflow"<<endl;
        
    }
    
    else{
        top= top+1;
        arr[top]= x;
    }
    
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    // Your Code'
    if(top==-1){
        return -1;
    }
    else{
        int x= arr[top];
        
        top=top-1;
        
        return x;
    }
}
