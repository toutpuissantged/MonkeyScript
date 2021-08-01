#ifndef VARIABLE_H
#define VARIABLE_H
#include <string>

class Variable
{
    public:
        Variable(std::string values[3]);
        virtual ~Variable();
        std::string get();
        void set (std::string new_value) ;

    private:
        std::string name;
        std::string value ;
        std::string types;
};

#endif // VARIABLE_H
