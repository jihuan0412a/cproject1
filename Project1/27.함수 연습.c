/*
float avg(int sum, int count)
{
	return (sum / count);

	//return (float)sum / count;
	//int �� int�� ������ �Ǹ� �Ҽ��� �ڸ��� ���� ������ float�� �����༭ �Ҽ��� �ڸ� Ȯ���մϴ�.
}
//�迭 ��ü�� ���� �����ؼ� �߾� �� Ȯ��(�迭 ����)
int center(int numbers[], int size)
{
	int result = 0; //�߾� ��
	int temp; //�ӽ� ��(�� ��ȯ��)
	//��ü Ƚ�� �ݺ�
	for (int i = 0; i < size; i++)
	{
		//i�� �ݺ��Կ� ���� �ݺ��ϴ� ������ ������/
		//��ü ������� 1 ���� �������� ����(ó�� ���� ���� ���� ���ϱ� ����)
		for (int j = 0; j < (size -  1) - i; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j];// �⺻ �� ����
				numbers[j] = numbers[j + 1]; //���� �� ����
				numbers[j + 1] = temp;//���� �� �Ѱ���

			}
		}
	}
	return result = numbers[(int)(size / 2)];
}
int sum(int numbers[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += numbers[i];
	}
	return result;
}

int main()
{
	int numbers[5];

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &numbers[i]);
	}

	int sum_value = avg(numbers, 5);//�迭�� �� = sum(�迭 �迭����);
	int avg_value = avg(sum_value, 5);// �迭�� ��� = avg(��, �迭 ����);
	int center_value = center(numbers, 5);//�迭�� �߾Ӱ� = center(�迭, �迭����);

	printf("%d\n", avg_value);
	printf("%d\n", center_value);


	return 0;
}
*/
#include <stdio.h>
//���� ���� '���� �˰��� 2587�� ��ǥ��2'
//ù ° �ٺ��� �ټ� ��° �ٱ��� �� �پ� �ڿ����� �Է��� �� �ֽ��ϴ�.
//�Է��� �Ϸ�� ��� ù° �ٿ��� ����� ����մϴ�.
//��° �ῡ���� �߾� ���� ����մϴ�.

//����� �־��� ��� ���� �� / ���� ������ ǥ���մϴ�.
//�߾� ���� �־��� ���� ũ�� ������� �������� ���, ���� �߾ӿ� �մ� ���� �ǹ�

//ex)�Է� ���� 10 40 30 60 30 �� ���   (10 + 40 + 30 + 60 + 30) / 5 = 34
//   �߾� ���� ����ϴ� ��� 10 30 30 40 60 �� ��� ���� 30
//���� ������ �����ϴ� �Լ��� ������ ���α׷��� �ϼ��ϼ���.
int avg(int sum, int count)
{
	return sum / count;
}

//�迭 ��ü�� ���� �����ؼ� �߾� �� Ȯ��(�迭 ����)
int center(int numbers[], int size)
{
	int result = 0; //�߾� ��
	int temp; //�ӽ� ��(�� ��ȯ��)
	//��ü Ƚ�� �ݺ�
	for (int i = 0; i < size; i++)
	{
		//��ü ������� 1 ���� �������� ����(ó�� ���� ���� ���� ���ϱ� ����)
		for (int j = 0; j < (size - 1) - i; j++)
		{
			//i��° ���� i+1��° ���� ���� i��° ���� �� Ŭ ����� �����Ѵ�.
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j]; //���� �� ����
				numbers[j] = numbers[j + 1]; //���� �� ����
				numbers[j + 1] = temp;//���� �� �Ѱ���
			}
		}
	}
	//������ ���� �� �߾� �� = �迭�� ���� /2 ��ġ�� �ش��ϴ� ��
	return result = numbers[size / 2];
}
int sum(int numbers[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += numbers[i];
	}
	return result;
}
int main()
{
	int numbers[5]; //���� 5���� ���� �Է�

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &numbers[i]);
	}
	int sum_value = sum(numbers, 5); //�迭�� �� = sum(�迭,�迭����);
	int avg_value = avg(sum_value, 5);//�迭�� ��� = avg(��, �迭����);
	int center_value = center(numbers, 5);//�迭�� �߾Ӱ� = center(�迭,�迭����);

	printf("%d\n", avg_value);
	printf("%d\n", center_value);

	return 0;
}
