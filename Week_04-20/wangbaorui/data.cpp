#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int a[100];
    fstream in("C://Users//wangshaoxin//Desktop//data.txt");
    cin.rdbuf(in.rdbuf());
    int max = 0,min;
    int q1,q2,medium;
    int temp;
    for(int i=0;i<100;i++)
        {

            std::cin>>a[i];

        }
    for(int i=0;i<100;i++)
        {

               for (int j = 0; j < 100-i; j ++)
               {

                   if(a[j+1]< a[j])
                   {
                       temp =  a[j];
                       a[j] = a[j+1];
                       a[j+1] = temp;
                   }

               }
        }

        cout << "max = " <<a[99]<<" ";
        cout <<"min = "<<a[0]<<" ";

        cout <<"Q1 = "<<a[24]<<" ";

        cout <<"medium =" <<a[49]<<" ";
        cout <<"Q3 = "<< a[74]<<" ";



    return 0;
}
