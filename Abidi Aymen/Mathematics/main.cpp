#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{   int t , n;
    double R ;
    cin >> t ;
    int i= 0 ;
    while (t--){
        i++ ;
        cin >> R>> n ;
        double sini = sin(M_PI / n) ;
        double result = (sini * R )/(1+sini);
        cout <<fixed<< setprecision(3);
        cout << "Scenario #"<<i<<":"<<endl ;
        cout << result <<endl ;
        cout <<endl ;
    }

    return 0;
}
