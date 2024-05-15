#include <iostream>
#include <string>
#include <vector>

//Classes
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
        this->codigo = codigoDeRegistroDaUltimaCidade + 1;
        this->uf = "??";
    }
    Cidade(int codigoDeRegistroDaUltimaCidade, std::string nome, std::string uf) {
        this->nome = nome;
        this->uf = uf;
        this->codigo = codigoDeRegistroDaUltimaCidade + 1;
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
class EspecialidadeMedica {
public:

    //Construtores
    EspecialidadeMedica(int ultimaEspecialidadeRegistrada) {
        this->codigo = ultimaEspecialidadeRegistrada + 1;
        this->descricao = "Unknown description";
    }
    EspecialidadeMedica(int ultimaEspecialidadeRegistrada, std::string descricao) {
        this->codigo = ultimaEspecialidadeRegistrada + 1;
        this->descricao = descricao;
    }

    //Getter
    std::string getDescricao() {
        return this->descricao;
    };
    int getCodigo() {
        return this->codigo;
    }

    //Setter
    void setDescricao(std::string descricao) {
        this->descricao = descricao;
    }

    //Outro
    void toString() {
        std::cout << "\n| FICHA ESPECIALIDADE ============================|";
        std::cout << "\n| descricao :: " << this->descricao;
    }

private:
    int codigo;
    std::string descricao;
};
class CID {
public:

    //Construtor
    CID(std::string codigo, std::string descricao) {
        this->codigo = codigo;
        this->descricao = descricao;
    }

    //Getter
    std::string getCodigo() {
        return this->codigo;
    }
    std::string getDescricao() {
        return this->descricao;
    }

    //Setter
    void setDescricao(std::string descricao) {
        this->descricao = descricao;
    }

private:
    std::string codigo;
    std::string descricao;
};
class Paciente {
public:

    //Construtor
    Paciente(std::string cpf, std::string nome, std::string endereco, int codigoCidade) {
        this->cpf = cpf;
        this->nome = nome;
        this->endereco = endereco;
        this->codigoCidade = codigoCidade;
    }

    //Getters
    std::string getCpf() {
        return this->cpf;
    }
    std::string getNome() {
        return this->nome;
    }
    std::string getEndereco() {
        return this->endereco;
    }
    int getCodigoCidade() {
        return this->codigoCidade;
    }

    //Setters
    void setCpf(std::string cpf) {
        this->cpf = cpf;
    }
    void setNome(std::string nome) {
        this->nome = nome;
    }
    void setEndereco(std::string endereco) {
        this->endereco = endereco;
    }
    void setCodigoCidade(int codigoCidade) {
        this->codigoCidade = codigoCidade;
    }

private:
    std::string cpf;
    std::string nome;
    std::string endereco;
    int codigoCidade;
};
class Medicamento {
    //código, descrição, quant_estoque, estoque_minimo, estoque_maximo, preço_unitario
public:

    //Construtores
    Medicamento(int ultimoCodigoDeMedicamentoCadastrado) {
        this->codigo = ultimoCodigoDeMedicamentoCadastrado + 1;
        this->descricao = "unknown medicament";
        this->quantidadeEstoque = -1;
        this->estoqueMinimo = -1;
        this->estoqueMaximo = -1;
        this->precoUnitario = -1.0;
    }
    Medicamento(int ultimoCodigoDeMedicamentoCadastrado, std::string descricao, int quantidadeEstoque,
                int estoqueMinimo, int estoqueMaximo, int precoUnitario) {
        this->codigo = ultimoCodigoDeMedicamentoCadastrado + 1;
        this->descricao = descricao;
        this->quantidadeEstoque = quantidadeEstoque;
        this->estoqueMinimo = estoqueMinimo;
        this->estoqueMaximo = estoqueMaximo;
        this->precoUnitario = precoUnitario;
    }

    //Getters
    int getCodigo() {
        return this->codigo;
    }
    std::string getDescricao() {
        return this->descricao;
    }
    int getQuantidadeEstoque() {
        return this->quantidadeEstoque;
    }
    int getEstoqueMinimo() {
        return this->estoqueMinimo;
    }
    int getEstoqueMaximo() {
        return this->estoqueMaximo;
    }
    float getPrecoUnitario() {
        return this->precoUnitario;
    }

    //Setters
    void setDescricao(std::string descricao) {
        this->descricao = descricao;
    }
    void setQuantidadeEstoque(int quantidadeEstoque) {
        this->quantidadeEstoque = quantidadeEstoque;
    }
    void setEstoqueMaximo(int estoqueMaximo) {
        this->estoqueMaximo = estoqueMaximo;
    }
    void setEstoqueMinimo(int estoqueMinimo) {
        this->estoqueMinimo = estoqueMinimo;
    }
    void setPrecoUnitario(float precoUnitario) {
        this->precoUnitario = precoUnitario;
    }

private:
    int codigo;
    std::string descricao;
    int quantidadeEstoque;
    int estoqueMinimo;
    int estoqueMaximo;
    float precoUnitario;
};
class Consulta {
    // cpf_paciente, cod_medico, data, horario, cod_CID, cod_medicamento, qtde_medicamento
public:

    //Construtor
    Consulta(std::string cpf, int codigoMedico, std::string data, std::string horario, std::string codigoCID,
             int codigoMedicamento, int quantidadeMedicamento) {
        this->cpfPaciente = cpf;
        this->codigoMedico = codigoMedico;
        this->data = data;
        this->horario = horario;
        this->codigoDoenca = codigoDoenca;
        this->codigoMedicamento = codigoMedicamento;
        this->quantidadeMedicamento = quantidadeMedicamento;
    }

    //Getters
    std::string getCpfPaciente() {
        return this->cpfPaciente;
    };
    int getCodigoMedico() {
        return this->codigoMedico;
    };
    std::string getData() {
        return this->data;
    };
    std::string getHorario() {
        return this->horario;
    };
    std::string getCodigoDoenca() {
        return this->codigoDoenca;
    };
    int getCodigoMedicamento() {
        return this->codigoMedicamento;
    };
    int getQuantidadeMedicamento() {
        return this->quantidadeMedicamento;
    };

    //Setters
    void setCpfPaciente(std::string cpfPaciente) {
        this->cpfPaciente = cpfPaciente;
    };
    void setCodigoMedico(int codigoMedico) {
        this->codigoMedico = codigoMedico;
    };
    void setData(std::string data) {
        this->data = data;
    };
    void setHorario(std::string horario) {
        this->horario = horario;
    };
    void setCodigoDoenca(std::string codigoDoenca) {
        this->codigoDoenca = codigoDoenca;
    };
    void setCodigoMedicamento(int codigoMedicamento) {
        this->codigoMedicamento = codigoMedicamento;
    };
    void setQuantidadeMedicamento(int quantidadeMedicamento) {
        this->quantidadeMedicamento = quantidadeMedicamento;
    };


private:
    std::string cpfPaciente;
    int codigoMedico;
    std::string data;
    std::string horario;
    std::string codigoDoenca;
    int codigoMedicamento;
    int quantidadeMedicamento;

};
//Fim-Classes

void mostrarTelaInicial();
void mostrarTelaMedico(int);
void mostrarTelaCidade(int);
void mostrarTelaEspecialidadeMedica(int);
void mostrarTelaCID(int);
void mostrarTelaPaciente(int);
void mostrarTelaMedicamento(int);
void mostrarTelaConsulta(int);

int main() {

    bool programaEstaRodando = true;
    std::vector<Medico> listaDeMedicos;
    std::vector<Cidade> listaDeCidades;
    std::vector<EspecialidadeMedica> listaDeEspecialidadesMedicas;
    std::vector<CID> listaDeCids;
    std::vector<Paciente> listaDePacientes;
    std::vector<Medicamento> listaDeMedicamentos;
    std::vector<Consulta> listaDeConstultas;
    




    while (programaEstaRodando) {

    }

    return 0;
}
