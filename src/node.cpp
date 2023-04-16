#include "field.cpp"
#include <memory>
#include "edge.cpp"

class Node{
	private:
		int id;
		std::string name;
		std::string label;
		std::vector<Edge> edges;
	public:
		std::vector<std::variant<BoolField, IntField, StringField>> fields;
		Node(){
			fields.push_back(StringField("lkadjhbfgad"));
			fields.push_back(IntField(123));
			fields.push_back(BoolField(true));
		};

		~Node(){};
};