// Coding-Ninja problem
//  https://bit.ly/3vylgCi

bool palindrome(int n)
{
    int dup = n, revNum;
    while(n > 0) {
        int lastDigit = n % 10;
        n = n / 10;
        revNum = (revNum * 10) + lastDigit;
    }
    if(revNum == dup)
    return true;
    else
    return false;
}
