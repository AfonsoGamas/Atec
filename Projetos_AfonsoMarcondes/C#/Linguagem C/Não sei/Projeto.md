# atec

### Formador: David Martins

## PI 0923 - UFCD 0809


## Projeto de Programação


### Descrição

Recorrendo aos conteúdos lecionados, pretende-se que elabore uma agenda digital pessoal.

A agenda deverá ser capaz de guardar no máximo 100 entradas, e também capaz de registar, procurar, atualizar, listar e eliminar os contactos do utilizador.

As operações são compostas pela seguinte codificação:

- **RC**- Novo contacto cujo exemplo de input será:

		NC <Nome> <Apelido> <Telefone/Telemóvel> <email> <Observações>
		
	**Nota:** o Campo das observações não deverá exceder os 50 caracteres.

	+	Caso o contacto seja registado com sucesso deverá apresentar a mensagem: **Contacto registado com sucesso**
	+	Caso o contacto já exista (validar pelo nome) deverá apresentar a mensagem: **Contacto existente com o número X** (onde X é a posição na Agenda inserida por ordem de registo)
	
- **PC** - Procurar contacto:
	
		PC <Nome>
		
	- Caso o contacto exista deverá apresentar a informação do contacto.
	- Caso o contacto não exista deverá apresentar a mensagem: **Contacto inexistente.**
	
- **LC** - Listar contactos:

		LC
		
	- Deverá apresentar todos os contactos existentes na agenda.
	- Caso não existam registos deverá apresentar a seguinte mensagem: **Agenda sem contactos.**
	
- **AC** Atualizar contacto:

		AC <Nome>
		
		1 - Apelido
		2 - Telefone
		3 - Email
		4 - Observacoes
		5 - Sair
		
	- Ao introduzir o comando **AC** conjugado com o Nome deverá ser apresentado o menu acima listado, e só deverá sair do mesmo após escolher a opção 5.
	- Deverá apresentar a mensagem: 
		- **Contacto atualizado com sucesso** se qualquer uma das operações tiver sucesso; 
		- Apresentar o menu de opções principal ao sair;
		- **Contacto inexistente** caso o nome não conste na agenda.
		
- **EC** - Eliminar Contacto:

		EC <Nome>
		
	- Deverá eliminar a entrada na agenda com o nome facultado.
	- Apresentar a mensagem **Contacto não encontrado** em caso de o mesmo não existir
	- Apresentar a mensagem **Contacto eliminado com sucesso** se eliminar o contacto.
	
	
- **XXX** - Deverá terminar o programa:

		XXX  
		  
		A guardar a agenda...
		Sayonara!
		
		
### Implementação


1) Ao iniciar o programa deverá apresentar todas as opções disponíveis no mesmo.
2) Quando uma operação for concluída deverá apresentar novamente todas as opções.
3) Deverá recorrer a funções para implementar cada uma das operações.