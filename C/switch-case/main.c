/*
��·��֧���switch-case
    switch(���Ʊ��ʽ){ //���Ʊ��ʽֻ���������͵Ľ��
        case ����:      //���������ǳ�����Ҳ�����ǳ�������ı��ʽ
            ���
            ����
        case ����:
            ���
            ����
        default:
            ���
            ����
    }
    break
        switch�����Կ�����һ�ֻ��ڼ������ת��������Ʊ��ʽ��ֵ�󣬳������ת����ƥ���case(��֧���)����
        ��֧���ֻ��˵��switch�ڲ�λ�õ�·�꣬��ִ�����֧�е����һ�������������û��break�ͻ�˳��ִ��
        �������case��ȥ��ֱ������һ��break������switch����Ϊֹ
*/
#include <stdio.h>
int main(void){
    const int MRN = 2;
    int type;

    scanf("%d", &type);

    /*
    if (type==1)
        printf("���");
    else if(type==2)
        printf("���Ϻ�");
    else if (type == 2)
        printf("���Ϻ�");
    else if (type == 3)
        printf("���Ϻ�");
    else if (type == 4)
        printf("�ټ�");
    else
        printf("��");
    */

    switch (type)
    {
    case 1:
        printf("���");
        break;
    case 2:
        printf("���Ϻ�");
        break;
    case 3:
        printf("���Ϻ�");
        break;
    case 4:
        printf("�ټ�");
        break;

    default:
        printf("��");
    }

    return 0;
}