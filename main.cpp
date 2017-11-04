/*

Sequential search implementation using C++ syntax

*/


#include <iostream>

using namespace std;


int seq_search_list(int arr[], int elem)
{
    int loc=-1;
    int list_size=sizeof(arr)/sizeof(int);

    for (int i=0;i<list_size;i++)
    {

        if (arr[i]==elem)
            loc=i;
    }


    return loc;
}

int main ()

{

    int choice=-1;

    while(1)
    {
        cin>>choice;
        if(choice>0)
            break;
        cout<<"Add a positive choice"<<endl;

    }

    int feed_list[]={1,2,3,4,5}; // Some Random seq.
    int pos=seq_search_list(feed_list,choice);

    if (pos<0)
        cout << "Item not found"<<endl;
    else
        cout << "Item is at location: " << pos<<endl;

    return 0;
}
