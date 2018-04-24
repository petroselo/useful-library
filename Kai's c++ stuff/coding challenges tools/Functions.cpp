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

bool func::CheckPrime(int num, bool NoPrint) {
    bool isprime = true;
    
    if(num > 2){
        for(int i = 2; i <= num/2; i++) {
        
            if(num%i == 0) {
                isprime = false;
                break;
            }
        }
    }
    else if(num == 2){
        isprime = true;
    }
    else {
        isprime = false;
    }

    // Dont print value when specififed
    if(NoPrint == false){
        if(isprime == true) {
            cout << num << " is prime" << endl;
        }
        else {
            cout << num << " is NOT prime" << endl;
        }
    }
    
    return isprime;
}

int func::CountPrime(int low, int high, bool NoPrint) {
    int total = 0;
    
    for(int i = low; i <= high; i++) {
        if(CheckPrime(i,true) == true) {
            total += 1;
        }
    }
    
    if(NoPrint == false) {
        cout << "Total Number of Primes:  " << total << endl;
    }
    
    return total;
}


int func::LCM(int n1, int n2, bool NoPrint) {
    int number = 0, high, low;
    
    // determine which one is high
    if(n1 > n2) {
        high = n1; low = n2;
    }
    else {
        low = n1; high = n2;
    }
    
    for(int i = 1; i<=1000; i++) {
        for(int j = 1; j<=1000; j++){
            if(j*n2 == i*n1) {
                number = j*n2;
                break;
            }
            if(j*n2 > i*n1) {
                break;
            }
        }
        if(number != 0){
            break;
        }
    }
    
    if(NoPrint == false) {
        cout << "LCM is  " << number << endl;
    }
    return number;
}
