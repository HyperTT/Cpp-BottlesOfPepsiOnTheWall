#include <iostream>
using namespace std;

int main ()
{
    int pepsi=99, remain;
    for (remain=99; remain >=0; remain--)
    {
        if (remain == 99)
            remain -=1;
        if (remain > 1)
        {
            cout<<pepsi<<" bottles of Pepsi on the wall, "<<pepsi<<" bottles of Pepsi.\n";
            cout<<"Take one down, pass it around, "<<remain<<" bottles of Pepsi on the wall.\n";
        }
        else if (remain ==1)
        {
            cout<<pepsi<<" bottles of Pepsi on the wall, "<<pepsi<<" bottles of Pepsi.\n";
            cout<<"Take one down, pass it around, "<<remain<<" bottle of Pepsi on the wall.\n";
        }
        else
        {
            cout<<pepsi<<" bottle of Pepsi on the wall, "<<pepsi<<" bottle of Pepsi.\n";
            cout<<"Take one down, pass it around, "<<remain<<" bottles of Pepsi on the wall.\n";
        }
        pepsi-=1;
    }
    return 0;
}
