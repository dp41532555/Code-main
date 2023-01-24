#include<iostream>
using namespace std;
class student
{
    int math,sci,eng;
    public:
    void setdata()
    {
        cout<<"enter maths : ";
        cin>>math;
        cout<<"enter science: ";
        cin>>sci;
        cout<<"enter english: ";
        cin>>eng;
    }
    void getdata()
    {
        cout<<"maths : "<<math<<endl;
        cout<<"science: "<<sci<<endl;
        cout<<"english: "<<eng<<endl;

    }
    int n,per;
    void total()
    {
        n=math+sci+eng;
        cout<<"total is : "<<n<<endl;
        per=n/3;
        cout<<"per is : "<<per<<endl;
    }
};
int main()
{
    student a[5],b;
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"student roll no : "<<i+1<<endl;
        cout<<"-----------------------------"<<endl;
        a[i].setdata();
        cout<<"-----------------------------"<<endl;
    }

    cout<<"|---------------------------------|"<<endl;
    cout<<"|**********RESULT*****************|"<<endl;
    cout<<"|---------------------------------|"<<endl;

    for(i=0;i<2;i++)
    {
        cout<<"student roll no : "<<i+1<<endl;
        cout<<"-------------------------------"<<endl;
        a[i].getdata();
        cout<<"----------------------------------"<<endl;
        a[i].total();
        cout<<"------------------------------------"<<endl;

    }
    return 0;
}