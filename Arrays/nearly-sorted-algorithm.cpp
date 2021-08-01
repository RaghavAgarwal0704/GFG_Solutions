void sort(vector<int>&vec,int k){
    int count=0;
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=0;i<vec.size();i++){
        q.push(vec[i]);
        if(q.size()>k){vec[count++]=q.top();q.pop();}
    }
    while(!q.empty()){
        vec[count++]=q.top();
        q.pop();
    }
}
