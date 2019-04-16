#include<stdio.h>

#include "lualib.h"
#include "lauxlib.h"
#include "lua.h"

typedef struct {
	char op;
	float n1;
	float n2;
} expr;

static float calc(expr a){
	switch(a.op){
		case '+':return a.n1+a.n2; break;
		case '-':return a.n1-a.n2; break;
		case '*':return a.n1*a.n2; break;
		case '/':return a.n1/a.n2; break;
		default: printf("wrong operator. simplecalc only support addition, multiplication, division and substraction\n"); return 0; break;
	}
}

static int proccalc(lua_State *L){
	expr str1;
	char *line=lua_tostring(L,-1);
	int err;
		err=sscanf(line,"%f %c %f",&str1.n1,&str1.op,&str1.n2);
		if (err!=3){ 
			printf("wrong format!\n"); 
			lua_pushnil(L);
			}else{
			lua_pushnumber(L,calc(str1));
		}
	return 1; // one output
}

int luaopen_calclua(lua_State *L){
 lua_register(L,"calc",proccalc);
 return 0;
}
