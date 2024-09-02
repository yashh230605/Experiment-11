//Yash Nangia
//entc B3
//23070123152
//experiment 11 a 
# include<iostream>
using namespace std;

class cube{
    public:
    double height = 4.0;
    double length = 5.0;
    double width = 9.0;

};
int main(){
    cube c1;
    double volume=c1.height*c1.width*c1.length;
    cout<<"volume is: "<<volume<<endl;
}
