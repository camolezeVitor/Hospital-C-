#include <iostream>
#include <string>
#include <vector>
#include <optional>

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
        this->codigo = codigoDoUltimoMedicoRegistrado;
    }
    Medico(std::string nome, std::string telefone, std::string endereco
            , int codigoCidade, int codigoEspecialidade, int codigoDoUltimoMedicoRegistrado) {
        this->nome = nome;
        this->telefone = telefone;
        this->endereco = endereco;
        this->codigoCidade = codigoCidade;
        this->codigoEspecialidade = codigoEspecialidade;
        this->codigo = codigoDoUltimoMedicoRegistrado;
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

    EspecialidadeMedica() {};

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

// LISTAR ======================================================
void listarCID(std::vector<CID>);
void listarEspecialidadesMedicas(std::vector<EspecialidadeMedica>);
void listarMedicos(std::vector<Medico>);

// BUSCAR ======================================================
void buscarCID(std::vector<CID>);
void buscarEspecialidadeMedica(std::vector<EspecialidadeMedica>);
void buscarMedico(std::vector<Medico>);

// METODOS SINGULARES ==========================================
std::optional<CID> metodoBuscarCID(std::string, std::vector<CID>);
std::optional<EspecialidadeMedica> metodoBuscarEspecialidadeMedica(std::vector<EspecialidadeMedica>);
std::optional<Medico> metodoBuscarMedico(std::vector<Medico>);
std::optional<Medico> metodoBuscarMedico(std::vector<Medico>, int);


// GATEWAYS ====================================================
void cidGateway(std::vector<CID>*);
void especialidadeMedicaGateway(std::vector<EspecialidadeMedica>*);
void medicoGateway(std::vector<Medico>*, std::vector<EspecialidadeMedica>*);





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

    //Programa!
    while (programaEstaRodando) {
        mostrarTelaInicial();
        std::cin >> opcao;

        switch (opcao) {
            case 3:
                cidGateway(&listaDeCids);
                break;
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
    std::cout << "\n        | [ 4 ] : Medicamentos ";
    std::cout << "\n        | [ 5 ] : Consultas ";
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
    std::getline(std::cin, codigo);
    std::cout << "\n |                | Qual eh a descricao dessa CID ?                       |";
    std::cout << "\n |                | ==> ";
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
        std::cout << "\n  _____";
        std::cout << "\n | CID |__________________________________________________________________";
        std::cout << "\n |========================================================================|";
        std::cout << "\n |  Nao existem registros                                                 |";
        std::cout << "\n |________________________________________________________________________|";
    }
    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
}

std::optional<CID> metodoBuscarCID(std::string codigo, std::vector<CID> listaDeCids) {
    int index = 0;
    while (index < listaDeCids.size() && listaDeCids[index].getCodigo() != codigo) {}

    if (index == listaDeCids.size()) {
        return std::nullopt;
    }

    return listaDeCids[index];
}

void buscarCID(std::vector<CID> listaDeCids) {
    system("CLS");
    std::string outSeq, codigo;
    int index = 0;

    std::cout << "\n  _____";
    std::cout << "\n | CID |__________________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Buscar     |                                                       |";
    std::cout << "\n |================| Qual eh o codigo da CID ?                             |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;
    while (index < listaDeCids.size() && listaDeCids[index].getCodigo() != codigo) {};
    if (listaDeCids[index].getCodigo() == codigo) {
        std::cout << "\n | " << listaDeCids[index].getCodigo() << " | " << listaDeCids[index].getDescricao();
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

std::optional<EspecialidadeMedica> metodoBuscarEspecialidadeMedica(std::vector<EspecialidadeMedica> listaDeEspecialidadesMedicas, int codigo) {
    int index = 0;
    while (index < listaDeEspecialidadesMedicas.size() && listaDeEspecialidadesMedicas[index].getCodigo() != codigo) {};

    if (listaDeEspecialidadesMedicas[index].getCodigo() != codigo) {
        return std::nullopt;
    }

    return listaDeEspecialidadesMedicas[index];
}

EspecialidadeMedica cadastroEspecialidadeMedica(std::vector<EspecialidadeMedica> *listaDeEspecialidadesMedicas) {
    std::string descricao, outSeq;

    system("CLS");
    std::cout << "\n  ________________________";
    std::cout << "\n | Especialidades Medicas |_______________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Cadastrar  |                                                       |";
    std::cout << "\n |================| Qual eh a descricao da especialidade ?                |";
    std::cout << "\n |                | ==> ";
    std::getline(std::cin, descricao);
    std::cout << "\n |                | Cadastro finalizado ...                               |";
    std::cout << "\n |________________________________________________________________________|";

    listaDeEspecialidadesMedicas->push_back(
            EspecialidadeMedica(listaDeEspecialidadesMedicas->size(), descricao)
            );

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
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
    int index = 0, codigo;

    std::cout << "\n  _____";
    std::cout << "\n | CID |__________________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Buscar     |                                                       |";
    std::cout << "\n |================| Qual eh o codigo da Especialidade ?                   |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigo;
    while (index < listaDeEspecialidadesMedicas.size() && listaDeEspecialidadesMedicas[index].getCodigo() != codigo) {};
    if (listaDeEspecialidadesMedicas[index].getCodigo() == codigo) {
        std::cout << "\n | " << listaDeEspecialidadesMedicas[index].getCodigo() << " | " << listaDeEspecialidadesMedicas[index].getDescricao();
    } else {
        std::cout << "\n |                |  Nao existem registros...                             |";
        std::cout << "\n |________________________________________________________________________|";
    }

    std::cout << "\n\n [ digite qualquer coisa para continuar ] ==> ";
    std::cin >> outSeq;
}

// E S P E C I A L I D A D E    M E D I C A ==========================

// M E D I C O =======================================================

void mostrarTelaMedico() {

    system("CLS");
    std::cout << "\n  _________";
    std::cout << "\n | Medicos |______________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Opcoes                    |                                        |";
    std::cout << "\n | 1 - Cadastrar                 |                                        |";
    std::cout << "\n | 2 - Listar                    |                                        |";
    std::cout << "\n | 3 - Buscar                    |                                        |";
    std::cout << "\n | 4 - Especialidades Medicas    |                                        |";
    std::cout << "\n | 5 - Sair                      |                                        |";
    std::cout << "\n |________________________________________________________________________|";
    std::cout << "\n\n [ opcao ] ==> ";

}

std::optional<Medico> metodoBuscarMedico(std::vector<Medico> listaDeMedicos, int  codigoDoMedico) {
    int index = 0;

    while (index < listaDeMedicos.size() && listaDeMedicos[index].getCodigo() != codigoDoMedico) {};

    if (listaDeMedicos[index].getCodigo() != codigoDoMedico) {
        return std::nullopt;
    }

    return listaDeMedicos[index];
}

std::optional<int> cadastrarCodigoDoMedico(std::vector<Medico> listaDeMedicos) {

    int codigoDoMedico;
    std::cout << "\n |================| Qual eh o codigo do medico?                           |";
    std::cout << "\n |                | ==> ";
    std::cin >> codigoDoMedico;

    if (metodoBuscarMedico(listaDeMedicos).has_value()) {
        std::cout << "\n |================| ERRO: Esse codigo ja foi escolhido!                   |";
        return std::nullopt;
    }

    return codigoDoMedico;
};

Medico cadastroMedico(std::vector<Medico>* listaDeMedicos) {
    std::optional<int> codigo = std::nullopt;
    int codigoCidade, codigoEspecialidade;
    std::string nome, telefone, endereco, outSeq;

    system("CLS");
    std::cout << "\n  _________";
    std::cout << "\n | Medicos |______________________________________________________________";
    std::cout << "\n |========================================================================|";
    std::cout << "\n |     Cadastrar  |                                                       |";
    while (!codigo.has_value()) {
        codigo = cadastrarCodigoDoMedico(*listaDeMedicos);
    }

    //Tem que cadastrar cidade
    //Tem que ver se tem especialidade e fazer o cadastro se não tiver!!!!

    std::cout << "\n |                | Cadastro finalizado ...                               |";
    std::cout << "\n |________________________________________________________________________|";
}

