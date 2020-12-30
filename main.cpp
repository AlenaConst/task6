#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector< pair<float, pair<int, int> > > A;
    pair<float, pair<int, int> > t;
    int n,i,j;
    cout<<"vvedite n"<<endl;
    cin>>n;
    A.resize(n);
    for(i=0; i<n; i++)
    {
        cin>>(A[i].second).first;
        cin>>(A[i].second).second;
        A[i].first=(A[i].second).first*(A[i].second).first+(A[i].second).second*(A[i].second).second;
    }
    sort(A.begin(),A.end());
    for(i=0;i<n;i++)
    {
        cout<<A[i].first<<" "<<(A[i].second).first<<" "<<(A[i].second).second<<endl;
    }
    return 0;
}
