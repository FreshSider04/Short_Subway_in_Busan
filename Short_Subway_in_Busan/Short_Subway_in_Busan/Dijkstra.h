#include <stdio.h>

//#define vertex 44
//#define edge 39

#define vertex 3
#define edge 3

#define INFINTE_NUM 2147483647

#define V 3

int Dijkstra(int graph[V][V], int start)
{
    int distance[V]; // �ִ� �Ÿ� ���̺�
    int visited[V];  // ��� �湮 ���� üũ �迭

    // �� ��� ���� ���� ��� ����
    int source = start;

    // �� �ִ� �Ÿ� ���̺� �ʱ�ȭ
    for (int i = 0; i < V; i++) {
        distance[i] = INFINTE_NUM; // ���Ѵ�� �ʱ�ȭ
        visited[i] = 0;        // �湮���� ����
    }

    distance[source] = 0; // ���� ����� �Ÿ��� 0

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

        visited[u] = 1; // ��� �湮 ó��

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