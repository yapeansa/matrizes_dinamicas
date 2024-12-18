#!/bin/bash

CHAVE=1

while [ $CHAVE != 0 ]
do
    echo "(1) Matriz dinâmica (2) Matriz dinâmica com vetor (3) Sair"
    echo "Escolha uma opção: "
    read OPCAO
    case $OPCAO in
        1)
            cd ./matriz_dinamica
            make
            make run
            make clean
            cd ..
            ;;
        2)
            cd ./matriz_dinamica_vetor
            make
            make run
            make clean
            cd ..
            ;;
        3)
            echo Saindo
            CHAVE=0
            ;;
        *)
            echo Por favor, digite uma opção válida.
            ;;
    esac
done
