class Solution {
public:
    int maxArea(vector<int>& height) {
        // int maxArea=0;
        // for(int i=0;i<heights.size();i++){
        //     for(int j=i+1;j<heights.size();j++){
        //         int area=min(heights[i],heights[j])*(j-i);
        //         maxArea=max(maxArea,area);
        //     }
        // }
        // return maxArea;

        int max_water = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            // Calculate current container volume
            int current_height = min(height[left], height[right]);
            int width = right - left;
            int current_area = current_height * width;

            max_water = max(max_water, current_area);

            // Move the pointer with the smaller height
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_water;
    }
};
