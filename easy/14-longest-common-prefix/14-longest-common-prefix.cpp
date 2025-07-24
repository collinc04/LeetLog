            char check = strs[0][j];
            for(int i = 0; i < strs.size(); i++) {
                if((strs[i].size() < j + 1) || (strs[i][j] != check)){
                    end = true; 
                    break;
                }
                if(i == strs.size() - 1){
                    solution.push_back(check);
                }
            }
            if(end) { break; }
        while(!end) {
            j ++;
        int j = 0;