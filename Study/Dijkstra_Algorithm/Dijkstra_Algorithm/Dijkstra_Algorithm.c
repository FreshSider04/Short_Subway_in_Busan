#include <stdio.h>

// �׷����� ���� ��
#define V 6 
// �Ÿ��� ���Ѵ�� �ʱ�ȭ �ϱ� ���� �����ϴ� ��(������ �ִ�)
#define INFINTE_NUM 2147483647

void dijkstra(int graph[V][V], int start) {
    int distance[V]; // �ִ� �Ÿ� ���̺�
    int visited[V];  // ��� �湮 ���� üũ �迭

    // �� ��� ���� ���� ��� ����
    int source = start;

    // �� �ִ� �Ÿ� ���̺� �ʱ�ȭ
    for (int i = 0; i < V; i++) {
        // ���Ѵ�� �ʱ�ȭ
        distance[i] = INFINTE_NUM;
        // �湮���� ����
        visited[i] = 0;
    }

    // ���� ����� �Ÿ��� 0
    distance[source] = 0;

    // �� ��~�� ������ �ݺ�
    for (int count = 0; count < V - 1; count++) {
        // �� ���� ��ġ�� ����� ���� ��� �� �湮���� ���� ��� �� ���� ª�� �Ÿ��� ����
        int minDistance = INFINTE_NUM;
        int u;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && distance[v] <= minDistance) {
                minDistance = distance[v];
                u = v;
            }
        }

        // ��� �湮 ó��
        visited[u] = 1;

        // �� �ش� ��带 ���� �ٸ� ���� ���� �Ÿ��� ����Ͽ� �ִ� �Ÿ� ���̺� ������Ʈ
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && distance[u] != INFINTE_NUM && distance[u] + graph[u][v] < distance[v]) {
                distance[v] = distance[u] + graph[u][v];
            }
        }
    }

    // ��� ���
    printf("���\t�ִ� �Ÿ�\n");
    for (int i = 0; i < V; i++) {
        printf("%d\t%d\n", i, distance[i]);
    }
}

int main() {
    int graph[V][V] = {
        // Node 0 -> Node 1�� ����ġ 4
        {0, 4, 0, 0, 0, 0},
        // Node 1 -> Node 0, Node 2�� ����ġ ���� 4�� 8...
        {4, 0, 8, 0, 0, 0},
        {0, 8, 0, 7, 0, 4},
        {0, 0, 7, 0, 9, 14},
        {0, 0, 0, 9, 0, 10},
        {0, 0, 4, 14, 10, 0}
    };

    // ���� ��� ����
    int start = 0;

    dijkstra(graph, start);

    return 0;
}