#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include <cstring>
#include <cstdlib>
using namespace std;
class node
{
public:
    char data;
    node *left,*right;
    node()
    {
        left=NULL;
        right=NULL;
    }
    node(char a)
    {
        data=a;
        left=NULL;
        right=NULL;
    }

};

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
//string temp;
for(int m=0;m<lim;m++)
{
getline(inp_file,arr[m]);
string now;
now.clear();
now=arr[m];
cout<<now<<endl;
//temp.clear();
node mid(now[0]);
//mid.data=now[0];
//temp[1050]=now[0];
//int left=1050,right=1050;
int len=now.length();
node *temp,*lft,*rght,*head;
lft=rght=&mid;
cout<<"MID: "<<mid.data<<endl;
for(int j=1;j<len;j++)
{
    //char a=now[j];
    temp=new node(now[j]);
    cout<<"tmo data"<<temp->data;
    if((temp->data)>(lft->data))  //>=temp[left])
    {
        lft->left=temp;
        temp->right=lft;
        lft=temp;
        head=lft;
}
    else
    {
        rght->right=temp;
        temp->left=rght;
        rght=temp;
    }
}

int c=0;
node *tm=new node();
tm=lft;
cout<<"link list: ";
int mmm=0;
while(mmm<3)
{
    cout<<tm->data;
    tm=tm->right;
    ++mmm;
}
cout<<endl;
/*
char her[1010];

for(int k=left;k<=right;k++)
{
her[c++]=temp[k];
}

her[c]='\0';
string lasst(her);
out_file<<"Case #"<<(m+1)<<": "<<lasst<<"\n";

*/
}

return 0;
}
