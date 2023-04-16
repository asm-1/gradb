#include "node.cpp"

class Graph{
	private:
		int id;
		std::vector<Node> nodes;
	public:
		MetaField meta;
		Graph(){};

		Graph(std::vector<Node> ns, int i, MetaField m){
			id = i;
			nodes = ns;
			meta = m;
		};

		~Graph(){};
};