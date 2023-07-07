#include <bits/stdc++.h>
using namespace std;
//#define int long long ;
template <class t>
class darray{
private:
    int index=0;
    int capacity=0;
    t *arr;
public:
    darray(int capacit) {
        this->capacity = capacit;
        this->index=0;
        t arr[this->capacit];
    }
    void push(int value) {
        if (size>=capacity)
            return;
        else {
            std::ref(arr[size]) = value;
        }
    }
};
// Dynamic Array Implementation
signed main() {

}
