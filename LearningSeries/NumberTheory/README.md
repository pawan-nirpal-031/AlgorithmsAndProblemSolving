# Number Theory Notes

    All divisors of a number N occour in pairs of (a,b) where a*b = N 
    1) Gcd(x,1) = 1;
      Lcm(x,1)  = x
      Gcd(x,y) = g;
      Lcm(x,y) = l;
      -> l*g = x*y;
    
    3) Gcd(a,b,c) = Gcd(a,Gcd(b,c)) = Gcd(Gcd(a,b),c) it is associative but Lcm is not.
    
    4) For any number N total number of factors is of the order O(n^(1/3)) cube root order
    
    5) For count of number of primes in range (1,N) it is of  the order O(N/ln(N)) -> ln(N) is log base e
    
    6) (a-b)%m = (a%m - b%m + m)%m careful with overflow and modulo with negetive nums
    
    7) Any postitive int >=2 can be written as product of it's prime factors
      N = (Pf1^x1)*(Pf2^x2)*..(Pfk^xk) -> Pfi is the ith prime factor of N and xi is it's freqency
    
    8) Perfect squares have exactly 3 divisors only (1,x,x^2) for x^2,
      Perfect cube has exactly 4 divisors (1,x,x^2,x^3) for some x^3,
      Genrerally for kth power of x it has exactly k+1 divisors (1,x,x^2,x^3 ... x^k) 

    9) Proprties of Primes 
        * Total no of distinct prime factors are very less
        * product of smallest 8 primes is larger than 1e6   
        
        * Ex x<=1e7 and (l,r) <=1e18 print total number of numbers in the
          range (l,r) which are not co-prime to x, ie count of y's such that Gcd(x,y) not 1
          say x = 6 and l,r = (13,23) = [13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23] 
          the not co-primes to 6 are the numbers in this range that are multiples of 2 or 3
          say count of multiples in this range of 2 denoted by m2 and of 3 by m3, then our answer is 
          m2 + m3 - m6 ( Inclusion-exlclusion principle ) and getting mx in range [l,r] is easy ie, mx = floor(r/x) - floor((l-1)/x) 
          now see for x = 30 Pfs(30) -> (2,3,5) then we count the expression m2 + m3 + m5 - m6 - m15 - m10 + m30
          then you can generate subsets and add the odd len subsets ie (2,3,5, (2,3,5)) and subtract even len subsets 
          such as ((2,3). (3,5), (2,5)) m value's
          
          Algorithm : Get prime factors of x say (p1,p2,p3..pk) and get all subsets of those and if len of subset is 
          even then subtract it's m else add it's m value, this will work because for x=1e7 distinct Pf's will be utmost 8 