#include<iostream>
using namespace std;
class car{
    bool startengine;
    public:
    void start(){
        startengine=true;
        cout<<"engine is started"<<endl;
    }
    void drive(){
        if(startengine){
            cout<<"you are ready to drive ";
        }
        else{
            cout<<"you are not ready tro drive";
        
    }

    }
    

};
 int main()
{car c;
c.start();
c.drive();

}