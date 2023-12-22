#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   string s0;
   string s1("Hello");


   string s2 = "Hello World!";
   string s3(s2);

   string s4=s3;

   char a[] = {'a','b','c','\0'};
   string s5(a);



   cout<<s0<<endl;
   cout<<s1<<endl;
   cout<<s2<<endl;
   cout<<s3<<endl;
   cout<<s4<<endl;
   cout<<s5<<endl;

   if(s0.empty())
      cout<<"s0 is an empty string"<<endl;
   
   s0.append("I like C++");
   cout<<s0<<endl;
   s0+= " and Python";
   cout<<s0<<endl;

   //Remove or erase the content of the string
   cout<<s0.length()<<endl;
   s0.clear();
   cout<<s0.length()<<endl;

   //Compare two strings
   s0 = "Appple";
   s1 = "Mango";
   cout<<s1.compare(s0)<<endl;

   //Overloaded Operator Operations
   if(s1 > s0)   
      cout<<"Mango is lexographically greater than apple \n";

   cout<<s1[0]<<endl;

   //Find Substrings
   string s = "I want to have apple and juice ";
   int idx = s.find("apple");
   cout<<idx<<endl;

   //Remove a word form a string
   string word = "apple";
   int len = word.length();
   s.erase(idx,len+1);
   cout<<s<<endl;

   //Iterate over all the characters in the string
   for(int i=0;i<=s1.length();i++)
   cout<<s1[i]<<":";

   cout<<endl;

   //Iterators
   for(auto it = s1.begin();it!=s1.end();it++)
   cout<<(*it)<<",";
   cout<<endl;

   //For each Loop
   for(auto c:s1)
   cout<<c<<".";


   return 0;
}


