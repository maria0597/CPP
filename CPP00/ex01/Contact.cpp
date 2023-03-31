/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:31:10 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/31 12:28:17 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_name() const 
{
	return name;
}

std::string Contact::get_last_name() const 
{
	return last_name;
}

std::string Contact::get_nick() const 
{
	return nick;
}

std::string Contact::get_phone_number() const 
{
	return phone_number;
}

std::string Contact::get_darkest_secret() const 
{
	return darkest_secret;
}

void Contact::set_name(std::string new_name)
 {
	name = new_name;
}

void Contact::set_last_name(std::string new_last_name) 
{
	last_name = new_last_name;
}

void Contact::set_nick(std::string new_nick) 
{
	nick = new_nick;
}

void Contact::set_phone_number(std::string new_phone_number) 
{
	phone_number = new_phone_number;
}

void Contact::set_darkest_secret(std::string new_darkest_secret) 
{
	darkest_secret = new_darkest_secret;
}

Contact::Contact()
{
	;
}

Contact::~Contact()
{
	;
}

void Contact::encrypt()
{
	int x = 0;

	while(darkest_secret[x])
		x++;
	for (int i = 0; i < x && darkest_secret[i] != '\0'; i++)
	{
		darkest_secret[i] -= 42;
	}
	std::cout << "Contact encrypted." << std::endl;
}

bool is_valid_phone_number(const std::string& phone_number)
{
	for (std::size_t i = 0; i < phone_number.length(); i++) {
		if (!std::isdigit(phone_number[i]))
			return false;
	}
	return true;
}

bool is_valid_name(const std::string& name)
{
	for (std::size_t i = 0; i < name.length(); i++) 
	{
		if (!std::isalpha(name[i]) || name == "")
			return false;
	}
	return true;
}

void get_nonempty_input(std::string& input, const std::string& prompt)
{
	do {
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
	} while (input.empty());

	return;
}

void Contact::add()
{
	std::string input;
	Contact new_contact;

	std::cout << BOLDRED "Enter name: ";
	std::getline(std::cin, input);
	while (!is_valid_name(input)) 
	{
		std::cout << BOLDRED "Invalid input. Please enter a valid name: ";
		std::getline(std::cin, input);
	}
	name = input;

	std::cout << BOLDRED "Enter last name: ";
	std::getline(std::cin, input);
	while (!is_valid_name(input)) 
	{
		std::cout << BOLDRED "Invalid input. Please enter a valid last name: ";
		std::getline(std::cin, input);
	}
	last_name = input;

	std::cout << BOLDRED "Enter nickname: ";
	std::getline(std::cin, nick);

	std::cout << BOLDRED "Enter phone number: ";
	std::getline(std::cin, input);
	while (!is_valid_phone_number(input)) 
	{
		std::cout << BOLDRED "Invalid input. Please enter a valid phone number: ";
		std::getline(std::cin, input);
	}
	phone_number = input;

	std::cout << BOLDRED "Enter darkest secret: ";
	std::getline(std::cin, input);
	darkest_secret = input;
	encrypt();

	std::cout << BOLDGREEN "Contact added." RESET << std::endl;
}

static void	showstr(std::string str, std::size_t lim)
{

	if (str.size() > lim)
	{
		for (std::size_t i=0; i < lim; i++)
			putchar(str[i]);
	}
	else
	{
		for (std::size_t i=0; i < str.size(); i++)
			putchar(str[i]);
		lim = lim - str.size();
		for (std::size_t i=0; i < lim; i++)
			putchar(' ');
	}
}

void	Contact::display(int id)
{
	std::cout << BOLDYELLOW "|";
	for (int y=0; y < 10; y++)
	{
		if (y == 5)
			putchar(id + 48);
		else
			putchar(' ');
	}
	std::cout << "|";
	showstr(this->name, 10);
	std::cout << "|";
	showstr(this->last_name, 10);
	std::cout << "|";
	showstr(this->nick, 10);
	std::cout << "|" RESET << std::endl;
}

void Contact::show() const
{
	std::cout << BOLDGREEN "Name: " RESET << name << std::endl;
	std::cout << BOLDGREEN "Last name: " RESET << last_name << std::endl;
	std::cout << BOLDGREEN "Nickname: " RESET << nick << std::endl;
	std::cout << BOLDGREEN "Phone number: " RESET << phone_number << std::endl;
	std::cout << BOLDGREEN "Darkest secret: " RESET << darkest_secret << std::endl;
}

/*
La  funzione "Contact::Contact()" non ha bisogno di alcuna istruzione,
poiché il costruttore predefinito della classe std::string viene chiamato 
automaticamente per inizializzare le variabili membro della classe.

La funzione "Contact::~Contact()" non ha bisogno di alcuna istruzione 
perché il distruttore della classe std::string viene chiamato automaticamente
per deallocare le variabili membro della classe.

La funzione "Contact::encrypt()" dovrebbe essere implementata per crittografare 
le informazioni del contatto. 
In questo modo, ogni carattere della stringa darkest_secret viene sostituito 
con il suo successivo nella tabella ASCII, ad eccezione del carattere nullo '\0' 
che indica la fine della stringa. Dopo la crittografia, viene stampato a video 
un messaggio di conferma. Implementazione semplice non garantisce una 
crittografia forte e sicura.

DA PROVARE 

***********************************************************************************************************
										POSSIBILE ALTRA IMPLEMENTAZIONE: 
***********************************************************************************************************

#include "openssl/rand.h"

void Contact::encrypt()
{
	// Concatena tutti i campi del contatto in una sola stringa
	std::string plaintext = name + last_name + nick + phone_number + darkest_secret;

	// Genera una chiave casuale di 16 byte
	unsigned char key[16];
	RAND_bytes(key, sizeof(key));

	// Genera un vettore di inizializzazione (IV) casuale di 16 byte
	unsigned char iv[16];
	RAND_bytes(iv, sizeof(iv));

	// Crea un oggetto AES 128-bit in modalità CBC (Cipher Block Chaining)
	EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
	EVP_EncryptInit_ex(ctx, EVP_aes_128_cbc(), NULL, key, iv);

	// Calcola la dimensione del buffer di output (ciphertext)
	int plaintext_len = plaintext.length();
	int ciphertext_len = plaintext_len + 16; // aggiunge un blocco per la padding
	unsigned char ciphertext[ciphertext_len];

	// Cifra il plaintext in ciphertext
	int len;
	EVP_EncryptUpdate(ctx, ciphertext, &len, (const unsigned char*) plaintext.c_str(), plaintext_len);
	int ciphertext_len2;
	EVP_EncryptFinal_ex(ctx, ciphertext + len, &ciphertext_len2);
	ciphertext_len += len + ciphertext_len2;

	// Distrugge il contesto AES
	EVP_CIPHER_CTX_free(ctx);

	// Converte il vettore di byte in una stringa esadecimale
	std::stringstream ss;
	ss << std::hex << std::setfill('0');
	for (int i = 0; i < ciphertext_len; i++) {
		ss << std::setw(2) << (unsigned int) ciphertext[i];
	}
	std::string ciphertext_str = ss.str();

	// Salva la chiave e l'IV cifrati in un file
	std::ofstream outfile("key.iv", std::ios::binary);
	std::string key_iv = std::string((char*) key, sizeof(key)) + std::string((char*) iv, sizeof(iv));
	outfile << key_iv;
	outfile.close();

	// Salva il ciphertext in un file
	std::ofstream outfile2("contact.enc", std::ios::binary);
	outfile2 << ciphertext_str;
	outfile2.close();

	std::cout << "Contact encrypted." << std::endl;
}

FUNZIONAMENTO:
Questa funzione utilizza l'algoritmo di cifratura AES (Advanced Encryption Standard) 
con una chiave di 128-bit e una modalità di cifratura CBC (Cipher Block Chaining). 
Genera una chiave casuale e un vettore di inizializzazione (IV) casuale, e li salva 
in un file chiamato "key.iv". Concatena tutti i campi del contatto in una sola stringa, 
cifra la stringa con la chiave e l'IV generati, e salva il risultato cifrato in un file 
chiamato "contact.enc". Alla fine, stampa un messaggio di conferma sulla console.

AES, acronimo di Advanced Encryption Standard, è un algoritmo di crittografia a blocchi 
utilizzato per proteggere dati sensibili. AES viene utilizzato spesso come algoritmo di cifratura 
simmetrica, il che significa che la stessa chiave viene utilizzata sia per cifrare 
che per decifrare i dati.

CBC, acronimo di Cipher Block Chaining, è una modalità di operazione utilizzata in combinazione 
con algoritmi di cifratura a blocchi come AES. In modalità CBC, ogni blocco di dati viene cifrato 
in modo indipendente utilizzando una chiave di cifratura condivisa e il risultato della cifratura 
viene poi combinato con il blocco di dati successivo prima della successiva cifratura. 
Questo metodo introduce una dipendenza sequenziale tra i blocchi, che aumenta la sicurezza 
dell'algoritmo di cifratura.

IV, acronimo di Initialization Vector, è un valore aggiuntivo utilizzato come input nella cifratura 
di dati. L'IV viene utilizzato per aumentare la sicurezza dell'algoritmo di cifratura in modo che la 
stessa chiave di cifratura non produca lo stesso risultato di cifratura quando viene utilizzata per 
cifrare dati diversi. L'IV viene solitamente generato casualmente e combinato con la chiave di cifratura 
per produrre il risultato di cifratura finale.
*/