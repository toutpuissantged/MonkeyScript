#include <iostream>
#include <string>
#include <vector>
#include "variable.h"
using namespace std;

vector<string> split (string text , char separator){
    // function to split string to array
    vector<string> myTab(1);
    string temp_str ;
    char cur_str;
    for (size_t i = 0; i < text.size(); i++)
    {
        cur_str = text[i];
        if(cur_str==separator){
            myTab.push_back(temp_str);
            temp_str = "";
            continue;
        }
        temp_str+=cur_str;
    }
    cout << myTab[1] << endl;
    return myTab ;
}

void Debug (string text){
    cout << "debgug : " << &text << endl ;
}

string TypesCheck(vector<string> text){
    string value = text[5];
    string types;
    string typesMap[5];
    typesMap[0] = "String";
    typesMap[1] = "Int";
    typesMap[2] = "Float";
    typesMap[3] = "Bool";
    typesMap[4] = "Null";
    //typesMap("String","Int","Float","Bool","Null");
    char keyWord2 = '"';
    char value_0 = value[0] ;
    char value_end = value[value.size()];
    //static_cast
    if(value_0==keyWord2 && value_end==keyWord2) types = typesMap[0] ;
    else types  = typesMap[4];
    cout << "debgug : " << types << endl ;

    return "string";
}

int variableDefine(string text){
    string keyWord = "var";
    string state[3] ;
    bool variableIsDEclared = text.find(keyWord)<10*10;
    vector<string> text_splited = split(text,' ');
    state[0] = text_splited[1] ;
    state[1] = text_splited[3];
    state[2] = TypesCheck(text_splited);
    Variable var(state) ;
    //var.set(setter);
    if(!variableIsDEclared){
        return 0 ;
    }
    cout << variableIsDEclared << endl;

    return 0 ;
}

void hello(){
    cout << " monkey Script is scripting and higly language to genere executable  @ 2021  " << endl;
}

string input(){
    string inputed;
    cout << " @ " ;
    // cin >> inputed ;
    // cin.ignore() ;
    inputed = "var myvar  = 2 ";
    return inputed ;
}

void output(string outputed){
    cout <<" > " << outputed << endl ;
}

void bundel (string inputed){
    vector<string> text_splited = split(inputed,' ');
    variableDefine(inputed);
    output(inputed);

}

int main()
{
    string inputed ;
    hello();
    bool runing(true);
    while (runing)
    {
        inputed  = input();
        bundel(inputed);
        runing = false;
    }

    return 0;
}
