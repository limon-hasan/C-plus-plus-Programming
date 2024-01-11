// Coding-Ninja Problem
//  https://bit.ly/3vBfkbD


bool checkArmstrong(int n) {
	int originNum = n, dup = n, lastDigit;
	int count = 0, sum = 0;
	while(n != 0) {
		count++;
		n = n / 10;
	}
	
	while(dup != 0) {
	    lastDigit = dup % 10;
		dup = dup / 10;
		sum = sum + pow(lastDigit, count);
	}
    
	if(sum == originNum)
	return true;
	else
	return false;	
}
