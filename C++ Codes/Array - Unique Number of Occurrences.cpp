// Find unique number of occurrences of each element in the array
// LeetCode Question - 1207 (https://leetcode.com/problems/unique-number-of-occurrences/description/)
// getting Run-time error afer submitting


bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int i=0,count;
        vector<int>answer;
        for(i=0; i<arr.size(); i+=count) {
            count = 0;
            for(int j=0; j<arr.size(); j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }
            answer.push_back(count);
        }
        sort(answer.begin() , answer.end());
        for(int a=0; a < arr.size()-1; a++) {
            if(answer[a] == answer[a+1])
            return false;
        }
        return true;    
    }
