// Stack class.
class Stack {
    
public:
    int i = 0, k;
    vector<int>arr;
    
    Stack(int capacity) {
        // Write your code here.
        k = capacity;
    }

    void push(int num) {
        // Write your code here.
        if(i < k) {
            arr.push_back(num);
            i++;
        }
    }

    int pop() {
        // Write your code here.
        if(arr.size() == 0) {
            return -1;
        }
        i--;
        int n = arr.size();

        int element = arr[n - 1];
        arr.pop_back();
        return element;
    }
    
    int top() {
        // Write your code here.
        if(arr.size() == 0) 
        return -1;

        int n = arr.size();
        return arr[n - 1];
    }
    
    int isEmpty() {
        // Write your code here.
        if(arr.size() == 0) 
        return 1;
        else 
        return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(arr.size() == k) 
        return 1;
        return 0;
    }
    
};
