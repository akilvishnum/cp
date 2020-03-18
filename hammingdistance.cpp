class Solution {
public:
    int hammingDistance(int x, int y) {
        int one = x;
        int rem;
        string s = "";
        int count = 0;
        int two = y;
        while( one != 0)
        {  rem = one % 2;
            one = one / 2;
           // cout<<"one is "<<one;
           
           // cout<<"rem is "<<rem;
            ostringstream str1;
            str1 << rem;
            //cout<<str1.str();
            string strrem = str1.str();
            
            s+= strrem;
        }
        string h="";
        while( two != 0)
        {  rem = two % 2;
            two = two / 2;
           // cout<<"one is "<<one;
           
           // cout<<"rem is "<<rem;
            ostringstream str1;
            str1 << rem;
            //cout<<str1.str();
            string strrem = str1.str();
            
            h+= strrem;
        }
       int min = minn(h.length(), s.length());
       
      
        for( int i =0; i<min ; i++)
        {
            if(s[i] != h[i])
                count++;
        }
          if(h.length() > s.length())
          {
             
        for(int i = min ; i<h.length(); i++)
        {   
            if(h[i] == '1')
            {
                 count = count + 1; }
        }
          }
        else{
               for(int i = min ; i<s.length(); i++)
        {
            if(s[i] == '1')count++;
        }
            
        }
        return count;
    }
    int minn(int x, int y)
    {
        if(x < y)
            return x;
        else return y;
    }
};
