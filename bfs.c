#include <stdio.h>
#include <stdbool.h>

// 定义简单队列结构用于 BFS
typedef struct {
    int pos;   // 当前节点编号 (0~15)
    int dist;  // 到达当前节点的最短步数
} Node;

int minStepsToCheese(int walls) {
    int start = 0;
    int target = 15;

    // 如果起点或终点本身是墙，直接不可达
    if ((walls & (1 << start)) || (walls & (1 << target))) {
        return -1;
    }

    // BFS 队列与访问位图
    Node queue[16];//存16个节点
    int front = 0, rear = 0;
    int visited = 0;

    // 起点入队并标记已访问 (请使用位运算)
    queue[rear++] = (Node){start, 0};
    visited |= (1 << start);

    // 上、下、左、右四个方向的节点偏移量
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};

    //请在TO DO 和END OF TO DO 行之间补全代码：
    while(front<rear)
    {
        Node current=queue[front++];
        if(current.pos==target)//结束条件
        {
            return current.dist;//返回步数
        }
        int r=current.pos/4;//变成4*4数组
        int c=current.pos%4;
        for(int i=0;i<4;i++)
        {
            int a=r+dr[i];
            int b=c+dc[i];
            if(a<0||a>=4||b<0||b>=4)
            {
                continue;
            }
            int next=a*4+b;
            if((walls&(1<<next))||(visited&(1<<next)))//数组下标少1
            {
                continue;
            }
            queue[rear++]=(Node){next,current.dist+1};
            visited|=(1<<next);
        }
    }


    return -1; // 无法到达
}

int main() {
    int walls = (1 << 5) | (1 << 10); // 5号和10号格子是墙
    int steps = minStepsToCheese(walls);
    printf("Minimum steps: %d\n", steps); // 应输出 6
    return 0;
}

