#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int>s;
    int c, x;
    string op;
    cin>>c;
    for(int i=1;i<=c;i++)
    {
        cin>>op;
        if(op=="push")
        {
            cin>>x;
            s.push(x);
        }
        else if(op == "top")
        {
            cout<<s.top()<<"\n";
        }
        else
        {
            s.pop();
        }
    }
	return 0;
}