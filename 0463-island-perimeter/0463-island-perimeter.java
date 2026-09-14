class Solution {
    public int islandPerimeter(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;

        Queue<int[]> q = new LinkedList<>();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    q.offer(new int[] { i, j });
                    grid[i][j] = 2;
                    break;
                }
            }
            if (!q.isEmpty())
                break;
        }

        int[][] dir = {
                { 0, 1 }, { 1, 0 },
                { -1, 0 }, { 0, -1 }
        };

        int answer = 0;
        while (!q.isEmpty()) {
            int[] curr = q.poll();

            for (int sides = 0; sides < 4; sides++) {
                int rr = curr[0] + dir[sides][0];
                int rc = curr[1] + dir[sides][1];

                // Outside and Water
                if (rr < 0 || rc < 0 || rr >= m || rc >= n || grid[rr][rc] == 0) {
                    answer++;
                }

                // Unvisited land
                else if (grid[rr][rc] == 1) {
                    grid[rr][rc] = 2;
                    q.offer(new int[] { rr, rc });
                }
            }
        }

        return answer;
    }
}