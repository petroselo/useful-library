//
//  Functions.hpp
//  coding challenges tools
//
//  Created by Kai Junge on 24/04/2018.
//  Copyright © 2018 Kai Junge. All rights reserved.
//

#ifndef Functions_hpp
#define Functions_hpp

#include <stdio.h>

class func{
    
public:
    func();
    // check to see if a given number is a prime
    bool CheckPrime(int num, bool NoPrint = false);
    
    // check to see number of primes in the given range (including low/high)
    int CountPrime(int low, int high, bool NoPrint = false);
    
    // find lowest common multiple of 2 numbers
    int LCM(int n1, int n2, bool NoPrint = false);
    
};

#endif /* Functions_hpp */
