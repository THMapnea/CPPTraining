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
		void connectVertex();
	
};


//PROTOTYPE
void showGraph(Graph g);



//MAIN
int main(){
	
	Graph g;
	g.createGraph();
	g.connectVertex();
	
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



void Graph::connectVertex(){
	for(int i = 0; i < Graph::vertices.size(); i++){
		//we need to get the list of vertex to connect to the i-th vertex from the user and then generate the edge with the various endpoints
		//to do so we can keep asking until a certain key is pressed and then the resulting array will be processed
		//keep in mind that it is necessary to handle unexistent vertex that may be inserted and preferrebly for now looping for example 
		//if we get a tuple like <v1,v1>
	}
}


//UTILTY FUNCTION DEFINITION
void showGraph(Graph g){
	for(int i = 0; i < g.vertices.size(); i++){
		std::cout << "Vertex " << i << ": " << g.vertices[i].vertex_label << std::endl; // Output the vertex label
	}
}


