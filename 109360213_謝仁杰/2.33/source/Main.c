#include<stdio.h>
#include<stdlib.h>
int main()
{
	float totalMile;		//�`���{
	float gasCost;			//�T�o��
	float perMile;			//�T�o��]�h��
	float parking, tolls;	//�����O�A�L���O
	
	float total;

	printf("�п�J�@��Ѫ��`���{��\n");
	scanf_s("%f", &totalMile);
	printf("�п�J�T�o�@����/�[�ڦh�ֿ�\n");
	scanf_s("%f", &gasCost);
	printf("�п�J�����@����/�[�گ��p�h�֤���\n");
	scanf_s("%f", &perMile);
	printf("�п�J�@�Ѫ������O\n");
	scanf_s("%f", &parking);
	printf("�п�J�@�Ѫ��q��O(�L���O)\n");
	scanf_s("%f", &tolls);

	total = (totalMile / perMile)*gasCost + parking + tolls;
	printf("�@%.3f��", total);

	system("pause");
	return 0;
}
