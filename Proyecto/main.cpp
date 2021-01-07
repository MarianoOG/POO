#include "usuarios.h"
#include "menu.h"

int main(){
int perfil;
initwindow(900,600);
perfil=menu_usuarios();
menu_principal(perfil);
closegraph();
return 0;
}
