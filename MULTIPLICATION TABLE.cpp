#include <iostream>

using namespace std;

int main()
{
    int a,i;
    cout << "WHICH NUMBER'S MULTIPLICATION TABLE YOU WANT TO SHOW" << endl;
    cin>>a;
    for(i=1;i<=100;i++)
    {
       cout <<i<< " * "<<a<<" = "<<i*a<<"\n";
    }
    return 0;
}
