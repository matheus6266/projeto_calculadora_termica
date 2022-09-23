#ifndef DISSIPI_H_
#define DISSIPI_H_

/*	
	Criar os strutucs com os métodos e atributos dos tipos de ondas e tipos de dissipadores
*/

struct diodo {
		
		char modelo[50];
		int package_type;
		float resistencia;
		float tensao_direta;
		float resistencia_rjc;
		float resistencia_rca;
		float temperatura_juncao;
		
};
	
struct onda {
		
		int forma_onda;
		float frequencia;
		float ton;
		float corrente_pico;
		float corrente_ia;
		float corrente_ib;
};
	
struct dissipador {
		
		char modelo[50];
		int package_type;
		int resistencia_termica;
		
};
	
struct dissipador to_220;
struct dissipador to_247;
struct diodo diodo_projeto;
struct onda onda_projeto;
float temperatura_juncao_final, potencia_juncao, temperatura_juncao, imed, irms;

int escreve_relatorio();
void projeto_termico(float i_med, float i_rms);
void calculo_imed_irms_k(struct onda onda_projeto);
void cadastro_diodo_onda(); //Esta função realiza o cálculo de potência
void menu_escolha();  //Função para apresentar o que vai ser feito e da a opção ao usuário somente para consulta os datasheets dos dissipadores ou realizar o projeto do dissipador


#endif
