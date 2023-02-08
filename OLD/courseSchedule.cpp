#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Solution {
public:
    void makeGraph(vector<vector<int>>& prerequisites,vector<int> adj[],vector<int>& indegree){
        for(int i=0; i<prerequisites.size(); i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        vector<int> indegree(numCourses);
        queue<int> q;
        int vertices = 0;
        makeGraph(prerequisites,adj,indegree);
        
        for(int i=0; i<numCourses; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int &v: adj[u]){
                if(--indegree[v] == 0){
                    q.push(v);
                }
            }
            vertices++;
        }
        return (vertices == numCourses);
    }
};