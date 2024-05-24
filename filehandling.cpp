// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     ofstream outfile;
//     outfile.open("data.txt");
//     outfile<<"welcome in file handling topic"<<endl;
//     outfile.close();
//     cout<<"string has been written in file";
//     return 0;
// }
// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     ifstream infile;
//     infile.open("data.txt");
//      string data;
//     // infile>>data;
//     getline(infile,data);
//      infile.close();
//     cout<<"string has been read from file"<<endl<<data;
//     return 0;
// }
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     // Create an object of ofstream class with ios::app flag
//     ofstream outfile;
//     outfile.open("example.txt", ios::app);

//     // Append data to the file
//     outfile << "\nThis is appended data." << endl;

//     // Close the file
//     outfile.close();

//     cout << "Data has been appended to the file." << endl;

//     return 0;
// }
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     ofstream outfile;
//     outfile.open("data.txt");
//     if( !outfile.is_open() )  {
//         cout<<"error in opening file"<<endl;
//         return 1;
//     }
//     outfile<<"hey this is error handling in file c++"<<endl;
//         if(!outfile.fail()){
//             cout<<"error in writing data "<<endl;
//             return 1;
//         }
//         outfile.close();
//         cout<<"here we close the file ";
//         return 0;
// }
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile;
    outfile.open("example.txt");

 
    if (!outfile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

   
    outfile << "Hello, File Handling in C++!" << endl;

    
    if (outfile.fail()) {
        cout << "Error writing to file!" << endl;
        return 1;
    }

    
    outfile.close();

    cout << "Data has been written to the file." << endl;

    return 0;
}
