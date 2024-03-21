#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define PLAYER_ATTACK_POWER 20
#define MOSTER_ATTACK_POWER 5

int main()
{
    int player_max_hp=100,moster_max_hp=500,player_attack_damage,moster_attack_damage;
    srand(time(NULL));
    char name;
    printf("请输入你的名字\n");
    scanf("%s",name);

    while (1)
    {
        player_attack_damage = PLAYER_ATTACK_POWER * (rand()%4+3);
        moster_max_hp -= player_attack_damage;
        printf("%s进行了攻击,玩家造成了%d伤害\n",name,player_attack_damage);
        printf("怪物剩余%d血量\n",moster_max_hp);
        moster_attack_damage = MOSTER_ATTACK_POWER*(rand()%4+3);
        player_max_hp -= moster_attack_damage;
        printf("怪物进行了攻击,造成了%d伤害\n",moster_attack_damage);
        printf("玩家剩余%d血量",player_max_hp);
        if(player_max_hp <= 0)
            printf("你失败了\n");
            break;
        if(moster_max_hp <= 0)
            printf("你获得了胜利!\n");
            break;
    }
    return 0;
}
