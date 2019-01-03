#include <iostream>
using namespace std;
int main ()
{
    int umur;
    cout<<"Program Memvalidasi umur"<<endl;
    cout<<"masukan umur (1 s/d 100) : " ;
    cin>>umur;
    if (umur<50)
        cout<<"anak-anak,remaja,dewasa"<<endl;
    else if (umur>50)
        cout<<"orang tua,lansia"<<endl;
    return 0;
}
