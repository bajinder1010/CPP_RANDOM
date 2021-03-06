#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
 
// Function to group anagrams from a given list of words
void groupAnagrams(string words[], int n)
{
    // construct a vector out of given words and sort each word
    vector<string> list(words, words + n);
    for (string &s: list) {        // don't forget to put `&`
        sort(s.begin(), s.end());
    }

    for(int i=0;i<list.size();i++)
    {
        cout<<list[i]<<endl;
    }

    cout<<"------------"<<endl;

 
    // construct a map where the key is each sorted word,
    // and value is a list of indices where it is present
    unordered_map<string, vector<int> >map;
    for (int i = 0; i < n; i++) {
        map[list[i]].push_back(i);
    }
 
    // traverse the map and read indices for each sorted key.
    // The anagrams are present in the actual list at those indices
    
    for (auto itr: map)
    {
        for (int index: itr.second) {
            cout << words[index] << " ";
        }
        cout << endl;
    }
}
 
int main()
{
    // list of words
    string words[] =
    {
        "CARS", "REPAID", "ARCS", "NOSE", "PAIRED", "LANE"
    };
 
    // size of list
    int n = sizeof(words) / sizeof(words[0]);
 
    groupAnagrams(words, n);
 
    return 0;
}