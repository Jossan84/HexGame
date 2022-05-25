/*TestHexBoard*/

#include<deque>
#include<iostream>
#include<vector>



class hexGraph{
	public:
		hexGraph(){
			int count = 0;
			edgelist.resize(121);
			//for(int i=0; i<11; i++)
				//for(int j=0; j<11; j++)
					//makeNode(i, j, edgelist[count++]);	
		}
	private:
		std::vector<std::deque<int> > edgelist;
};


int main(){
	
	int size = 5;
	std::vector<std::vector<int> > edgeList;
	edgeList.resize(size*size);
	for(int i=0; i<size; i++)
		for(int j=0; j<size; j++)
			edgeList[i, j].push_back(0);
	
	// Print edgeList
	for ( const auto &row : edgeList ){
		for ( const auto &s : row ) std::cout << s << ' ';
		std::cout << std::endl;
	}
	
	// Print part of edgeList
	for(auto i: edgeList[0])
		std::cout << i << ' ';
}