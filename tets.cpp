#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;
int main()
{
    int jam[]={1,0,0,1,1,1};
    cout<<pow(10,2);
    float j=0;
    for(j=2;j<11;j++)
  {
      int value=0;
      int sum=0;
      for(int k=0;k<6;k++)
      {
          value=pow(j,k)*jam[5-k];
          sum=sum+value;
          cout<<"\nj : "<<j<<" k: "<<k;
          cout<<"\nvalue: "<<value;
          cout<<"\nsum: "<<sum;

      }
      cout<<"\nbase : "<<j<<" Value: "<<value<<endl;
  }


  /*  string number,arr[110];
ifstream inp_file;
inp_file.open("question.txt");
getline(inp_file,number);
int lim;
stringstream conver(number);
conver>>lim;
cout<<"cses: "<<lim;
for(int m=0;m<lim;m++)
{


getline(inp_file,arr[m]);
int num;
stringstream conver(arr[m]);
conver>>num;
cout<<"\nNum: "<<num;

}
*/
    return 0;}
