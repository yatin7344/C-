#include <iostream>

using namespace std;

int main()
{
    int n, count;

    do
    {
        cout<<"Enter a number : ";
        cin>>n;

        if (n%8==0){
            count++;
        }
    } while (n%8==0);

    cout<<"Total "<<count<<" numbers are valid.";
}
