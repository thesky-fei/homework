#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;//ѧУѧϰСʱ������ѧϰСʱ
    int max_time = 0;//��ǰ���ѧϰ��ʱ��
    int answer = 0;//��
    for(int i = 0;i < 7;++i) {//�����������ݲ�����
        scanf("%d %d",&a,&b);//�����i+1���ѧУѧϰСʱ�����ѧϰСʱ
        if(a + b > max_time && a + b > 8) {//�����ʱ��>8���ҵ�ǰ��ʱ���֮ǰ�ҵ��������ʱ���
            answer = i + 1;//���´�Ϊ��ǰ����
            max_time = a + b;//�������ֵ
        }
    }
    printf("%d",answer);//��ӡ��
    return 0;
}
