#define MEDICO_H
#include <iostream>
#include <string>

class Medico {
public:

    //Construtores
    Medico(int);
    Medico(std::string, std::string, std::string, int, int, int);

    //Medico - Getters
    std::string getNome();
    std::string getTelefone();
    std::string getEndereco();
    int getCodigoCidade();
    int getCodigoEspecialidade();

    //Medico - Setters
    void setNome(std::string);
    void setTelefone(std::string);
    void setEndereco(std::string);
    void setCodigoCidade(int);
    void setCodigoEspecialidade(int);

    //Outros...
    void medicoToString();

private:
    int codigo;
    std::string nome;
    std::string telefone;
    std::string endereco;
    int codigoCidade;
    int codigoEspecialidade;
};

//Construtores
Medico::Medico(int codigoDoUltimoMedicoRegistrado) {
    this->nome = "John/Jane Doe";
    this->telefone = "(??) ????x-????";
    this->endereco = "Av John Doe";
    this->codigoCidade = -1;
    this->codigoEspecialidade = -1;
    this->codigo = codigoDoUltimoMedicoRegistrado + 1;
}

Medico::Medico(std::string nome, std::string telefone, std::string endereco
               , int codigoCidade, int codigoEspecialidade, int codigoDoUltimoMedicoRegistrado) {
    this->nome = nome;
    this->telefone = telefone;
    this->endereco = endereco;
    this->codigoCidade = codigoCidade;
    this->codigoEspecialidade = codigoEspecialidade;
    this->codigo = codigoDoUltimoMedicoRegistrado + 1;
}

//Setters
void Medico::setNome(std::string nome) {
    this->nome = nome;
}

void Medico::setTelefone(std::string telefone) {
    this->telefone = telefone;
}

void Medico::setCodigoCidade(int codigo) {
    this->codigoCidade = codigo;
}

void Medico::setCodigoEspecialidade(int codigo) {
    this->codigoEspecialidade = codigo;
}

void Medico::setEndereco(std::string endereco) {
    this->endereco = endereco;
}

//Getters
std::string Medico::getNome() {
    return this->nome;
};

std::string Medico::getTelefone() {
    return this->telefone;
};

std::string Medico::getEndereco() {
    return this->endereco;
};

int Medico::getCodigoCidade() {
    return this->codigoCidade;
};

int Medico::getCodigoEspecialidade() {
    return this->codigoEspecialidade;
};

//Outros
void Medico::medicoToString() {
    std::cout << "\n| FICHA MEDICO ============================|"
    std::cout << "\n| nome :: " << this->nome << "  telefone ::" << this->telefone;
    std::cout << "\n| endereco :: " << this->endereco ;
    std::cout << "\n| codigo cidade :: " << this->codigoCidade;
    std::cout << "\n| codigoEspecialidade :: " << this->codigoEspecialidade;

}