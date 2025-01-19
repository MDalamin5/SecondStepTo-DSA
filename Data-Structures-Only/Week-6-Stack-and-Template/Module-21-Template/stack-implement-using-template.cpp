#include <iostream>
#include <cassert>
using namespace std;

// Stack using Dynamic Array
template <class T>
class Stack {
public:
    T *a;
    int stack_size;
    int cap;

    Stack() {
        stack_size = 0;
        cap = 1;
        a = new T[1];
    }

    void increase_size() {
        T *temp;  
        temp = new T[cap * 2];
        for (int i = 0; i < cap; i++) {
            temp[i] = a[i];
        }
        swap(a, temp);
        delete[] temp;
        cap = cap * 2;
    }

    void push(T data) {
        if ((stack_size + 1) > cap) {
            increase_size();
        }
        a[stack_size++] = data;
    }

    void pop() {
        if (stack_size == 0) {
            cout << "Oops!! Your stack is empty!" << endl;
            return;
        }
        stack_size--;
    }

    T top() {
        if (stack_size == 0) {
            throw runtime_error("Oops!! Your stack is empty!");
        }
        return a[stack_size - 1];
    }

    void DisplayStackElements() {
        if (stack_size == 0) {
            throw runtime_error("Oops!! Your stack is empty!");
        }
        for (int i = 0; i < stack_size; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<double> st_intDouble;
    // st_intDouble.push(4.0);
    // st_intDouble.push(41.4);
    // st_intDouble.push(412.3);

    cout << st_intDouble.top() << endl;

    return 0;
}
