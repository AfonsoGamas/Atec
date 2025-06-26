-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 17-Abr-2025 às 12:17
-- Versão do servidor: 10.4.32-MariaDB
-- versão do PHP: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `biblioteca`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `autor`
--

CREATE TABLE `autor` (
  `id_autor` int(11) NOT NULL,
  `nome_completo` varchar(100) NOT NULL,
  `nacionalidade` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Extraindo dados da tabela `autor`
--

INSERT INTO `autor` (`id_autor`, `nome_completo`, `nacionalidade`) VALUES
(1, 'José Saramago', 'Portugal'),
(2, 'Camões', 'Portugal'),
(3, 'J. K. Rowling', 'Reino Unido'),
(4, 'George Orwell', 'Reino Unido'),
(5, 'Machado de Assis', 'Brasil'),
(6, 'Franz Kafka', 'Alemanha'),
(7, 'Stephen King', 'EUA'),
(8, 'Agatha Christie', 'Reino Unido'),
(9, 'Mia Couto', 'Moçambique'),
(10, 'Albert Camus', 'França'),
(11, 'José Saramago', 'Portugal'),
(12, 'Camões', 'Portugal'),
(13, 'J. K. Rowling', 'Reino Unido'),
(14, 'George Orwell', 'Reino Unido'),
(15, 'Machado de Assis', 'Brasil'),
(16, 'Franz Kafka', 'Alemanha'),
(17, 'Stephen King', 'EUA'),
(18, 'Agatha Christie', 'Reino Unido'),
(19, 'Mia Couto', 'Moçambique'),
(20, 'Albert Camus', 'França'),
(21, 'José Saramago', 'Portugal'),
(22, 'Camões', 'Portugal'),
(23, 'J. K. Rowling', 'Reino Unido'),
(24, 'George Orwell', 'Reino Unido'),
(25, 'Machado de Assis', 'Brasil'),
(26, 'Franz Kafka', 'Alemanha'),
(27, 'Stephen King', 'EUA'),
(28, 'Agatha Christie', 'Reino Unido'),
(29, 'Mia Couto', 'Moçambique'),
(30, 'Albert Camus', 'França');

-- --------------------------------------------------------

--
-- Estrutura da tabela `emprestimo`
--

CREATE TABLE `emprestimo` (
  `id_emprestimo` int(11) NOT NULL,
  `id_utilizador` int(11) DEFAULT NULL,
  `id_livro` int(11) DEFAULT NULL,
  `data_emprestimo` date DEFAULT NULL,
  `data_devolucao_prevista` date DEFAULT NULL,
  `data_devolucao_real` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Extraindo dados da tabela `emprestimo`
--

INSERT INTO `emprestimo` (`id_emprestimo`, `id_utilizador`, `id_livro`, `data_emprestimo`, `data_devolucao_prevista`, `data_devolucao_real`) VALUES
(1, 1, 1, '2025-01-01', '2025-01-15', '2025-01-12'),
(2, 2, 2, '2025-01-05', '2025-01-20', '2025-01-25'),
(3, 3, 3, '2025-01-10', '2025-01-24', NULL),
(4, 4, 4, '2025-01-12', '2025-01-26', '2025-01-26'),
(5, 5, 5, '2025-01-14', '2025-01-28', '2025-01-29'),
(6, 6, 6, '2025-01-16', '2025-01-30', NULL),
(7, 7, 7, '2025-01-18', '2025-02-01', '2025-01-31'),
(8, 8, 8, '2025-01-20', '2025-02-03', NULL),
(9, 9, 9, '2025-01-22', '2025-02-05', '2025-02-06'),
(10, 10, 10, '2025-01-24', '2025-02-07', NULL);

-- --------------------------------------------------------

--
-- Estrutura da tabela `funcionario`
--

CREATE TABLE `funcionario` (
  `id_funcionario` int(11) NOT NULL,
  `nome` varchar(100) NOT NULL,
  `email` varchar(100) DEFAULT NULL,
  `cargo` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Extraindo dados da tabela `funcionario`
--

INSERT INTO `funcionario` (`id_funcionario`, `nome`, `email`, `cargo`) VALUES
(1, 'Paulo Santos', 'paulo.santos@biblioteca.com', 'Bibliotecário'),
(2, 'Cláudia Silva', 'claudia.silva@biblioteca.com', 'Atendente'),
(3, 'Fernando Costa', 'fernando.costa@biblioteca.com', 'Gerente'),
(4, 'Carla Mendes', 'carla.mendes@biblioteca.com', 'Bibliotecária'),
(5, 'Jorge Almeida', 'jorge.almeida@biblioteca.com', 'Auxiliar'),
(6, 'Inês Oliveira', 'ines.oliveira@biblioteca.com', 'Atendente'),
(7, 'Miguel Pereira', 'miguel.pereira@biblioteca.com', 'Atendente'),
(8, 'Sandra Gomes', 'sandra.gomes@biblioteca.com', 'Auxiliar'),
(9, 'Nuno Martins', 'nuno.martins@biblioteca.com', 'Bibliotecário'),
(10, 'Sara Costa', 'sara.costa@biblioteca.com', 'Gerente'),
(11, 'Carlos Almeida', 'carlos@bib.com', 'Bibliotecário'),
(12, 'Sofia Martins', 'sofia@bib.com', 'Atendente'),
(13, 'Tiago Lopes', 'tiago@bib.com', 'Gestor'),
(14, 'Raquel Dias', 'raquel@bib.com', 'Auxiliar'),
(15, 'Miguel Nunes', 'miguel@bib.com', 'TI'),
(16, 'Andreia Faria', 'andreia@bib.com', 'Bibliotecária'),
(17, 'Pedro Silva', 'pedro@bib.com', 'Rececionista'),
(18, 'Vera Carvalho', 'vera@bib.com', 'Gerente'),
(19, 'Joana Barros', 'joana@bib.com', 'Voluntária'),
(20, 'Rui Fonseca', 'rui@bib.com', 'Estagiário');

-- --------------------------------------------------------

--
-- Estrutura da tabela `livro`
--

CREATE TABLE `livro` (
  `id_livro` int(11) NOT NULL,
  `id_autor` int(11) DEFAULT NULL,
  `titulo` varchar(100) NOT NULL,
  `editora` varchar(100) DEFAULT NULL,
  `ano_publicacao` date DEFAULT NULL,
  `genero` varchar(100) DEFAULT NULL,
  `isbn` varchar(20) NOT NULL,
  `quantidade_disponivel` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Extraindo dados da tabela `livro`
--

INSERT INTO `livro` (`id_livro`, `id_autor`, `titulo`, `editora`, `ano_publicacao`, `genero`, `isbn`, `quantidade_disponivel`) VALUES
(1, 1, 'Ensaio sobre a Cegueira', 'Porto Editora', '1995-01-01', 'Romance', '1234567890123', 5),
(2, 2, 'Os Lusíadas', 'Clássicos Editora', '1572-01-01', 'Épico', '2345678901234', 2),
(3, 3, 'Harry Potter e a Pedra Filosofal', 'Bloomsbury', '1997-06-26', 'Fantasia', '3456789012345', 10),
(4, 4, '1984', 'Penguin Books', '1949-06-08', 'Distopia', '4567890123456', 3),
(5, 5, 'Dom Casmurro', 'Editora Record', '1899-01-01', 'Romance', '5678901234567', 4),
(6, 6, 'A Metamorfose', 'L&PM', '1915-01-01', 'Ficção', '6789012345678', 6),
(7, 7, 'It', 'Scribner', '1986-01-01', 'Terror', '7890123456789', 7),
(8, 8, 'Assassinato no Expresso Oriente', 'HarperCollins', '1934-01-01', 'Mistério', '8901234567890', 8),
(9, 9, 'Terra Sonâmbula', 'Caminho', '1992-01-01', 'Romance', '9012345678901', 3),
(10, 10, 'O Estrangeiro', 'Gallimard', '1942-01-01', 'Filosófico', '0123456789012', 9);

-- --------------------------------------------------------

--
-- Estrutura da tabela `multa`
--

CREATE TABLE `multa` (
  `id_multa` int(11) NOT NULL,
  `id_emprestimo` int(11) DEFAULT NULL,
  `valor` float DEFAULT NULL,
  `motivo` varchar(100) NOT NULL,
  `estado_pagamento` tinyint(1) DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Extraindo dados da tabela `multa`
--

INSERT INTO `multa` (`id_multa`, `id_emprestimo`, `valor`, `motivo`, `estado_pagamento`) VALUES
(1, 2, 3.5, 'Devolução atrasada', 0),
(2, 5, 2, 'Devolução 1 dia após o prazo', 1),
(3, 9, 4, 'Atraso de 1 dia', 0);

-- --------------------------------------------------------

--
-- Estrutura da tabela `utilizador`
--

CREATE TABLE `utilizador` (
  `id_utilizador` int(11) NOT NULL,
  `nome` varchar(100) NOT NULL,
  `email` varchar(100) DEFAULT NULL,
  `telefone` int(11) DEFAULT NULL,
  `endereço` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Extraindo dados da tabela `utilizador`
--

INSERT INTO `utilizador` (`id_utilizador`, `nome`, `email`, `telefone`, `endereço`) VALUES
(1, 'brtgn', 'grfner', NULL, 'reger'),
(2, 'Ana Silva', 'ana@gmail.com', 912345678, 'Rua A, Lisboa'),
(3, 'Bruno Costa', 'bruno@gmail.com', 913456789, 'Rua B, Porto'),
(4, 'Carla Rocha', 'carla@gmail.com', 914567890, 'Rua C, Braga'),
(5, 'Daniel Sousa', 'daniel@gmail.com', 915678901, 'Rua D, Faro'),
(6, 'Eduarda Pinto', 'eduarda@gmail.com', 916789012, 'Rua E, Coimbra'),
(7, 'Fábio Lima', 'fabio@gmail.com', 917890123, 'Rua F, Leiria'),
(8, 'Gonçalo Melo', 'goncalo@gmail.com', 918901234, 'Rua G, Viseu'),
(9, 'Helena Ramos', 'helena@gmail.com', 919012345, 'Rua H, Setúbal'),
(10, 'Inês Duarte', 'ines@gmail.com', 920123456, 'Rua I, Évora'),
(11, 'João Teixeira', 'joao@gmail.com', 921234567, 'Rua J, Aveiro');

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `autor`
--
ALTER TABLE `autor`
  ADD PRIMARY KEY (`id_autor`);

--
-- Índices para tabela `emprestimo`
--
ALTER TABLE `emprestimo`
  ADD PRIMARY KEY (`id_emprestimo`),
  ADD KEY `id_utilizador` (`id_utilizador`),
  ADD KEY `id_livro` (`id_livro`);

--
-- Índices para tabela `funcionario`
--
ALTER TABLE `funcionario`
  ADD PRIMARY KEY (`id_funcionario`),
  ADD UNIQUE KEY `email` (`email`);

--
-- Índices para tabela `livro`
--
ALTER TABLE `livro`
  ADD PRIMARY KEY (`id_livro`),
  ADD KEY `id_autor` (`id_autor`);

--
-- Índices para tabela `multa`
--
ALTER TABLE `multa`
  ADD PRIMARY KEY (`id_multa`),
  ADD UNIQUE KEY `id_emprestimo` (`id_emprestimo`);

--
-- Índices para tabela `utilizador`
--
ALTER TABLE `utilizador`
  ADD PRIMARY KEY (`id_utilizador`),
  ADD UNIQUE KEY `email` (`email`);

--
-- AUTO_INCREMENT de tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `autor`
--
ALTER TABLE `autor`
  MODIFY `id_autor` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=31;

--
-- AUTO_INCREMENT de tabela `emprestimo`
--
ALTER TABLE `emprestimo`
  MODIFY `id_emprestimo` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT de tabela `funcionario`
--
ALTER TABLE `funcionario`
  MODIFY `id_funcionario` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;

--
-- AUTO_INCREMENT de tabela `livro`
--
ALTER TABLE `livro`
  MODIFY `id_livro` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT de tabela `multa`
--
ALTER TABLE `multa`
  MODIFY `id_multa` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT de tabela `utilizador`
--
ALTER TABLE `utilizador`
  MODIFY `id_utilizador` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=12;

--
-- Restrições para despejos de tabelas
--

--
-- Limitadores para a tabela `emprestimo`
--
ALTER TABLE `emprestimo`
  ADD CONSTRAINT `emprestimo_ibfk_1` FOREIGN KEY (`id_utilizador`) REFERENCES `utilizador` (`id_utilizador`),
  ADD CONSTRAINT `emprestimo_ibfk_2` FOREIGN KEY (`id_livro`) REFERENCES `livro` (`id_livro`);

--
-- Limitadores para a tabela `livro`
--
ALTER TABLE `livro`
  ADD CONSTRAINT `livro_ibfk_1` FOREIGN KEY (`id_autor`) REFERENCES `autor` (`id_autor`);

--
-- Limitadores para a tabela `multa`
--
ALTER TABLE `multa`
  ADD CONSTRAINT `multa_ibfk_1` FOREIGN KEY (`id_emprestimo`) REFERENCES `emprestimo` (`id_emprestimo`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
