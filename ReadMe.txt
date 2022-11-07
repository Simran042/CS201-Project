Team members
Sarvottam Swaroop :- 2021CSB1129
Simran Kaur :- 2021CSB1134
Vanshika Dhamija :- 2021CSB1138

Mentoring Teaching Assistant :- Sravanthi Chede

Project title:- Analysis of different algorithms for maximum flow problem
Project Summary :- Our project entails the analysis and implementation of two different algorithms for maximum flow problem and analysing the better algorithm.Maximum flow problems involve finding a feasible flow through a single-source, single-sink flow network that is maximum.There are different algorithms to solve the problem. In our project we are implementing two algorithms :- Ford–Fulkerson algorithm and Dinic's algorithm which are based on the idea of residual graph and level graph respectively. We will show both theoretically as well as experimetally that these algorithms have different time complexities and on the basis of the run time we will find out which algorithm is better\\
Ford-Fulkerson has a time complexity of O(maxflow*E) where E is the number of edges of the graph. Dinic's algorithm has a time complexity of O(V^2*E).

The written code is working properly on Mac OS.

How to run:-
1. Download and extract the zip file in a specific folder. 
2. Run the "directed_graph.c" file first.
3. Now, to run dinic's algorithm, run the "dinic_algo.c". And, for Ford Fulkerson's algorith, run the "ff_algo.c" file.

What to input:-
The input graph will be given by the directed_graph.c file when executed.

What output to expect:-
1. It will print all the edges(nodes connected by them and capacities)
2. It will also output the maximum flow and time required for both algorithms.

Time complexities of the algorithms:

BFS                :  O(V*V)
DFS                :  O(V*V)
Dinic's            :  O(V*V*E)
Ford-Fulkerson     :  O(maxflow*E)
