digraph RG20_FRP {
    define(`digraph',`subgraph')

    include(`Cluster_1_1.dot')
    include(`Cluster_1_2.dot')
    include(`Cluster_1_3.dot')

    include(`Cluster_2_1.dot')
    include(`Cluster_2_2.dot')
    include(`Cluster_2_3.dot')

    include(`Cluster_3_1.dot')
    include(`Cluster_3_2.dot')
    include(`Cluster_3_3.dot')

    node [shape=record, style=filled, fillcolor=lightblue];

    PPE_E3_12P -> FAS_Cluster_1
    PPE_E3_12P -> FAS_Cluster_2
    PPE_E3_12P -> FAS_Cluster_3

    FAS_Cluster_1 -> Cluster_1_1
    FAS_Cluster_1 -> Cluster_1_2
    FAS_Cluster_1 -> Cluster_1_3

    FAS_Cluster_2 -> Cluster_2_1
    FAS_Cluster_2 -> Cluster_2_2
    FAS_Cluster_2 -> Cluster_2_3

    FAS_Cluster_3 -> Cluster_3_1
    FAS_Cluster_3 -> Cluster_3_2
    FAS_Cluster_3 -> Cluster_3_3

}
