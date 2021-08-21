    #include<iostream>
    #include<list>
    #include<set>
    using namespace std;
     
    class Graph{
     
    	int V;
    	list <int> *l;
     
    public:
    	Graph(int v){
    		V = v;
    		l = new list <int> [V];
    	}
     
    	void addEdge(int i,int j,bool undir = true){
     
    		l[i].push_back(j);
    		if(undir){
    			l[j].push_back(i);
    		}
    	}
    	void print()
    	{
    	    for(int i=0;i<V;i++)
    	    {
    	        cout<<i<<"-->";
    	        for(auto node:l[i])
    	        {
    	            cout<<node<<" ";
    	        }
    	        cout<<endl;
    	    }
    	}
     
    };
     
    int main(){
     
    	Graph g(5);
    	g.addEdge(0,1);
    	g.addEdge(1,2);
    	g.addEdge(0,2);
    	g.addEdge(0,3);
    	g.addEdge(3,2);
    	g.addEdge(3,4);
    	g.print();
    }
