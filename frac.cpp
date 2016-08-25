#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{

string number,arr,num1,num2;
ifstream inp_file;
inp_file.open("question.txt");
getline(inp_file,number);
ofstream out_file;
out_file.open("uv_ans.txt");
out_file<<"Case #1:\n";

int lim;

int i=0;
getline(inp_file,arr);
arr[arr.length()]='.';
stringstream conver(arr);
conver>>lim;

while(arr[i]!=' ')
{
    i++;
}
int p=i+1;
i=0;
while(arr[p]!='.')
{
    num2.append(&arr[p]);
    p++;

}
int digits,out;
stringstream conver2(num2);
conver2>>out;
digits=lim;

int frac[102][102];
int cnt=0;
//digits=16;
//out=50;
int llim=digits-1;
int last=llim;



return 0;
}
