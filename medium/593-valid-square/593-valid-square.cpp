        return true;
    }
    int getDistance(vector<int>& p1, vector<int>& p2) {
        if(squareMap.size() == 2 && squareMap.rbegin()->second != 2) return false;
        if(squareMap.size() > 2) return false;
        if(squareMap.begin()->first == 0) return false;
        return pow((p1[0] - p2[0]) , 2) + pow((p1[1] - p2[1]) , 2);
    }
};
        std::cout<<squareMap.rbegin()->first<<" "<<squareMap.rbegin()->second<<endl;
        std::cout<<squareMap.begin()->first<<" "<<squareMap.begin()->second<<endl;