#include<iostream>
#include<set>
#include<algorithm>
#include<vector>

#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
#define all(c) c.begin(),c.end()
#define tr(container, it) \
      for(auto it = container.begin(); it != container.end(); it++)
using namespace std;

int main()
{
    vector<int>v {5,4,8,7,1,2,3};
    //auto x  = find(all(v),7)-v.begin();
    bool x = cpresent(v,77);
    cout<<x<<endl;
    tr(v,it){
        cout<<*it<<endl;
    }
    return 0;
}
