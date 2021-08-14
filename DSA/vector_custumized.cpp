#include <iostream>
using namespace std;

class vector
{
    //Data member
    int *arr;
    int curr_size;
    int max_size;

public:
    vector(int Max_size=1){
        curr_size=0;
        max_size=Max_size;
        arr=new int[max_size];
    }
    void push_back(int d){
        //two cases
        if(curr_size==max_size){
           //create a new array and delete the old one,double the capacity
           int *oldArr=arr;
           max_size=max_size*2;
           arr=new int[max_size];
           //copy the elements
           for(int i=0;i<curr_size;i++){
               arr[i]=oldArr[i];
           }
           //delete
           delete[] oldArr;
        }
        arr[curr_size]=d;
        curr_size++;
    }

    void pop_back(){
        if(curr_size>=0)
        curr_size--;
    }
    
    bool isEmpty() const{
        return curr_size==0;
    }

    //front ,back ,at[i],[]

    int front() const{
        return arr[0];
    }
    int back() const{
        return arr[curr_size-1];
    }
    int at(int i) const{
        return arr[i];
    }
    int size() const{
        return curr_size;
    }
    int capacity() const{
        return max_size;
    }
    //operator overloading
    int operator[](const int i)const{
        return arr[i];
    }
};

int main()
{
vector v(5);
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);
v.pop_back();
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
cout<<v.front()<<endl;
cout<<v.back()<<endl;
cout<<v.at(2)<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;

}