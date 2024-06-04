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
    Cidade() {}

    //Getters
    std::string getNome() {
        return this->nome;
    }
    std::string getUf() {
        return this->uf;
    }
    int getCodigo() {
        return this->codigo;
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
    std::string getCodigo() {
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
        this->codigo = codigo;
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
        this->codigoDoenca = codigoCID;
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
    int getCodigo() {
        return this->codigo;
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
    void setCodigo(int codigo) {
        this->codigo = codigo;
    };


private:
    int codigo;
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

        if (lista.empty()) { return std::nullopt; }

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

    std::optional<T*> buscarPorCodigoERetornarEnderecoDeMemoria(std::vector<T> *lista, int codigo) {
        if (lista->size() == 0) { return std::nullopt; }

        this->zerarIndex();

        while (index < lista->size() && lista->at(index).getCodigo() != codigo) { index++; }

        if (lista->at(index).getCodigo() == codigo) {
            return &lista->at(index);
        }
        return std::nullopt;
    }

    std::optional<T*> buscarPorCodigoERetornarEnderecoDeMemoria(std::vector<T> *lista, std::string codigo) {
        if (lista->size() == 0) { return std::nullopt; }

        this->zerarIndex();

        while (index < lista->size() && (std::to_string(lista->at(index).getCodigo()) != codigo)) { index++; }

        if (std::to_string(lista->at(index).getCodigo()) == codigo) {
            return &lista->at(index);
        }
        return std::nullopt;
    }

    std::optional<int> buscarIndexNaLista(std::vector<T> *lista, int codigo) {
        if (lista->size() == 0) { return std::nullopt; }

        this->zerarIndex();

        while (index < lista->size() && lista->at(index).getCodigo() != codigo) { index++; }

        if (lista->at(index).getCodigo() == codigo) {
            return index;
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
void mostrarTelaEstoqueMedicamentos(std::vector<Medicamento>*);
void mostrarTelaEstoqueMedicamentosAbaixoDaQuantidadeMinima(std::vector<Medicamento>*);
// TELAS =======================================================

// CADASTRO ====================================================
CID cadastroCID(std::vector<CID>*);
EspecialidadeMedica cadastroEspecialidadeMedica(std::vector<EspecialidadeMedica>*);
Medico cadastrarMedico(std::vector<Medico>*, std::vector<Cidade>*, std::vector<EspecialidadeMedica>*);
Cidade cadastrarCidade(std::vector<Cidade>*);
Medicamento cadastrarMedicamento(std::vector<Medicamento>*);

// LISTAR ======================================================
void listarCID(std::vector<CID>);
void listarEspecialidadesMedicas(std::vector<EspecialidadeMedica>);
void listarMedicos(std::vector<Medico>, std::vector<Cidade>, std::vector<EspecialidadeMedica>);
void listarCidades(std::vector<Cidade>);

// BUSCAR ======================================================
void buscarCID(std::vector<CID>);
void buscarEspecialidadeMedica(std::vector<EspecialidadeMedica>);
void buscarMedico(std::vector<Medico>, std::vector<Cidade>, std::vector<EspecialidadeMedica>);
void buscarCidade(std::vector<Cidade>);
void buscarUmMedicamento(std::vector<Medicamento>);

// GATEWAYS ====================================================
void cidGateway(std::vector<CID>*);
void especialidadeMedicaGateway(std::vector<EspecialidadeMedica>*);
void medicoGateway(std::vector<Medico>*, std::vector<Cidade>*, std::vector<EspecialidadeMedica>*);
void cidadeGateway(std::vector<Cidade>*);
void medicamentoGateway(std::vector<Medicamento>*);
void medicamentoSubGateway(std::vector<Medicamento>*, int);
void pacienteGateway(std::vector<Paciente>*, std::vector<Cidade>*, std::vector<Consulta>*);
void consultaGateway(std::vector<Consulta>*, std::vector<Paciente>*, std::vector<CID>*,
                     std::vector<Medicamento>*, std::vector<Medico>*, std::vector<EspecialidadeMedica>*, std::vector<Cidade>*);

// TRATAMENTOS =================================================
std::optional<int> tratarSelecaoDeCodigoEspecialidadeMedica(std::vector<EspecialidadeMedica>);
std::optional<int> tratarSelecaoDeCodigoDeCidade(std::vector<Cidade>);
std::optional<int> tratarSelecaoDeCodigoDeMedicamento(std::vector<Medicamento>);

//MISC
void encomendarMaisMedicamentos(std::vector<Medicamento>*);


//PROGRAMA
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
        std::cin.ignore();

        if (opcao == 1) {
            medicoGateway(&listaDeMedicos, &listaDeCidades, &listaDeEspecialidadesMedicas);
        }
        if (opcao == 2) {
            pacienteGateway(&listaDePacientes, &listaDeCidades, &listaDeConstultas);
        }
        if (opcao == 3) {
            cidGateway(&listaDeCids);
        }
        if (opcao == 4) {
            especialidadeMedicaGateway(&listaDeEspecialidadesMedicas);
        }
        if (opcao == 5) {
            medicamentoGateway(&listaDeMedicamentos);
        }
        if (opcao == 6) {
            consultaGateway(&listaDeConstultas, &listaDePacientes, &listaDeCids, &listaDeMedicamentos,
                            &listaDeMedicos, &listaDeEspecialidadesMedicas, &listaDeCidades);
        }
        system("CLS");

        if (opcao < 0 || opcao >= 7) {
            programaEstaRodando = false;
        }
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
std::optional<std::string> tratarBuscaDeCodigoDeDoenca(std::vector<CID> listaDeCIDS) {
    std::string codigo;
    std::cout << "\n |================| Qual eh o codigo da cid ?                             |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;

    std::optional<CID> cid = Buscas<CID>().buscarPorCodigo(std::move(listaDeCIDS), codigo);

    if (!cid.has_value()) {
        std::cout << "\n |                |  Nao existem registros...                             |";
        return std::nullopt;
    }

    return codigo;
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

    std::cout << "\n  _____";
    std::cout << "\n | CID |__________________________________________________________________";
    std::cout << "\n |========================================================================|";

    if (listaDeCids.size() > 0) {
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
    std::cout << "\n |                | Cadastro de especialidade finalizado ...              |";
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
void cidadeGateway(std::vector<Cidade> *listaDeCidades) {
    int subOpcao = -1;
    bool subRotinaRodando = true;

    while (subRotinaRodando) {
        mostrarTelaCidade();
        std::cin >> subOpcao;
        switch (subOpcao) {
            case 1:
                cadastrarCidade(listaDeCidades);
                break;
            case 2:
                listarCidades(*listaDeCidades);
                break;
            case 3:
                buscarCidade(*listaDeCidades);
                break;
            default:
                subRotinaRodando = false;
                break;
        }
    }
}
void mostrarTelaCidade() {
    system("CLS");
    std::cout << "\n  _________";
    std::cout << "\n | Cidades |______________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Opcoes     |                                                       |";
    std::cout << "\n | 1 - Cadastrar  |                                                       |";
    std::cout << "\n | 2 - Listar     |                                                       |";
    std::cout << "\n | 3 - Buscar     |                                                       |";
    std::cout << "\n | 4 - Sair       |                                                       |";
    std::cout << "\n |________________________________________________________________________|";
    std::cout << "\n\n [ opcao ] ==> ";
}
std::optional<int> tratarSelecaoDeCodigoDeCidade(std::vector<Cidade> listaDeCidades) {
    int codigo;
    std::cout << "\n |================| Qual eh o codigo da cidade ?                          |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;

    if (Buscas<Cidade>().buscarPorCodigo(listaDeCidades, codigo)) {
        std::cout << "\n |================| ERRO: Esse codigo ja foi escolhido!";
        return std::nullopt;
    }

    return codigo;
}
Cidade cadastrarCidade(std::vector<Cidade> *listaDeCidades) {
    std::optional<int> codigo;
    std::string nome, uf, outSeq;

    system("CLS");
    std::cout << "\n  _________";
    std::cout << "\n | Cidades |______________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Cadastrar  |                                                       |";
    while (!codigo.has_value()) {
        codigo = tratarSelecaoDeCodigoDeCidade(*listaDeCidades);
    }
    std::cout << "\n |================| Qual eh o nome da cidade ?                            |";
    std::cout << "\n |                | ==> ";
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cout << "\n |================| Qual eh a uf ?                                        |";
    std::cout << "\n |                | ==> ";
    std::cin.ignore();
    std::getline(std::cin, uf);
    std::cout << "\n |                | Cadastro finalizado ...                               |";
    std::cout << "\n |________________________________________________________________________|";

    Cidade cidade = Cidade(codigo.value(), nome, uf);
    listaDeCidades->push_back(cidade);

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;

    return cidade;
}
void listarCidades(std::vector<Cidade> listaDeCidades) {
    system("CLS");
    std::string outSeq;

    std::cout << "\n  _________";
    std::cout << "\n | Cidades |______________________________________________________________";
    std::cout << "\n |========================================================================|";
    if (listaDeCidades.size() > 0) {
        for (Cidade cidade : listaDeCidades) {
            std::cout << "\n | " << cidade.getCodigo() << " | " << cidade.getNome() << " | " << cidade.getUf();
        }
    } else {
        std::cout << "\n |  Nao existem registros                                                 |";
    }
    std::cout << "\n |________________________________________________________________________|";

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
}
void buscarCidade(std::vector<Cidade> listaDeCidades) {
    system("CLS");
    std::string outSeq;
    int codigo;

    std::cout << "\n  ________";
    std::cout << "\n | Cidade |_______________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Buscar     |                                                       |";
    std::cout << "\n |================| Qual eh o codigo da Especialidade ?                   |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;

    std::optional<Cidade> cidade = Buscas<Cidade>().buscarPorCodigo(listaDeCidades, codigo);

    if (cidade.has_value()) {
        std::cout << "\n | " << cidade->getCodigo() << " | " << cidade->getNome() << " | " << cidade->getUf();
    } else {
        std::cout << "\n |                |  Nao existem registros...                             |";
        std::cout << "\n |________________________________________________________________________|";
    }

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
}
// C I D A D E =======================================================

// M E D I C O =======================================================
void medicoGateway(std::vector<Medico> *listaDeMedicos, std::vector<Cidade> *listaDeCidades, std::vector<EspecialidadeMedica> *especialidadeMedica) {
    int subOpcao = -1;
    bool subRotinaRodando = true;

    while (subRotinaRodando) {
        mostrarTelaMedico();
        std::cin >> subOpcao;
        switch (subOpcao) {
            case 1:
                cadastrarMedico(listaDeMedicos, listaDeCidades, especialidadeMedica);
                break;
            case 2:
                listarMedicos(*listaDeMedicos, *listaDeCidades, *especialidadeMedica);
                break;
            case 3:
                buscarMedico(*listaDeMedicos, *listaDeCidades, *especialidadeMedica);
                break;
            default:
                subRotinaRodando = false;
                break;
        }
    }
}
void mostrarTelaMedico() {
    system("CLS");
    std::cout << "\n  _________";
    std::cout << "\n | Medicos |______________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Opcoes     |                                                       |";
    std::cout << "\n | 1 - Cadastrar  |                                                       |";
    std::cout << "\n | 2 - Listar     |                                                       |";
    std::cout << "\n | 3 - Buscar     |                                                       |";
    std::cout << "\n | 4 - Sair       |                                                       |";
    std::cout << "\n |________________________________________________________________________|";
    std::cout << "\n\n [ opcao ] ==> ";
}
std::optional<int> tratarBuscaDeCodigoDeMedico(std::vector<Medico> listaDeMedicos) {
    int codigo;

    std::cout << "\n |                | informe o codigo do medico                            |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;
    std::cin.ignore();
    std::optional<Medico> medico = Buscas<Medico>().buscarPorCodigo(listaDeMedicos, codigo);
    if (!medico.has_value()) {
        std::cout << "\n |                | Paciente nao encontrado                               |";
        return std::nullopt;
    }

    return codigo;
}
std::optional<int> tratarSelecaoDeCodigoDeMedico(std::vector<Medico> listaDeMedicos) {
    int codigo;
    std::cout << "\n |================| Qual eh o codigo do medico ?                          |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;
    std::cin.ignore();

    if (Buscas<Medico>().buscarPorCodigo(listaDeMedicos, codigo)) {
        std::cout << "\n |================| ERRO: Esse codigo ja foi escolhido!";
        return std::nullopt;
    }

    return codigo;
}
Medico cadastrarMedico(
        std::vector<Medico> *listaDeMedicos, std::vector<Cidade> *listaDeCidades,
        std::vector<EspecialidadeMedica> *listaDeEspecialidadesMedicas
        ) {
    std::optional<int> codigo, codigoCidade, codigoEspecialidade;
    std::string nome = "", telefone = "", endereco = "";
    char outSeq;

    system("CLS");
    std::cout << "\n  _________";
    std::cout << "\n | Medicos |______________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Cadastrar  |                                                       |";
    while (!codigo.has_value()) {
        codigo = tratarSelecaoDeCodigoDeMedico(*listaDeMedicos);
    }
    std::cout << "\n |================| Qual eh o nome do medico ?                            |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, nome);
    std::cout << "\n |================| Qual eh o telefone do medico ?                        |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, telefone);
    std::cout << "\n |================| Qual eh o endereco do medico ?                        |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, endereco);
    std::cout << "\n |                | Ja existe uma cidade cadastrada para o medico?        |";
    std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
    std::cout << "\n |                | ==> ";
    std::cin >> outSeq;
    if (std::tolower(outSeq) == 's') {
        while (!codigoCidade.has_value()) {
            std::cout << "\n |================| Qual eh o codigo da cidade ?                          |";
            std::cout << "\n |                | ==> ";
            std::cin >> outSeq;
            std::optional<Cidade> cidadeBuscada = Buscas<Cidade>().buscarPorCodigo(*listaDeCidades, outSeq);
            if (!cidadeBuscada.has_value()) {
                listarCidades(*listaDeCidades);
                std::cout << "\n | Aparentemente nao foi localizada a cidade, voce gostaria               |";
                std::cout << "\n | de cadastrar uma cidade para esse medico?                              |";
                std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
                std::cout << "\n |                | ==> ";
                std::cin.ignore();
                std::cin >> outSeq;
                if (std::tolower(outSeq) == 's') {
                    codigoCidade = cadastrarCidade(listaDeCidades).getCodigo();
                }
            } else {
                codigoEspecialidade = cidadeBuscada->getCodigo();
            }

        }
    } else {
        codigoCidade = cadastrarCidade(listaDeCidades).getCodigo();
    }

    std::cout << "\n |                | Ja existe uma especialidade cadastrada para o medico? |";
    std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
    std::cout << "\n |                | ==> ";
    std::cin.ignore();
    std::cin >> outSeq;
    if (std::tolower(outSeq) == 's') {
        while (!codigoEspecialidade.has_value()) {
            std::cout << "\n |================| Qual eh o codigo da especialidade ?                   |";
            std::cout << "\n |                | ==> ";
            std::cin >> outSeq;
            std::optional<EspecialidadeMedica> especialidadeMedicaCadastrada = Buscas<EspecialidadeMedica>().buscarPorCodigo(*listaDeEspecialidadesMedicas, outSeq);
            if (!especialidadeMedicaCadastrada.has_value()) {
                listarEspecialidadesMedicas(*listaDeEspecialidadesMedicas);
                std::cout << "\n | Aparentemente nao foi localizada a especialidade, voce gostaria        |";
                std::cout << "\n | de cadastrar uma especialidade para esse medico?                       |";
                std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
                std::cout << "\n |                | ==> ";
                std::cin.ignore();
                std::cin >> outSeq;
                if (std::tolower(outSeq) == 's') {
                    codigoEspecialidade = cadastroEspecialidadeMedica(listaDeEspecialidadesMedicas).getCodigo();
                }
            } else {
                codigoEspecialidade = especialidadeMedicaCadastrada->getCodigo();
            }
        }
    } else {
        codigoEspecialidade = cadastroEspecialidadeMedica(listaDeEspecialidadesMedicas).getCodigo();
    }
    std::cout << "\n |                | Cadastro Medico finalizado ...                        |";
    std::cout << "\n |________________________________________________________________________|";

    const Medico medico(nome, telefone, endereco, codigoCidade.value(), codigoEspecialidade.value(), codigo.value());
    listaDeMedicos->push_back(medico);

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;

    return medico;
}
void listarMedicos(std::vector<Medico> listaDeMedicos, std::vector<Cidade> listaDeCidades,
                   std::vector<EspecialidadeMedica> listaDeEspecialidadesMedicas) {
    system("CLS");
    std::string outSeq;

    std::cout << "\n  _________";
    std::cout << "\n | Medicos |______________________________________________________________";
    std::cout << "\n |========================================================================|";
    if (listaDeMedicos.size() > 0) {
        for (Medico medico : listaDeMedicos) {
            std::cout << "\n |========================================================================|";
            std::cout << "\n | Codigo :: " << medico.getCodigo() << " | DR." << medico.getNome() << " | Telefone :: " << medico.getTelefone();
            std::cout << "\n | Endereco :: " << medico.getEndereco();
            std::cout << "\n  ________";
            std::cout << "\n | Cidade |_______________________________________________________________";
            std::cout << "\n |========================================================================|";
            Cidade cidade = Buscas<Cidade>().buscarPorCodigo(listaDeCidades, medico.getCodigoCidade()).value();
            std::cout << "\n | Codigo :: " << cidade.getCodigo();
            std::cout << "\n | UF :: " << cidade.getUf() << " Nome :: " << cidade.getNome();
            std::cout << "\n  _______________";
            std::cout << "\n | Especialidade |________________________________________________________";
            std::cout << "\n |========================================================================|";
            EspecialidadeMedica especialidadeMedica = Buscas<EspecialidadeMedica>().buscarPorCodigo(listaDeEspecialidadesMedicas, medico.getCodigoEspecialidade()).value();
            std::cout << "\n | Codigo :: " << especialidadeMedica.getCodigo();
            std::cout << "\n | Descricao :: " << especialidadeMedica.getDescricao();
        }
    } else {
        std::cout << "\n |  Nao existem registros                                                 |";
    }
    std::cout << "\n |________________________________________________________________________|";

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
}
void buscarMedico(std::vector<Medico> listaDeMedicos, std::vector<Cidade> listaDeCidades,
                  std::vector<EspecialidadeMedica> listaDeEspecialidadesMedicas) {
    system("CLS");
    std::string outSeq;
    int codigo;

    std::cout << "\n  ________";
    std::cout << "\n | Medico |_______________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Buscar     |                                                       |";
    std::cout << "\n |================| Qual eh o codigo do Medico ?                          |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;

    std::optional<Medico> medico = Buscas<Medico>().buscarPorCodigo(listaDeMedicos, codigo);

    if (medico.has_value()) {
        std::cout << "\n | Codigo :: " << medico->getCodigo() << " | DR." << medico->getNome() << " | Telefone :: " << medico->getTelefone();
        std::cout << "\n | Endereco :: " << medico->getEndereco();
        std::cout << "\n  ________";
        std::cout << "\n | Cidade |_______________________________________________________________";
        std::cout << "\n |========================================================================|";
        Cidade cidade = Buscas<Cidade>().buscarPorCodigo(listaDeCidades, medico->getCodigoCidade()).value();
        std::cout << "\n | Codigo :: " << cidade.getCodigo();
        std::cout << "\n | UF :: " << cidade.getUf() << " Nome :: " << cidade.getNome();
        std::cout << "\n  _______________";
        std::cout << "\n | Especialidade |________________________________________________________";
        std::cout << "\n |========================================================================|";
        EspecialidadeMedica especialidadeMedica = Buscas<EspecialidadeMedica>().buscarPorCodigo(listaDeEspecialidadesMedicas, medico->getCodigoEspecialidade()).value();
        std::cout << "\n | Codigo :: " << especialidadeMedica.getCodigo();
        std::cout << "\n | Descricao :: " << especialidadeMedica.getDescricao();
    } else {
        std::cout << "\n |                |  Nao existem registros...                             |";
    }
    std::cout << "\n |________________________________________________________________________|";

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
}
// M E D I C O =======================================================

// M E D I C A M E N T O =============================================
void medicamentoGateway(std::vector<Medicamento> *listaDeMedicamentos) {
    int opcao = 1;
    while (opcao > 0 && opcao < 4) {
        mostrarTelaMedicamento();
        std::cin >> opcao;
        if (opcao == 1) {
            cadastrarMedicamento(listaDeMedicamentos);
        }
        if (opcao == 2) {
            medicamentoSubGateway(listaDeMedicamentos, 1);
        }
        if (opcao == 3) {
            medicamentoSubGateway(listaDeMedicamentos, 0);
        }
    }
}
void medicamentoSubGateway(std::vector<Medicamento> *listaDeMedicamentos, int presselectedMenu) {
    int opcao = 1;
    while (opcao > 0 && opcao < 3) {
        if (presselectedMenu == 1) {
            mostrarTelaEstoqueMedicamentos(listaDeMedicamentos);
        } else {
            mostrarTelaEstoqueMedicamentosAbaixoDaQuantidadeMinima(listaDeMedicamentos);
        }
        std::cin >> opcao;
        if (opcao == 1) {
            encomendarMaisMedicamentos(listaDeMedicamentos);
        }
        if (opcao == 2) {
            buscarUmMedicamento(*listaDeMedicamentos);
        }
    }
}
void mostrarTelaMedicamento() {
    system("CLS");
    std::cout << "\n  ______________";
    std::cout << "\n | Medicamentos |_________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Opcoes                       |                                     |";
    std::cout << "\n | 1 - Cadastrar                    |                                     |";
    std::cout << "\n | 2 - Visualizar Estoque           |                                     |";
    std::cout << "\n | 3 - Visualizar Estoque em falta  |                                     |";
    std::cout << "\n | 4 - Sair                         |                                     |";
    std::cout << "\n |________________________________________________________________________|";
    std::cout << "\n\n [ opcao ] ==> ";
}
void buscarUmMedicamento(std::vector<Medicamento> listaDeMedicamentos) {
    system("CLS");
    std::string outSeq;
    int codigo;

    std::cout << "\n  _____________";
    std::cout << "\n | Medicamento |__________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Buscar     |                                                       |";
    std::cout << "\n |================| Qual eh o codigo do Medicamento ?                     |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;

    std::optional<Medicamento> medicamento = Buscas<Medicamento>().buscarPorCodigo(listaDeMedicamentos, codigo);

    if (medicamento.has_value()) {
        std::cout << "\n | Codigo :: " << medicamento->getCodigo();
        std::cout << "\n | Nome Medicamento :: " << medicamento->getDescricao();
        std::cout << "\n | QTD estoque :: " << medicamento->getQuantidadeEstoque();
        std::cout << "\n | MIN :: " << medicamento->getEstoqueMinimo() << " MAX :: " << medicamento->getEstoqueMaximo();
        std::cout << "\n | Valor :: R$" << medicamento->getPrecoUnitario();
        std::cout << "\n | Valor total de estoque :: R$" << medicamento->getQuantidadeEstoque() * medicamento->getPrecoUnitario();
    } else {
        std::cout << "\n |                |  Nao existem registros...                             |";
        std::cout << "\n |________________________________________________________________________|";
    }

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;

}
std::optional<int> tratarBuscaDeCodigoDeMedicamento(std::vector<Medicamento> listaDeMedicamentos) {
    int codigo;

    std::cout << "\n |                | informe um Codigo                                     |";

    std::cout << "\n |                | ==> ";
    std::cin >> codigo;

    std::optional<Medicamento> medicamento = Buscas<Medicamento>().buscarPorCodigo(listaDeMedicamentos, codigo);

    if (!medicamento.has_value()) {
        std::cout << "\n |                | Paciente nao encontrado                               |";
        return std::nullopt;
    }

    return codigo;
}
std::optional<int> tratarSelecaoDeCodigoDeMedicamento(std::vector<Medicamento> listaDeMedicamentos) {
    int codigo;
    std::cout << "\n |================| Qual eh o codigo do medicamento ?                     |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;

    if (Buscas<Medicamento>().buscarPorCodigo(std::move(listaDeMedicamentos), codigo)) {
        std::cout << "\n |================| ERRO: Esse codigo ja foi escolhido!";
        return std::nullopt;
    }

    return codigo;
}
int receitarQuantidadeDeMedicamento(std::vector<Medicamento> *listaDeMedicamentos, int codigoMedicamento) {
    Medicamento *medicamento = Buscas<Medicamento>().buscarPorCodigoERetornarEnderecoDeMemoria(
            listaDeMedicamentos, codigoMedicamento).value();
    int quantidade = -1;

    if (medicamento->getQuantidadeEstoque() <= medicamento->getEstoqueMinimo()) {
        std::cout << "\n |================| Estoque baixo! Informe uma quantidade para encomendar!|";
        std::cin >> quantidade;
        std::cin.ignore();
        medicamento->setQuantidadeEstoque(medicamento->getQuantidadeEstoque() + quantidade);
    }
    quantidade = -1;

    while (quantidade < 0 || quantidade > medicamento->getQuantidadeEstoque()) {
        std::cout << "\n |================| Quantas unidades desse remedio voce quer receitar?    |";
        std::cout << "\n |                | ==> ";
        std::cin >> quantidade;
        std::cin.ignore();
        if (quantidade < 0) {
            std::cout << "\n |================| [ERRO]: quantidade negativa! informe um numero valido!|";
        }
        if (quantidade > medicamento->getQuantidadeEstoque()) {
            std::cout << "\n |================| [ERRO]: voce informou uma quantidade muito maior do   |";
            std::cout << "\n |                | que existe no estoque! Informe uma quantidade menor   |";
        }
    }

    medicamento->setQuantidadeEstoque(medicamento->getQuantidadeEstoque() - quantidade);

    return quantidade;
}
Medicamento cadastrarMedicamento(std::vector<Medicamento> *listaDeMedicamentos) {
    std::string descricao, outSeq;
    std::optional<int> codigo;
    int quantidadeEstoque, estoqueMinimo, estoqueMaximo, precoUnitario;

    system("CLS");
    std::cout << "\n  ______________";
    std::cout << "\n | Medicamentos |_________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Cadastrar  |                                                       |";
    while (!codigo.has_value()) {
        codigo = tratarSelecaoDeCodigoDeMedicamento(*listaDeMedicamentos);
    }
    std::cout << "\n |================| Qual eh o nome do medicamento ?                       |";
    std::cout << "\n |                | ==> ";
    std::cin.ignore();
    std::getline(std::cin, descricao);
    std::cout << "\n |================| Quantos desse medicamento existem atualmente          |";
    std::cout << "\n |                | dentro do nosso estoque?                              |";
    std::cout << "\n |                | ==> ";
    std::cin >> quantidadeEstoque;
    std::cout << "\n |================| Qual eh a quantidade minima de estoque de tal         |";
    std::cout << "\n |                | medicamento?                                          |";
    std::cout << "\n |                | ==> ";
    std::cin >> estoqueMinimo;
    std::cout << "\n |================| e a maxima?                                           |";
    std::cout << "\n |                | ==> ";
    std::cin >> estoqueMaximo;
    std::cout << "\n |================| Qual eh o preco desse medicamento                     |";
    std::cout << "\n |                | ==> ";
    std::cin >> precoUnitario;
    std::cout << "\n |                | Cadastro finalizado ...                               |";
    std::cout << "\n |________________________________________________________________________|";

    const Medicamento medicamento(codigo.value(), descricao, quantidadeEstoque, estoqueMinimo, estoqueMaximo, precoUnitario);
    listaDeMedicamentos->push_back(medicamento);

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;

    return medicamento;
}
void encomendarMaisMedicamentos(std::vector<Medicamento> *listaDeMedicamentos) {
    int codigo, opt = 1, quantidade = 0;
    std::string outSeq;
    std::optional<Medicamento> medicamento;

    while (!medicamento.has_value() && (opt > 0 && opt < 3)) {
        system("CLS");
        std::cout << "\n  ______________";
        std::cout << "\n | Medicamentos |_________________________________________________________";
        std::cout << "\n |========================================================================|";
        std::cout << "\n | Comprar mais medicamentos |                                            |";
        std::cout << "\n |                           | informe o codigo do medicamento            |";
        std::cout << "\n |                           | ==> ";
        std::cin >> codigo;
        medicamento = Buscas<Medicamento>().buscarPorCodigo(*listaDeMedicamentos, codigo);
        if (!medicamento.has_value()) {
            std::cout << "\n |                           | Nao foi encontrado nenhum medicamento com  |";
            std::cout << "\n |                           | esse codigo, voce gostaria de              |";
            std::cout << "\n |                           | [ 1 ] Cadastrar um novo                    |";
            std::cout << "\n |                           | [ 2 ] Escolher outro codigo                |";
            std::cout << "\n |                           | [ 3 ] Sair                                 |";
            std::cout << "\n |                           | ==> ";
            std::cin >> opt;
            if (opt == 1) {
                cadastrarMedicamento(listaDeMedicamentos);
            }
        } else {
            std::cout << "\n |                           | informe o codigo do medicamento            |";
            std::cout << "\n |                           | Medicamento Encontrado!                    |";
            std::cout << "\n |                           |--------------------------------------------|";
            std::cout << "\n |                           | Quantidade Atual :: " << medicamento->getQuantidadeEstoque();
            std::cout << "\n |                           | MAX :: " << medicamento->getEstoqueMaximo();
            std::cout << "\n |                           | MIN :: " << medicamento->getEstoqueMinimo();
            std::cout << "\n |                           | Quantas unidades voce gostaria de          |";
            std::cout << "\n |                           | encomendar?                                |";
            std::cout << "\n |                           | ==> ";
            std::cin >> quantidade;
            while (quantidade <= 0 || (quantidade + medicamento->getQuantidadeEstoque() > medicamento->getEstoqueMaximo())) {
                std::cout << "\n |                           | A quantidade encomendada eh acima da       |";
                std::cout << "\n |                           | capacidade maxima de estoque!              |";
                std::cout << "\n |                           | Informe uma quantidade menor!              |";
                std::cout << "\n |                           | ==> ";
                std::cin >> quantidade;
            }
            medicamento->setQuantidadeEstoque(medicamento->getQuantidadeEstoque() + quantidade);
        }
    }
    if (opt != 3) {
        std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
        std::cin >> outSeq;
    }
}
void mostrarTelaEstoqueMedicamentos(std::vector<Medicamento> *listaDeMedicamentos) {
    system("CLS");
    std::cout << "\n  ______________";
    std::cout << "\n | Medicamentos |_________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n\n |";
    if (listaDeMedicamentos->size() == 0) {
        std::cout << "\n | nao foi encontrado nenhum registro!";
    } else {
        for (Medicamento medicamento : *listaDeMedicamentos) {
            if (medicamento.getEstoqueMinimo() + 5 > medicamento.getQuantidadeEstoque()) {
                std::cout << "\n | AVISO!! EDICAMENTO COM BAIXA QUANTIDADE DE ESTOQUE!! COMPRAR MAIS!!   |";
            }
            std::cout << "\n | Codigo :: " << medicamento.getCodigo();
            std::cout << "\n | Nome Medicamento :: " << medicamento.getDescricao();
            std::cout << "\n | QTD estoque :: " << medicamento.getQuantidadeEstoque();
            std::cout << "\n | MIN :: " << medicamento.getEstoqueMinimo() << " MAX :: " << medicamento.getEstoqueMaximo();
            std::cout << "\n | Valor :: R$" << medicamento.getPrecoUnitario();
        }
    }
    std::cout << "\n |========================================================================|";
    std::cout << "\n |================| O que voce gostaria de fazer?                         |";
    std::cout << "\n |                | [ 1 ] Encomendar mais                                 |";
    std::cout << "\n |                | [ 2 ] Inspecionar um Medicamento                      |";
    std::cout << "\n |                | [ 3 ] Sair                                            |";
    std::cout << "\n |                | ==> ";
}
void mostrarTelaEstoqueMedicamentosAbaixoDaQuantidadeMinima(std::vector<Medicamento> *listaDeMedicamentos) {
    system("CLS");
    std::cout << "\n  ______________";
    std::cout << "\n | Medicamentos |_________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n\n |";
    if (listaDeMedicamentos->size() == 0) {
        std::cout << "\n | nao foi encontrado nenhum registro!";
    } else {
        for (Medicamento medicamento : *listaDeMedicamentos) {
            if (medicamento.getEstoqueMinimo() > medicamento.getQuantidadeEstoque()) {
                std::cout << "\n\n |                | AVISO!! EDICAMENTO COM BAIXA QUANTIDADE DE ESTOQUE!! COMPRAR MAIS!!   |";
                std::cout << "\n |                | Codigo :: " << medicamento.getCodigo();
                std::cout << "\n |                | Nome Medicamento :: " << medicamento.getDescricao();
                std::cout << "\n |                | QTD estoque :: " << medicamento.getQuantidadeEstoque();
                std::cout << "\n |                | MIN :: " << medicamento.getEstoqueMinimo() << " MAX :: " << medicamento.getEstoqueMaximo();
                std::cout << "\n |                | Valor :: R$" << medicamento.getPrecoUnitario();
                std::cout << "\n |================| Para Solucionar o problema de estoque eh necessario   |";
                std::cout << "\n |                | Comprar " << medicamento.getEstoqueMinimo() - medicamento.getQuantidadeEstoque() << " Para chegar no [MINIMO]";
                std::cout << "\n |                | R$"<< ((float) medicamento.getEstoqueMinimo() - (float) medicamento.getQuantidadeEstoque()) * medicamento.getPrecoUnitario();
                std::cout << "\n |                | Comprar " << medicamento.getEstoqueMaximo() - (medicamento.getEstoqueMinimo() - medicamento.getQuantidadeEstoque()) << " Para chegar no [MAXIMO]";
                std::cout << "\n |                | R$"<< (float) medicamento.getEstoqueMaximo() - ((float) medicamento.getEstoqueMinimo() - (float) medicamento.getQuantidadeEstoque()) * medicamento.getPrecoUnitario();
            }
        }
    }
    std::cout << "\n |========================================================================|";
    std::cout << "\n |================| O que voce gostaria de fazer?                         |";
    std::cout << "\n |                | [ 1 ] Encomendar mais                                 |";
    std::cout << "\n |                | [ 2 ] Inspecionar um Medicamento                      |";
    std::cout << "\n |                | [ 3 ] Sair                                            |";
    std::cout << "\n |                | ==> ";
}
// M E D I C A M E N T O =============================================

// P A C I E N T E ===================================================
void mostrarTelaPaciente() {
    system("CLS");
    std::cout << "\n  __________";
    std::cout << "\n | Paciente |_____________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Opcoes      |                                                      |";
    std::cout << "\n | 1 - Cadastrar   |                                                      |";
    std::cout << "\n | 2 - Excluir     |                                                      |";
    std::cout << "\n | 3 - Listar      |                                                      |";
    std::cout << "\n | 4 - Buscar      |                                                      |";
    std::cout << "\n | 5 - Sair        |                                                      |";
    std::cout << "\n |________________________________________________________________________|";
    std::cout << "\n\n [ opcao ] ==> ";
};
std::optional<std::string> tratarSelecaoDeCodigoDePaciente(std::vector<Paciente> listaDePacientes) {
    std::string cpf;

    std::cout << "\n |                | informe um CPF                                        |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, cpf);

    if (Buscas<Paciente>().buscarPorCodigo(listaDePacientes, cpf)) {
        std::cout << "\n |================| ERRO: Esse CPF ja foi escolhido!";
        return std::nullopt;
    }

    return cpf;
};
std::optional<std::string> tratarBuscaDePaciente(std::vector<Paciente> listaDePacientes) {
    std::string cpf;

    std::cout << "\n |                | informe um CPF                                        |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, cpf);
    std::optional<Paciente> paciente = Buscas<Paciente>().buscarPorCodigo(listaDePacientes, cpf);
    if (!paciente.has_value()) {
        std::cout << "\n |                | Paciente nao encontrado                               |";
        return std::nullopt;
    }

    return cpf;
}
void buscarUmPaciente(std::vector<Paciente> *listaDePacientes, std::vector<Cidade> *listaDeCidades) {
    std::string cpf, outSeq;

    std::cout << "\n  __________";
    std::cout << "\n | Paciente |_____________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Buscar     |                                                       |";
    std::cout << "\n |================| Informe o cpf do paciente                             |";
    std::getline(std::cin, cpf);
    std::optional<Paciente> paciente = Buscas<Paciente>().buscarPorCodigo(*listaDePacientes, cpf);
    if (paciente.has_value()) {
        std::cout << "\n |                | Nome :: " << paciente->getNome();
        std::cout << "\n |                | CPF :: " << paciente->getCpf();
        std::cout << "\n |                | Endereco :: " << paciente->getEndereco();
        Cidade cidade = Buscas<Cidade>().buscarPorCodigo(*listaDeCidades, paciente->getCodigoCidade()).value();
        std::cout << "\n  ________";
        std::cout << "\n | Cidade |_______________________________________________________________";
        std::cout << "\n |========================================================================|";
        std::cout << "\n |                | Codigo :: " << cidade.getCodigo();
        std::cout << "\n |                | UF :: " << cidade.getUf() << " Nome :: " << cidade.getNome();
    } else {
        std::cout << "\n |                |  Nao existem registros...                             |";
    }
    std::cout << "\n |________________________________________________________________________|";

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
};
void listarPacientes(std::vector<Paciente> listaDePacientes, std::vector<Cidade> listaDeCidades) {
    std::string outSeq;

    std::cout << "\n  __________";
    std::cout << "\n | Paciente |_____________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Listar     |                                                       |";
    if (listaDePacientes.size() > 0) {
        for (Paciente paciente : listaDePacientes) {
            std::cout << "\n |========================================================================|";
            std::cout << "\n |                | Nome :: " << paciente.getNome();
            std::cout << "\n |                | CPF :: " << paciente.getCpf();
            std::cout << "\n |                | Endereco :: " << paciente.getEndereco();
            Cidade cidade = Buscas<Cidade>().buscarPorCodigo(listaDeCidades, paciente.getCodigoCidade()).value();
            std::cout << "\n  ________";
            std::cout << "\n | Cidade |_______________________________________________________________";
            std::cout << "\n |========================================================================|";
            std::cout << "\n |                | Codigo :: " << cidade.getCodigo();
            std::cout << "\n |                | UF :: " << cidade.getUf() << " Nome :: " << cidade.getNome();
        }
    } else {
        std::cout << "\n |                |  Nao existem registros...                             |";
    }

    std::cout << "\n |________________________________________________________________________|";
    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
};
int encontrarIndexDePacientePreviamenteValidado(std::vector<Paciente> listaDePacientes, std::string cpf) {
    int index = 0;
    while (index < listaDePacientes.size() && (listaDePacientes.at(index).getCpf() != cpf)) {index++;};
    return index;
}
void deletarUmPaciente(std::vector<Paciente> *listaDePacientes, std::vector<Cidade> *listaDeCidades,
                       std::vector<Consulta> *listaDeConsultas) {
    std::string outSeq, cpf;

    std::cout << "\n  __________";
    std::cout << "\n | Paciente |_____________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Deletar    |                                                       |";
    std::cout << "\n |================| Informe o cpf do paciente                             |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, cpf);
    std::optional<Paciente> paciente = Buscas<Paciente>().buscarPorCodigo(*listaDePacientes, cpf);

    if (paciente.has_value()) {

        listaDeCidades->erase(std::next(
                listaDeCidades->begin(),
                Buscas<Cidade>().buscarIndexNaLista(listaDeCidades, paciente->getCodigoCidade()).value()
                ));

        listaDePacientes->erase(std::next(
                listaDePacientes->begin(),
                encontrarIndexDePacientePreviamenteValidado(*listaDePacientes, paciente->getCpf())
                ));

        std::cout << "\n |                | Registros apagados                                    |";
    } else {
        std::cout << "\n |                |  Nao existem registros...                             |";
    }

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
};
Paciente cadastrarUmPaciente(std::vector<Paciente> *listaDePaciente, std::vector<Cidade> *listaDeCidades) {
    std::optional<std::string> codigo;
    std::string nome, endereco;
    char outSeq;
    std::optional<int> codigoCidade;

    system("CLS");
    std::cout << "\n  __________";
    std::cout << "\n | Paciente |_____________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Cadastrar  |                                                       |";
    while (!codigo.has_value()) {
        codigo = tratarSelecaoDeCodigoDePaciente(*listaDePaciente);
    }
    std::cout << "\n |                | informe um nome                                       |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, nome);
    std::cout << "\n |                | informe um endereco                                   |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, endereco);
    std::cout << "\n |                | Ja existe uma cidade cadastrada para o medico?        |";
    std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
    std::cout << "\n |                | ==> ";
    std::cin >> outSeq;
    if (std::tolower(outSeq) == 's') {
        while (!codigoCidade.has_value()) {
            codigoCidade = tratarSelecaoDeCodigoDeCidade(*listaDeCidades);
            if (!codigoCidade.has_value()) {
                listarCidades(*listaDeCidades);
                std::cout << "\n | Aparentemente nao foi localizada a cidade, voce gostaria               |";
                std::cout << "\n | de cadastrar uma cidade para esse medico?                              |";
                std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
                std::cout << "\n |                | ==> ";
                std::cin.ignore();
                std::cin >> outSeq;
                if (std::tolower(outSeq) == 's') {
                    codigoCidade = cadastrarCidade(listaDeCidades).getCodigo();
                }
            }
        }
    } else {
        codigoCidade = cadastrarCidade(listaDeCidades).getCodigo();
    }

    const Paciente paciente(codigo.value(), nome, endereco, codigoCidade.value());
    listaDePaciente->push_back(paciente);

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
    std::cin.ignore();

    return paciente;
};
void pacienteGateway(std::vector<Paciente> *listaDePacientes, std::vector<Cidade> *listaDeCidades, std::vector<Consulta> *listaDeConsultas) {
    int opcao = 1;
    while (opcao > 0 && opcao < 5) {
        mostrarTelaPaciente();
        std::cin >> opcao;
        std::cin.ignore();
        if (opcao == 1) {
            cadastrarUmPaciente(listaDePacientes, listaDeCidades);
        }
        if (opcao == 2) {
            deletarUmPaciente(listaDePacientes, listaDeCidades, listaDeConsultas);
        }
        if (opcao == 3) {
            listarPacientes(*listaDePacientes, *listaDeCidades);
        }
        if (opcao == 4) {
            buscarUmPaciente(listaDePacientes, listaDeCidades);
        }
    }
};
// P A C I E N T E ===================================================

// C O N S U L T A ===================================================
void mostrarTelaConsulta() {
    system("CLS");
    std::cout << "\n  ___________";
    std::cout << "\n | Consultas |____________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Opcoes      |                                                      |";
    std::cout << "\n | 1 - Cadastrar   |                                                      |";
    std::cout << "\n | 2 - Listar      |                                                      |";
    std::cout << "\n | 3 - Buscar      |                                                      |";
    std::cout << "\n | 4 - Sair        |                                                      |";
    std::cout << "\n |________________________________________________________________________|";
    std::cout << "\n\n [ opcao ] ==> ";
}
std::optional<int> tratarSelecaoDeCodigoDeConsulta(std::vector<Consulta> *listaDeConsultas) {
    int codigo;

    std::cout << "\n |                | informe um Codigo                                     |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;

    if (Buscas<Consulta>().buscarPorCodigo(*listaDeConsultas, codigo)) {
        std::cout << "\n |================| ERRO: Esse codigo ja foi escolhido!";
        return std::nullopt;
    }

    return codigo;
};
void listarConsultas(std::vector<Consulta> listaDeConsultas, std::vector<Paciente> listaDePacientes, std::vector<CID> listaDeCIDS,
                     std::vector<Medicamento> listaDeMedicamentos, std::vector<Medico> listaDeMedicos, std::vector<EspecialidadeMedica> listaDeEspecialidades) {
    std::string outSeq;

    std::cout << "\n  ___________";
    std::cout << "\n | Consultas |____________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Listar     |                                                       |";
    if (listaDeConsultas.size() > 0) {
        for (Consulta consulta : listaDeConsultas) {

            Paciente paciente = Buscas<Paciente>().buscarPorCodigo(
                    listaDePacientes, consulta.getCpfPaciente()
                    ).value();
            CID cid = Buscas<CID>().buscarPorCodigo(
                    listaDeCIDS, consulta.getCodigoDoenca()
                    ).value();
            Medicamento medicamento = Buscas<Medicamento>().buscarPorCodigo(
                    listaDeMedicamentos, consulta.getCodigoMedicamento()
                    ).value();
            Medico medico = Buscas<Medico>().buscarPorCodigo(
                    listaDeMedicos, consulta.getCodigoMedico()
                    ).value();
            EspecialidadeMedica especialidadeMedica = Buscas<EspecialidadeMedica>().buscarPorCodigo(
                    listaDeEspecialidades, medico.getCodigoEspecialidade()
                    ).value();

            std::cout << "\n\n  __________";
            std::cout << "\n | Consulta |_____________________________________________________________";
            std::cout << "\n |========================================================================|";
            std::cout << "\n |                | Data :: " << consulta.getData();
            std::cout << "\n |                | Horario :: " << consulta.getHorario();
            std::cout << "\n  __________";
            std::cout << "\n | Paciente |_____________________________________________________________";
            std::cout << "\n |========================================================================|";
            std::cout << "\n |                | CPF :: " << paciente.getCpf();
            std::cout << "\n |                | Nome :: " << paciente.getNome();
            std::cout << "\n |                | Endereco :: " << paciente.getEndereco();
            std::cout << "\n  ________";
            std::cout << "\n | Medico |_______________________________________________________________";
            std::cout << "\n |========================================================================|";
            std::cout << "\n |                | Nome :: " << medico.getNome();
            std::cout << "\n |                | Telefone :: " << medico.getTelefone();
            std::cout << "\n |                | Endereco :: " << medico.getEndereco();
            std::cout << "\n |                | Especialidade :: " << especialidadeMedica.getDescricao();
            std::cout << "\n  ______________________";
            std::cout << "\n | Detalhes da Consulta |_________________________________________________";
            std::cout << "\n |========================================================================|";
            std::cout << "\n |                | Doenca :: " << cid.getDescricao();
            std::cout << "\n |                | Medicamento :: " << medicamento.getDescricao();
            std::cout << "\n |                | Preco do medicamento :: " << medicamento.getPrecoUnitario();
            std::cout << "\n |                | Quantidade receitada :: " << consulta.getQuantidadeMedicamento();
            std::cout << "\n |                | Valor total :: " << medicamento.getPrecoUnitario() * consulta.getQuantidadeMedicamento();
            std::cout << "\n |========================================================================|";
        }
    } else {
        std::cout << "\n |                |  Nao existem registros...                             |";
    }

    std::cout << "\n |________________________________________________________________________|";
    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
};
Consulta cadastrarConsulta(std::vector<Consulta> *listaDeConsultas, std::vector<Paciente> *listaDePacientes, std::vector<CID> *listaDeCIDS, std::vector<EspecialidadeMedica> *listaDeEspecialidades,
                           std::vector<Medicamento> *listaDeMedicamentos, std::vector<Medico> *listaDeMedicos, std::vector<Cidade> *listadeCidades) {
    std::string outSeq, horario, data;
    std::optional<int> codigo, codigoMedico, codigoMedicamento;
    std::optional<std::string> cpfPaciente, codigoDoenca;
    int quantidadeMedicamento;

    system("CLS");
    std::cout << "\n  ___________";
    std::cout << "\n | Consultas |____________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Cadastrar  |                                                       |";
    while(!codigo.has_value()) {
        codigo = tratarSelecaoDeCodigoDeConsulta(listaDeConsultas);
    }
    std::cout << "\n |================| Informe o horario da consulta:                        |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, horario);
    std::cout << "\n |================| Informe a data da consulta                            |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, data);
    std::cout << "\n |================| Ja existe um paciente cadastrado para a consulta?     |";
    std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, outSeq);
    if (outSeq == "S") {
        while (!cpfPaciente.has_value()) {
            cpfPaciente = tratarBuscaDePaciente(*listaDePacientes);
            if (!cpfPaciente.has_value()) {
                std::cout << "\n | Aparentemente nao foi localizado o paciente, voce gostaria             |";
                std::cout << "\n | de cadastrar um novo paciente para essa consulta?                      |";
                std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
                std::cout << "\n |                | ==> ";
                std::getline(std::cin, outSeq);
                if (outSeq == "S") {
                    cpfPaciente = cadastrarUmPaciente(listaDePacientes, listadeCidades).getCpf();
                }
            }
        }
    } else {
        cpfPaciente = cadastrarUmPaciente(listaDePacientes, listadeCidades).getCpf();
    }
    std::cout << "\n |================| Ja existe um medico cadastrado para a consulta?       |";
    std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, outSeq);
    if (outSeq == "S") {
        while (!codigoMedico.has_value()) {
            codigoMedico = tratarBuscaDeCodigoDeMedico(*listaDeMedicos);
            if (!codigoMedico.has_value()) {
                std::cout << "\n | Aparentemente nao foi localizado o medico, voce gostaria               |";
                std::cout << "\n | de cadastrar um novo medico para essa consulta?                        |";
                std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
                std::cout << "\n |                | ==> ";
                std::getline(std::cin, outSeq);
                if (outSeq == "S") {
                    codigoMedico = cadastrarMedico(listaDeMedicos, listadeCidades, listaDeEspecialidades).getCodigo();
                }
            }
        }
    } else {
        codigoMedico = cadastrarMedico(listaDeMedicos, listadeCidades, listaDeEspecialidades).getCodigo();
    }
    std::cout << "\n |================| Ja existe um medicamento cadastrado para a consulta?  |";
    std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, outSeq);
    if (outSeq == "S") {
        while(!codigoMedicamento.has_value()) {
            codigoMedicamento = tratarBuscaDeCodigoDeMedicamento(*listaDeMedicamentos);
            if (!codigoMedicamento.has_value()) {
                std::cout << "\n | Aparentemente nao foi localizado o medicamento, voce gostaria          |";
                std::cout << "\n | de cadastrar um novo medicamento para essa consulta?                   |";
                std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
                std::cout << "\n |                | ==> ";
                std::getline(std::cin, outSeq);
                if (outSeq == "S") {
                    codigoMedicamento = cadastrarMedicamento(listaDeMedicamentos).getCodigo();
                }
            }
        }
    } else {
        codigoMedicamento = cadastrarMedicamento(listaDeMedicamentos).getCodigo();
    }
    std::cout << "\n |================| Quantas unidades desse remedio voce quer receitar?    |";
    std::cout << "\n |                | ==> ";
    quantidadeMedicamento = receitarQuantidadeDeMedicamento(listaDeMedicamentos, codigoMedicamento.value());
    std::cout << "\n |================| Ja existe uma doenca cadastrada para o paciente?      |";
    std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, outSeq);
    if (outSeq == "S") {
        while(!codigoDoenca.has_value()) {
            codigoDoenca = tratarBuscaDeCodigoDeDoenca(*listaDeCIDS);
            if (!codigoDoenca.has_value()) {
                std::cout << "\n | Aparentemente nao foi localizado a doenca, voce gostaria de cadastrar  |";
                std::cout << "\n | uma nova doenca para o paciente?                                       |";
                std::cout << "\n |                | S [ Sim ] / N [ Nao ]                                 |";
                std::cout << "\n |                | ==> ";
                std::getline(std::cin, outSeq);
                if (outSeq == "S") {
                    codigoDoenca = cadastroCID(listaDeCIDS).getCodigo();
                }
            }
        }
    } else {
        codigoDoenca = cadastroCID(listaDeCIDS).getCodigo();
    }
    Consulta consulta(
            cpfPaciente.value(),
            codigoMedico.value(),
            data,
            horario,
            codigoDoenca.value(),
            codigoMedicamento.value(),
            quantidadeMedicamento
            );
    listaDeConsultas->push_back(consulta);

    std::cout << "\n |                | Cadastro da consulta finalizado ...                   |";
    std::cout << "\n |________________________________________________________________________|";

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::getline(std::cin, outSeq);

    return consulta;
}
void buscarConsulta(std::vector<Consulta> listaDeConsultas, std::vector<Paciente> listaDePacientes, std::vector<CID> listaDeCIDS,
                    std::vector<Medicamento> listaDeMedicamentos, std::vector<Medico> listaDeMedicos, std::vector<EspecialidadeMedica> listaDeEspecialidades) {
    std::string outSeq;
    int codigoConsulta;

    std::cout << "\n  ___________";
    std::cout << "\n | Consultas |____________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Buscar     |                                                       |";
    std::cout << "\n |================| Informe o codigo da consulta                          |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigoConsulta;
    std::cin.ignore();

    std::optional<Consulta> consulta = Buscas<Consulta>().buscarPorCodigo(listaDeConsultas, codigoConsulta);

    if (consulta.has_value()) {
        Paciente paciente = Buscas<Paciente>().buscarPorCodigo(
                listaDePacientes, consulta->getCpfPaciente()
        ).value();
        CID cid = Buscas<CID>().buscarPorCodigo(
                listaDeCIDS, consulta->getCodigoDoenca()
        ).value();
        Medicamento medicamento = Buscas<Medicamento>().buscarPorCodigo(
                listaDeMedicamentos, consulta->getCodigoMedicamento()
        ).value();
        Medico medico = Buscas<Medico>().buscarPorCodigo(
                listaDeMedicos, consulta->getCodigoMedico()
        ).value();
        EspecialidadeMedica especialidadeMedica = Buscas<EspecialidadeMedica>().buscarPorCodigo(
                listaDeEspecialidades, medico.getCodigoEspecialidade()
        ).value();

        std::cout << "\n\n  __________";
        std::cout << "\n | Consulta |_____________________________________________________________";
        std::cout << "\n |========================================================================|";
        std::cout << "\n |                | Data :: " << consulta->getData();
        std::cout << "\n |                | Horario :: " << consulta->getHorario();
        std::cout << "\n  __________";
        std::cout << "\n | Paciente |_____________________________________________________________";
        std::cout << "\n |========================================================================|";
        std::cout << "\n |                | CPF :: " << paciente.getCpf();
        std::cout << "\n |                | Nome :: " << paciente.getNome();
        std::cout << "\n |                | Endereco :: " << paciente.getEndereco();
        std::cout << "\n  ________";
        std::cout << "\n | Medico |_______________________________________________________________";
        std::cout << "\n |========================================================================|";
        std::cout << "\n |                | Nome :: " << medico.getNome();
        std::cout << "\n |                | Telefone :: " << medico.getTelefone();
        std::cout << "\n |                | Endereco :: " << medico.getEndereco();
        std::cout << "\n |                | Especialidade :: " << especialidadeMedica.getDescricao();
        std::cout << "\n  ______________________";
        std::cout << "\n | Detalhes da Consulta |_________________________________________________";
        std::cout << "\n |========================================================================|";
        std::cout << "\n |                | Doenca :: " << cid.getDescricao();
        std::cout << "\n |                | Medicamento :: " << medicamento.getDescricao();
        std::cout << "\n |                | Preco do medicamento :: " << medicamento.getPrecoUnitario();
        std::cout << "\n |                | Quantidade receitada :: " << consulta->getQuantidadeMedicamento();
        std::cout << "\n |                | Valor total :: " << medicamento.getPrecoUnitario() * consulta->getQuantidadeMedicamento();
        std::cout << "\n |========================================================================|";
    } else {
        std::cout << "\n |                |  Nao existem registros...                             |";
    }

    std::cout << "\n |________________________________________________________________________|";
    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
    std::cin.ignore();
}
void consultaGateway(std::vector<Consulta> *listaDeConsultas, std::vector<Paciente> *listaDePacientes, std::vector<CID> *listaDeCIDS,
                     std::vector<Medicamento> *listaDeMedicamentos, std::vector<Medico> *listaDeMedicos, std::vector<EspecialidadeMedica> *listaDeEspecialidades, std::vector<Cidade> *listadeCidades) {
    int opcao = 1;
    while (opcao > 0 && opcao < 5) {
        mostrarTelaConsulta();
        std::cin >> opcao;
        std::cin.ignore();
        if (opcao == 1) {
            cadastrarConsulta(listaDeConsultas, listaDePacientes, listaDeCIDS, listaDeEspecialidades, listaDeMedicamentos, listaDeMedicos, listadeCidades);
        }
        if (opcao == 2) {
            listarConsultas(*listaDeConsultas, *listaDePacientes, *listaDeCIDS,
                            *listaDeMedicamentos, *listaDeMedicos, *listaDeEspecialidades);
        }
        if (opcao == 3) {
            buscarConsulta(*listaDeConsultas, *listaDePacientes, *listaDeCIDS,
                           *listaDeMedicamentos, *listaDeMedicos, *listaDeEspecialidades);
        }
    }
};
void totalizarValoresDeConsulta(std::vector<Consulta> listaDeConsultas, std::vector<Paciente> listaDePacientes, std::vector<CID> listaDeCIDS,
                    std::vector<Medicamento> listaDeMedicamentos, std::vector<Medico> listaDeMedicos, std::vector<EspecialidadeMedica> listaDeEspecialidades) {
    std::string outSeq;
    int codigoConsulta;
    float valorTotalArrecadado = 0.0;

    std::cout << "\n  ___________";
    std::cout << "\n | Consultas |____________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Buscar     |                                                       |";
    std::cout << "\n |================| Informe o codigo da consulta                          |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigoConsulta;
    std::cin.ignore();

    std::optional<Consulta> consulta = Buscas<Consulta>().buscarPorCodigo(listaDeConsultas, codigoConsulta);

    if (consulta.has_value()) {
        Paciente paciente = Buscas<Paciente>().buscarPorCodigo(
                listaDePacientes, consulta->getCpfPaciente()
        ).value();
        CID cid = Buscas<CID>().buscarPorCodigo(
                listaDeCIDS, consulta->getCodigoDoenca()
        ).value();
        Medicamento medicamento = Buscas<Medicamento>().buscarPorCodigo(
                listaDeMedicamentos, consulta->getCodigoMedicamento()
        ).value();
        Medico medico = Buscas<Medico>().buscarPorCodigo(
                listaDeMedicos, consulta->getCodigoMedico()
        ).value();
        EspecialidadeMedica especialidadeMedica = Buscas<EspecialidadeMedica>().buscarPorCodigo(
                listaDeEspecialidades, medico.getCodigoEspecialidade()
        ).value();

        std::cout << "\n\n  __________";
        std::cout << "\n | Consulta |_____________________________________________________________";
        std::cout << "\n |========================================================================|";
        std::cout << "\n |                | Data :: " << consulta->getData();
        std::cout << "\n |                | Horario :: " << consulta->getHorario();
        std::cout << "\n  _________________________________";
        std::cout << "\n | Detalhes economicos da Consulta |______________________________________";
        std::cout << "\n |========================================================================|";
        std::cout << "\n |                | Medicamento :: " << medicamento.getDescricao();
        std::cout << "\n |                | Preco do medicamento :: " << medicamento.getPrecoUnitario();
        std::cout << "\n |                | Quantidade receitada :: " << consulta->getQuantidadeMedicamento();
        std::cout << "\n |                | Valor da Consulta :: R$" << 100;
        std::cout << "\n |                | Valor total :: " << medicamento.getPrecoUnitario() * (float) consulta->getQuantidadeMedicamento() + 100;
        std::cout << "\n |========================================================================|";
        valorTotalArrecadado += medicamento.getPrecoUnitario() * (float) consulta->getQuantidadeMedicamento() + 100;
    } else {
        std::cout << "\n |                |  Nao existem registros...                             |";
    }

    std::cout << "\n |========================================================================|";
    std::cout << "\n |                | Valor total arrecadado :: " << valorTotalArrecadado;

    std::cout << "\n |________________________________________________________________________|";
    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
    std::cin.ignore();
}
// C O N S U L T A ===================================================