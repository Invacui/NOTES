#include <iostream>
#include <bits/stdc++.h>
int main() {
   std::string str = "hello world";
   std::unordered_map<char,int> mp;
   std::set<char> v = {'a','e','i','o','u',' '};
   for(char ch : str)
   {
       if(v.find(ch) == v.end())
       {
           if(mp.find(ch) == mp.end())
           {
               mp[ch] = 1;
           }
           else{
               mp[ch] += 1;
           }
       }
       else{continue;}
   }
 for (auto const& pair: mp) {
        std::cout  << pair.first << ": " << pair.second << ","<<std::endl;
    }

    return 0;
}
