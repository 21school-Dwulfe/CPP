 #include <iostream>

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
	std::transform(speech.begin(), speech.end(), speech.begin(), ::toupper);
	std::cout << speech + " ";
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
