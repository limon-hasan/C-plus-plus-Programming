// C++ STL

// AAlgorithm in STL


#include <bits/stdc++.h>
using namespace std; void

/* Comp is a self return comparator which is nothing but a boolean function.
   So whenever you try to write a comparator, always analyze everything in terms of two pairs. Don't think in terms of arrays
   Just pick one pair and another pair and try to analyze pair 1 and pair 2  */

bool comp(pair<int, int> p1, pair<int, int> p2) {
	if(p1.second < p2.second) return true;
	if(p1.second > p2.second) return false;  // they will swap internally
	// they are same // if they are equal it's fine. even if i swap or don't swap it's okay


	if(p1.first > p2.first) return true;
	return false;  // they will swap internally

}

void explainExtra() {
    
    // Ascending order
    sort(a, a+n);  // This will go work as [start, end)
    sort(v.begin(), v.end()); // It will be applied into vector

	// a[] = {1,3,2,5}
	sort(a, a+4); // Sorted --> {1,2,3,5}

	// a[] = {1,4,2,1}
	sort(a+2, a+4); // {1, 4, 1, 2} --> Here (a+2) is the element --> 2 and (a+4) is after the 1
    

    // Descending order
    sort(a, a+n, greater<int>);  // greater<int> is a comparator which automatically sorts it into descending order
    pair<int, int> a[] = {{1, 2} {2, 1}, {4, 1}};


     

    // <---- If i try to sort in my own way then --->

    // How i want to sort -->
    // --> sort it according to second element
    // --> if second element is same, then sort according to first element but in descending
    
    pair<int, int> a[] = {{1, 2} {2, 1}, {4, 1}};
    sort(a, a+n, comp);  // comp is a self return comparator which is nothing but a boolean function
                         // we have to write comp in this case --> it's a syntax
  
    // So the final array --> First it will be like {{2, 1}, {4, 1}, {1, 2}}
    // Then it will be like {{4, 1}, {2, 1}, {1, 2}}  --> Final Array
  
   /* 
   Comp is a self return comparator which is nothing but a boolean function.
   So whenever you try to write a comparator, always analyze everything in terms of two pairs. Don't think in terms of arrays
   Just pick one pair and another pair and try to analyze pair 1 and pair 2  
   */


}

int main() {
	
	explainExtra();
	return 0;
}
