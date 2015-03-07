#ifndef SPLASH_SCREEN_H
#define SPLASH_SCREEN_H

#include <windows.h>

#define SPLASH_IMAGE ":splash.image"
#define SPLASH_DISABLE_AUTOHIDE ":splash.autohide"

class SplashScreen {
public:
	static void ShowSplashImage(HINSTANCE hInstance);
	static void CreateSplashWindow(HINSTANCE hInstance);
	static void DrawImage();

private:
	static HBITMAP LoadImageBitmap(char* fileName);
	static HBITMAP LoadImageBitmap(HGLOBAL hgbl, DWORD size);
};

#endif // SPLASH_SCREEN_H