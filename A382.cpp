#include<iostream>
#include<string>
using namespace std;
int main()
{ string s,ch,s1,s2;
  getline(cin,s);
  int a=s.find("|");
  s1=s.substr(0,a);
 
  s2=s.substr(a+1);
 
  getline(cin,ch);
  int n=0;
   while(n<ch.length())
   {  if(s1.length()>=s2.length())
           {s2=s2+ch.at(n);
           }
     else 
            s1=s1+ch.at(n);
            n++;
       
   }
  
       if(s1.length()==s2.length())
             cout<<s1<<"|"<<s2;
      else
          cout<<"Impossible";
  
 
 
return 0;
}
