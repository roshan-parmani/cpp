#include<iostream>
using namespace std;

class marks{
    private:
    int intmarks;
    int extmarks;
public:
    marks(){
        intmarks = 0;
        extmarks = 0;
    }
    marks(int im,int em){
        intmarks=im;
        extmarks=em;
    }
    void display(){
        cout<<intmarks<<endl<<extmarks<<endl;
        
    }
    marks operator+(marks m){
        marks temp;
        temp.intmarks= intmarks + m.intmarks;
        temp.extmarks=extmarks+ m.extmarks;
        return temp;
    }
};
int main(){
    marks m1(20,40),m2(18,22);
    marks m3=m1+m2;
    m3.display();
    return 0;
}