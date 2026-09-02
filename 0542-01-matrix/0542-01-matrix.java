class Solution {
    public int[][] updateMatrix(int[][] mat) {
        int m = mat.length;
        int n = mat[0].length;

        int[][] res = new int[m][n];

        Queue<int[]> q = new LinkedList<>();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0){
                    res[i][j] = 0;
                    q.offer(new int[] {i, j});
                }
                else{
                    res[i][j] = -1;
                }
            }
        }

        int[][] dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        while(!q.isEmpty()){
            int[] curr = q.poll();
            for(int i = 0; i < 4; i++){
                int rr = curr[0] + dir[i][0];
                int rc = curr[1] + dir[i][1];
                if(rr >= 0 && rc >= 0 && rr < m && rc < n && res[rr][rc] == -1){
                    q.offer(new int[] {rr, rc});
                    res[rr][rc] = res[curr[0]][curr[1]] + 1;
                }
            }
        }
        
        return res;
    }
}