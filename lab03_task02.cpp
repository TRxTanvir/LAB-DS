#include<iostream>
using namespace std;
void encode(string s,int j)
{
    int r, i ;
    for(i=j;i<s.size();i=i+j+1)
    {
        r=s[i];
        s[i]=(char)(r+j);
    }
    cout<<" Coverted String     : "<<s;
    cout<<endl;
}
int main()
{
  int j;
  string s;
  cout<<"Enter String  : ";
  getline(cin,s);
  cout<<"Enter Integer : " ;
  cin>>j;
  cout<<"Sample String   : "<<s<< endl;
  cout<<"Sample Integer  : "<<j <<endl;
  encode(s,j);
  return 0;
}