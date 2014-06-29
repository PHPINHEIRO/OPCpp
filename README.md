OPC++
=====
<h1>como usar a classe OPCCLIENT</h1>
<ol>
            <div  style="HEIGHT: 230px; width: 300px;">
                <li>Método: StartCOM( );</li>
                <ul>
                    <table border="1px">
                        <tr>
                            <td class="coluna1">tipo do metodo:</td>
                            <td class="coluna2">Privado</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Função:</td>
                            <td class="coluna2">Inicia a COM</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Parâmetro de entrada:</td>
                            <td class="coluna2">--</td>
                        </tr>
                        <tr>
                            <td class="coluna1">tipo de Entrada:</td>
                            <td class="coluna2">--</td>
                        </tr>
                        <tr>
                            <td class="coluna1">retorno:</td>
                            <td class="coluna2">Void</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Exemplo:</td>
                            <td class="coluna2">StartCOM();</td>
                        </tr>
                    </table>
                </ul>
            </div>
            <div  style="HEIGHT: 230px; width: 600px">
                <li>Método: AbortCOM( );</li>
                <ul>
                    <table border="1px">
                        <tr>
                            <td class="coluna1">tipo do metodo:</td>
                            <td class="coluna2">Privado</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Função:</td>
                            <td class="coluna2">Fecha a COM</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Parâmetro de entrada:</td>
                            <td class="coluna2">--</td>
                        </tr>
                        <tr>
                            <td class="coluna1">tipo de Entrada:</td>
                            <td class="coluna2">--</td>
                        </tr>
                        <tr>
                            <td class="coluna1">retorno:</td>
                            <td class="coluna2">Void</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Exemplo:</td>
                            <td class="coluna2">AbortCOM();</td>
                        </tr>
                    </table>
                </ul>
            </div>
            <div  style="HEIGHT: 230px; width: 600px">
                <li>Método: CreateInstance( );</li>
                <ul>
                    <table border="1px">
                        <tr>
                            <td class="coluna1">tipo do metodo:</td>
                            <td class="coluna2">Privado</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Função:</td>
                            <td class="coluna2">Acessa o espeço de memória reservado para o servidor</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Parâmetro de entrada:</td>
                            <td class="coluna2">--</td>
                        </tr>
                        <tr>
                            <td class="coluna1">tipo de Entrada:</td>
                            <td class="coluna2">--</td>
                        </tr>
                        <tr>
                            <td class="coluna1">retorno:</td>
                            <td class="coluna2">Void</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Exemplo:</td>
                            <td class="coluna2">CreateInstance();</td>
                        </tr>
                    </table>
                </ul>
            </div>
            <div  style="HEIGHT: 230px; width: 600px">
                <li>Método: GetCLSID( );</li>
                <ul>
                    <table border="1px">
                        <tr>
                            <td class="coluna1">tipo do metodo:</td>
                            <td class="coluna2">Privado</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Função:</td>
                            <td class="coluna2">Pega o id do servidor no registro do Windows</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Parâmetro de entrada:</td>
                            <td class="coluna2">--</td>
                        </tr>
                        <tr>
                            <td class="coluna1">tipo de Entrada:</td>
                            <td class="coluna2">--</td>
                        </tr>
                        <tr>
                            <td class="coluna1">retorno:</td>
                            <td class="coluna2">Void</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Exemplo:</td>
                            <td class="coluna2">GetCLSID();</td>
                        </tr>
                    </table>
                </ul>
            </div>
            <div  style="HEIGHT: 275px; width: 600px">
                <li>Método: StartGroup();</li>
                <ul>
                    <table border="1px">
                        <tr>
                            <td class="coluna1">tipo do metodo:</td>
                            <td class="coluna2">Privado</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Função:</td>
                            <td class="coluna2">Adiciona um grupo OPC definindo o tipo de leitura dos itens</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Parâmetro de entrada:</td>
                            <td class="coluna2">--</td>
                        </tr>
                        <tr>
                            <td class="coluna1">tipo de Entrada:</td>
                            <td class="coluna2">--</td>
                        </tr>
                        <tr>
                            <td class="coluna1">retorno:</td>
                            <td class="coluna2">Void</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Exemplo:</td>
                            <td class="coluna2">StartGroup();</td>
                        </tr>
                    </table>
                </ul>
            </div>
            <div  style="HEIGHT: 275px; width: 600px">
                <li>Método: OPCConnect( );</li>
                <ul>
                    <table border="1px">
                        <tr>
                            <td class="coluna1">tipo do metodo:</td>
                            <td class="coluna2">Público</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Função:</td>
                            <td class="coluna2">Conectar no servidor OPC</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Parâmetro de entrada:</td>
                            <td class="coluna2">ServerName</td>
                        </tr>
                        <tr>
                            <td class="coluna1">tipo de Entrada:</td>
                            <td class="coluna2">bstr_t</td>
                        </tr>
                        <tr>
                            <td class="coluna1">retorno:</td>
                            <td class="coluna2">Void</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Exemplo:</td>
                            <td class="coluna2">OPCClient conectServe; conectServe.OPCConnect("NomeServer");</td>
                        </tr>
                    </table>
                </ul>
            </div>
            <div  style="HEIGHT: 275px; width: 600px">
                <li>Método: InsertItens( );</li>
                <ul>
                    <table border="1px">
                        <tr>
                            <td class="coluna1">tipo do metodo:</td>
                            <td class="coluna2">Público</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Função:</td>
                            <td class="coluna2">Acessa as tags do servidor OPC</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Parâmetro de entrada:</td>
                            <td class="coluna2">tags[],QtdTags</td>
                        </tr>
                        <tr>
                            <td class="coluna1">tipo de Entrada:</td>
                            <td class="coluna2">_bstr_t, int</td>
                        </tr>
                        <tr>
                            <td class="coluna1">retorno:</td>
                            <td class="coluna2">Void</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Exemplo:</td>
                            <td class="coluna2">_bstr_t items[] = {"tag001","tag002"}; ConectServer.InsertItens(items, 2);</td>
                        </tr>
                    </table>
                </ul>
            </div>
            <div  style="HEIGHT: 350px; width: 600px">
                <li>Método: WriteItens( );</li>
                <ul>
                    <table border="1px">
                        <tr>
                            <td class="coluna1">tipo do metodo:</td>
                            <td class="coluna2">Público</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Função:</td>
                            <td class="coluna2">Insere valores nas tags do servidor OPC</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Parâmetro de entrada:</td>
                            <td class="coluna2">TagIndex[],Values[],QtdValues</td>
                        </tr>
                        <tr>
                            <td class="coluna1">tipo de Entrada:</td>
                            <td class="coluna2">int, _variant_t, int</td>
                        </tr>
                        <tr>
                            <td class="coluna1">retorno:</td>
                            <td class="coluna2">Void</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Exemplo:</td>
                            <td class="coluna2">int indice[] = {0,1},x=1;
                               <br> while(1)</br>
                                {
                                    <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;_variant_t valores[]= {x,x};</br>
                                &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ConectServer.WriteItens(indice,valores,2);
                                <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;x++;</br>
                                }
                            </td>
                        </tr>
                    </table>
                </ul>
            </div>
            <div  style="HEIGHT: 230px; width: 600px">
                <li>Método: Show( );</li>
                <ul>
                    <table border="1px">
                        <tr>
                            <td class="coluna1">tipo do metodo:</td>
                            <td class="coluna2">Privado</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Função:</td>
                            <td class="coluna2">Exibe os resultados na tela</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Parâmetro de entrada:</td>
                            <td class="coluna2">ShowTime</td>
                        </tr>
                        <tr>
                            <td class="coluna1">tipo de Entrada:</td>
                            <td class="coluna2">int</td>
                        </tr>
                        <tr>
                            <td class="coluna1">retorno:</td>
                            <td class="coluna2">Void</td>
                        </tr>
                        <tr>
                            <td class="coluna1">Exemplo:</td>
                            <td class="coluna2">ConectServe.Show(3);</td>
                        </tr>
                    </table>
                </ul>
            </div>
        </ol>
