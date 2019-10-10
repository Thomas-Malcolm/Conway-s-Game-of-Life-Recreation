#include "Life.h"
#include "olcPixelGameEngine.h"
#include <vector>
#include <random>

void Life::ResetLife()
{
	for (int i = 0; i < boardWidth; i++)
	{
		for (int j = 0; j < boardHeight; j++)
		{
			LifeMap[j][i] = 0;
		}
	}
}

void Life::NextGen()
{
	int neighbours;

	for (int i = 1; i < boardWidth - 2; i++)
	{
		for (int j = 1; j < boardHeight - 2; j++)
		{
			neighbours = 0;

			if (LifeMap[j - 1][i - 1] == 1) neighbours++;
			if (LifeMap[j - 1][i] == 1) neighbours++;
			if (LifeMap[j - 1][i + 1] == 1) neighbours++;
			if (LifeMap[j][i - 1] == 1) neighbours++;
			if (LifeMap[j][i + 1] == 1) neighbours++;
			if (LifeMap[j + 1][i - 1] == 1) neighbours++;
			if (LifeMap[j + 1][i] == 1) neighbours++;
			if (LifeMap[j + 1][i + 1] == 1) neighbours++;

			//printf("Neighboours: %d\n", neighbours);
			if (LifeMap[j][i] == 1)
			{
				if (neighbours < 2 || neighbours > 3)
				{
					SetDead(j, i);
				}
				else 
				{
					SetAlive(j, i);
				}
			}
			else if ((LifeMap[j][i] == 0) && neighbours == 3)
			{
				SetAlive(j, i);
			}
		}
	}

	genCount++;
}

void Life::SetAlive(int x, int y)
{
	LifeMap[x][y] = 1;
}

void Life::SetDead(int x, int y)
{
	LifeMap[x][y] = 0;
}

void Life::RandomiseBoard()
{
	for (int i = 0; i < boardWidth; i++)
	{
		for (int j = 0; j < boardHeight; j++)
		{
			LifeMap[j][i] = rand() % 2;
		}
	}
}