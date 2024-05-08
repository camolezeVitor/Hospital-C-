#include <iostream>
#include <string>

class Medico {
public:

    //Construtores
    Medico(int codigoDoUltimoMedicoRegistrado) {
        this->nome = "John/Jane Doe";
        this->telefone = "(??) ????x-????";
        this->endereco = "Av John Doe";
        this->codigoCidade = -1;
        this->codigoEspecialidade = -1;
        this->codigo = codigoDoUltimoMedicoRegistrado + 1;
    }
    Medico(std::string nome, std::string telefone, std::string endereco
            , int codigoCidade, int codigoEspecialidade, int codigoDoUltimoMedicoRegistrado) {
        this->nome = nome;
        this->telefone = telefone;
        this->endereco = endereco;
        this->codigoCidade = codigoCidade;
        this->codigoEspecialidade = codigoEspecialidade;
        this->codigo = codigoDoUltimoMedicoRegistrado + 1;
    }

    //Medico - Getters
    std::string getNome() {
        return this->nome;
    };
    std::string getTelefone() {
        return this->telefone;
    };
    std::string getEndereco() {
        return this->endereco;
    };
    int getCodigoCidade() {
        return this->codigoCidade;
    };
    int getCodigoEspecialidade() {
        return this->codigoEspecialidade;
    };

    //Medico - Setters
    void setNome(std::string nome) {
        this->nome = nome;
    }
    void setTelefone(std::string telefone) {
        this->telefone = telefone;
    }
    void setCodigoCidade(int codigo) {
        this->codigoCidade = codigo;
    }
    void setCodigoEspecialidade(int codigo) {
        this->codigoEspecialidade = codigo;
    }
    void setEndereco(std::string endereco) {
        this->endereco = endereco;
    }

    //Outros...
    void medicoToString() {
        std::cout << "\n| FICHA MEDICO ============================|";
        std::cout << "\n| nome :: " << this->nome << "  telefone ::" << this->telefone;
        std::cout << "\n| endereco :: " << this->endereco ;
        std::cout << "\n| codigo cidade :: " << this->codigoCidade;
        std::cout << "\n| codigoEspecialidade :: " << this->codigoEspecialidade;

    }

private:
    int codigo;
    std::string nome;
    std::string telefone;
    std::string endereco;
    int codigoCidade;
    int codigoEspecialidade;
};

class Cidade {
public:

    //Construtores
    Cidade(int codigoDeRegistroDaUltimaCidade) {
        this->nome = "Unknown city...";
        this->codigo = codigoDeRegistroDaUltimaCidade;
        this->uf = "??";
    }
    Cidade(int codigoDeRegistroDaUltimaCidade, std::string nome, std::string uf) {
        this->nome = nome;
        this->uf = uf;
        this->codigo = codigoDeRegistroDaUltimaCidade;
    }

    //Getters
    std::string getNome() {
        return this->nome;
    }
    std::string getUf() {
        return this->uf;
    }

    //Setters
    void setNome(std::string nome) {
        this->nome = nome;
    }
    void setUf(std::string uf) {
        this->uf = uf;
    }

    //Outro
    void toString() {
        std::cout << "\n| FICHA CIDADE ============================|";
        std::cout << "\n| codigo :: " << this->codigo << " nome :: " << this->nome;
        std::cout << "\n| uf :: " << this->uf;
    }

private:
    int codigo;
    std::string nome;
    std::string uf;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
