    #include <iostream>
using namespace std;
//prob1
/*int main() {
    cout  << "Hello" << endl;
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name: " <<name<<endl;
    int age;
    cout<< "Enter your age:";
    cin>>age;
    cout<<"Your age is: "<<age<<endl;
    return 0;
}*/
#include <iomanip>
using namespace std;
int main() {
    //prob2
    /*for (int i=1; i<=5; ++i) {
        cout << setw(5) << i <<endl;
    }*/


    //prob3
    /*int x, y;
    cout << "Please enter an integer";
    cin >> x >> y;

    int temp=x;
    x=y;
    y=temp;

    cout << "Swapped values;" << "x = " << x << ", y = " << y << endl;
*/
//prob4
    /*int n;

    cout <<"Enter the number: ";
    cin >> n ;

    cout << setw(5) << "Number" << setw(5) << "Square" << endl;

    for (int i=1; i<=n; i++) {
        cout << setw(5) << i << setw(5) << i*i << endl;
    } */
//prob5
    string s;

    cout << "enter a string :";
    cin.ignore();
    getline(cin, s);
    cout << setw(50) <<setiosflags(ios::left)<< s << endl;

    return 0;
}




