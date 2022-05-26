/*TestHexBoard*/

#include<deque>
#include<iostream>
#include<vector>



class hexGraph{
	public:
		hexGraph(int size): size(size){
			int count = 0;
			edgeList.resize(size);
			for(int i=0; i<size; i++)
				for(int j=0; j<size; j++)
					edgeList[i, j].push_back(0);
					//makeNode(i, j, edgelist[count++]);	
		}
		
		void plotHexBoard(){
			
			// Plot board header
			std::cout << "******** HEX GAME *********" << std::endl;
			std::cout << std::endl;
			
			std::string space = "";
			std::string edges = "\\";
			for (int i=1; i<size; i++){
				edges += " / \\";
			}
			
			// Plot first line
			std::cout << edgeList[0][0];
			for (int j=1; j<size; j++)
				std::cout << " - " << edgeList[0][j];
			std::cout << std::endl;
				
			// Plot hex board
			for (int i=1; i<size; i++){
				space += ' ';
				std::cout << space << edges << std::endl;
				space += ' ';
				std::cout << space << edgeList[i][0];
				for (int j=1; j<size; j++)
					std::cout << " - " << edgeList[i][j];
			std::cout << std::endl;
			}
			
			// Plot board legend
			std::cout << std::endl;
			std::cout << "Up-Down: RED, Left-Right: BLUE" << std::endl;
			std::cout << "***************************" << std::endl;		
			std::cout << std::endl;		
		}
	private:
		int size = 0;
		std::vector<std::deque<int> > edgeList;
};


int main(){

	int boardSize = 5;
	
	hexGraph TestGraph(boardSize);	
	TestGraph.plotHexBoard();
}