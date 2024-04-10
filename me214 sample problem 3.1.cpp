#include <iostream>
#include <cmath>
using namespace std;

/*
Shaft BC is hollow with inner and outer diameters of 90 mm and
120 mm, respectively. Shafts AB and CD are solid and of diameter d.
For the loading shown, determine (a) the maximum and minimum
shearing stress in shaft BC, (b) the required diameter d of shafts AB
and CD if the allowable shearing stress in these shafts is 65 MPa.
*/

int main() {
    double Ta, Tb, ri, ro, Tma;
    cout << "Enter Ta, Tb, inner diameter (ri), outer diameter (ro), and maximum torque (Tma): ";
    cin >> Ta >> Tb >> ri >> ro >> Tma;

    double T = (Ta + Tb) * ro / 2000 * 1e3 / (M_PI / 2 * ((pow(ro / 2000, 4)) - (pow(ri / 2000, 4))));
    cout << "Maximum and minimum shearing stress in shaft BC: " << T << " " << (ri/ro) * T << endl;
    
    double result = (Ta * 1e3) / ((M_PI / 2) * Tma * 1e6);
    cout << "Required diameter of shafts AB and CD: " << pow(result, 0.25) << endl;

    return 0;
}
