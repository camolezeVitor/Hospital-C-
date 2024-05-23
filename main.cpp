#include <iostream>
#include <string>
#include <vector>
#include <optional>

//Classes ======================================================
class Medico {
public:

    //Construtores
    Medico(int codigo) {
        this->nome = "John/Jane Doe";
        this->telefone = "(nn) ????x-????";
        this->endereco = "Av John Doe";
        this->codigoCidade = -1;
        this->codigoEspecialidade = -1;
        this->codigo = codigo;
    }
    Medico(std::string nome, std::string telefone, std::string endereco
            , int codigoCidade, int codigoEspecialidade, int codigo) {
        this->nome = nome;
        this->telefone = telefone;
        this->endereco = endereco;
        this->codigoCidade = codigoCidade;
        this->codigoEspecialidade = codigoEspecialidade;
        this->codigo = codigo;
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

    int getCodigo() {
        return this->codigo;
    }

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
    Cidade(int codigoCidade) {
        this->nome = "Unknown city...";
        this->codigo = codigoCidade;
        this->uf = "??";
    }
    Cidade(int codigoCidade, std::string nome, std::string uf) {
        this->nome = nome;
        this->uf = uf;
        this->codigo = codigoCidade;
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
    explicit EspecialidadeMedica(int codigoEspecialidade) {
        this->codigo = codigoEspecialidade;
        this->descricao = "Unknown description";
    }

    EspecialidadeMedica(int codigoEspecialidade, std::string descricao) {
        this->codigo = codigoEspecialidade;
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

    CID () {

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

    void setCodigo (std::string codigo) {
        this->codigo = codigo;
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
    Medicamento(int codigo) {
        this->codigo = codigo;
        this->descricao = "unknown medicament";
        this->quantidadeEstoque = -1;
        this->estoqueMinimo = -1;
        this->estoqueMaximo = -1;
        this->precoUnitario = -1.0;
    }
    Medicamento(int codigo, std::string descricao, int quantidadeEstoque,
                int estoqueMinimo, int estoqueMaximo, int precoUnitario) {
        this->codigo = codigo + 1;
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
template <typename T>
class Buscas {
public:

    std::optional<T> buscarPorCPF(std::vector<T> lista, std::string cpf) {
        if (lista.size() == 0) { return std::nullopt; }

        this->zerarIndex();

        while (index < lista.size() && lista[index].getCpf() != cpf) { index++; }

        if (lista[index].getCpf() == cpf) {
            return lista[index];
        }
        return std::nullopt;

    }

    std::optional<T> buscarPorCodigo(std::vector<T> lista, int codigo) {
        if (lista.size() == 0) { return std::nullopt; }

        this->zerarIndex();

        while (index < lista.size() && lista[index].getCodigo() != codigo) { index++; }

        if (lista[index].getCodigo() == codigo) {
            return lista[index];
        }
        return std::nullopt;
    }

    std::optional<T> buscarPorCodigo(std::vector<T> lista, std::string codigo) {
        if (lista.size() == 0) { return std::nullopt; }

        this->zerarIndex();

        while (index < lista.size() && lista[index].getCodigo() != codigo) { index++; }

        if (lista[index].getCodigo() == codigo) {
            return lista[index];
        }
        return std::nullopt;

    }

    void zerarIndex() {
        this->index = 0;
    }

    int index;
};
//Fim-Classes  =================================================

// TELAS =======================================================
void mostrarTelaInicial();
void mostrarTelaMedico();
void mostrarTelaCidade();
void mostrarTelaEspecialidadeMedica();
void mostrarTelaCID();
void mostrarTelaPaciente();
void mostrarTelaMedicamento();
void mostrarTelaConsulta();
// TELAS =======================================================

// CADASTRO ====================================================
CID cadastroCID(std::vector<CID>*);
EspecialidadeMedica cadastroEspecialidadeMedica(std::vector<EspecialidadeMedica>*);
Medico cadastroMedico(std::vector<Medico>*);
Cidade cadastrarCidade(std::vector<Cidade>*);

// LISTAR ======================================================
void listarCID(std::vector<CID>);
void listarEspecialidadesMedicas(std::vector<EspecialidadeMedica>);
void listarMedicos(std::vector<Medico>);

// BUSCAR ======================================================
void buscarCID(std::vector<CID>);
void buscarEspecialidadeMedica(std::vector<EspecialidadeMedica>);
void buscarMedico(std::vector<Medico>);
void buscarCidade(std::vector<Cidade>);

// GATEWAYS ====================================================
void cidGateway(std::vector<CID>*);
void especialidadeMedicaGateway(std::vector<EspecialidadeMedica>*);
void medicoGateway(std::vector<Medico>*, std::vector<EspecialidadeMedica>*);

// TRATAMENTOS =================================================
std::optional<int> tratarSelecaoDeCodigoEspecialidadeMedica(std::vector<EspecialidadeMedica>);


int main() {

    bool programaEstaRodando = true;
    int opcao = -1;
    std::vector<Medico> listaDeMedicos;
    std::vector<Cidade> listaDeCidades;
    std::vector<EspecialidadeMedica> listaDeEspecialidadesMedicas;
    std::vector<CID> listaDeCids;
    std::vector<Paciente> listaDePacientes;
    std::vector<Medicamento> listaDeMedicamentos;
    std::vector<Consulta> listaDeConstultas;

//    Programa!
    while (programaEstaRodando) {
        mostrarTelaInicial();
        std::cin >> opcao;

        switch (opcao) {
            case 3:
                cidGateway(&listaDeCids);
                break;
            case 4:
                especialidadeMedicaGateway(&listaDeEspecialidadesMedicas);
            default:
                programaEstaRodando = false;
                break;
        }
        system("CLS");
    }

    return 0;
}

void mostrarTelaInicial() {
    std::cout << "\n"
                 "  _    _                 _ _        _ \n"
                 " | |  | |               (_) |      | |\n"
                 " | |__| | ___  ___ _ __  _| |_ __ _| |\n"
                 " |  __  |/ _ \\/ __| '_ \\| | __/ _` | |\n"
                 " | |  | | (_) \\__ \\ |_) | | || (_| | |\n"
                 " |_|  |_|\\___/|___/ .__/|_|\\__\\__,_|_| v0.0.1\n"
                 "                  | |                 \n"
                 "                  |_|                 ";
    std::cout << "\n==============================================";
    std::cout << "\n Opcoes | [ 1 ] : Medicos ";
    std::cout << "\n        | [ 2 ] : Paciente ";
    std::cout << "\n        | [ 3 ] : CID'S ";
    std::cout << "\n        | [ 4 ] : Especialidades Medicas ";
    std::cout << "\n        | [ 5 ] : Medicamentos ";
    std::cout << "\n        | [ 6 ] : Consultas ";
    std::cout << "\n\n        [ opcao ] ==> ";
}


// C I D =============================================================

void cidGateway(std::vector<CID> *listaDeCids) {
    int subOpcao = -1;
    bool subRotinaRodando = true;

    while (subRotinaRodando) {
        mostrarTelaCID();
        std::cin >> subOpcao;
        switch (subOpcao) {
            case 1:
                cadastroCID(listaDeCids);
                break;
            case 2:
                listarCID(*listaDeCids);
                break;
            case 3:
                buscarCID(*listaDeCids);
                break;
            default:
                subRotinaRodando = false;
                break;
        }
    }
}

void mostrarTelaCID() {
    system("CLS");
    std::cout << "\n  _____";
    std::cout << "\n | CID |__________________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Opcoes     |                                                       |";
    std::cout << "\n | 1 - Cadastrar  |                                                       |";
    std::cout << "\n | 2 - Listar     |                                                       |";
    std::cout << "\n | 3 - Buscar     |                                                       |";
    std::cout << "\n | 4 - Sair       |                                                       |";
    std::cout << "\n |________________________________________________________________________|";
    std::cout << "\n\n [ opcao ] ==> ";
}

CID cadastroCID(std::vector<CID> *listaDeCids) {
    system("CLS");
    std::string codigo, descricao, outSeq;
    CID cid;

    std::cout << "\n  _____";
    std::cout << "\n | CID |__________________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Cadastrar  |                                                       |";
    std::cout << "\n |================| Qual eh o codigo da CID ?                             |";
    std::cout << "\n |                | ==> ";
    std::cin.ignore();
    std::getline(std::cin, codigo);
    std::cout << "\n |                | Qual eh a descricao dessa CID ?                       |";
    std::cout << "\n |                | ==> ";
    std::cin.ignore();
    std::getline(std::cin, descricao);
    std::cout << "\n |                | Cadastro finalizado ...                               |";
    std::cout << "\n |________________________________________________________________________|";

    cid.setDescricao(descricao);
    cid.setCodigo(codigo);
    listaDeCids->push_back(cid);
    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;

    return cid;
}

void listarCID(std::vector<CID> listaDeCids) {
    system("CLS");
    std::string outSeq;

    if (listaDeCids.size() > 0) {
        std::cout << "\n  _____";
        std::cout << "\n | CID |__________________________________________________________________";
        std::cout << "\n |========================================================================|";
        for (CID cid : listaDeCids) {
            std::cout << "\n | " << cid.getCodigo() << " | " << cid.getDescricao();
        }
        std::cout << "\n |________________________________________________________________________|";
    } else {
        std::cout << "\n |  Nao existem registros                                                 |";
        std::cout << "\n |________________________________________________________________________|";
    }
    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
}

void buscarCID(std::vector<CID> listaDeCids) {
    system("CLS");
    std::string outSeq, codigo;

    std::cout << "\n  _____";
    std::cout << "\n | CID |__________________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Buscar     |                                                       |";
    std::cout << "\n |================| Qual eh o codigo da CID ?                             |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;

    std::optional<CID> cid = Buscas<CID>().buscarPorCodigo(std::move(listaDeCids), codigo);

    if (cid.has_value()) {
        std::cout << "\n | " << cid->getCodigo() << " | " << cid->getDescricao();
    } else {
        std::cout << "\n |                |  Nao existem registros...                             |";
        std::cout << "\n |________________________________________________________________________|";
    }

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
}

// C I D =============================================================

// E S P E C I A L I D A D E    M E D I C A ==========================

void especialidadeMedicaGateway(std::vector<EspecialidadeMedica> *listaDeEspecialidadesMedicas) {
    int subOpcao = -1;
    bool subRotinaRodando = true;

    while (subRotinaRodando) {
        mostrarTelaEspecialidadeMedica();
        std::cin >> subOpcao;
        switch (subOpcao) {
            case 1:
                cadastroEspecialidadeMedica(listaDeEspecialidadesMedicas);
                break;
            case 2:
                listarEspecialidadesMedicas(*listaDeEspecialidadesMedicas);
                break;
            case 3:
                buscarEspecialidadeMedica(*listaDeEspecialidadesMedicas);
                break;
            default:
                subRotinaRodando = false;
                break;
        }
    }
}

void mostrarTelaEspecialidadeMedica() {
    system("CLS");
    std::cout << "\n  ________________________";
    std::cout << "\n | Especialidades Medicas |_______________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Opcoes     |                                                       |";
    std::cout << "\n | 1 - Cadastrar  |                                                       |";
    std::cout << "\n | 2 - Listar     |                                                       |";
    std::cout << "\n | 3 - Buscar     |                                                       |";
    std::cout << "\n | 4 - Sair       |                                                       |";
    std::cout << "\n |________________________________________________________________________|";
    std::cout << "\n\n [ opcao ] ==> ";
}

std::optional<int> tratarSelecaoDeCodigoEspecialidadeMedica(std::vector<EspecialidadeMedica> listaDeEspecialidadesMedicas) {
    int codigo;
    std::cout << "\n |================| Qual eh o codigo da especialidade ?                   |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;

    if (Buscas<EspecialidadeMedica>().buscarPorCodigo(std::move(listaDeEspecialidadesMedicas), codigo)) {
        std::cout << "\n |================| ERRO: Esse codigo ja foi escolhido!                   |";
        return std::nullopt;
    }

    return codigo;
}

EspecialidadeMedica cadastroEspecialidadeMedica(std::vector<EspecialidadeMedica> *listaDeEspecialidadesMedicas) {
    std::optional<int> codigo;
    std::string descricao, outSeq;

    system("CLS");
    std::cout << "\n  ________________________";
    std::cout << "\n | Especialidades Medicas |_______________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Cadastrar  |                                                       |";


    while (!codigo.has_value()) {
        codigo = tratarSelecaoDeCodigoEspecialidadeMedica(*listaDeEspecialidadesMedicas);
    }

    std::cout << "\n |================| Qual eh a descricao da especialidade ?                |";
    std::cout << "\n |                | ==> ";
    std::cin.ignore();
    std::getline(std::cin, descricao);
    std::cout << "\n |                | Cadastro finalizado ...                               |";
    std::cout << "\n |________________________________________________________________________|";

    EspecialidadeMedica especialidadeMedica(codigo.value(), descricao);
    listaDeEspecialidadesMedicas->push_back(especialidadeMedica);

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;

    return especialidadeMedica;
}

void listarEspecialidadesMedicas(std::vector<EspecialidadeMedica> listaDeEspecialidadesMedicas) {
    system("CLS");
    std::string outSeq;

    if (listaDeEspecialidadesMedicas.size() > 0) {
        std::cout << "\n  ________________________";
        std::cout << "\n | Especialidades Medicas |_______________________________________________";
        std::cout << "\n |========================================================================|";
        for (EspecialidadeMedica especialidade : listaDeEspecialidadesMedicas) {
            std::cout << "\n | " << especialidade.getCodigo() << " | " << especialidade.getDescricao();
        }
        std::cout << "\n |________________________________________________________________________|";
    } else {
        std::cout << "\n  ________________________";
        std::cout << "\n | Especialidades Medicas |_______________________________________________";
        std::cout << "\n |========================================================================|";
        std::cout << "\n |  Nao existem registros                                                 |";
        std::cout << "\n |________________________________________________________________________|";
    }
    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;

}

void buscarEspecialidadeMedica(std::vector<EspecialidadeMedica> listaDeEspecialidadesMedicas) {
    system("CLS");
    std::string outSeq;
    int codigo;

    std::cout << "\n  ______________________";
    std::cout << "\n | Especialidade Medica |_________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Buscar     |                                                       |";
    std::cout << "\n |================| Qual eh o codigo da Especialidade ?                   |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;

    std::optional<EspecialidadeMedica> especialidade = Buscas<EspecialidadeMedica>().buscarPorCodigo(listaDeEspecialidadesMedicas, codigo);

    if (especialidade.has_value()) {
        std::cout << "\n | " << especialidade->getCodigo() << " | " << especialidade->getDescricao();
    } else {
        std::cout << "\n |                |  Nao existem registros...                             |";
        std::cout << "\n |________________________________________________________________________|";
    }

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
}

// E S P E C I A L I D A D E    M E D I C A ==========================

// C I D A D E =======================================================