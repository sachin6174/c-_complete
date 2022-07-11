template<typename T>

class elem{
    public:

    T data;
    int priority;
    elem( T d,int p){
        this->data=d;
        this->priority=p;
    }
};