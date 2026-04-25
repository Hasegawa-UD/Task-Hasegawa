// SampleGame5.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	// int answer = 5;

    // コンピュータの時間(を表す値)を変数に代入
	int t = (int)time(nullptr);
	// t を 10 で割って、その余りを answer に代入
	// 10 で割った余りなので、 answer には「0～9」のどれかが入っている
	int answer = t % 10;

	while (true)
	{
		// キーボードを押した数を変数 input に代入
		int input;
		scanf_s("%d", &input);

		// answer と input の数値の差を計算
		int sub = answer - input;

		int rank = 0;

		// answer と input の数値が一致している時だけ「一致！」と表示
		if (answer == input)
		{
			printf("一致！\n");
			rank = 2;
		}
		// answer より input のほうが小さかったら「小さい」と表示
		else if (answer > input)
		{
			printf("小さい！\n");
		}
		// answer より input のほうが大きかったら「大きい」と表示
		else if (answer < input)
		{
			printf("大きい！\n");
		}

		if (sub > -3 && 3 > sub && answer != input)
		{
			printf("惜しい！\n");
			rank = 1;
		}

		// ランクに入っている数値に合わせて表示を変える
		switch (rank)
		{
		case 2:
			printf("ランク:S\n");
			break;
		case 1:
			printf("ランク:A\n");
			break;
		default:
			printf("ランク:B\n");
			break;
		}

		if (answer == input)
		{
			break;
		}
    }
}