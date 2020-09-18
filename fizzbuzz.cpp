/* [start comment]
 CS1501 -- Tools of the Trade
   Fall 2020

#######################################################
###                   Directions                   ####
#######################################################
Write a program that prints the numbers from 1 to n. 
But for multiples of three print “Fizz” instead of the number 
for the multiples of five print “Buzz”.
and for numbers which are multiples of both three and five print “FizzBuzz”.

This program does not work the way it is supposed to
If you enter 15 you should get a printout of FizzBuzz but you don't
Can you debug this?

Output for 15 should be:
 1
 2
 Fizz
 4
 Buzz
 Fizz
 7
 8
 Fizz
 Buzz
 11
 Fizz
 13
 14
 FizzBuzz
[end comment] */

#include<iostream>
using namespace std; 
int main() {
	//could change n to try out different numbers
    int n = 15;

	//nice simple for loop to count up to n
	for(int i=0; i<=n; i++) {
		
		if (!(i%5) && !(i%3)){
            //check to see if divisible by 3 and 5
		    cout<<"FizzBuzz\n"; 
		}
			

	    else if (!(i%3)){
            //check to see if divisible by 3
			cout<<"Fizz \n"; 	
		}
	    else if(!(i%5)){
            //check to see if divisble by 5
			cout<<"Buzz \n"; 
		}
	   
	    else{
            //else just print out the number
		    cout<<i<<endl; 
        }
	}
    return 0;
}

/* [start comment]
 As you debug and step through the code before making any changes,
 write down here what the output (being i, Fizz, Buzz, or FizzBuzz)
 and the i that it's associated with
 Ex. i=1, output=1
     i=3, output=Fizz

i=0,  output=Fizz
i=1,  output =1 
i=2,  output =2 
i=3 , output =Fizz
i=4 , output =4
i=5 , output =Buzz
i=6 , output =Fizz
i=7 , output =7
i=8 , output =8
i=9 , output =Fizz
i=10, output =Buzz
i=11, output =11
i=12, output =Fizz
i=13, output =13
i=14, output =14
i=15, output =Fizz
[end comment] */
