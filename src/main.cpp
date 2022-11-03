#include <raylib.h>
#include <stdio.h>

int main() {
	InitWindow(800,450,"ooga booga");

	while (!WindowShouldClose()) {
		BeginDrawing();

		ClearBackground(RAYWHITE);
		DrawText("holy carp i did it :]",10,10,30,LIGHTGRAY);
		DrawRectangle(GetMouseX()-5,GetMouseY()-5,10,10,RED);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}
