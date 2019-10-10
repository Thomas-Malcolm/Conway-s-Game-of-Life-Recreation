#pragma once
#include <vector>
#include <random>


class Life
{
public:

	int genCount = 0;
	int boardWidth, boardHeight;


	std::vector<std::vector<int>> LifeMap;

public:
	Life(int width, int height)
	{
		boardWidth = width;
		boardHeight = height;

		LifeMap = std::vector<std::vector<int>>(boardHeight, std::vector<int>(boardWidth));
	}

	void ResetLife();

	void NextGen();

	void SetAlive(int x, int y);

	void SetDead(int x, int y);

	void RandomiseBoard();
};