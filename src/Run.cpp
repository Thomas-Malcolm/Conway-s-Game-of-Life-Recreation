#include "olcPixelGameEngine.h"
#include "Life.h"

Life* board = new Life(200, 200);
float dTime = 0.0f;
float frameTime = 0.5f;

class Runner : public olc::PixelGameEngine
{
public:
	
	Runner()
	{
		sAppName = "Conway's Life";		
	}
public:
	bool OnUserCreate() override
	{
		board->boardWidth = ScreenWidth();
		board->boardHeight = ScreenHeight();
		board->RandomiseBoard();
		board->NextGen();
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{

		if (dTime <= frameTime) {
			dTime += fElapsedTime;
			return true;
		} else {
			dTime = 0;
			board->NextGen();

			for (int i = 0; i < board->boardWidth; i++)
			{
				for (int j = 0; j < board->boardHeight; j++)
				{
					olc::Pixel p;
					p.r = 0; p.g = 0; p.b = 0;

					if (board->LifeMap[j][i] == 1)
					{
						p.r = 255; p.g = 255; p.b = 255;
					}
					Draw(i, j, p);
				}
			}
		}
		
		return true;
	}
};

int main()
{
	printf("How long (seconds) between generations?\n> ");
	scanf_s("%f", &frameTime);

	Runner game;
	if (game.Construct(100, 100, 8, 8))
	{
		game.Start();
	}

	return 0;
}