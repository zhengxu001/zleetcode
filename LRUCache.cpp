struct node{
		int key;
		int value;
		int time;
		node():key(0),value(0),time(0){};
		node(int k, int v):key(k),value(v),time(0){};
	};

    class LRUCache{
		map<int, int> mp;//mp<key, index>
		vector<node> lru; //= new vector<node>(100);
		vector<int> v(int); //= new vector<int>(1000);
		int size;
		int capacity;
	public:
    LRUCache(int c) {
		if(c < 1)return;
		//vector<node> lru(c);
		lru.clear();
		mp.clear();
		size = 0;
        capacity = c;
		//cout<<"capacity:"<<capacity<<endl;
    }
    
    int get(int k) {
		map<int, int>::iterator it = mp.find(k);
        if(it != mp.end())
			return lru[(*it).second].value;
		else
			return -1;
    }
    
    void set(int k, int val) {
		if(capacity < 1)return;
        map<int, int>::iterator it = mp.find(k);
        if(it != mp.end())//find
		{
			lru[(*it).second].value = val;
			lru[(*it).second].time = 0;
			for(int i = 0; i < size; i++)
				if(lru[i].key != k)
					lru[i].time ++;
		}else{//not find
			if(size < capacity){//size < capacity
				node* tmp = new node(k,val);
				lru.push_back(*tmp);
				/*lru[size].key = k;
				lru[size].value = val;
				lru[size].time = 0;*/
				for(int i = 0; i < size; i++)
					lru[i].time++;
				mp[k] = size;
				size++;
			}else{//size >= capacity
				int mxtime = lru[0].time;
				int mxtimeindex = 0;
				for(int i = 0; i < size; i++){
					if(lru[i].time > mxtime)
						mxtimeindex = i;
					lru[i].time++;
				}
				it = mp.find(lru[mxtimeindex].key);
				mp.erase(it);
				lru[mxtimeindex].key = k;
				lru[mxtimeindex].value = val;
				lru[mxtimeindex].time = 0;
				mp[k] = mxtimeindex;
			}
		}
    }
};