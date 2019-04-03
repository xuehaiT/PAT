#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(){

    list<string> slst;
    string str;

    //读入list对象
    while(cin>>str)
        slst.push_back(str);
    cin.clear();

    cout<<"请输入想要删除的数字"<<endl;
    cin>>str;

    for(list<string>::iterator it=slst.begin();it!=slst.end();it++){

        if(*it==str)
        {
            it=slst.erase(it);
            --it;
        }


    }

    for (list<string>::iterator it=slst.begin();it!=slst.end();it++){

        cout<<*it<<endl;
    }


    return 0;

}

