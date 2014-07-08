#include "OPCClient.h"
#include "Opcda.h"
#include "opccomn.h"
#include "OpcEnum.h"
#include <comdef.h>
#include <string>
#include <sstream>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	
	_bstr_t items[] = {"tag001","tag002"};
	_bstr_t items2[] = {"tag200", "tag198"};
	int indice[] = {0,1},x=1;

	OPCClient Teste;
	OPCClient Teste2;

	//Teste.OPCConnect("RSLinxRemote OPC Server");
	Teste.OPCConnect("ElipseSCADA.OPCSvr.1");
	Teste.InsertItens(items, 2);
	
	
	Teste2.OPCConnect("ElipseSCADA.OPCSvr.1");
	Teste2.InsertItens(items2, 2);
	
			Teste.Show(3);
			Sleep(1000);
	while(1)
	{
		_variant_t valores[]= {x,x};
		Teste2.WriteItens(indice,valores,2);
		Teste2.Show(1);
		x++;

		cout<<endl;

	}

	
	
}
