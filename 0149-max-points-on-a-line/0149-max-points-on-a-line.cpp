class Solution {
public:
    int maxPoints(vector<vector<int>> &points) {
	int ans = 1;
	if(points.size()<=2)return (int)points.size();
	for (int i = 0 ; i < points.size() ; i++) {
		unordered_map<double, int> mp;
		for (int j = 0 ; j < points.size() ; j++) {
			if (j == i) continue;
			double x1 = points[i][0], x2 = points[j][0];
			double y1 = points[i][1], y2 = points[j][1];
			double slope = (x2 - x1== 0 ? INT_MAX : (y2 - y1) / (x2 - x1));
			mp[slope]++;
			ans = max(ans, mp[slope]);
		}
	}
	return ans+1;
}
};