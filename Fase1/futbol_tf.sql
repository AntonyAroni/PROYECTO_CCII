DROP DATABASE sistema_deportivo;

CREATE DATABASE sistema_deportivo;

USE sistema_deportivo;

CREATE TABLE administradores(
	usuario VARCHAR (15),
    pasword VARCHAR (30)
);
CREATE TABLE clientes(
	dni INT,
	nombre VARCHAR(100),
    correo VARCHAR(50),
    telefono INT,
    PRIMARY KEY(dni)
);

CREATE TABLE reservas(
	num INT auto_increment,
    dni_usuario INT NOT NULL,
    fecha DATE,
    horario TIME,
    id_cancha INT NOT NULL,
    Precio DOUBLE,
    tiempo_reserva TIME,
    PRIMARY KEY(num)
);

CREATE TABLE canchas(
	id INT AUTO_INCREMENT,
    ubicacion VARCHAR(100),
    nivel INT,
    precio_hora DOUBLE,
    PRIMARY KEY(id)
);

insert into clientes values (40223145,'Angel Nifla', 'Alan@gmail.com',986574321);
insert into administradores values ('Angel10', 'Alan10');
Insert Into reservas(dni_usuario,fecha,horario,id_cancha,tiempo_reserva) values(40223145,'2020-03-15','15:00:00',15,2);