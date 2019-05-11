#include <iostream>
#include <string>
using namespace::std;

int main()
{  
	int n,i,j;
        cin>>n;
        string names[100];
        string password[100];
        string first;
        string pass;
        string action;
        bool active[100];
	int total = 0;
        for(i=0;i<n;i++)
        {
		cin>>action;
		cin>>first;
		cout<<"i "<<i<<" "<<first<<endl;
                if(action != "logout"){
                 cin>>pass;}
                for(j=0;j<total;j++)
                {
			if(names[j]==first){ break; }
                }
                if(action=="register")
                {      
			if(j == total) 
                         {
	
                        	cout<<"success: new user added"<<endl;
                                names[total]=first;
                                password[total]=pass;
                                total++;
                          }
			else {
                       		cout<<"fail: user already exists"<<endl;
			}
                }
                else if(action=="login")
                {    
			if(j == total) {cout<<"fail:no such user"<<endl;
			}
			else {	
				if(active[j]==false)
                                {
					if(pass==password[j])
                                        {
						cout<<"success: user logged in"<<endl;
						active[j]=true;
                                        }

			 	
                        		else if(first!=names[j])
                         		{ 
                          			cout<<"fail: no such user"<<endl;
                        	        }
                         		else if(pass!=password[j])
                         		{
                                		cout<<"fail: incorrect password"<<endl;
                          		}
                                      	
                               }
                               else
                                {
                                	cout<<"fail: already logged in"<<endl;
                                }
                               
                              
			}
                }
                else if(action=="logout")
                {
			if(j == total){cout<<"fail:no such user"<<endl;
                        }                      
                      
                         else if(first==names[j])
                         {
				if(active[j]==true)
                                {
					cout<<"success: user logged out"<<endl;
                                        active[j]=false;
                                }
                                else 
                                {
                                        cout<<"fail: already logged out"<<endl;
                                    }
                         }   
                         

                      
               } 


        }
        
        
}
