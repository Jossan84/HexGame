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
	
	std::vector<std::deque<int> > edgelist;
	edgelist.resize(121);
	for(int i=0; i<11; i++)
		for(int j=0; j<11; j++)
			//makeNode(i, j, edgelist[count++]);
	
	for (auto& deque_of_integers : edgelist) {
		for (auto& integer : deque_of_integers)
			std::cout << integer;
		std::cout << "\n";
	}
	
}