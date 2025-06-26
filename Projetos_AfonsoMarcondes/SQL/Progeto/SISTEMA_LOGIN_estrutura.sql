-- Criação da base de dados
CREATE DATABASE IF NOT EXISTS SISTEMA_LOGIN;
USE SISTEMA_LOGIN;

-- Tabela de utilizadores
CREATE TABLE utilizadores (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    password_hash CHAR(64) NOT NULL,
    ultimo_acesso DATETIME
);

-- Tabela de histórico de acessos
CREATE TABLE historico_acessos (
    id INT AUTO_INCREMENT PRIMARY KEY,
    utilizador_id INT NOT NULL,
    data_acesso DATETIME DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (utilizador_id) REFERENCES utilizadores(id)
);
