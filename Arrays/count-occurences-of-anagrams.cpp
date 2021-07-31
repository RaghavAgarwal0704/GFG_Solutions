int search(string pat, string txt) {
	    int i=0,j=0;
	    unordered_map<char,int>m;
	    for(auto a:pat)m[a]++;
	    int count=m.size();
	    int ans=0;
	    while(j<txt.length()){
	        
	        if(m.find(txt[j])!=m.end()){
	            m[txt[j]]--;
	            if(m[txt[j]]==0)count--;
	        }
	        
	        if((j-i+1)<pat.length()){
	            j++;
	        }
	        
	        else if((j-i+1)==pat.length()){
	            if(count==0)ans++;
	            if(m.find(txt[i])!=m.end()){
	                
	                if(m[txt[i]]==0){m[txt[i]]++;count++;}
	                else m[txt[i]]++;
	            }
	            j++;
	            i++;
	        }
	    }
	    return ans;
	}
