// https://bit.ly/3dm6bdZ

// Coding Ninja problem


int findDuplicate(vector<int> &arr) 
{
    int result = 0;
    for(int i=0; i<arr.size(); i++) {
        result = result ^ arr[i];
    }
    int value = result;
    for(int i=1; i<arr.size(); i++) {
        value = value ^ i;
    }
    return value;
}
