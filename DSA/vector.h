template<typename T>
class vector
{
    //Data member
    T *arr;
    T curr_size;
    T max_size;

public:
    vector(int Max_size=1){
        curr_size=0;
        max_size=Max_size;
        arr=new T[max_size];
    }
    void push_back(int d){
        //two cases
        if(curr_size==max_size){
           //create a new array and delete the old one,double the capacity
           T *oldArr=arr;
           max_size=max_size*2;
           arr=new T[max_size];
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

    T front() const{
        return arr[0];
    }
    T back() const{
        return arr[curr_size-1];
    }
    T at(int i) const{
        return arr[i];
    }
    int size() const{
        return curr_size;
    }
    int capacity() const{
        return max_size;
    }
    //operator overloading
    T operator[](const int i)const{
        return arr[i];
    }
};
