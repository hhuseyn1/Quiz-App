#pragma once

Questions** arrayOfQuestions() {
	Questions** questions = new Questions * [] {
		new Questions{
			questionNum++,
			new char[] {"What is the name of the artist who painted ‘Mona Lisa’?"},
			new char[] {"a) Vincent van Gogh"},
			new char[] {"b) Leonardo da Vinci"},
			new char[] {"c) Michelangelo"}
		},
			new Questions{
			questionNum++,
			new char[] {" What is the capital of Brazil?"},
			new char[] {"a) Rio de Janeiro"},
			new char[] {"b) São Paulo"},
			new char[] {"c) Brasília"},
			new char[] {"d) Manaus"}
		},
			new Questions{
			questionNum++,
			new char[] {"What temperature does water boil at?"},
			new char[] {"a) 100%"},
			new char[] {"b) 0%"},
			new char[] {"c) 12%"}
		},
			new Questions{
			questionNum++,
			new char[] {"Which country is famous for tulips?"},
			new char[] {"a) The USA"},
			new char[] {"b) The Netherlands"},
			new char[] {"c) Russia"},
			new char[] {"d) France"}
		},
			new Questions{
			questionNum++,
			new char[] {"How many bones are there in the human body?"},
			new char[] {"a) 205"},
			new char[] {"b) 206"},
			new char[] {"c) 207"},
			new char[] {"d) 208"}
		},
			new Questions{
			questionNum++,
			new char[] {"Which vitamin is present in citrus fruits?"},
			new char[] {"a) A"},
			new char[] {"b) B"},
			new char[] {"c) C"},
		},
		new Questions{
		questionNum++,
		new char[] {"Bill Gates is the founder of?"},
		new char[] {"a) None of Below"},
		new char[] {"b) Phone"},
		new char[] {"c) Bulb"},
		new char[] {"d) Microsoft Corporation"}
		},
			new Questions{
			questionNum++,
			new char[] {"Which is the largest planet of the Solar System?"},
			new char[] {"a) Jupiter"},
			new char[] {"b) Uranus"},
			new char[] {"c) Earth"},
			new char[] {"d) Saturn"}
		},
			new Questions{
			questionNum++,
			new char[] {"Harvard University is situated in?"},
			new char[] {"a) United Kingdom"},
			new char[] {"b) Cambridge, Massachusetts"},
			new char[] {"c) California"},
			new char[] {"d) France"}
		},
			new Questions{
			questionNum++,
			new char[] {"Who is the founder of Facebook?"},
			new char[] {"a) Paul Buchheit"},
			new char[] {"b) Mark Zuckerberg"},
			new char[] {"c) Kevin Systrom"},
		},


	};
	return questions;
}