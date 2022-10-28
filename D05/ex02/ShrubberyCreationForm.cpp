#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "default constructor (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137, target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Distructor (ShrubberyCreationForm)" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (get_sign() == false)
        throw not_signed();
    else if (executor.getGrade() > 137)
        throw GradeTooLowException();
    else
    {
        std::ofstream file(get_target());
		    std::string str = "                      .					\
                                              .         ;  		\n	\
                 .              .              ;%     ;;   		\n	\
                   ,           ,                :;%  %;   		\n	\
                    :         ;                   :;%;'     .,  \n	\
           ,.        %;     %;            ;        %;'    ,;	\n	\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'		\n	\
              %;       %;%;      ,  ;       %;  ;%;   ,%;' 		\n	\
               ;%;      %;        ;%;        % ;%;  ,%;'		\n	\
                `%;.     ;%;     %;'         `;%%;.%;'			\n	\
                 `:;%.    ;%%. %@;        %; ;@%;%'				\n	\
                    `:%;.  :;bd%;          %;@%;'				\n	\
                      `@%:.  :;%.         ;@@%;'   				\n	\
                        `@%.  `;@%.      ;@@%;         			\n	\
                          `@%%. `@%%    ;@@%;        			\n	\
                            ;@%. :@%%  %@@%;       				\n	\
                              %@bd%%%bd%%:;     				\n	\
                                #@%%%%%:;;						\n	\
                                %@@%%%::;						\n	\
                                %@@@%(o);  . '         			\n	\
                                %@@@o%;:(.,'         			\n	\
                            `.. %@@@o%::;         				\n	\
                               `)@@@o%::;         				\n	\
                                %@@(o)::;        				\n	\
                               .%@@@@%::;         				\n	\
                               ;%@@@@%::;.          			\n	\
                              ;%@@@@%%:;;;. 					\n	\
                          ...;%@@@@@%%:;;;;,..\n";
        file << str;
        file.close();
    }
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cp)
{
	*this = cp;
	std::cout << "Copy Constructor (ShrubberyCreationForm)" << std::endl;
}