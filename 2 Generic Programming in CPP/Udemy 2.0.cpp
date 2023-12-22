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


class Book
{
   public:
      string name;
      int price;

   Book() {

   cout<<"Call Automatically \n";      

   }

      Book(string name,int price){
         this->name = name;
         this->price = price;
      }

};

class Bookcompare {

public:
   bool operator()(Book A,Book B){
         if(A.name == B.name){
            return true;
         }
         return false;

   }
};


int main()
{
   Book b1("C++",100); //Old edition
   Book b2("Python",150);
   Book b3("Java", 120);
   
 //  Book b4;



   list<Book> l;
   l.push_back(b1);
   l.push_back(b2);
   l.push_back(b3);

   Book booktofind("C++",110); //New edition
   Bookcompare cmp;
   
   if(cmp(b1,booktofind)){
      cout<<"True same book";
   }



   return 0;
}





