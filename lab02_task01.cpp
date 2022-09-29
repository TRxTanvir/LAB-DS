#include <iostream>

using namespace std;

int main()
{
	int arrA[20], arrB[20], arrC[60];
	int a, b, i, j;
    cout<<"Enter First Array: "<<endl;
    cout <<"Size:" ;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>arrA[i];
        arrC[i] = arrA[i];
    }
    j = i;

    cout<<"Enter  Second Array: "<<endl;
    cout <<"Size:" ;
    cin>>b;
    for(i=0; i<b; i++)
    {
        cin>>arrB[i];
        arrC[j] = arrB[i];
        j++;
    }
    cout<<"\n The New Array:\n";

    for( int i=j-1; i>=0; i--)

        cout<<arrC[i]<<" ";

    cout<<endl;
    return 0;
}