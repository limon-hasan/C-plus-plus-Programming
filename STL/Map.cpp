// C++ STL

// Map

// Map as a container which stores everything respect of key and values --> {key, value}
// This key has to be unique(like roll numbers) but the value can be same of them(like name) 
// This key can be any data type --> int , double, pair......
// Similiarly the value can be anything --> int , double, pair.......

#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    // Map stores unique key in sorted order but not value --> something similiar to set data structure
    
    // Declaration
	// map<int, int> mpp;

	// map<int, <pair<int, int>> mpp;

	// map< pair<int, int>, int> mpp;
	

    // For this -->
	map<int, int> mpp;
	mpp[1] = 2; // {1, 2} --> Here, 1 is key and 2 is value
    mpp.emplace(3, 1); // {3, 1}
	mpp.insert({2, 4}); // {2,4} --> 2 is key and 4 is value

    for(auto a = mpp.begin(); a != mpp.end(); a++) {
    	cout << a->first <<" " << a->second <<" " << endl;
    } cout << endl;

    // OR
    for(auto it : mpp) {
		cout << it.first << " " << it.second << endl;
	} cout << endl;
    
	cout << mpp[1] << endl; // 2 --> 2 is the map of 1
	cout << mpp[5] << endl; // It gives NULL or 0 because 5 is not present in the map
	cout << mpp[3] << endl; // 1  --> 1 is the map of 3
    
    auto it = mpp.find(3);  // It is pointing to the {3,1}
    cout << (*it).first << endl;  // 3
    cout << (*it).second << endl;  // 1 
    
    auto a = mpp.find(5);  //  It points mpp.end() that means after the map
    cout << (*a).first << endl; // 5  -->  (*a).first: Dereferencing the iterator a and accessing the first member of the pair. Since a points to the end of the map, the key is considered to be 5, as if it were the position after the last element. This is a common behavior in C++, and it is why you see 5.  */
    cout << (*a).second << endl; // 0  -->  (*a).second: Dereferencing the iterator a and accessing the second member of the pair. Since a points to the end of the map, there is no associated value. For an integer type, it defaults to 0. This is why you see 0.   */
    
    
    
    // mpp.emplace({3, 1})  -  This line uses the brace-enclosed initializer list syntax to provide the key-value pair as a single argument.
    /* mpp.emplace(3, 1) - This line directly provides two separate arguments, 3 for the key and 1 for the value.
       So during the prinitng element if we use (a->second.first) it will show error because it takes single argument. Because (a->second.first) means two arguments   
    */
    
    
    // For this -->
	map< pair<int, int>, int> mp;
	mp[{2,3}] = 10;  // {{2,3}, 10} --> {2,3} is key and 10 is value 

	for(map<pair<int, int>, int> :: iterator it = mp.begin(); it != mp.end(); it++) {
		cout << it->first.first << " "<< it->first.second <<" "<< it->second <<" " << endl;
	} 

    // OR
	for(auto it : mp) {
		cout << it.first.first << " " << it.first.second<<" " << it.second;
	} cout << endl << endl<< endl;


    map<int, int> mmpp;
    mmpp[1] = 3;
    mmpp.insert({0,8});
    mmpp.insert(make_pair(4,5));
    mmpp.emplace(9,0);
    // printing map elements
    for(auto a : mmpp) {
    	cout << a.first <<" " << a.second << " " << endl; // map = {{0,8}, {1,3}, {4,5}, {9,0}}
    } cout<< endl << endl;

    auto ab = mmpp.lower_bound(0);  // {0,8}--> // It is pointing to the element {0,8} because 0 is present in the key element in the map
    cout << ab->first << endl;  // 0
    cout << ab->second << endl;  // 8

    auto aab = mmpp.lower_bound(5);  // {9,0}  --> It is pointing to the element {9,0} because 5 is not present in the key element in the map
    cout << aab->first << endl;  // 9
    cout << aab->second << endl;  // 0

    auto aabb = mmpp.upper_bound(0);  // {1,3} --> It is ponting to the element {1,3} which is greater than 0 in that map
    cout << aabb->first << endl;  // 1
    cout << aabb->second << endl;  // 3

    auto aaba = mmpp.upper_bound(2);  // {4,5} --> It is pointing to the element {4,5} which is greater than 2 in that map
    cout << aaba->first << endl;  // 4
    cout << aaba->second << endl;  // 5  

    auto aaab = mmpp.upper_bound(9); // Element not found
    cout << aaab->first << endl;
    cout << aaab->second << endl;


    // Swap
    map<int,int> otherMap;
    otherMap[3] = 8;
    otherMap.insert(pair<int, int>(2,1));
    otherMap.insert({9,0});
    otherMap.insert(make_pair(4,3));
    otherMap.emplace(89,6);
    // Before swapping otherMap
    for(auto a : otherMap) {
    	cout << a.first <<" "<< a.second<< " "<<endl;  
    } cout << endl;
    cout << otherMap.size() << endl << endl;  // 5


    mmpp.swap(otherMap);
    // After swapping mmpp
    for(auto a : mmpp) {
    	cout << a.first <<" "<< a.second<< " "<<endl;  
        } cout << endl;

    // After swapping otherMap
    for(auto a : otherMap) {
    	cout << a.first <<" "<< a.second<< " "<<endl;  // Before swapping
    }cout << endl;


    // Size
    cout << mmpp.size() << endl;  // now its size is 5 because of swapping
    cout << otherMap.size() << endl;  // now its size is 4 because of swapping


    // Erase
    otherMap.erase(0);  // Since 0 is the key so {0,8} will be erased
    for(auto a : otherMap) {
    	cout << a.first <<" "<< a.second<< " "<<endl;  // {{1,3}, {4,5}, {9,0}}
    }cout << endl;

    otherMap.erase(1);  // Since 0 is the key so {1,3} will be erased
    for(auto a : otherMap) {
    	cout << a.first <<" "<< a.second<< " "<<endl;  // {{4,5}, {9,0}}
    }cout << endl;


    // Clear
    cout << mmpp.empty() << endl;  // 0
    mmpp.clear();
    cout << mmpp.empty() << endl;  // 1





//=========================================================================================



    // <------------ VERY IMPORTANT NOTE --------->
    // Here, (it) is a iterator pointing to the elements in a map and (a) is a variable which iterates through each elements in a map
    /*
    Regarding it->first and a.first:  
      (it->first) is used when accessing elements through an iterator (it).
      (a.first) is used when iterating with a range-based for loop (for(auto a : mp5)).

      Both represent the key of the key-value pair, and the syntax is essentially the same, indicating that you are accessing the first member of the pair. 
      The (->) is used when accessing members through a pointer or iterator, and the (.) is used when accessing members directly from an object. In the case of a range-based for loop, a represents the pair, and a.first gives you the key.
    */

    
    // Example 1:
	map<int, string> mp1;

	// Initializing inserting elements one by one
	mp1[1] = "Apple";
	mp1[2] = "Banana";
	mp1[3] = "Cherry";
 mp1.insert({4, "Ako"});
                                                        /*  1 Apple
                                                            2 Banana
                                                            3 Cherry  */
	for(auto a : mp1) {
		cout << a.first << " " << a.second << endl;       
	} cout << endl;



    // Example 2:
    // Or Using insert with a range of elements   // using vector with pair
    vector<pair<int, string>> v = {{1, "Apple"}, {2, "banana"}, {3, "Cherry"}};
    mp1.insert(v.begin(), v.end());    // Inserting vector elements into the map


    cout << "Using insert with a range:\n";
    for(auto a : mp1) {
    	cout << a.first <<" " << a.second<< " " << endl;
    } cout << endl;




    // Example 3 :
    // Using emplace
    map<int, string> myMap;
    myMap.emplace(1, "Apple");
    myMap.emplace(2, "Apple");
    myMap.emplace(3, "Apple");

    for(auto a : myMap) {
    	cout << a.first <<" " << a.second<< " " << endl;
    } 

    map<string, pair<int, double>> mp;
    mp.emplace("Kobir", make_pair(90, 23.67));

    auto i = mp.begin();
    if(i != mp.end()) {
        cout << i->first << " " << i->second.first <<" " << i->second.second<<" " << endl;
    } cout << endl;

    /*  The emplace function is designed to forward its arguments to the constructor of the value type of the map. In this case, the value type is std::pair<int, double>, and it expects two arguments (an integer and a double).  */




    // Example 4:
    // Using insert with brace initialization:
    // myMap.insert({key, value}) --> syntax

    map<int, double> mp2;
    mp2[1] = 3.1416;
    mp2[2] = 2.71;
    mp2[3] = 5.886;

    for (const auto a : mp2) {
        cout << a.first << ": " << a.second << endl;
    } cout << endl;

    


    // Example 5: Storing elements using insert
    // map_name.insert(pair_type(key, value)) --> syntax   // ---> mp.insert(pair<int, string>(1, "book"));
    map<int, string> mp4;
    mp4.insert(pair<int, string>(1, "Apple"));
    mp4.insert(pair<int, string>(2, "Banana"));
    mp4.insert(pair<int, string>(3, "Cherry"));
    mp4.insert({4, "Kamal"});
    mp4[5] = "Lichi";
    mp4[9] = "book";

/*****  Using make_pair :
        mp4.insert(std::make_pair(3, "Kamal"));

        Using curly braces :
        mp4.insert({3, "Kamal"});

        These Both cases are same   *****/

    /* mp4.insert(pair<int, string>(3, "Cherry"));
       mp4.insert({3, "Cherry"});

    Both lines are same and Both lines achieve the same result: inserting a key-value pair into the map mp4.
    The first line uses parentheses for the std::pair constructor, while the second line uses curly braces. The choice between them is often a matter of personal preference or the conventions followed in a codebase.   */   
    
    for(auto a : mp4) {
    	cout << a.first <<" " << a.second << " " << endl;
    } cout << endl;


    /*  <------------ VERY IMPORTANT NOTE --------->
    Regarding it->first and a.first:
      (it->first) is used when accessing elements through an iterator (it).
      (a.first) is used when iterating with a range-based for loop (for(auto a : mp5)).

      Both represent the key of the key-value pair, and the syntax is essentially the same, indicating that you are accessing the first member of the pair. 
      The (->) is used when accessing members through a pointer or iterator, and the (.) is used when accessing members directly from an object. In the case of a range-based for loop, a represents the pair, and a.first gives you the key.
    */
     

    map<int, int> mp5;
    mp5.insert(pair<int, int>(1, 4));  //  storing elements with pair using insert in map(mp5)

    // (1) -->
    for(auto a : mp5)  /* You are using a range-based for loop, which automatically iterates over all elements in the map. 
    	                  In this case, auto a represents a pair where a.first is the key, and a.second is the value. 
    	                  So, yes, you are effectively using an iterator, but the syntax is simplified with the range-based for loop.  */
    {
    cout << a.first <<" " << a.second << " " << endl;  // {1   4}  	
    } 
   

    // (2) -->
    // Or, I can write and print above things in the following way also ---->
    auto it = mp5.begin();
    cout << (*it).first <<" " << (*it).second <<" " << endl;   // {1   4}


    // (3) -->
    // Or, I can write and print above things in the following way also ---->
    auto itt = mp5.begin();
    if(itt != mp5.end()) {
    	cout << itt-> first << " " << itt-> second << " " << endl;   // {1   4}
    }    /*   it->fi[xx is used to access the key of the key-value pair that the iterator is pointing to.
              it->second is used to access the value of the key-value pair.     */
    cout << endl;




    // Example 6: Storing elements of different types
    map<string, pair<int, double>> mp6;
    mp6["Limon"] = make_pair(2, 78.9);
    mp6["Abid"] = pair<int, double>(1, 97.789);
    mp6.insert({"Hasu", pair<int, double>(6, 67.908)});    
    mp6["Kafi"] = {6, 67.908};
    mp6.insert(make_pair("Kakku", make_pair(6, 67.908)));
    mp6.insert({"Kaku", make_pair(6, 67.908)});
    mp6.insert({"Kiko",{6, 67.908}});
    mp6.emplace("Kikoo", make_pair(6, 67.908));


    for(auto a : mp6) {
    	cout << a.first << " " << a.second.first <<" " << a.second.second <<" " << endl;
    } cout << endl;


    /*  Using make_pair :
        mp4.insert(std::make_pair(3, "Kamal"));

        Using curly braces :
        mp4.insert({3, "Kamal"});

        These Both cases are same   */

}

int main() {
	
	explainMap();
	return 0;
}
