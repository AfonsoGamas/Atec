CREATE DATABASE biblioteca;

USE biblioteca;

CREATE TABLE utilizador (
    id_utilizador INT PRIMARY KEY,
    nome VARCHAR(100),
	email VARCHAR(100),
    telefone INT,
    endereço VARCHAR
);

CREATE TABLE funcionario (
    id_funcionario INT PRIMARY KEY,
    nome VARCHAR(100),
	email VARCHAR(100),
    cargo VARCHAR(100)
);
 
CREATE TABLE livro (
    id_livro INT PRIMARY KEY,
    id_autor INT,
    titutlo VARCHAR(100),
    editora VARCHAR(100),
    ano_publicacao DATE,
    genero VARCHAR,
    isbn INT,
    quantidade_disponivel DATE
);

CREATE TABLE autor (
    id_autor INT PRIMARY KEY,
    nome_completo VARCHAR(100),
	nacionalidade VARCHAR(100),
    
    FOREIGN KEY (id_autor) REFERENCES livro(id_autor)
);

CREATE TABLE emprestimo (
    id_emprestimo INT PRIMARY KEY,
    id_utilizador INT,
    ip_livro INT,
    data_emprestimo DATE,
    data_devolucao_prevista DATE,
    data_devolucao_real DATE ,
    
    FOREIGN KEY (id_utilizador) REFERENCES utilizador(id_utilizador),
    FOREIGN KEY (ip_livro) REFERENCES livro(ip_livro)
);

CREATE TABLE multa (
    id_multa INT PRIMARY KEY,
    id_emprestimo INT,
    valor FLOAT,
    motivo VARCHAR,
    estado_pagamento BOOLEAN,
    
    FOREIGN KEY (id_multa) REFERENCES emprestimo(id_emprestimo)
);