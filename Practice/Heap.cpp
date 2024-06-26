#include<iostream>
using namespace std;
 
class Heap{
    public:
    
    int array[100];
    int size;

    Heap(){
        array[0] = -1;
        size = 0;
    }

    void insert(int val){
        
    }

    void print(){
        for(int i = 0; i< array.size(); i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
};