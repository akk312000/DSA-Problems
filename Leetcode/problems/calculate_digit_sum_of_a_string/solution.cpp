class Solution {
public:
    string digitSum(string s, int k) {
        string answer="";
        answer=s;
        int n=s.size();
       while(s.length()>k)
       {
           int i;int c=0;
           int cp=0;string temp="";
           for( i=0;i<s.length();i++)
           {
               if(c==k)
               {
                  
                   temp+=to_string(cp);
                   // cout<<"h "<<temp<<endl;
                   // cout<<cp<<" cp "<<endl;
                   cp=0;c=1;
                   cp+=(s[i]-'0');
                                  // cout<<s[i]<<" 1 here "<<endl;

               }
               else
               {
                   // cout<<cp<<" cp"<<endl;
                   cp+=s[i]-'0';c++;
                                                     // cout<<s[i]<<" 2 here "<<endl;

                   
               }
               // cout<<s[i]<<" j"<<endl;
           }
           // cout<<cp<<" cp "<<endl;
          
           temp+=to_string(cp);c=0;
        // cout<<" final temp "<<temp<<endl;
          s=temp;
       }
        return s;
    }
};