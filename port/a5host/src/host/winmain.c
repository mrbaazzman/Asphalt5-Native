/* winmain.c - GUI-subsystem entry point for the release build.
 *
 * The development build is a console app (CUI) so stdout logs are visible.
 * The release build links with -mwindows and uses this WinMain wrapper; it
 * never allocates a console window.  main() is still the real entry.
 */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

int main(int argc, char** argv);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow) {
    (void)hInstance;
    (void)hPrevInstance;
    (void)lpCmdLine;
    (void)nCmdShow;
    return main(__argc, __argv);
}
