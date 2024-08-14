//11. Container With Most Water

int maxArea(int* height, int heightSize) {
    int i = 0, j = heightSize - 1;
    int maxCapacity = -1;

    while(i<j){
        int left = height[i];
        int right = height[j];

        int curCapacity = (left<right?left:right)*(j-i);
        if(curCapacity>maxCapacity){
            maxCapacity = curCapacity;
        }

        if(left<right){
            i++;
        }else{
            j--;
        }
    }
    return maxCapacity;
}
