#include "Variable.h"
#include <string>

using namespace std;

Variable::Variable(string values[3])
{
    name = values[0];
    value = values[1];
    types = values[2];

}

Variable::~Variable()
{
    //dtor
}

string Variable::get(){
    return value;
}

void Variable::set(string new_value){
    value = new_value;
}
