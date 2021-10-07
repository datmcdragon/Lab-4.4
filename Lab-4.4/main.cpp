// <Enver Seytumerov>
// Лабораторна робота № 4.4
// Варіант 22
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
    double y, x, xp, xk, dx, R;
    
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "dx = "; cin >> dx;
    
    cout << fixed;
    
    cout << "--------------------" << endl;
    cout << "|" << setw(5) << "x"
         << "|" << setw(7) << "y" << " |" << endl;
    cout << "--------------------" << endl;
    
 x = xp;
    
    while (x <= xk)
 {
     if (x<=-8)
      y = -R;
       else
        if (x>=-8 && x<=-R)
          y = -R + (R/(R+12))*(x+12);
            else
                if (x>=-R && x<=R)
                    y=-sqrt(pow(R,2)-pow(x,2));
                        else
                            if (x>=R && x<=5)
                                y=(2 / (5-R) * (x-R));
                            else
                                y=3;
    
     cout << "|" << setw(7) << setprecision(2) << x
          << " |" << setw(10) << setprecision(3) << y
          << " |" << endl;

     x += dx;
          
 }

    cout << "--------------------" << endl;
 return 0;
}

