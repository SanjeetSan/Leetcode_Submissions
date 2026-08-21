class Solution {
    public int orangesRotting(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        Queue<int[]> q = new LinkedList<>();
        int fresh = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2){
                    q.offer(new int[]{i, j});
                }
                else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }
        int[][] dir = {
            {0,-1}, {-1,0},
            {0,1}, {1,0}
        };
        int time = 0;
        while(!q.isEmpty() && fresh > 0){
            time++;
            int si = q.size();
            for(int i = 0; i < si; i++){
                int v[] = q.poll();
                for(int j = 0; j < 4; j++){
                    int rr = v[0] + dir[j][0];
                    int rc = v[1] + dir[j][1];
                    if(rr >= 0 && rc >= 0 && rr < m && rc < n && grid[rr][rc] == 1){
                        grid[rr][rc] = 2;
                        q.offer(new int[]{rr, rc});
                        fresh--;
                    }
                }
            }
        }
        return fresh > 0 ? -1 : time;
        // return time;
    }
}