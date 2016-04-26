// fungsi2.c : demo fungsi dengan input dan do-while
#include <iostream>

using namespace std;

// prototype
int positifInt();

int main(void)
{
    int n = positifInt();
    cout<<"Terima kasih atas "<<n<<"-nya";
    cout<<"\n";
}

// meminta input positive dari user
int positifInt(void) 
{
    int n;
    do
    {
        cout<<"Masukkan integer postif: ";
        cin>>n;
    }
    while (n < 1);
    return n;
}

