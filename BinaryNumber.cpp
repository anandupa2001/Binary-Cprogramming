#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i,j,rows;
    int count_1=1;
    cout<<"Enter the number of rows";
        cin>>rows;
        for(i=1; i<=rows; i++){
            for(j=1; j<=i; j++){
                if(j%2==1)
                {
                    cout<<"0";
                }
                else{
                    cout<<"1";
                }
        }
        cout<<"\n";
        }
        getch();
    return 0;
}
