#include<iostream>
#include<vector>
#include<utility>


//DATA DEFINITION
struct Vertex{
	std::string vertex_label;
};



//an edge is a tuple of vertices called endpoints
struct Edge{
	std::pair<Vertex,Vertex> end_points;
	std::string edge_label; 
 };


//CLASSES
class Graph{
	public:
		std::vector<Vertex> vertices;
		std::vector<Edge> edges;
	
	public:
		void createGraph();	
	
};


//PROTOTYPE
void showGraph(Graph g);



//MAIN
int main(){
	
	Graph g;
	g.createGraph();
	
	showGraph(g);
	
	
	return 0;
}



//CLASS FUNCTION DEFINITION
void Graph::createGraph() {
    int n_vertex = 0;
    std::cout << "Insert number of vertices: ";
    std::cin >> n_vertex;
 
	
	//assign to each vertex it's own label and add it to the graph
    for (int i = 0; i < n_vertex; i++) {  	
        std::string t_label = "v" + std::to_string(i);
        Vertex v; 
        v.vertex_label = t_label; 
        Graph::vertices.push_back(v); 
    }
}


//UTILTY FUNCTION DEFINITION
void showGraph(Graph g){
	for(int i = 0; i < g.vertices.size(); i++){
		std::cout << "Vertex " << i << ": " << g.vertices[i].vertex_label << std::endl; // Output the vertex label
	}
}


