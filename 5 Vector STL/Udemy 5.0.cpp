#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    vector<int> b(5,10);
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,10,14};

    //how to iterate over a vector
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<",";
    }

    cout<<endl;

    for(auto it=b.begin();it!=b.end();it++)
    {
        cout<<(*it)<<",";
    }

    cout<<endl;

    //For each loop
    for(auto x:d) {
        cout<<x<<",";
    }

    cout<<endl;

    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int no;
        cin>>no;
        v.push_back(no);
    }

    for(int x:v){
        cout<<x<<",";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;   //In Pushback repeating doubling of the memory happens 1->1;2->2;3->4;4->8 thus size is "8"
    cout<<v.max_size()<<endl;

    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;  
    cout<<d.max_size()<<endl;





    return 0;
}

