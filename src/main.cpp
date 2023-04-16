#include <vector>
#include <string>
#include <iostream>
#include "node.cpp"


using std::cout;

int main(int argc, char const *argv[])
{
	Node n;
	for (const auto& container : n.fields)
	{
	    if (std::holds_alternative<IntField>(container)) {
	        std::cout << "int value: " << std::get<IntField>(container).value << std::endl;
	    } else if (std::holds_alternative<BoolField>(container)) {
	        std::cout << "double value: " << std::get<BoolField>(container).value << std::endl;
	    } else if (std::holds_alternative<StringField>(container)) {
	        std::cout << "string value: " << std::get<StringField>(container).value << std::endl;
	    }
	}
	return 0;
};