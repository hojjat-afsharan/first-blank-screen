#include "raylib.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	InitWindow(400, 600, "blank");

	SetTargetFPS(60);

	srand(time(NULL));

	float counter = (rand() % 20 + 10 * GetFrameTime());


	while(!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);
		DrawText("Counter", 10, 10, 16, WHITE);
		DrawCircleLines(100 + counter, 100 + counter, counter, PURPLE);
		DrawCircleLines(180, 160, counter, LIME);
		EndDrawing();
		counter += 0.1f;

	}

	CloseWindow();
	return 0;
}
