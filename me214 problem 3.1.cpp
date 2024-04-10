#include <iostream>
#include <cmath>
using namespace std;

#define sr srand(time(0));
#define pv(...) {cout << #__VA_ARGS__ << " = "; debug(__VA_ARGS__);}
#define pn(v) {for(auto& e:(v)) cout << e << ' '; cout << endl;}
template<typename T>
void debug(const T& t) {
    cout << t << endl;
}
template<typename T, typename... Args>
void debug(const T& t, const Args&... args) {
    cout << t << ", ";
    debug(args...);
}

/*
A hollow cylindrical steel shaft is 1.5 m long and has inner and outer
diameters respectively equal to 40 and 60 mm (Fig. 3.15). (a) What is
the largest torque that can be applied to the shaft if the shearing stress
is not to exceed 120 MPa? (b) What is the corresponding minimum
value of the shearing stress in the shaft?
*/

int main() {
    double l, ri, ro, tm;
    cin >> l >> ri >> ro >> tm;
    pv(l, ri, ro, tm);
    
    double T = 0.5 * M_PI * (pow(ro / 2000, 4) - pow(ri / 2000, 4)) * tm * 1e6 / (60.0 / 2000);
    cout << T << endl;

    double Tmin = (ri/ro) * T;
    cout << Tmin << endl;

    return 0;
}
