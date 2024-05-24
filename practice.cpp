// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int flag=0;
//     int key;
//     cout<<"enter num for key num";
//     cin>>key;
//     for(int i=0; i<5; i++){
//         if(arr[i]==key){
//             flag=1;
//               cout<<"element key found at :"<<i<<"position";
//               }     
//     }
   
     
//     if(flag=0){
//         cout<<"element not found";
//     }
  
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//    virtual void sound(){
//         cout<<"animal make a sound"<<endl;
//     }
// };
// class dog : public Animal{
// public:
//  void sound() override{
//     cout<<"dog barks";
//  }
// };
// int main(){

// Animal animalobj;
// dog dogobj;
//  animalobj.sound();
//  dogobj.sound();
//     return 0;
// }
#include<iostream>
using namespace std;
class Animal{
    public:
   virtual void sound(){
        cout<<"animal make a sound"<<endl;
    }
};
class dog : public Animal{
public:
 void sound() override{
    cout<<"dog barks";
 }
};
int main(){

Animal *ptr;
dog obj;
ptr=&obj;
ptr->sound();
    return 0;
}