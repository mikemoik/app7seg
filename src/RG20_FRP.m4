digraph RG20_FRP {
    define(`digraph',`subgraph')
    include(`Cluster_1_1.dot')
    include(`Cluster_1_2.dot')
    include(`Cluster_1_3.dot')
    node [shape=record, style=filled, fillcolor=lightblue];
    FAS_Cluster_1 -> Cluster_1_1
    FAS_Cluster_1 -> Cluster_1_2
    FAS_Cluster_1 -> Cluster_1_3
}
