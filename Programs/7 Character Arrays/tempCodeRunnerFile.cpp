for(int i=0;arr[i]!='\0';i++){
        if(arr[i]!=arr[n-i-1]){
            return false;
        }
    }