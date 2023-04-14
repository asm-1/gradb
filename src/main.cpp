#include <vector>
#include <string>

enum data_type
{
	Str,
	Int,
	Bool,
	Node_1,
};

class MetaField
{
	public:
		MetaField(){};
		~MetaField(){};
};

class Field{
	private:
		data_type type;
	public:
		Field(){};
		~Field(){};
};

class Node{
	private:
		data_type type;
	public:
		MetaField meta;
		std::vector<Field> fields;
		std::string name;

		Node(){};
		~Node(){};
};


int main(int argc, char const *argv[])
{
	Node node;
	return 0;
};