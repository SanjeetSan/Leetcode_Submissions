class Solution {
    public boolean validPath(int n, int[][] edges, int source, int destination) {
        ArrayList<ArrayList<Integer>> list = new ArrayList<>();
        for(int i = 0; i <= n; i++){
            list.add(new ArrayList<>());
        }
        for(int i = 0; i < edges.length; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            list.get(u).add(v);//understand
            list.get(v).add(u);//understand
        }
        Queue<Integer> q = new LinkedList<>();
        q.offer(source);
        boolean[] vis = new boolean[n];
        vis[source] = true;
        while(!q.isEmpty()){
            int curr = q.poll();
            ArrayList<Integer> li = list.get(curr);
            for(int i = 0; i < li.size(); i++){
                int neig = li.get(i);
                if(!vis[neig]){
                    q.offer(neig);
                    vis[neig] = true;
                }
            }
        }
        return vis[destination];
    }
}