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
    printf("�������������\n");
    scanf("%s",name);

    while (1)
    {
        player_attack_damage = PLAYER_ATTACK_POWER * (rand()%4+3);
        moster_max_hp -= player_attack_damage;
        printf("%s�����˹���,��������%d�˺�\n",name,player_attack_damage);
        printf("����ʣ��%dѪ��\n",moster_max_hp);
        moster_attack_damage = MOSTER_ATTACK_POWER*(rand()%4+3);
        player_max_hp -= moster_attack_damage;
        printf("��������˹���,�����%d�˺�\n",moster_attack_damage);
        printf("���ʣ��%dѪ��",player_max_hp);
        if(player_max_hp <= 0)
            printf("��ʧ����\n");
            break;
        if(moster_max_hp <= 0)
            printf("������ʤ��!\n");
            break;
    }
    return 0;
}
