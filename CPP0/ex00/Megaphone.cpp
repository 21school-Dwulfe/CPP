 #include <iostream>
 #include <cctype>

class Megaphone
{
	public:
		Megaphone();
		~Megaphone();

		void    repeat_loudly(std::string speech, bool is_last);
		void	default_speech();
};

Megaphone::Megaphone(void){};

Megaphone::~Megaphone(void){};

void	Megaphone::default_speech()
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

void    Megaphone::repeat_loudly(std::string speech, bool is_last)
{
	std::string copy(speech);
	for (int i = 0; i < (int)speech.length(); i++)
	{
		copy[i] = toupper(speech[i]);
	}
	std::cout << copy + " ";
	if (is_last)
		std::cout << std::endl;
}

int main (int argc, char **argv)
{
	int			i;
	Megaphone	n;

	i = 1;
	if (argc == 1)
		n.default_speech();
	else
		while (i < argc)
		{
			n.repeat_loudly(argv[i], (i == argc - 1));
			i++;
		}
	return (0);
}
