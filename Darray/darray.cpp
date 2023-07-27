//
// Created by Yousef A. Azeem on 7/22/2023.
//
//#define int long long;
using namespace std;
#include "iostream"
template<class dt>
#define dt int
class Darray{
public:
    int len=0;
    int capacity=0;
    dt arr[];
public:
    Darray(int capacity) {
        if (capacity<-1){
            return;
        }
        this->capacity = capacity;
        arr[capacity];
    }
    Darray(){
        this->capacity = 16;
        arr[capacity];
    }
    void show() {
        for (int i = 0; i < len; i++) {
            cout << this->arr[i] << " ";
        }
        cout << '\n' ;
    }
    int get(int index ) {
        return this->arr[index];
    }
    int set(int index, dt value ){
        this->arr[index] = value;
    }
    void add(dt value){
        if (len+1>=capacity){
            capacity *=2;
            dt newarr[capacity];
            for (int i = 0; i < len; i++) {
                newarr[i] = arr[i];
            }
            arr = newarr;
        }
        arr[len++] = value;
    }
//    void removeAtIndex(int rm_index) {
//
//    }
};
signed main(){

    Darray <int> dd(3);
    dd.show();
    dd.add(99);
    dd.show();
    dd.add(32);
    dd.show();

}