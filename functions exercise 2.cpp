
//137533 Kelvin Lemanta

#include <iostream>
using namespace std;

double myTriangle (double base, double height);

double myTriangle (double base, double height){
double area;
area = base*height*0.5;
return area;
}

int main (){
    double b, h, a;
    char resp;
    do {
        cout <<"Please input the base: ";
        cin>> b;
        cout <<"Please input the height: ";
        cin>> h;
        a = myTriangle (b,h);
        cout <<"The area of the triangle is: "<< a <<endl;
        cout<<"Do you wish to continue? ";
        cin>>resp;
   }
   while(resp=='y');
   
   return 0;
}


