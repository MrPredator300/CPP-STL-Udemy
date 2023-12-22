#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int arr[] = {20,30,40,40,50,100,1100};
  int n = sizeof(arr)/sizeof(int);

  int key;
  cin>>key;
  
  bool present = binary_search(arr,arr+n,key);
  if(present)
  {
     cout<<"Present \n";

  }
  else
   cout<<"Absent! \n";

   //Two more things
   //Get the index of the element
   // lower_bound(start,end,key) and upper_bound(s,e,key)

   auto lb = lower_bound(arr,arr+n,41);
   cout<<"Lower bound of 40 is "<<(lb - arr)<<endl;   //>=key


   auto ub = upper_bound(arr,arr+n,40);
   cout<<"Lower bound of 40 is "<<(ub - arr)<<endl;   //>key

   cout<<"Occurence frequency of 40 is "<<ub - lb<<endl;



   return 0;
}



