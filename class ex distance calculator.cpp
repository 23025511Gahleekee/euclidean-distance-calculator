#include <iostream>
#include<cmath>
using namespace std;

double x1,x2,y1,y2,distance1

double distance(){

  distance1 = sqrt((pow((x2 - x1),2) + pow((y2 - y1),2)));

    return distance1;
}

int main(){

  cout << "Calculate the distance between two points ";

   cout << "Enter the value of x1 : ";
      cin >> x1;

     cout << "Enter the value of x2 : ";
      cin >> x2;

     cout << "Enter the value of y1 :  ";
      cin >> y1;

     cout << "Enter the value of y2 : ";
         cin >> y2;

      cout << distance();


   return 0;
}
