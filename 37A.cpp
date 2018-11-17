#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,element;
    int arr[1001]={0};
    set <int> st;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>element;
        st.insert(element);
        arr[element]++;
    }
    sort(arr,arr+1001);
    cout<<arr[1000]<<" "<<st.size();
    return 0;
}
