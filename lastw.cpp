#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include <cstring>
#include <cstdlib>
using namespace std;


int main()
{
string number,arr[110];
ifstream inp_file;
inp_file.open("question.txt");
ofstream out_file;
out_file.open("uv_ans.txt");
getline(inp_file,number);
int lim;
stringstream conver(number);
conver>>lim;
cout<<"\ntest: "<<lim<<endl;
string temp;
for(int m=0;m<lim;m++)
{
getline(inp_file,arr[m]);
string now;
now.clear();
now=arr[m];
cout<<now<<endl;
temp.clear();
temp[1050]=now[0];
int left=1050,right=1050;
int len=now.length();
for(int j=1;j<len;j++)
{
    char a=now[j];
    if(a>=temp[left])
    {
        temp[--left]=a;
}
    else
    {
        temp[++right]=a;
    }
}

int c=0;


char her[1010];

for(int k=left;k<=right;k++)
{
her[c++]=temp[k];
}

her[c]='\0';
string lasst(her);
out_file<<"Case #"<<(m+1)<<": "<<lasst<<"\n";
}

return 0;
}
