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