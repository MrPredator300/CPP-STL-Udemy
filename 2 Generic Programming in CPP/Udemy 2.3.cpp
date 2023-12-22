#include <iostream>
#include <list>
using namespace std;

//linear search  FREE from datatypes {array of books,integers,....}
template<typename T>
int search(T arr[],int n,T key) {

   for(int pos=0;pos<n;pos++){
      if(arr[pos]==key){
         return pos;
      }
   }
   return n;
}

template<class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key)
{
   while(start!=end){
      if(*start==key){
         return start;
      }
      start++;
   }
   return end;

}



int main()
{
   /*
   int a[] = {1,3,5,,7,10,12};
   int n = sizeof(a)/sizeof(int);
   cout<<search(a,n,key)<<endl;

   */
   list<int> l;

   l.push_back(1);
   l.push_back(2);
   l.push_back(5);
   l.push_back(3);

   auto it = search(l.begin(), l.end(), 50);
   if(it==l.end()){
      cout<<"Element not present";
   }
   else
   {
   cout<<*it<<endl;
   
   }


   return 0;
}





