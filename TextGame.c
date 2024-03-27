#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PLAYER_ATTACK_POWER 20
#define MOSTER_ATTACK_POWER 5

int main()
{
    int player_max_hp = 100, moster_max_hp = 500;
    srand((unsigned int) time(NULL));
    char name[40];  printf("请输入你的名字\n");
    scanf("%s", name);

    while (1)
    {
        printf("%s进行了攻击,玩家造成了%d伤害\n", name,get_harm(PLAYER_ATTACK_POWER));
        moster_max_hp-=get_harm(PLAYER_ATTACK_POWER);
        printf("怪物剩余%d血量\n", moster_max_hp);
        printf("怪物进行了攻击,造成了%d伤害\n", get_harm(MOSTER_ATTACK_POWER));
        player_max_hp-=get_harm(MOSTER_ATTACK_POWER);
        printf("玩家剩余%d血量\n", player_max_hp);
        if (player_max_hp <= 0)
        {
            printf("你失败了\n");
            break;
        }
        if (moster_max_hp <= 0)
        {
            printf("你获得了胜利!\n");
            break;
        }
    }
    return 0;
}

int get_harm(int a)
{
    double num;
    double down=0.8,top=1.2;
    double b;
    num=(double)rand()/RAND_MAX;
    b=down+num*(down-top);
    a*=b;
    return a;
}
