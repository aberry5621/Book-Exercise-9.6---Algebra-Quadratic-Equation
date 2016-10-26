//
//  main.cpp
//  Book Exercise 9.6 - Algebra Quadratic Equation
//
//  Created by ax on 10/26/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "Quadratic Equation Solving Class!\n";
    /*
     Quadratic equation solver class:
        - Data fields a, b, c that represent 3 coefficients
        - constructor for arguments a, b, and c
        - three get functions for a, b and c
        - function get_discriminant() that returns discriminant from (b^2 - 4ac)
        - functions get_root1() and get_root2() for returning two roots
     */
    
    class Quadratic {
        
        public:
        
        double a = 0.0, b = 0.0, c = 0.0;
        
        Quadratic() {
            a = 0;
            b = 0;
            c = 0;
        }
        
        double get_a() {
            cout << "enter a value: ";
            cin >> a;
            return a;
        }
        
        double get_b() {
            cout << "enter b value: ";
            cin >> b;
            return b;
        }
        
        double get_c() {
            cout << "enter c value: ";
            cin >> c;
            return c;
        }
        
        // get discriminant
        double get_discriminant() {
            return pow(b, 2.0) - (4 * a * c);
            
        }
        
        double get_root1() {
            double d = get_discriminant();
            return (-b + pow(d, 0.5)) / (2 * a);
        }
        
        double get_root2() {
            double d = get_discriminant();
            return (-b - pow(d, 0.5)) / (2 * a);
        }
        
    };
    
    Quadratic quadratic_1;
    
    quadratic_1.get_a();
    cout << "quadratic_1 a value: " << quadratic_1.a << endl;
    quadratic_1.get_b();
    cout << "quadratic_1 b value: " << quadratic_1.b << endl;
    quadratic_1.get_c();
    cout << "quadratic_1 c value: " << quadratic_1.c << endl;
    
    double d = quadratic_1.get_discriminant();
    
    if (d > 0) {
        // discriminant is positive, output the two roots
        cout << "The roots are " << quadratic_1.get_root1() << " and " << quadratic_1.get_root2() << endl;
    } else if(d == 0) {
        // discriminant is zero, one root
        cout << "The root is " << quadratic_1.get_root1() << endl;
    } else {
        // discriminant is negative, no roots
        cout << "The equation has no real roots :(" << endl;
    }
    
    return 0;
}
