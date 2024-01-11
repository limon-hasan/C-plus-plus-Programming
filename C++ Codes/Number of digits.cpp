// Coding Ninja Problem -->
//  Number of digits
//  https://bit.ly/3X17nIr

int countDigits(int n){
	int count = 0;
	while(n > 0) {

		/*
		1st Approach -->
		int last_digit = n%10;
		count ++;
		n = n/10;
		*/


		 
		/*
	    2nd Approach -->
		string s = to_string(n);
		return s.length();
		*/
		


		/*
		3rd approach -->
	    return log10(n)+1;
		*/
	}
	return count;

}
