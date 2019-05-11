#include <iostream>
using namespace::std;

int main(int argc, char* argv[])
{       int n;
	char nume[];
	char inte[]; 


	if(argc < 2) {
		cout<<"Usage: "<<argv[0]<<" file-name"<<endl;
		return 0;
	}
	ifstream file(argv[1]);
	string line;
	if(file.is_open()) {
		getline(file, line)
				
			
		}
	
        	n=0;
        	for(int i=0 ; i<5 ; i++) {
                	if (int a[i]!=int b[i]) 
        			n+=1;             
        	}
        	cout<<"Hamming Dist:"<<n<<endl;
	}
        file.close(); 

}                      
