//
//  Functions.cpp
//  coding challenges tools
//
//  Created by Kai Junge on 24/04/2018.
//  Copyright © 2018 Kai Junge. All rights reserved.
//

#include "Functions.hpp"
#include <cstdlib> // standard functions library
#include <iostream>

using namespace std;

func::func(){
    
}

bool func::CheckPrime(int num) {
    bool isprime = true;
    
    if(num > 2){
        for(int i = 2; i <= num/2; i++) {
        
            if(num%i == 0) {
                isprime = false;
                break;
            }
        }
    }
    else {
        isprime = false;
    }

    if(isprime == true) {
        cout << num << " is prime" << endl;
    }
    else {
        cout << num << " is NOT prime" << endl;
    }
    
    return isprime;
}
